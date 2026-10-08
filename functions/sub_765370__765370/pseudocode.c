//
// DX11 production binding audit 2026-10-01: this data mutation/destruction site uses NativeBindPositionObserver in the installed routing, NOT NativeActorWriteObservers generic prelude. Its cache invalidation fanout must therefore notify GPU-world GeometryData dependencies directly. The renderer now does this through ActorBindInvalidated before Original, followed by a short poseMetadataGate barrier outside observer/store/ledger locks. That barrier protects an in-progress CPU capture/commit from mutation/free. SetData/destructor adapters still tail-jump after the prelude: a zero ActiveEntries count is NOT proof of native completion or independent lifetime acquisition. Unknown foreign tails remain subject to the existing conservative lifetime policy.
void __stdcall sub_765370(int a1, int a2, int a3)
{
  __int16 v4; // ax
  char v5; // bl
  unsigned int v6; // edx
  unsigned int v7; // ebp
  unsigned int v8; // edi
  int v9; // eax
  char v10; // cl
  char v11; // [esp+8h] [ebp+4h]

  if ( a1 ) /*0x765377*/
  {
    if ( (*(_WORD *)(a1 + 0x2E) & 0xF000) == 0x4000 ) /*0x765389*/
    {
      v4 = *(_WORD *)(a1 + 8); /*0x76538f*/
      v11 = *(_BYTE *)(a1 + 0x30); /*0x76539a*/
      v5 = v11; /*0x765394*/
      if ( v11 ) /*0x76539e*/
      {
        v6 = 0; /*0x7653bc*/
        v7 = 0; /*0x7653be*/
        v8 = 0; /*0x7653c0*/
        v9 = 0; /*0x7653c2*/
        v10 = 0; /*0x7653c4*/
        if ( (v11 & 1) != 0 ) /*0x7653c9*/
          v6 = *(_DWORD *)(a1 + 0x1C); /*0x7653cb*/
        if ( (v11 & 2) != 0 ) /*0x7653d1*/
          v7 = *(_DWORD *)(a1 + 0x20); /*0x7653d3*/
        if ( (v11 & 4) != 0 ) /*0x7653d9*/
          v8 = *(_DWORD *)(a1 + 0x24); /*0x7653db*/
        if ( (v11 & 8) != 0 ) /*0x7653e1*/
        {
          v9 = *(_DWORD *)(a1 + 0x28); /*0x7653e7*/
          v10 = *(_BYTE *)(a1 + 0x2C) & 0x3F; /*0x7653ea*/
        }
        NiGeometryData_SetData( /*0x765404*/
          (unsigned int *)a1,
          *(_WORD *)(a1 + 8),
          v6,
          v7,
          v8,
          v9,
          v10,
          *(_WORD *)(a1 + 0x2C) & 0xF000);
        v5 = v11; /*0x765409*/
      }
      else
      {
        NiGeometryData_SetData((unsigned int *)a1, v4, 0, 0, 0, 0, 0, *(_WORD *)(a1 + 0x2C) & 0xF000); /*0x7653b3*/
      }
      if ( a3 ) /*0x765414*/
      {
        if ( (v5 & 0x20) == 0 ) /*0x765419*/
          sub_72EFB0(*(_DWORD **)(a2 + 8)); /*0x765422*/
      }
      else if ( (v5 & 0x10) == 0 ) /*0x76542f*/
      {
        if ( NiRTTI::IsObjectOfRTTIType(&stru_B3FD2C, (NiObject *)a1) ) /*0x765437*/
        {
          sub_71FC80((unsigned int *)a1, *(_WORD *)(a1 + 0x40), 0); /*0x76544c*/
        }
        else if ( NiRTTI::IsObjectOfRTTIType(&stru_B3FD0C, (NiObject *)a1) ) /*0x76545c*/
        {
          sub_71A040((void *)a1, *(_WORD *)(a1 + 0x44), *(_WORD **)(a1 + 0x48), 0); /*0x765475*/
        }
      }
    }
  }
}
