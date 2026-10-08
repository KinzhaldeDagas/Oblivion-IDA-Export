void __thiscall TESObjectCELL_CreateGroupRecord(int this, int *a2, int a3)
{
  int v4; // eax
  int v5; // eax
  unsigned int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  unsigned int CellGroupSubBlockLabel; // eax

  if ( a2 ) /*0x4ce1ad*/
  {
    *a2 = 0; /*0x4ce1b8*/
    if ( (*(_BYTE *)(this + 0x24) & 1) != 0 ) /*0x4ce1c2*/
    {
      if ( !a3 ) /*0x4ce28d*/
      {
        v10 = dword_B05E20; /*0x4ce28f*/
        a2[3] = 0; /*0x4ce295*/
        *a2 = v10; /*0x4ce299*/
        v11 = dword_B06048; /*0x4ce29b*/
        a2[4] = 0; /*0x4ce2a2*/
        a2[1] = 0; /*0x4ce2a5*/
        a2[2] = v11; /*0x4ce2a8*/
        return;                                 // Interior constructor begins at top CELL and then accepts only type 0 -> 2 -> 3 progression, yielding exact [0,2,3]. /*0x4ce2ad*/
      }
      v12 = *(_DWORD *)(a3 + 0xC); /*0x4ce2b0*/
      if ( !v12 ) /*0x4ce2b5*/
      {
        if ( *(_DWORD *)(a3 + 8) != dword_B06048 ) /*0x4ce2f6*/
          return; /*0x4ce2f6*/
        v7 = dword_B05E20;                      // CELL block container contract: interior type 2 emits a type-3 sub-block; records are not direct type-2 children. /*0x4ce2f8*/
        a2[3] = 2; /*0x4ce2fe*/
        goto LABEL_25; /*0x4ce2fe*/
      }
      if ( v12 == 2 && *(_DWORD *)(a3 + 8) == sub_4CA5F0(this) ) /*0x4ce2c6*/
      {
        *a2 = dword_B05E20;                     // CELL sub-block container contract: interior type 3 is the direct parent emitted for a CELL record. /*0x4ce2cf*/
        a2[3] = 3; /*0x4ce2d1*/
        CellGroupSubBlockLabel = TESObjectCELL_GetCellGroupSubBlockLabel((const void *)this); /*0x4ce2d8*/
        a2[4] = 0; /*0x4ce2df*/
        a2[1] = 0; /*0x4ce2e2*/
        a2[2] = CellGroupSubBlockLabel; /*0x4ce2e5*/
      }
    }
    else
    {
      if ( !a3 ) /*0x4ce1ca*/
        return; /*0x4ce1ca*/
      v4 = *(_DWORD *)(a3 + 0xC); /*0x4ce1d0*/
      if ( v4 ) /*0x4ce1d5*/
      {
        v5 = v4 - 1; /*0x4ce1d7*/
        if ( v5 ) /*0x4ce1d9*/
        {
          if ( v5 == 3 && *(_DWORD *)(a3 + 8) == sub_4CA5F0(this) && (*(_DWORD *)(this + 8) & 0x400) == 0 ) /*0x4ce1fb*/
          {
            *a2 = dword_B05E20;                 // CELL sub-block container contract: exterior type 5 is the direct parent emitted for a non-persistent exterior CELL. /*0x4ce208*/
            a2[3] = 5; /*0x4ce20a*/
            v6 = TESObjectCELL_GetCellGroupSubBlockLabel((const void *)this); /*0x4ce211*/
            a2[4] = 0; /*0x4ce218*/
            a2[1] = 0; /*0x4ce21b*/
            a2[2] = v6; /*0x4ce21e*/
          }
          return;                               // No further group descriptor is emitted for an unexpected exterior parent; paired constructor yields exact [0,1,4,5] or persistent [0,1] CELL chains. /*0x4ce223*/
        }
        if ( *(_DWORD *)(a3 + 8) == *(_DWORD *)(*(_DWORD *)(this + 0x50) + 0xC) && (*(_DWORD *)(this + 8) & 0x400) == 0 ) /*0x4ce23c*/
        {
          v7 = dword_B05E20;                    // CELL block container contract: exterior type 4 emits a type-5 sub-block; records are not direct type-4 children. /*0x4ce242*/
          a2[3] = 4; /*0x4ce248*/
LABEL_25:
          *a2 = v7; /*0x4ce305*/
          a2[2] = sub_4CA5F0(this); /*0x4ce30e*/
          a2[4] = 0; /*0x4ce311*/
          a2[1] = 0; /*0x4ce314*/
        }
      }
      else if ( *(_DWORD *)(a3 + 8) == dword_B06084 ) /*0x4ce25d*/
      {
        *a2 = dword_B05E20; /*0x4ce269*/
        a2[3] = 1; /*0x4ce26b*/
        v8 = 0; /*0x4ce26e*/
        if ( (*(_BYTE *)(this + 0x24) & 1) == 0 ) /*0x4ce273*/
          v8 = *(_DWORD *)(this + 0x50); /*0x4ce275*/
        v9 = *(_DWORD *)(v8 + 0xC); /*0x4ce278*/
        a2[4] = 0; /*0x4ce27d*/
        a2[1] = 0; /*0x4ce280*/
        a2[2] = v9; /*0x4ce283*/
      }
    }
  }
}
