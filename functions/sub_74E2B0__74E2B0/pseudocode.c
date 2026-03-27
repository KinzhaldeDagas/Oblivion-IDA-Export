void __thiscall sub_74E2B0(float *this, int a2)
{
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  int v6; // edx

  nullsub_returnvVoid_1arg(a2);
  if ( *(_DWORD *)(a2 + 0xD8) < 0x14000002u )
  {
    v3 = *(_DWORD *)(*((_DWORD *)this + 4) + 0xB4);
    v4 = *(_DWORD *)(v3 + 0x60);
    if ( v4 )
    {
      v5 = 0;
      if ( *(_WORD *)(v3 + 0x48) )
      {
        do
        {
          v6 = (unsigned __int16)v5++;
          *(float *)(v4 + 4 * v6) = *(this + 6);
        }
        while ( (unsigned __int16)v5 < *(_WORD *)(*(_DWORD *)(*((_DWORD *)this + 4) + 0xB4) + 0x48) );
      }
    }
  }
}
