/**
 * Created with IntelliJ IDEA.
 * User: jaru
 * Date: 07/04/15
 * Time: 15:50
 * To change this template use File | Settings | File Templates.
 */

package nebula;

import java.io.IOException;

public class SysClass {


    static
    {
        try {
            Utils.loadLibraryFromJar("/Fork.so");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    native public static int Fork();
}
