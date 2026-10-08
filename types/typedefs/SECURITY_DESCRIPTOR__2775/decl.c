struct SECURITY_DESCRIPTOR
{
BYTE Revision;
BYTE Sbz1;
SECURITY_DESCRIPTOR_CONTROL Control;
PSID Owner __offset(OFF64|AUTO);
PSID Group __offset(OFF64|AUTO);
PACL Sacl __offset(OFF64|AUTO);
PACL Dacl __offset(OFF64|AUTO);
};
