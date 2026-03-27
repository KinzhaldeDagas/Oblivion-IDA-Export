void __usercall sub_6714E0(
        int a1@<ecx>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>)
{
  unsigned int v9; // ebp
  char v11; // bl
  int v12; // eax
  unsigned int v13; // esi
  int v14; // eax
  int v15; // esi
  TESWorldSpace *WorldSpace; // eax
  unsigned int i; // [esp+14h] [ebp-Ch]
  float v18[2]; // [esp+18h] [ebp-8h] BYREF
  int savedregs; // [esp+20h] [ebp+0h] BYREF

  v9 = (unsigned int)&savedregs;
  if ( byte_B14F58 && !TES->unk51 && !TES->unk52 )
  {
    v11 = 0;
    if ( !*(_BYTE *)(a1 + 0x71E) )
    {
      if ( *(_DWORD *)(a1 + 0x730) )
      {
        v12 = a1;
        if ( *(_DWORD *)(a1 + 0xD4) )
          v12 = *(_DWORD *)(a1 + 0xD4);
        sub_4A6950(v18, (float *)(v12 + 0x2C));
        v13 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 0x730) + 0xA);
        v9 = 0;
        for ( i = v13; v9 < v13; ++v9 )
        {
          v14 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0x730) + 4) + 4 * v9);
          if ( (*(_DWORD *)(v14 + 8) & 0x20) == 0 )
          {
            v15 = *(_DWORD *)(v14 + 0x1C);
            while ( v15 && (*(_DWORD *)(v15 + 4) || *(_DWORD *)v15) )
            {
              if ( sub_4A7330(*(float **)v15, v18) )
                v11 = 1;
              v15 = *(_DWORD *)(v15 + 4);
              if ( v11 )
                goto LABEL_17;
            }
            v13 = i;
          }
        }
        goto LABEL_24;
      }
      WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1);
      if ( WorldSpace && sub_4EF160(WorldSpace) )
      {
LABEL_24:
        sub_66FF10(a1, v9, a2, a3, a4, a5, a6, a7, a8, a9, 0.0);
        return;
      }
    }
LABEL_17:
    sub_664320((PlayerCharacter *)a1);
  }
}
