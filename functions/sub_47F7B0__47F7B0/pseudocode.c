char __cdecl sub_47F7B0(float *a1, int arg4)
{
  float v2; // eax
  float v3; // ecx
  float v4; // edx
  char *v5; // esi
  unsigned int v6; // edi
  float v7; // eax
  float v8; // edx
  float v9; // eax
  NiPlane a2; // [esp+Ch] [ebp-2Ch] BYREF
  NiBound self; // [esp+1Ch] [ebp-1Ch] BYREF
  unsigned int v13; // [esp+34h] [ebp-4h]

  if ( a1 && arg4 ) /*0x47f7e7*/
  {
    if ( (MEMORY[0xB33E90][0x56C] & 1) == 0 ) /*0x47f7f4*/
    {
      *(_DWORD *)&MEMORY[0xB33E90][0x56C] |= 1u; /*0x47f7f6*/
      sub_47DCA0((NiFrustumPlanes *)&MEMORY[0xB33E90][0x508]); /*0x47f80a*/
      v13 = 0xFFFFFFFF; /*0x47f80f*/
    }
    if ( dword_B069C4 != *(_DWORD *)&MEMORY[0xB33E90][0x10] ) /*0x47f822*/
    {
      sub_718200((NiFrustumPlanes *)&MEMORY[0xB33E90][0x508], arg4); /*0x47f82a*/
      dword_B069C4 = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x47f835*/
    }
    v2 = a1[9]; /*0x47f83e*/
    v3 = a1[0xA]; /*0x47f841*/
    self.Center.x = a1[8]; /*0x47f844*/
    v4 = a1[0xB]; /*0x47f848*/
    self.Center.y = v2; /*0x47f84b*/
    self.Center.z = v3; /*0x47f84f*/
    self.Radius = v4; /*0x47f853*/
    v5 = &MEMORY[0xB33E90][0x508]; /*0x47f857*/
    v6 = 0; /*0x47f85c*/
    while ( 1 ) /*0x47f863*/
    {
      v7 = *(float *)v5; /*0x47f863*/
      v8 = *((float *)v5 + 2); /*0x47f865*/
      a2.Normal.y = *((float *)v5 + 1); /*0x47f868*/
      a2.Normal.x = v7; /*0x47f870*/
      v9 = *((float *)v5 + 3); /*0x47f874*/
      a2.Normal.z = v8; /*0x47f87c*/
      a2.Constant = v9; /*0x47f880*/
      if ( NiBound_ClassifyAgainstPlane(&self, &a2) == 2 ) /*0x47f88c*/
        break; /*0x47f88c*/
      v6 += 0x10; /*0x47f88e*/
      v5 += 0x10; /*0x47f891*/
      if ( v6 >= 0x60 ) /*0x47f897*/
        return 1; /*0x47f8ac*/
    }
  }
  return 0; /*0x47f89b*/
}
