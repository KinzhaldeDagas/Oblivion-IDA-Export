int __thiscall sub_8C8460(void *this, float *a2)
{
  __int128 v4; // [esp+14h] [ebp-30h] BYREF
  __int128 v5; // [esp+24h] [ebp-20h] BYREF

  if ( a2 ) /*0x8c847d*/
  {
    *(float *)&v4 = a2[8]; /*0x8c8483*/
    *((float *)&v4 + 1) = a2[9]; /*0x8c8492*/
    *((float *)&v4 + 2) = a2[0xA]; /*0x8c8499*/
    *((float *)&v4 + 3) = a2[0xB]; /*0x8c84a0*/
    *(float *)&v5 = a2[4]; /*0x8c84a7*/
    *((float *)&v5 + 1) = a2[5]; /*0x8c84ae*/
    *((float *)&v5 + 2) = a2[6]; /*0x8c84b5*/
    *((float *)&v5 + 3) = a2[7]; /*0x8c84bc*/
    sub_8C82D0(this, &v5, &v4, a2[0xC]); /*0x8c84ca*/
  }
  return (*(int (__thiscall **)(void *, float *))(*(_DWORD *)this + 0x7C))(this, a2); /*0x8c84d9*/
}
