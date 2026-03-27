int __thiscall sub_88E0F0(_DWORD *this, int a2)
{
  int v3; // ecx
  _DWORD **v4; // esi
  signed int v5; // eax
  _DWORD *v6; // edx
  bool v7; // bl
  int result; // eax
  int *v9; // esi

  v3 = *(this + 0x25);
  v4 = (_DWORD **)(this + 0x24);
  v5 = 0;
  if ( v3 <= 0 )
  {
LABEL_5:
    v5 = 0xFFFFFFFF;
  }
  else
  {
    v6 = *v4;
    while ( *v6 != a2 )
    {
      ++v5;
      ++v6;
      if ( v5 >= v3 )
        goto LABEL_5;
    }
  }
  v7 = v5 >= 0;
  if ( !*((_BYTE *)this + 0xFC) || (result = *(_DWORD *)(a2 + 0x1C) & 0x3F, (_BYTE)result != 0x14) )
  {
    result = sub_88D780(this, a2);
    if ( !result && !v7 )
    {
      if ( !dword_BA7A08 || (result = dword_BA7A08(this, a2, 0), (_BYTE)result) )
      {
        if ( *(this + 0x25) == (*(this + 0x26) & 0x3FFFFFFF) )
          sub_8A6EE0((int)(this + 0x24), 4);
        (*v4)[(*(this + 0x25))++] = a2;
        v9 = this + 0x28;
        if ( *(this + 0x29) == (*(this + 0x2A) & 0x3FFFFFFF) )
          sub_8A6EE0((int)(this + 0x28), 4);
        result = *v9;
        *(_DWORD *)(*v9 + 4 * (*(this + 0x29))++) = 0;
      }
    }
  }
  return result;
}
