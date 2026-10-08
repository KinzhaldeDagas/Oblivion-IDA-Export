int __thiscall sub_8B6B90(void *this, float *a2)
{
  __int128 v4; // [esp+14h] [ebp-30h] BYREF
  __int128 v5; // [esp+24h] [ebp-20h] BYREF

  if ( a2 ) /*0x8b6bad*/
  {
    *(float *)&v4 = a2[8]; /*0x8b6bb3*/
    *((float *)&v4 + 1) = a2[9]; /*0x8b6bc2*/
    *((float *)&v4 + 2) = a2[0xA]; /*0x8b6bc9*/
    *((float *)&v4 + 3) = a2[0xB]; /*0x8b6bd0*/
    *(float *)&v5 = a2[4]; /*0x8b6bd7*/
    *((float *)&v5 + 1) = a2[5]; /*0x8b6bde*/
    *((float *)&v5 + 2) = a2[6]; /*0x8b6be5*/
    *((float *)&v5 + 3) = a2[7]; /*0x8b6bec*/
    sub_8B6980(this, &v5, &v4, COERCE_INT(a2[1])); /*0x8b6bfa*/
  }
  return (*(int (__thiscall **)(void *, float *))(*(_DWORD *)this + 0x7C))(this, a2); /*0x8b6c09*/
}
