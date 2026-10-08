void __thiscall sub_74E2B0(float *this, int a2)
{
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  int v6; // edx

  nullsub_returnvVoid_1arg(a2); /*0x74e2b9*/
  if ( *(_DWORD *)(a2 + 0xD8) < 0x14000002u ) /*0x74e2c8*/
  {
    v3 = *(_DWORD *)(*((_DWORD *)this + 4) + 0xB4); /*0x74e2cd*/
    v4 = *(_DWORD *)(v3 + 0x60); /*0x74e2d3*/
    if ( v4 ) /*0x74e2d8*/
    {
      v5 = 0; /*0x74e2da*/
      if ( *(_WORD *)(v3 + 0x48) ) /*0x74e2dc*/
      {
        do /*0x74e2fb*/
        {
          v6 = (unsigned __int16)v5++; /*0x74e2e5*/
          *(float *)(v4 + 4 * v6) = *(this + 6); /*0x74e2eb*/
        }
        while ( (unsigned __int16)v5 < *(_WORD *)(*(_DWORD *)(*((_DWORD *)this + 4) + 0xB4) + 0x48) ); /*0x74e2fb*/
      }
    }
  }
}
