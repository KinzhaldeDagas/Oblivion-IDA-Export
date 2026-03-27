void __userpurge sub_5F5B70(
        TESObjectREFR *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5,
        float a6,
        TESObjectREFR *a7,
        float *a8)
{
  int v10; // eax
  int v11; // ebx
  int v12; // edi
  char *v13; // eax
  int BaseCalcAVi; // eax
  int v15; // eax
  int v16; // eax
  const char *v17; // edi
  char *v18; // eax
  double v19; // [esp+14h] [ebp-1Ch]
  char *Name; // [esp+1Ch] [ebp-14h]
  float v21; // [esp+1Ch] [ebp-14h]
  float v22; // [esp+34h] [ebp+4h]
  float v23; // [esp+3Ch] [ebp+Ch]

  v10 = (*((int (__usercall **)@<eax>(TESObjectREFRVtbl *@<ecx>, int, double@<st0>, double@<st1>))a7[1].vtbl->super.super.InitializeComponent
         + 0x3E))(
          a7[1].vtbl,
          1,
          a4,
          a3);
  v11 = v10;
  if ( v10 )
    v12 = v10;
  else
    v12 = (*((int (__thiscall **)(TESObjectREFRVtbl *, int))a7[1].vtbl->super.super.InitializeComponent + 0x3B))(
            a7[1].vtbl,
            1);
  v23 = *(float *)&a5 * a6;
  if ( byte_B3B908 )
  {
    Name = TESObjectREFR_GetName(a1);
    v19 = a6 * fCostant_100;
    v13 = TESObjectREFR_GetName(a7);
    Interface_ConsolePrint("%.20s blocks %.0f%% of %.20s's blow!", v13, v19, Name);
  }
  if ( a6 > 0.0 || !v12 )
    ((void (__thiscall *)(TESObjectREFR *, int, _DWORD, _DWORD))a7->vtbl[2].super.GetSaveSize)(a7, 0xF, 0, 0.0);
  BaseCalcAVi = Actor_GetBaseCalcAVi((int *)a7, v11, v12, (int)a7, 0xF);
  v15 = Calc_MasteryFromSkill(BaseCalcAVi);
  if ( v15 )
  {
    if ( v15 > 1 )
      goto LABEL_18;
  }
  else
  {
    v16 = ((int (__thiscall *)(TESObjectREFR *, int))a7->vtbl[1].Unk_37)(a7, 0xF);
    v22 = sub_547590(v16, a5, a6);
    v21 = -v22;
    Actor_ModFatigue_(a7, v21);
  }
  if ( v12 )
  {
    if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *, int, float, _DWORD))a7->vtbl[1].Unk_47)(
           a7,
           v12,
           COERCE_FLOAT(LODWORD(v23)),
           0) )
    {
      sub_5F4AE0((Actor *)a7, a2, a3, v23, 0);
      if ( byte_B3B908 )
      {
        v17 = "shield";
        if ( !v11 )
          v17 = "weapon";
        TESObjectREFR_GetName(a1);
        v18 = TESObjectREFR_GetName(a7);
        Interface_ConsolePrint("%.20s's %s shatters under the blow and is now useless!", v18, v17);
      }
    }
  }
LABEL_18:
  if ( a8 )
  {
    if ( flt_B37060 <= (double)a6 )
      sub_608DA0(a8, (int)&Vector3_InitValue_, (int)&Vector3_InitValue_);
  }
}
