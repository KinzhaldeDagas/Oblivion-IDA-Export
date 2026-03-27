NiScreenSpaceCamera *__thiscall sub_73A980(char **this, _DWORD **a2)
{
  NiScreenSpaceCamera *v3; // eax
  NiScreenSpaceCamera *v4; // esi

  v3 = (NiScreenSpaceCamera *)FormHeapAlloc(0x144u);
  v4 = 0;
  if ( v3 )
    v4 = NiScreenSpaceCamera::NiScreenSpaceCamera(v3);
  sub_73A220(this, (int)v4, a2);
  return v4;
}
