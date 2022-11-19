package com.example.plugin_connect_ex;

public class MiddleWare {
    static {
        System.loadLibrary("cpp_code");
    }
    public native String pluginConnect();
    public native String listDevices();
}

