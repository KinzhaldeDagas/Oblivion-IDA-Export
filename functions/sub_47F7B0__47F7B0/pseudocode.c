char __cdecl sub_47F7B0(float *a1, int arg4)
{
  float v2; // eax
  float v3; // ecx
  float v4; // edx
  float *v5; // esi
  unsigned int v6; // edi
  float v7; // eax
  float v8; // edx
  float v9; // eax
  float a2[4]; // [esp+Ch] [ebp-2Ch] BYREF
  NiBound v12; // [esp+1Ch] [ebp-1Ch] BYREF
  unsigned int v13; // [esp+34h] [ebp-4h]

  if ( a1 && arg4 )
  {
    if ( (dword_B343FC & 1) == 0 )
    {
      dword_B343FC |= 1u;
      sub_47DCA0((NiFrustumPlanes *)flt_B34398);
      v13 = 0xFFFFFFFF;
    }
    if ( dword_B069C4 != Seed )
    {
      sub_718200(flt_B34398, arg4);
      dword_B069C4 = Seed;
    }
    v2 = a1[9];
    v3 = a1[0xA];
    v12.Center.x = a1[8];
    v4 = a1[0xB];
    v12.Center.y = v2;
    v12.Center.z = v3;
    v12.Radius = v4;
    v5 = flt_B34398;
    v6 = 0;
    while ( 1 )
    {
      v7 = *v5;
      v8 = v5[2];
      a2[1] = v5[1];
      a2[0] = v7;
      v9 = v5[3];
      a2[2] = v8;
      a2[3] = v9;
      if ( sub_47DA70(&v12, (NiFrustumPlanes *)a2) == 2 )
        break;
      v6 += 0x10;
      v5 += 4;
      if ( v6 >= 0x60 )
        return 1;
    }
  }
  return 0;
}
