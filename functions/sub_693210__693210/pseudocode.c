char __cdecl sub_693210(TESObjectREFR *targetReference, char a2)
{
  TESEffectShader *LifeDetectedShader; // edi
  float *v3; // eax
  float *v4; // eax
  MagicShaderHitEffect *v5; // eax
  MagicShaderHitEffect *v6; // esi
  float v8; // [esp+18h] [ebp-28h]
  float v9; // [esp+18h] [ebp-28h]
  float v10; // [esp+18h] [ebp-28h]
  float v11; // [esp+1Ch] [ebp-24h]
  float v12; // [esp+20h] [ebp-20h]
  float v13; // [esp+24h] [ebp-1Ch]
  float v14; // [esp+24h] [ebp-1Ch]
  float v15; // [esp+28h] [ebp-18h]
  float v16; // [esp+2Ch] [ebp-14h]
  float v17; // [esp+30h] [ebp-10h]

  LifeDetectedShader = (TESEffectShader *)Magic_GetLifeDetectedShader(); /*0x69323a*/
  if ( !LifeDetectedShader /*0x69325e*/
    || !targetReference
    || targetReference == (TESObjectREFR *)reference
    || !targetReference[1].vtbl )
  {
    return 0; /*0x693262*/
  }
  v8 = (float)reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_DetectLifeRange); /*0x69328a*/
  v9 = MEMORY[0xB37DB8][0] * v8; /*0x693298*/
  v10 = v9 * v9; /*0x6932a2*/
  v3 = (float *)((int (*)(void))reference->vtbl->super.super.super.GetPos)(); /*0x6932a6*/
  v16 = v3[1]; /*0x6932b0*/
  v15 = *v3; /*0x6932b6*/
  v17 = v3[2]; /*0x6932ba*/
  v4 = targetReference->vtbl->GetPos(targetReference); /*0x6932c6*/
  v12 = v15 - *v4; /*0x6932ce*/
  v11 = v16 - v4[1]; /*0x6932d9*/
  v13 = v17 - v4[2]; /*0x6932e4*/
  v14 = v11 * v11 + v12 * v12 + v13 * v13; /*0x69330a*/
  if ( v14 >= (double)v10 /*0x693350*/
    || targetReference->vtbl->IsDead(targetReference, 0)
    || (*((int (__thiscall **)(TESObjectREFRVtbl *))targetReference[1].vtbl->super.super.InitializeComponent + 2))(targetReference[1].vtbl)
    || (targetReference->member.super.flags & 0x2000) != 0 )
  {
    if ( a2 ) /*0x6933e6*/
      sub_678E70((int *)&qword_B3BB2C[0x75], (int)targetReference, (LONG)LifeDetectedShader); /*0x6933ef*/
    return 0; /*0x6933f4*/
  }
  if ( !a2 ) /*0x69335a*/
  {
    v5 = (MagicShaderHitEffect *)FormHeapAlloc(0x4Cu); /*0x69335e*/
    if ( v5 ) /*0x693374*/
      v6 = MagicShaderHitEffect_constr_args2(v5, targetReference, LifeDetectedShader, kTerrainLODQuadRayDirectionZ); /*0x693389*/
    else
      v6 = 0; /*0x69338d*/
    if ( ((unsigned __int8 (__thiscall *)(MagicShaderHitEffect *))v6->super.super.vtable[1].super.super.Destructor)(v6) ) /*0x69339e*/
    {
      ActorProcessManager_RegisterTempEffect((ActorProcessManager *)&qword_B3BB2C[0x75], &v6->super.super); /*0x6933aa*/
      return 1; /*0x6933c2*/
    }
    v6->super.super.vtable->super.super.Destructor((NiRefObject *)v6, 1); /*0x6933cb*/
  }
  return 1; /*0x6933b1*/
}
