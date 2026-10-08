// positive sp value has been detected, the output may be wrong!
void __userpurge def_619DD6(char a1@<bl>, int a2@<ebp>, int a3@<edi>, int *a4@<esi>, float a5, int a6, char a7)
{
  TESForm *ActorBaseForm; // eax
  double v8; // st7
  int v9; // eax
  float *SafeFloatPointer; // eax
  Actor **v11; // eax
  Actor **v12; // esi
  int v13; // edi
  _DWORD *v14; // esi
  int v15; // eax
  float BaseCalcAVf; // [esp-18h] [ebp-30h]
  float v17; // [esp-14h] [ebp-2Ch]
  float v18; // [esp-Ch] [ebp-24h]
  float v19; // [esp-8h] [ebp-20h]
  int Health; // [esp+1Ch] [ebp+4h]
  int v21; // [esp+1Ch] [ebp+4h]

  if ( a1 || CombatController_GetDesiredCombatDistance((void *)a2) >= (double)a5 ) /*0x619e4a*/
  {
    v19 = *(float *)(a3 + 0xC); /*0x619e69*/
    ActorBaseForm = Actor_GetActorBaseForm(*(Actor **)(a2 + 0x3C), 0); /*0x619e6e*/
    Health = TESActorBase_GetHealth(ActorBaseForm); /*0x619e7a*/
    v18 = (float)Health; /*0x619e8b*/
    v17 = (float)(*(int (__thiscall **)(int *))(*a4 + 0x284))(a4); /*0x619e9f*/
    BaseCalcAVf = Actor_GetBaseCalcAVf(a4, a1, a3, (int)a4, 8); /*0x619eaa*/
    v8 = sub_547910(BaseCalcAVf, v17, COERCE_FLOAT(8), v18, v19); /*0x619ead*/
    v9 = Double_To_SInt32(v8); /*0x619eb5*/
    *(_DWORD *)(a3 + 4) = v9; /*0x619ebf*/
    if ( (_BYTE)Health ) /*0x619ec2*/
    {
      *(_BYTE *)(a3 + 8) = 0; /*0x619ec9*/
      v21 = v9; /*0x619ecd*/
      SafeFloatPointer = GameSetting_GetSafeFloatPointer(unk_B372C0); /*0x619ed1*/
      *(_DWORD *)(a3 + 4) = Double_To_SInt32((double)v21 * *SafeFloatPointer); /*0x619ee1*/
    }
  }
  else
  {
    *(_DWORD *)(a3 + 4) = 0xFFFFFFFF; /*0x619e4c*/
  }
  if ( (int *)CombatController_GetCurrentTarget(a2) == a4 ) /*0x619eed*/
  {
    v11 = sub_6758E0((ActorProcessManager *)&qword_B3BB2C[0x75], (TESObjectREFR *)a4, 0xC, 1); /*0x619ef9*/
    v12 = v11; /*0x619efe*/
    if ( v11 ) /*0x619f02*/
    {
      v13 = BSSimpleList_Count(v11); /*0x619f0d*/
      BSSimpleList_Clear(v12); /*0x619f0f*/
      FormHeapFree((unsigned int)v12); /*0x619f15*/
      if ( v13 > 2 ) /*0x619f20*/
      {
        v14 = *(_DWORD **)(a2 + 0x40); /*0x619f22*/
        if ( (unsigned int)BSSimpleList_Count(v14) > 1 ) /*0x619f2f*/
        {
          v15 = v14[1]; /*0x619f31*/
          if ( (double)*(int *)(*(_DWORD *)v15 + 4) != kTerrainLODQuadRayDirectionZ ) /*0x619f4c*/
            *(_DWORD *)(*(_DWORD *)v15 + 4) += stru_B36C70.value; /*0x619f55*/
        }
      }
    }
  }
  if ( a7 ) /*0x619f74*/
    CombatController_UpdateTargetRetentionAndSort((_DWORD *)a2); /*0x619f78*/
}
