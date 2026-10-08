// Allocates 0x14-byte TargetInfo: Actor* +0, priority +4, flags byte +8, incoming health damage +0xC, outgoing fatigue-like damage +0x10.
void __userpurge sub_616190(
        int a1@<ecx>,
        int a2@<ebp>,
        double a3@<st2>,
        double a4@<st0>,
        Actor *a5,
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

  if ( a5 ) /*0x61619d*/
  {
    v11 = *(PlayerCharacter **)(a1 + 0x3C); /*0x6161a4*/
    if ( a5 != (Actor *)v11 ) /*0x6161a9*/
    {
      process = a5->members.super.process; /*0x6161af*/
      if ( !process || (PlayerCharacter *)((int (__thiscall *)(LowProcess *))process->Unk_F3)(process) != v11 ) /*0x6161c2*/
      {
        if ( (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x3C) + 0x284))(*(_DWORD *)(a1 + 0x3C), 4) /*0x616223*/
          || ((*(void (__usercall **)(_DWORD@<ecx>, double@<st0>))(**(_DWORD **)(a1 + 0x3C) + 0x26C))(
                *(_DWORD *)(a1 + 0x3C),
                a4),
              *(float *)&v17 = a4 * dbl_A3C770,
              Distance = TesObjectREF_GetDistance((TESObjectREFR *)*(_DWORD *)(a1 + 0x3C), (TESObjectREFR *)a5, 0),
              a4 = Distance,
              v18 = Distance,
              (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x26C))(*(_DWORD *)(a1 + 0x3C)),
              a3 + *(float *)&v17 >= Distance) )
        {
          if ( !sub_613670((_DWORD *)a1, (int)a5) ) /*0x61622c*/
          {
            if ( a5 == (Actor *)reference ) /*0x61623f*/
            {
              *(_BYTE *)(a1 + 0x4B) = 0; /*0x616241*/
              *(_BYTE *)(a1 + 0x4C) = 0; /*0x616244*/
            }
            v13 = FormHeapAlloc(0x14u);         // Allocates a fresh 0x14-byte TargetInfo from FormHeap; address reuse makes pointer-only sidecar identity unsafe. /*0x616249*/
            *(float *)(v13 + 0xC) = a8; /*0x616256*/
            *(float *)(v13 + 0x10) = a9; /*0x616264*/
            *(_DWORD *)(v13 + 4) = a6; /*0x61626c*/
            *(_DWORD *)v13 = a5; /*0x61626f*/
            *(_BYTE *)(v13 + 8) = LOBYTE(a7); /*0x616271*/
            BSSimpleList_InsertSorted( /*0x616278*/
              *(_DWORD **)(a1 + 0x40),
              v13,
              (int)CombatTargetInfo_ComparePriorityDescending,
              a2,
              v15,
              v16,
              v17,
              (int (__cdecl *)(int, _DWORD))LODWORD(v18));
            if ( a5 == (Actor *)reference ) /*0x616283*/
              SoundManager_CombatMusicStart(); /*0x616285*/
            TESPackage_LocationData_SetReference(*(_DWORD **)(a1 + 0x24), ***(_DWORD ***)(a1 + 0x40)); /*0x616295*/
            TeSPackage_TargetData_SetTargetREFR(*(_DWORD **)(a1 + 0x28), ***(_DWORD ***)(a1 + 0x40)); /*0x6162a5*/
            if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x330))(*(_DWORD *)(a1 + 0x3C)) ) /*0x6162b5*/
              CombatController_RefreshTacticalState(a1, a5, a4, 1); /*0x6162bf*/
          }
        }
      }
    }
  }
}
