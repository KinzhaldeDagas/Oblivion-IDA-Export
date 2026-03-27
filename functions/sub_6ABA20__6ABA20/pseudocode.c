int __thiscall sub_6ABA20(float *this, int a2, float a3)
{
  _DWORD *v3; // ecx
  float *v5; // [esp+4h] [ebp-4h] BYREF

  v5 = this;
  if ( bSoundEnabled_Audio )
  {
    v3 = *((_DWORD **)this + 0xC0);
    v5 = 0;
    NiTMap_GetAt(v3, a2, &v5);
    if ( v5 )
      sub_6B6F20(v5, a3);
  }
  return 0;
}
