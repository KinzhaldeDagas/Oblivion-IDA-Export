// positive sp value has been detected, the output may be wrong!
void __userpurge AbsorbEffect_Update_::UpdateVFX(
        TESObjectREFR *a1@<ebp>,
        TESObjectREFR *a2@<edi>,
        ActiveEffect *a3@<esi>,
        double a4@<st2>,
        float a5)
{
  int *SafeFloatPointer; // eax
  TESObjectREFRVtbl *vtbl; // ecx
  int v7; // eax
  float Distance; // [esp+Ch] [ebp-4h]

  if ( a3->members.bTerminated
    || !a2
    || !a2->vtbl->GetNiNode(a2)
    || a2->vtbl->IsDead(a2, 0)
    || !a1
    || !a1->vtbl->GetNiNode(a1)
    || a1->vtbl->IsDead(a1, 0)
    || (Distance = TesObjectREF_GetDistance(a1, a2, 0),
        SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&unk_B37E70),
        Calc_GetCombatDistance(*(float *)SafeFloatPointer) < Distance)
    || (vtbl = a1[1].vtbl) != 0
    && (v7 = (*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0xEC))(vtbl)) != 0
    && !*(_BYTE *)(v7 + 8) )
  {
    ActiveEffect_Base_Remove(a3, (char)a1, a4, 0);
  }
  if ( !a3->members.bTerminated )
    sub_68CC50((float **)a3, a5);
}
