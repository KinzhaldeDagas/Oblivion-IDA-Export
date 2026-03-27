char __userpurge sub_633CB0@<al>(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectREFR *a5,
        TESObjectREFR *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        char a12,
        int a13,
        int a14)
{
  int v16; // eax
  int v17; // ebx

  if ( !a6 )
    return 0;
  v16 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1 + 0x184))(
          a1,
          a4,
          a3,
          a2);
  if ( v16 )
  {
    if ( *(_BYTE *)(v16 + 0x20) == 0x1D )
    {
      v17 = TESTopic::GEtTopic(4, 1);
      (*(void (__thiscall **)(int, PlayerCharacter *))(*(_DWORD *)a1 + 0x484))(a1, TESDataHandler_g_PlayerRef);
      LODWORD(a5[2].member.pos[2]) = TESDataHandler_g_PlayerRef;
      (*(void (__thiscall **)(int, TESObjectREFR *, int, _DWORD, _DWORD, int))(*(_DWORD *)a1 + 0x1A4))(
        a1,
        a5,
        v17,
        0,
        0,
        1);
    }
  }
  if ( sub_5E3290(a5) && ((int (__thiscall *)(TESObjectREFR *))a5->vtbl[2].super.Unk_0E)(a5) )
    return 0;
  if ( *(_BYTE *)(a1 + 0x290) )
  {
    (*(void (__thiscall **)(int, TESObjectREFR *, _DWORD, _DWORD))(*(_DWORD *)a1 + 0x588))(a1, a5, 0, 0);
    *(_BYTE *)(a1 + 0x290) = 0;
    *(float *)(a1 + 0x28C) = flt_B36C88;
  }
  if ( !(*((int (__thiscall **)(TESObjectREFRVtbl *))a5[1].vtbl->super.super.InitializeComponent + 0xF4))(a5[1].vtbl)
    && TESObjectREFR_GetOwner(a5)
    && TESOBjectREFR_IsOwnedBy(a5, a6, 1)
    || TESObjectREFR_GetOwner(a6) && TESOBjectREFR_IsOwnedBy(a6, a5, 1) )
  {
    return 0;
  }
  else
  {
    return sub_64BBC0(
             a1,
             a2,
             a3,
             a4,
             (Concurrency::details::SchedulerBase *)a5,
             (int)a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14);
  }
}
