int __thiscall sub_6ACBF0(float *this, int a2, float a3, float a4, float a5)
{
  _DWORD *v6; // ecx
  float *v7; // [esp+Ch] [ebp-4h] BYREF

  v7 = this;
  if ( !bSoundEnabled_Audio )
    return 0;
  v6 = *((_DWORD **)this + 0xC0);
  v7 = 0;
  NiTMap_GetAt(v6, a2, &v7);
  if ( v7 )
    return sub_6B6BE0(v7, a3, a4, a5);
  else
    return 0x80004005;
}
