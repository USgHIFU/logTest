# logTest
Test of log module

使用日志文件管理测试记录

具体流程如下：

1、将logging_define.cpp文件include至main文件
注意：日志文件地址自己定义
QString fileName = "D:\\log.log";

2、修改main.cpp，加入下面代码
#include "logging_define.cpp"
qInstallMessageHandler(logMessageOutput);

3、在各自模块的头文件加入下面代码
include <QLoggingCategory>
Q_DECLARE_LOGGING_CATEGORY(Module_Name)

4、在各自模块的源文件加入下面代码
Q_LOGGING_CATEGORY(Module_Name,"something about the name of the module")
注意：头文件和源文件的Module_Name要保持一致

5、然后可以在你感兴趣的地方用qCDebug()/qCWarning()/qCCritical()/qCFatal()记录结果

依次按下Start和Stop按钮，示例文件的打印结果如下：

2015-08-03 11:00:03 Warning: QLayout: Attempting to add QLayout "" to MainWindow "", which already has a layout

2015-08-03 11:00:04 Module Start :  Module Start works

2015-08-03 11:00:05 Module Stop :  Module Start works
