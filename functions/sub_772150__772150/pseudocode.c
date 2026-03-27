char __thiscall sub_772150(_DWORD *this)
{
  unsigned int v2; // eax
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // edx
  D3DMATRIX *v7; // edx
  D3DMATRIX *v9; // [esp-4h] [ebp-8h]

  if ( !*((_BYTE *)this + 0x5A) )
  {
    LOBYTE(v2) = ((char (__thiscall *)(NiDX9RenderState *, _DWORD, int, _DWORD, _DWORD))dword_B42758->vtbl->SetTextureStageState)(
                   dword_B42758,
                   *this,
                   0x18,
                   0,
                   0);
    return v2;
  }
  v3 = *(this + 4);
  v2 = *(this + 4) & 0xF0000000;
  if ( !v2 )
  {
    v7 = (D3DMATRIX *)(this + 6);
    goto LABEL_14;
  }
  if ( v2 != 0x10000000 )
  {
    if ( v2 != 0x20000000 )
      return v2;
    v4 = v3 & 0xFFFFFFF;
    v9 = (D3DMATRIX *)(this + 6);
    if ( v4 )
    {
      LOBYTE(v2) = sub_771830(v4, &v9->_11);
      goto LABEL_8;
    }
LABEL_15:
    LOBYTE(v2) = dword_B42750->lpVtbl->SetTransform(dword_B42750, *this + 0x10, v9);
    return v2;
  }
  v5 = v3 & 0xFFFFFFF;
  v6 = *(this + 5);
  if ( !v5 )
  {
    v7 = *(D3DMATRIX **)(v6 + 0x18);
LABEL_14:
    v9 = v7;
    goto LABEL_15;
  }
  LOBYTE(v2) = sub_771830(v5, *(float **)(v6 + 0x18));
LABEL_8:
  if ( (_BYTE)v2 )
    LOBYTE(v2) = dword_B42750->lpVtbl->SetTransform(dword_B42750, *this + 0x10, &flt_B42760);
  return v2;
}
