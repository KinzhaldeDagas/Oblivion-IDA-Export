void __userpurge sub_441D50(
        int a1@<ecx>,
        double a2@<st0>,
        double st5_0@<st2>,
        double st4_0@<st3>,
        double a5@<st1>,
        double a6@<st5>,
        double a7@<st6>,
        double a8@<st4>,
        double a9@<st7>,
        char a10,
        int a11)
{
  unsigned int v13; // ecx
  unsigned int i; // eax
  unsigned int v15; // edi
  int *GridEntry; // eax
  int *v17; // ebp
  int v18; // esi
  int v19; // eax
  int v20; // [esp+Ch] [ebp-4h]

  if ( TESDataHandler )
  {
    if ( bhkWorldM )
    {
      if ( a10 )
        a9 = sub_889E10();
      else
        sub_889E00((_DWORD *)bhkWorldM);
    }
    v13 = uGridsToLoad;
    for ( i = 0; ; ++i )
    {
      v20 = i;
      if ( i >= v13 )
        break;
      v15 = 0;
      while ( v15 < v13 )
      {
        GridEntry = (int *)GetGridEntry(*(GridCellArray **)(a1 + 8), i, v15);
        v17 = GridEntry;
        v18 = *GridEntry;
        if ( a10 )
        {
          if ( v18 )
          {
            if ( *(_BYTE *)(v18 + 0x26) == 6 )
              sub_4D6450(*GridEntry, st5_0, a5, a2);
          }
          sub_499FF0((_DWORD *)v17[1]);
          v13 = uGridsToLoad;
          i = v20;
          ++v15;
        }
        else
        {
          if ( v18 )
          {
            if ( *(_BYTE *)(v18 + 0x26) == 3 )
            {
              sub_482390(*(_DWORD **)(a1 + 8), st5_0, a5, a2, *(_DWORD *)(a1 + 0xC), v20, v15);
              sub_4D5BD0(v18, a5, a2, st5_0, st4_0, a8, a6, a7, a9, (char)v17, 0);
            }
          }
          v13 = uGridsToLoad;
          i = v20;
          ++v15;
        }
      }
    }
    if ( bhkWorldM )
    {
      if ( !a10 )
      {
        sub_88D1D0(0);
        goto LABEL_24;
      }
      sub_88BD60((_DWORD *)bhkWorldM, 0);
    }
    if ( a10 )
    {
LABEL_26:
      v19 = *(_DWORD *)(*(_DWORD *)(a1 + 0x10) + 0x1C);
      if ( v19 )
      {
        if ( a10 )
          *(_WORD *)(v19 + 0x18) |= 1u;
        else
          *(_WORD *)(v19 + 0x18) &= ~1u;
      }
      NiAVObject_UpdateNiAVObject(*(NiAVObject **)(a1 + 0x10), 0.0, 0);
      return;
    }
LABEL_24:
    sub_677360((int)&ActorProcessManager_ptr);
    if ( byte_B0703C )
      WaterSurfaceLoop(*(float *)(a1 + 0x54), a2);
    goto LABEL_26;
  }
}
