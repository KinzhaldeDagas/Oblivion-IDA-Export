int __thiscall sub_773440(NiD3DTextureStage *this, NiD3DTextureStage *a2)
{
  int v2; // esi
  int result; // eax

  v2 = 0;
  if ( (unsigned int)a2 < dword_B28CB0 )
    v2 = sub_7732B0(this, (int)a2);
  result = sub_773330(this, (int)a2);
  if ( v2 )
    return v2;
  return result;
}
