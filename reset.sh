rm -rf ./example
react-native init example
cd example
npm install ../
cp -f ../sample.js ./index.ios.js
cp -f ../sample.js ./index.android.js
react-native link react-native-scanbot