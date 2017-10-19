#include "factory_test.h"
#include "C++/AlarmManagement/alarm_mng.h"

PowerupStateMachine::PowerupStateMachine() : QObject(parent)
{
    m_state = Normal;
    if ( frsInstall )
        m_state = WelcomeScreen;
    if ( !fctTestDone )
        m_state = FactoryStep1;
    m_alarms = alarms;
    m_state = Normal;
}
