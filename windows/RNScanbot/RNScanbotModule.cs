using ReactNative.Bridge;
using System;
using System.Collections.Generic;
using Windows.ApplicationModel.Core;
using Windows.UI.Core;

namespace Com.Reactlibrary.RNScanbot
{
    /// <summary>
    /// A module that allows JS to share data.
    /// </summary>
    class RNScanbotModule : NativeModuleBase
    {
        /// <summary>
        /// Instantiates the <see cref="RNScanbotModule"/>.
        /// </summary>
        internal RNScanbotModule()
        {

        }

        /// <summary>
        /// The name of the native module.
        /// </summary>
        public override string Name
        {
            get
            {
                return "RNScanbot";
            }
        }
    }
}
