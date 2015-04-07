/**
 * Created with IntelliJ IDEA.
 * User: jaru
 * Date: 07/04/15
 * Time: 15:47
 * To change this template use File | Settings | File Templates.
 */
import nebula.SysClass;

public class Main {
    static public void main(String[] args){
        int forkValue = SysClass.Fork();
        System.out.println("Fork pid_t: " + forkValue);
    }
}
