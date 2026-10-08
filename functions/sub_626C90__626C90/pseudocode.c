void __thiscall sub_626C90(_DWORD *this, int a2)
{
  bool v2; // zf
  _DWORD *v3; // ecx
  _DWORD *v4; // eax

  v2 = this + 0x15 == 0; /*0x626c94*/
  v3 = this + 0x15; /*0x626c94*/
  v4 = v3; /*0x626c97*/
  if ( v2 ) /*0x626c99*/
  {
LABEL_4:
    BSSimpleList_PushFront(v3, a2); /*0x626cab*/
  }
  else
  {
    while ( *v4 != a2 ) /*0x626ca2*/
    {
      v4 = (_DWORD *)v4[1]; /*0x626ca4*/
      if ( !v4 ) /*0x626ca9*/
        goto LABEL_4; /*0x626ca9*/
    }
  }
}
