void __usercall sub_482310(int a1@<ecx>, double a2@<st0>)
{
  unsigned int v4; // eax
  unsigned int v5; // ebp
  unsigned int v6; // edi
  TESObjectCELL **v7; // esi
  TESObjectLAND *v8; // eax
  unsigned int i; // [esp+4h] [ebp-4h]

  if ( !*(_BYTE *)(a1 + 0x20) )
  {
    v4 = *(_DWORD *)(a1 + 0xC);
    v5 = 0;
    for ( i = v4; v5 < v4; ++v5 )
    {
      v6 = 0;
      do
      {
        v7 = (TESObjectCELL **)(*(_DWORD *)(a1 + 0x10) + 8 * (v6 + v5 * *(_DWORD *)(a1 + 0xC)));
        if ( v7 )
        {
          if ( *v7 )
          {
            v8 = sub_4CE3C0(*v7);
            sub_4C5640((int)v8);
            sub_4D4D00(*v7);
            v4 = i;
          }
        }
        ++v6;
      }
      while ( v6 < v4 );
    }
    WaterSurfaceLoop(*(float *)&TES->waterManager, a2);
    *(_BYTE *)(a1 + 0x20) = 1;
  }
}
