int __thiscall sub_88E0F0(const void **this, int a2)
{
  int v3; // ecx
  _DWORD **v4; // esi
  signed int v5; // eax
  _DWORD *v6; // edx
  bool v7; // bl
  int result; // eax
  int *v9; // esi

  v3 = (int)*(this + 0x25); /*0x88e0fa*/
  v4 = (_DWORD **)(this + 0x24); /*0x88e100*/
  v5 = 0; /*0x88e106*/
  if ( v3 <= 0 ) /*0x88e10a*/
  {
LABEL_5:
    v5 = 0xFFFFFFFF; /*0x88e11e*/
  }
  else
  {
    v6 = *v4; /*0x88e10c*/
    while ( *v6 != a2 ) /*0x88e112*/
    {
      ++v5; /*0x88e114*/
      ++v6; /*0x88e117*/
      if ( v5 >= v3 ) /*0x88e11c*/
        goto LABEL_5; /*0x88e11c*/
    }
  }
  v7 = v5 >= 0; /*0x88e123*/
  if ( !*((_BYTE *)this + 0xFC) || (result = *(_DWORD *)(a2 + 0x1C) & 0x3F, (_BYTE)result != 0x14) ) /*0x88e137*/
  {
    result = sub_88D780(this, a2); /*0x88e140*/
    if ( !result && !v7 ) /*0x88e14b*/
    {
      if ( !unk_BA7A08 || (result = unk_BA7A08(this, a2, 0), (_BYTE)result) ) /*0x88e161*/
      {
        if ( *(this + 0x25) == (const void *)((unsigned int)*(this + 0x26) & 0x3FFFFFFF) ) /*0x88e16f*/
          sub_8A6EE0(this + 0x24, 4); /*0x88e174*/
        (*v4)[(_DWORD)*(this + 0x25)] = a2; /*0x88e181*/
        *(this + 0x25) = (char *)*(this + 0x25) + 1; /*0x88e189*/
        v9 = (int *)(this + 0x28); /*0x88e192*/
        if ( *(this + 0x29) == (const void *)((unsigned int)*(this + 0x2A) & 0x3FFFFFFF) ) /*0x88e1a1*/
          sub_8A6EE0(this + 0x28, 4); /*0x88e1a6*/
        result = *v9; /*0x88e1b1*/
        *(_DWORD *)(*v9 + 4 * (_DWORD)*(this + 0x29)) = 0; /*0x88e1b3*/
        *(this + 0x29) = (char *)*(this + 0x29) + 1; /*0x88e1ba*/
      }
    }
  }
  return result; /*0x88e1bd*/
}
