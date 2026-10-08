// positive sp value has been detected, the output may be wrong!
double __userpurge AbsorbEffect_Update_::UpdateVFX@<st0>(
        TESObjectREFR *a1@<ebp>,
        TESObjectREFR *a2@<edi>,
        ActiveEffect *a3@<esi>,
        double result@<st0>,
        float a5)
{
  float *SafeFloatPointer; // eax
  TESObjectREFRVtbl *vtbl; // ecx
  int v8; // eax
  float v9; // [esp+Ch] [ebp-4h]

  if ( a3->members.bTerminated /*0x68d26c*/
    || !a2
    || !a2->vtbl->GetNiNode(a2)
    || a2->vtbl->IsDead(a2, 0)
    || !a1
    || !a1->vtbl->GetNiNode(a1)
    || a1->vtbl->IsDead(a1, 0)
    || (TesObjectREF_GetDistance(a1, a2, 0),
        v9 = result,
        SafeFloatPointer = GameSetting_GetSafeFloatPointer(unk_B37E70),
        Calc_GetCombatDistance(*SafeFloatPointer) < (double)v9)
    || (vtbl = a1[1].vtbl) != 0
    && (v8 = (*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0xEC))(vtbl)) != 0
    && !*(_BYTE *)(v8 + 8) )
  {
    result = ActiveEffect_Base_Remove(a3, (char)a1, result, 0); /*0x68d276*/
  }
  if ( !a3->members.bTerminated ) /*0x68d27b*/
    sub_68CC50((float **)a3, a5); /*0x68d28b*/
  return result; /*0x68d296*/
}
