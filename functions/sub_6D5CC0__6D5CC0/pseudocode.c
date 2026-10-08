int __thiscall sub_6D5CC0(_DWORD *this, __int16 a2)
{
  int v2; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( a2 ) /*0x6d5cc8*/
  {
    if ( a2 == 1 ) /*0x6d5cdb*/
    {
      v4 = *(this + 0xB); /*0x6d5cdd*/
      if ( v4 ) /*0x6d5ce2*/
        return *(_DWORD *)(v4 + 0x10); /*0x6d5ce7*/
    }
    else if ( a2 == 2 ) /*0x6d5cee*/
    {
      v5 = *(this + 0xB); /*0x6d5cf0*/
      if ( v5 ) /*0x6d5cf5*/
        return *(_DWORD *)(v5 + 0x18); /*0x6d5cfa*/
    }
  }
  else
  {
    v2 = *(this + 0xB); /*0x6d5cca*/
    if ( v2 ) /*0x6d5ccf*/
      return *(_DWORD *)(v2 + 0x14); /*0x6d5cd4*/
  }
  return 0; /*0x6d5cd4*/
}
