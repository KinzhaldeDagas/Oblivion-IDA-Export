struct sorting_context
{
HDPA items __offset(OFF64|AUTO);
PFNLVCOMPARE compare_func __offset(OFF64|AUTO);
LPARAM_0 lParam;
};
