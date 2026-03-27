void __userpurge sub_5ED5A0(
        PlayerCharacter *a1@<ecx>,
        char a2@<bpl>,
        int a3@<edi>,
        double a4@<st1>,
        double a5@<st0>,
        int a6)
{
  int v8; // eax
  bool v9; // zf
  int v10; // eax
  int v11; // edi
  double v12; // st5
  double v13; // st7
  int v14; // eax
  int v15; // eax
  MagicTarget *v16; // eax
  _DWORD *v17; // edi
  TESObjectREFRVtbl *process; // ecx
  int FXEffect; // eax
  int v20; // edi
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  unsigned int v23; // esi
  int *v24; // [esp-4h] [ebp-18h]
  int v25; // [esp+4h] [ebp-10h]
  float v26; // [esp+18h] [ebp+4h]

  if ( a6 )
  {
    v8 = *(_DWORD *)(a6 + 8);
    if ( v8 )
    {
      if ( *(_BYTE *)(v8 + 4) == 0x21 )
      {
        v9 = v8 == 0xFFFFFFA0;
        v10 = v8 + 0x60;
        v25 = a3;
        if ( v9 )
          v11 = 0;
        else
          v11 = *(_DWORD *)(v10 + 4);
        if ( v11 )
        {
          v12 = sub_4849C0((void **)a6);
          v26 = a5;
          v13 = v26;
          (**(void (__thiscall ***)(int, PlayerCharacter *))(v11 + 0x24))(v11 + 0x24, a1);
          if ( v12 <= v26 )
          {
            if ( a1 != TESDataHandler_g_PlayerRef && a1->vtbl->super.IsInCombat((Actor *)a1, 1) )
            {
              v14 = ((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, int, double@<st0>, double@<st1>))a1->vtbl->super.GetCombatController)(
                      a1,
                      v25,
                      v13,
                      a4);
              if ( v14 && (v15 = sub_6135F0(v14)) != 0 )
                v16 = (MagicTarget *)(v15 + 0x68);
              else
                v16 = 0;
              a1->super.super.magicCaster.vtbl->SetCastingTarget(&a1->super.super.magicCaster, v16);
            }
            v17 = (_DWORD *)(v11 + 0x18);
            ((void (__usercall *)(MagicCaster *@<ecx>, _DWORD *, int, double@<st0>, double@<st1>))a1->super.super.magicCaster.vtbl->SetActiveMagicItem)(
              &a1->super.super.magicCaster,
              v17,
              v25,
              v13,
              a4);
            process = (TESObjectREFRVtbl *)a1->super.super.super.process;
            if ( process )
              (*((void (__thiscall **)(TESObjectREFRVtbl *, int))process->super.super.InitializeComponent + 0xAF))(
                process,
                1);
            FXEffect = MagicItem_GetFXEffect(v17, 0);
            v20 = FXEffect;
            if ( FXEffect )
            {
              if ( *(_DWORD *)(FXEffect + 0x80) )
              {
                if ( a1->vtbl->super.GetCombatController(a1) )
                {
                  v24 = *(int **)(*(_DWORD *)(v20 + 0x80) + 0xC);
                  v21 = (_DWORD *)((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, double@<st0>, double@<st1>))a1->vtbl->super.GetCombatController)(
                                    a1,
                                    v13,
                                    a4);
                  sub_619FA0(v21, v24, 0);
                }
                else if ( a1 == TESDataHandler_g_PlayerRef )
                {
                  sub_663520(
                    (LONG)TESDataHandler_g_PlayerRef,
                    a2,
                    v12,
                    a4,
                    v13,
                    *(_DWORD *)(*(_DWORD *)(v20 + 0x80) + 0xC));
                }
                else
                {
                  v22 = (_DWORD *)sub_65AC50(a1, *(_DWORD *)(*(_DWORD *)(v20 + 0x80) + 0xC), 0, 0x102, 1);
                  v23 = (unsigned int)v22;
                  if ( v22 )
                  {
                    sub_6B73E0(v22);
                    FormHeapFree(v23);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
