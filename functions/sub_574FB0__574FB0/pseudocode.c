int __thiscall sub_574FB0(_DWORD *this, int a2)
{
  _DWORD *v2; // edi
  int result; // eax
  int v4; // ecx
  _DWORD *v5; // ecx
  _DWORD *v6; // edx
  _BYTE *v7; // esi

  v2 = (_DWORD *)*(this + 1); /*0x574fb1*/
  result = 0; /*0x574fb4*/
  while ( v2 ) /*0x574fb8*/
  {
    v4 = v2[2]; /*0x574fc3*/
    v2 = (_DWORD *)*v2; /*0x574fc7*/
    if ( v4 ) /*0x574fc9*/
    {
      v5 = *(_DWORD **)(v4 + 4); /*0x574fcb*/
      while ( v5 ) /*0x574fd0*/
      {
        v6 = (_DWORD *)v5[2]; /*0x574fd5*/
        v5 = (_DWORD *)*v5; /*0x574fd9*/
        if ( v6 ) /*0x574fdb*/
        {
          v7 = (_BYTE *)v6[7]; /*0x574fdd*/
          if ( (!v7 || !*v7) && *v6 == a2 ) /*0x574feb*/
            ++result; /*0x574fed*/
        }
      }
    }
  }
  return result; /*0x574ffa*/
}
