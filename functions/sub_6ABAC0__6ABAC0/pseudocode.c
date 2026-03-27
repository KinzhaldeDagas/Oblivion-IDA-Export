double __thiscall sub_6ABAC0(float *this, int a2)
{
  _DWORD *v2; // ecx
  float *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this;
  if ( bSoundEnabled_Audio && (v2 = *((_DWORD **)this + 0xC0), v4 = 0, NiTMap_GetAt(v2, a2, &v4), v4) )
    return v4[0xF];
  else
    return 0.0;
}
