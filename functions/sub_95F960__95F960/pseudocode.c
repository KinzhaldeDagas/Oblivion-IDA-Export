_WORD *__thiscall sub_95F960(_WORD *this)
{
  _WORD *v2; // eax
  unsigned int v3; // edi
  _WORD *v4; // ebp
  int v5; // ecx
  int v6; // eax
  _WORD *v8; // [esp+10h] [ebp-4h]

  v2 = (_WORD *)FormHeapAlloc(0x18u); /*0x95f969*/
  v3 = 0; /*0x95f96e*/
  if ( v2 ) /*0x95f975*/
  {
    v4 = sub_95F810(v2); /*0x95f97e*/
    v8 = v4; /*0x95f980*/
  }
  else
  {
    v8 = 0; /*0x95f986*/
    v4 = 0; /*0x95f98a*/
  }
  NiTArray_SetSize(v4 + 2, (unsigned __int16)*(this + 7)); /*0x95f996*/
  if ( !*(this + 7) ) /*0x95f99b*/
    return v4; /*0x95fa0a*/
  do /*0x95f9fc*/
  {
    v5 = *(_DWORD *)(*((_DWORD *)this + 2) + 4 * v3); /*0x95f9a9*/
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x18))(v5); /*0x95f9b1*/
    if ( v3 < (unsigned __int16)v4[7] ) /*0x95f9b9*/
    {
      if ( v6 ) /*0x95f9ce*/
      {
        if ( !*(_DWORD *)(*((_DWORD *)v4 + 2) + 4 * v3) ) /*0x95f9d3*/
          ++v4[8]; /*0x95f9d9*/
      }
      else if ( *(_DWORD *)(*((_DWORD *)v4 + 2) + 4 * v3) ) /*0x95f9e2*/
      {
        --v4[8]; /*0x95f9e8*/
      }
    }
    else
    {
      v4[7] = v3 + 1; /*0x95f9c0*/
      if ( v6 ) /*0x95f9c4*/
        ++v4[8]; /*0x95f9c6*/
    }
    *(_DWORD *)(*((_DWORD *)v4 + 2) + 4 * v3++) = v6; /*0x95f9f1*/
  }
  while ( v3 < (unsigned __int16)*(this + 7) ); /*0x95f9fc*/
  return v8; /*0x95fa02*/
}
