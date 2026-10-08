char __thiscall sub_768780(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // ecx
  _DWORD *v4; // eax

  v3 = (_DWORD *)a2[9]; /*0x768788*/
  if ( !v3 || !(*(int (__thiscall **)(_DWORD *))(*v3 + 0x20))(v3) ) /*0x768794*/
  {
    v4 = NiDX9DynamicTextureData::NiDX9DynamicTextureData(v3); /*0x76879b*/
    if ( !v4 ) /*0x7687a5*/
      return 0; /*0x7687ab*/
    NiTMap_SetAt(this + 0x238, (int)a2, (int)v4); /*0x7687b6*/
  }
  return 1; /*0x7687a7*/
}
