package jonesx.audioplayer;

/**
 * Created by Jonesx on 2016/3/19.
 */
public class AudioPlayer {
    public static native int play();
    public static native int stop();

    static {
        System.loadLibrary("helloworld");
    }
}
