void __userpurge sub_616190(
        int a1@<ecx>,
        int a2@<ebp>,
        double a3@<st2>,
        double a4@<st0>,
        PlayerCharacter *a5,
        int a6,
        float a7,
        float a8,
        float a9)
{
  PlayerCharacter *v11; // ebp
  LowProcess *process; // ecx
  int v13; // eax
  int v15; // [esp+0h] [ebp-14h]
  int v16; // [esp+4h] [ebp-10h]
  int v17; // [esp+8h] [ebp-Ch]
  double v18; // [esp+Ch] [ebp-8h]
  float Distance; // [esp+18h] [ebp+4h]

  if ( a5 )
  {
    v11 = *(PlayerCharacter **)(a1 + 0x3C);
    if ( a5 != v11 )
    {
      process = a5->super.super.super.process;
      if ( !process || (PlayerCharacter *)((int (__thiscall *)(LowProcess *))process->Unk_F3)(process) != v11 )
      {
        if ( (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x3C) + 0x284))(*(_DWORD *)(a1 + 0x3C), 4)
          || ((*(void (__usercall **)(_DWORD@<ecx>, double@<st0>))(**(_DWORD **)(a1 + 0x3C) + 0x26C))(
                *(_DWORD *)(a1 + 0x3C),
                a4),
              *(float *)&v17 = a4 * dbl_A3C770,
              Distance = TesObjectREF_GetDistance((TESObjectREFR *)*(_DWORD *)(a1 + 0x3C), (TESObjectREFR *)a5, 0),
              v18 = Distance,
              (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x26C))(*(_DWORD *)(a1 + 0x3C)),
              a3 + *(float *)&v17 >= Distance) )
        {
          if ( !sub_613670((_DWORD *)a1, (int)a5) )
          {
            if ( a5 == TESDataHandler_g_PlayerRef )
            {
              *(_BYTE *)(a1 + 0x4B) = 0;
              *(_BYTE *)(a1 + 0x4C) = 0;
            }
            v13 = FormHeapAlloc(0x14u);
            *(float *)(v13 + 0xC) = a8;
            *(float *)(v13 + 0x10) = a9;
            *(_DWORD *)(v13 + 4) = a6;
            *(_DWORD *)v13 = a5;
            *(_BYTE *)(v13 + 8) = LOBYTE(a7);
            BSSimpleList_InsertSorted(
              *(_DWORD **)(a1 + 0x40),
              v13,
              (int)sub_614190,
              a2,
              v15,
              v16,
              v17,
              (int (__cdecl *)(int, _DWORD))LODWORD(v18));
            if ( a5 == TESDataHandler_g_PlayerRef )
              SoundManager_CombatMusicStart();
            TESPackage_LocationData_SetReference(*(_DWORD **)(a1 + 0x24), ***(_DWORD ***)(a1 + 0x40));
            TeSPackage_TargetData_SetTargetREFR(*(_DWORD **)(a1 + 0x28), ***(_DWORD ***)(a1 + 0x40));
            if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x330))(*(_DWORD *)(a1 + 0x3C)) )
              sub_624030(a1, (char)v11, (TESObjectREFR *)a5, a9, 1);
          }
        }
      }
    }
  }
}
