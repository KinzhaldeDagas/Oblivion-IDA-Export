void __thiscall sub_51AA10(_WORD *this, __int16 a2)
{
  int v3; // eax
  _BYTE **v4; // ecx
  unsigned int v5; // eax
  int v6; // eax
  int v7; // [esp-8h] [ebp-Ch]

  *(this + 4) = a2;
  v3 = 0;
  v4 = (_BYTE **)(4 * *(_DWORD *)(0x24 * (unsigned __int8)a2 + 0xB102EC) + 0xB10900);
  do
  {
    if ( !**v4 )
      break;
    ++v3;
    v4 += 8;
  }
  while ( v3 < 5 );
  *((_DWORD *)this + 3) = v3;
  if ( *((_DWORD *)this + 4) )
    FormHeapFree(*((_DWORD *)this + 4));
  v5 = *((_DWORD *)this + 3);
  if ( v5 )
  {
    v6 = FormHeapAlloc((unsigned __int64)v5 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v5);
    v7 = 4 * *((_DWORD *)this + 3);
    *((_DWORD *)this + 4) = v6;
    _memset(v6, 0, v7);
  }
  else
  {
    *((_DWORD *)this + 4) = 0;
  }
}
