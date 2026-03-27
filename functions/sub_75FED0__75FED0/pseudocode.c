NiD3DTextureStage *__thiscall sub_75FED0(_DWORD *this, NiD3DTextureStage *a2, NiD3DTextureStage **a3)
{
  NiD3DTextureStage *result; // eax
  int v5; // ecx
  int v6; // edx
  NiD3DTextureStage **v7; // esi
  NiD3DTextureStage *v8; // ecx
  bool v9; // zf

  if ( (dword_B4204C & 1) == 0 )
  {
    dword_B4204C |= 1u;
    dword_B42048 = 0;
    atexit(sub_A26D40);
  }
  result = a2;
  if ( (unsigned int)a2 < *((unsigned __int16 *)this + 5) )
  {
    v5 = dword_B42048;
    v6 = *(this + 1);
    if ( *a3 == (NiD3DTextureStage *)dword_B42048 )
    {
      if ( *(_DWORD *)(v6 + 4 * (_DWORD)a2) != v5 )
        --*((_WORD *)this + 6);
    }
    else if ( *(_DWORD *)(v6 + 4 * (_DWORD)a2) == v5 )
    {
      ++*((_WORD *)this + 6);
    }
  }
  else
  {
    *((_WORD *)this + 5) = (_WORD)a2 + 1;
    if ( *a3 != (NiD3DTextureStage *)dword_B42048 )
      ++*((_WORD *)this + 6);
  }
  v7 = (NiD3DTextureStage **)(*(this + 1) + 4 * (_DWORD)a2);
  v8 = *v7;
  if ( *v7 != *a3 )
  {
    if ( v8 )
    {
      v9 = v8[7].Unk08-- == 1;
      if ( v9 )
        sub_772560(v8);
    }
    result = *a3;
    v9 = *a3 == 0;
    *v7 = *a3;
    if ( !v9 )
      ++result[7].Unk08;
  }
  return result;
}
