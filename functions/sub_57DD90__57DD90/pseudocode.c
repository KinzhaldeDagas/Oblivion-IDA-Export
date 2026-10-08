void __thiscall sub_57DD90(void *this, char a2)
{
  unsigned __int16 v2; // ax
  unsigned int v3; // kr00_4

  if ( *(_BYTE *)this ) /*0x57dd90*/
  {
    *(_BYTE *)this = a2; /*0x57ddd5*/
  }
  else
  {
    if ( a2 ) /*0x57dd9c*/
    {
      v2 = *((_WORD *)this + 0xE); /*0x57dd9e*/
      if ( v2 == 0xFFFF ) /*0x57dda6*/
      {
        v3 = strlen(*((const char **)this + 6)); /*0x57ddac*/
        *(_BYTE *)this = a2; /*0x57ddbc*/
        *((_DWORD *)this + 1) = v3; /*0x57ddbe*/
        return; /*0x57ddc2*/
      }
      *((_DWORD *)this + 1) = v2; /*0x57ddc8*/
    }
    *(_BYTE *)this = a2; /*0x57ddcb*/
  }
}
