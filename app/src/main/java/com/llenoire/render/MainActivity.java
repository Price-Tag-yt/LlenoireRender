package com.llenoire.render;
import android.app.Activity; import android.os.Bundle; import android.widget.TextView;
public final class MainActivity extends Activity { static { System.loadLibrary("LlenoireRender"); } public void onCreate(Bundle b){super.onCreate(b); TextView v=new TextView(this); v.setText("LlenoireRender 1.12.2\nRenderer plugin package\n"+nativeStatus()); v.setPadding(32,32,32,32); setContentView(v);} private static native String nativeStatus(); }
