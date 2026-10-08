NiScreenSpaceCamera *__thiscall sub_73A980(char **this, _DWORD **a2)
{
  NiScreenSpaceCamera *v3; // eax
  NiScreenSpaceCamera *v4; // esi

  v3 = (NiScreenSpaceCamera *)FormHeapAlloc(0x144u); /*0x73a9aa*/
  v4 = 0; /*0x73a9b6*/
  if ( v3 ) /*0x73a9be*/
    v4 = NiScreenSpaceCamera::NiScreenSpaceCamera(v3); /*0x73a9c7*/
  sub_73A220(this, (int)v4, a2); /*0x73a9d9*/
  return v4; /*0x73a9e0*/
}
