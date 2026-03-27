// positive sp value has been detected, the output may be wrong!
void __userpurge def_619DD6(char a1@<bl>, int a2@<ebp>, int a3@<edi>, int *a4@<esi>, float a5, int a6, char a7)
{
  TESForm *ActorBaseForm; // eax
  double v8; // st7
  int v9; // eax
  int *SafeFloatPointer; // eax
  TESObjectREFR **v11; // eax
  TESObjectREFR **v12; // esi
  int v13; // edi
  _DWORD *v14; // esi
  int v15; // eax
  float BaseCalcAVf; // [esp-18h] [ebp-30h]
  float v17; // [esp-14h] [ebp-2Ch]
  float v18; // [esp-Ch] [ebp-24h]
  float v19; // [esp-8h] [ebp-20h]
  int Health; // [esp+1Ch] [ebp+4h]
  int v21; // [esp+1Ch] [ebp+4h]

  if ( a1 || sub_615520(a2) >= a5 )
  {
    v19 = *(float *)(a3 + 0xC);
    ActorBaseForm = Actor_GetActorBaseForm(*(Actor **)(a2 + 0x3C), 0);
    Health = TESActorBase_GetHealth(ActorBaseForm);
    v18 = (float)Health;
    v17 = (float)(*(int (__thiscall **)(int *))(*a4 + 0x284))(a4);
    BaseCalcAVf = Actor_GetBaseCalcAVf(a4, a1, a3, (int)a4, 8);
    v8 = sub_547910(BaseCalcAVf, v17, COERCE_FLOAT(8), v18, v19);
    v9 = Double_To_SInt32(v8);
    *(_DWORD *)(a3 + 4) = v9;
    if ( (_BYTE)Health )
    {
      *(_BYTE *)(a3 + 8) = 0;
      v21 = v9;
      SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&unk_B372C0);
      *(_DWORD *)(a3 + 4) = Double_To_SInt32((double)v21 * *(float *)SafeFloatPointer);
    }
  }
  else
  {
    *(_DWORD *)(a3 + 4) = 0xFFFFFFFF;
  }
  if ( (int *)sub_6135F0(a2) == a4 )
  {
    v11 = sub_6758E0((int)a4, 0xC, 1);
    v12 = v11;
    if ( v11 )
    {
      v13 = BSSimpleList_Count(v11);
      BSSimpleList_Clear(v12);
      FormHeapFree((unsigned int)v12);
      if ( v13 > 2 )
      {
        v14 = *(_DWORD **)(a2 + 0x40);
        if ( (unsigned int)BSSimpleList_Count(v14) > 1 )
        {
          v15 = v14[1];
          if ( (double)*(int *)(*(_DWORD *)v15 + 4) != flt_A30634 )
            *(_DWORD *)(*(_DWORD *)v15 + 4) += dword_B36C70;
        }
      }
    }
  }
  if ( a7 )
    sub_619C90((_DWORD *)a2);
}
