char __thiscall sub_7C5850(_DWORD *this, int a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx
  ShadowSceneLight *v4; // eax
  ShadowSceneLight *v5; // eax

  v3 = (void (__thiscall ***)(_DWORD, int))*(this + 0x46);
  if ( v3 )
  {
    (**v3)(v3, 1);
    *(this + 0x46) = 0;
  }
  v4 = (ShadowSceneLight *)FormHeapAlloc(0x220u);
  if ( v4 )
    v5 = ShadowSceneLight::ShadowSceneLight(v4);
  else
    v5 = 0;
  *(this + 0x46) = v5;
  return sub_7D3400(v5, a2);
}
