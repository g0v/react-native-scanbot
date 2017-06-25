import React, { Component } from 'react';
import { AppRegistry, StyleSheet, Text, View, TouchableOpacity, Image } from 'react-native';
import Scanbot from 'react-native-scanbot';

const styles = StyleSheet.create({
  viewport: {
    flex: 1,
    justifyContent: 'center',
    backgroundColor: '#F5FCFF',
  },
});

Scanbot.setLicense('');

export default class example extends Component {

  state = {
    image: '',
  }

  onPress = async () => {
    const image = await Scanbot.scan({});
    this.setState({ image: `data:image/jpeg;base64,${image}` });
  }

  render() {
    const { image } = this.state;
    return (
      <View style={styles.viewport}>
        <Image style={{ flex: 1 }} source={{ uri: image }} />
        <TouchableOpacity style={{ padding: 10, margin: 5, alignItems: 'center', borderWidth: StyleSheet.hairlineWidth }} onPress={this.onPress}>
          <Text>Open Scanbot</Text>
        </TouchableOpacity>
      </View>
    );
  }
}

AppRegistry.registerComponent('example', () => example);