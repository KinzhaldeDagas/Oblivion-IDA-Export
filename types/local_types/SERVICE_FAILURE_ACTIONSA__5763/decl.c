struct _SERVICE_FAILURE_ACTIONSA
{
DWORD dwResetPeriod;
LPSTR lpRebootMsg;
LPSTR lpCommand;
DWORD cActions;
SC_ACTION *lpsaActions;
};
