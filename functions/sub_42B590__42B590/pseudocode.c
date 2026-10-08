// TeleportData constructor initializes linkedDoor=NULL and all six transform floats to FLT_MAX sentinels. Any XTEL immediately replaces them from a fresh zeroed scratch in TeleportData_LoadXTEL.
TeleportData *__thiscall TeleportData_InitSentinels(TeleportData *this)
{
  this->x = 3.4028135e38; /*0x42b5a9*/
  this->y = 3.4028135e38; /*0x42b5b7*/
  this->xRot = 3.4028135e38; /*0x42b5c5*/
  this->z = 3.4028135e38; /*0x42b5cc*/
  this->yRot = 3.4028135e38; /*0x42b5d3*/
  this->linkedDoor = 0; /*0x42b5d6*/
  this->zRot = 3.4028135e38; /*0x42b5dc*/
  return this; /*0x42b5df*/
}
