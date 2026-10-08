struct ldr_notification
{
list entry;
PLDR_DLL_NOTIFICATION_FUNCTION callback;
void *context;
};
