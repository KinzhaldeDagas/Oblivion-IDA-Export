_WORD *__thiscall sub_95F960(_WORD *this)
{
  _WORD *v2; // eax
  unsigned int v3; // edi
  _WORD *v4; // ebp
  int v5; // ecx
  int v6; // eax
  _WORD *v8; // [esp+10h] [ebp-4h]

  v2 = (_WORD *)FormHeapAlloc(0x18u);
  v3 = 0;
  if ( v2 )
  {
    v4 = sub_95F810(v2);
    v8 = v4;
  }
  else
  {
    v8 = 0;
    v4 = 0;
  }
  NiTArray_SetSize(v4 + 2, (unsigned __int16)*(this + 7));
  if ( !*(this + 7) )
    return v4;
  do
  {
    v5 = *(_DWORD *)(*((_DWORD *)this + 2) + 4 * v3);
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x18))(v5);
    if ( v3 < (unsigned __int16)v4[7] )
    {
      if ( v6 )
      {
        if ( !*(_DWORD *)(*((_DWORD *)v4 + 2) + 4 * v3) )
          ++v4[8];
      }
      else if ( *(_DWORD *)(*((_DWORD *)v4 + 2) + 4 * v3) )
      {
        --v4[8];
      }
    }
    else
    {
      v4[7] = v3 + 1;
      if ( v6 )
        ++v4[8];
    }
    *(_DWORD *)(*((_DWORD *)v4 + 2) + 4 * v3++) = v6;
  }
  while ( v3 < (unsigned __int16)*(this + 7) );
  return v8;
}
