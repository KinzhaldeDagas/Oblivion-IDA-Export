unsigned int __thiscall sub_707D80(_DWORD *this, _BYTE *a2, char a3, bool *a4)
{
  _DWORD *v5; // esi
  char v6; // al
  char v7; // dl
  bool v8; // al
  unsigned int result; // eax
  unsigned int v10; // ecx
  char v11; // cl

  v5 = (_DWORD *)*(this + 3);
  if ( v5 )
  {
    while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v5 + 0x5C))(v5) )
    {
      v5 = (_DWORD *)v5[0xD];
      if ( !v5 )
        goto LABEL_4;
    }
    v6 = 1;
  }
  else
  {
LABEL_4:
    v6 = 0;
  }
  v7 = a3;
  v8 = v6 == 0;
  *a4 = v8;
  if ( !a3 )
    v7 = !v8;
  result = *(this + 0x27);
  if ( result )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(result + 8);
      result = *(_DWORD *)result;
      if ( v10 )
      {
        if ( *(_DWORD *)(v10 + 0xC) )
          break;
      }
      if ( !result )
        goto LABEL_11;
    }
    v11 = 1;
  }
  else
  {
LABEL_11:
    v11 = 0;
    if ( !v7 && !*(this + 3) )
    {
      *a2 = 0;
      *((_WORD *)this + 0xC) &= ~2u;
LABEL_14:
      *((_WORD *)this + 0xC) &= ~4u;
      goto LABEL_15;
    }
  }
  *a2 = 1;
  *((_WORD *)this + 0xC) |= 2u;
  result = *((unsigned __int16 *)this + 0xC);
  if ( !v7 )
    goto LABEL_14;
  result |= 4u;
  *((_WORD *)this + 0xC) = result;
LABEL_15:
  if ( v11 )
  {
    *((_WORD *)this + 0xC) |= 0x18u;
  }
  else
  {
    *((_WORD *)this + 0xC) &= ~8u;
    *((_WORD *)this + 0xC) |= 0x10u;
  }
  return result;
}
