import React, { Component } from 'react';
import { AppRegistry, StyleSheet, Text, View } from 'react-native';
import Scanbot from 'react-native-scanbot';

const styles = StyleSheet.create({
  viewport: {
    flex: 1,
    justifyContent: 'center',
    backgroundColor: '#F5FCFF',
  },
});

export default class example extends Component {
  render() {
    return (
      <View style={styles.viewport}>
        <Text>Hello Scanbot v{Scanbot.version}</Text>
      </View>
    );
  }
}

AppRegistry.registerComponent('example', () => example);