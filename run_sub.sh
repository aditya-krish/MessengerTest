source $DDS_ROOT/setenv.sh
$JAVA_HOME/bin/java -Djava.library.path=`pwd`/messenger_idl:$DDS_ROOT/lib -Dfile.encoding=UTF-8 -classpath `pwd`/Publisher/bin:`pwd`/messenger_idl/messenger_idl_test.jar:$DDS_ROOT/tao_java.jar:$DDS_ROOT/lib/OpenDDS_DCPS.jar:$DDS_ROOT/lib/i2jrt.jar publisher.TestSubscriber -DCPSConfigFile `pwd`/rtps.ini
