int sub_6EA230()
{
  int v0; // esi
  int result; // eax

  v0 = FormHeapAlloc(0x40u);
  result = 0;
  if ( v0 )
  {
    sub_6CC4E0((float *)v0);
    *(_DWORD *)v0 = &NiBlendQuaternionInterpolator::`vftable';
    *(_DWORD *)(v0 + 0x30) = dword_B3EBA0;
    *(_DWORD *)(v0 + 0x34) = dword_B3EBA4;
    *(_DWORD *)(v0 + 0x38) = dword_B3EBA8;
    *(_DWORD *)(v0 + 0x3C) = dword_B3EBAC;
    return v0;
  }
  return result;
}
