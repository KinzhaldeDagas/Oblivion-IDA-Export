double __thiscall sub_683B90(int this, int a2, float a3)
{
  TESObjectREFR *LinkedDoor; // eax
  char *v5; // ecx

  LinkedDoor = TeleportData_GetLinkedDoor((TeleportData *)(this + 0x14)); /*0x683b9e*/
  if ( a2 ) /*0x683ba8*/
  {
    if ( LinkedDoor ) /*0x683bac*/
    {
      v5 = *(char **)(this + 0x30); /*0x683bae*/
      if ( v5 ) /*0x683bb3*/
      {
        if ( (unsigned int)(sub_680CB0(v5) - 1) <= 3 ) /*0x683bc0*/
          return (float)sub_680D10((float *)*(_DWORD *)(this + 0x30)); /*0x683bca*/
      }
    }
  }
  return a3; /*0x683bd3*/
}
