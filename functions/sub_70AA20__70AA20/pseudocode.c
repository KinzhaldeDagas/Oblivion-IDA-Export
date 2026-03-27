char __thiscall sub_70AA20(_DWORD *this, _BYTE *a2, int a3, _BYTE *a4)
{
  char v5; // al
  _BYTE *v6; // ebp
  _BYTE *v7; // ebx
  unsigned int v8; // edi
  int v9; // ebx
  int v10; // ecx
  void (__thiscall *v11)(int, _BYTE **, int, char *); // eax
  char result; // al
  char v13; // [esp+12h] [ebp-2h] BYREF
  char v14; // [esp+13h] [ebp-1h]

  v5 = sub_707770(this);
  v14 = v5;
  if ( !(_BYTE)a3 )
    LOBYTE(a3) = v5;
  v6 = a2;
  v7 = a4;
  *a2 = a3;
  v8 = 0;
  *v7 = 1;
  if ( *((_WORD *)this + 0x5B) )
  {
    v9 = a3;
    do
    {
      if ( *((unsigned __int16 *)this + 0x5B) > v8 )
      {
        v10 = *(_DWORD *)(*(this + 0x2C) + 4 * v8);
        if ( v10 )
        {
          v11 = *(void (__thiscall **)(int, _BYTE **, int, char *))(*(_DWORD *)v10 + 0x5C);
          LOBYTE(a2) = 0;
          v13 = 1;
          v11(v10, &a2, v9, &v13);
          if ( (_BYTE)a2 )
            *v6 = 1;
          if ( !v13 )
            *a4 = 0;
        }
      }
      ++v8;
    }
    while ( v8 < *((unsigned __int16 *)this + 0x5B) );
    v7 = a4;
  }
  result = sub_7077A0(this);
  if ( result || *(this + 3) )
  {
    *v6 = 1;
    *((_WORD *)this + 0xC) |= 2u;
  }
  else if ( *v6 )
  {
    *((_WORD *)this + 0xC) |= 2u;
  }
  else
  {
    *((_WORD *)this + 0xC) &= ~2u;
  }
  if ( (_BYTE)a3 )
    *((_WORD *)this + 0xC) |= 4u;
  else
    *((_WORD *)this + 0xC) &= ~4u;
  if ( result )
    *((_WORD *)this + 0xC) |= 8u;
  else
    *((_WORD *)this + 0xC) &= ~8u;
  if ( *v7 )
    *((_WORD *)this + 0xC) |= 0x10u;
  else
    *((_WORD *)this + 0xC) &= ~0x10u;
  if ( v14 )
    *v7 = 0;
  return result;
}
