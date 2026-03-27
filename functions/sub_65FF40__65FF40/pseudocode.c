void __usercall sub_65FF40(Actor *a1@<ecx>, int a2@<edi>, double a3@<st1>, double a4@<st0>)
{
  double v5; // st5
  AnimSequenceSingle *v7; // ecx
  AnimSequenceSingle *AnimData; // eax
  int v9; // eax
  int v10; // ebp
  ExtraDataList **v11; // ecx
  ExtraDataList *v12; // edi
  int v13; // eax
  _DWORD *v14; // eax
  unsigned int v15; // ebx
  float v16; // [esp+14h] [ebp-4h]
  float TimeLeft; // [esp+14h] [ebp-4h]
  float v18; // [esp+14h] [ebp-4h]

  v5 = flt_B33E9C;
  v16 = flt_B33E9C;
  v7 = (AnimSequenceSingle *)a1[5].members.unk0B4[1];
  if ( v7 )
  {
    v5 = v16;
    sub_476D10(v7, a2, v16, a3, a4, (int)a1, v16, flt_A30634);
  }
  AnimData = (AnimSequenceSingle *)TESObjectREFR_GetAnimData(a1);
  if ( AnimData )
    sub_476D10(AnimData, a2, v5, a3, v16, (int)a1, v16, flt_A30634);
  a1->vtbl->super.super.Unk_3F((TESObjectREFR *)a1);
  v9 = (int)a1->members.super.process->GetEquippedLightData(a1->members.super.process, 1);
  if ( v9 )
  {
    v10 = *(_DWORD *)(v9 + 8);
    if ( (double)*(int *)(v10 + 0x70) >= *(float *)&SrcStr )
    {
      v11 = *(ExtraDataList ***)v9;
      if ( *(_DWORD *)v9 )
      {
        v12 = *v11;
        if ( *v11 )
        {
          TimeLeft = ExtraDataList_GetTimeLeft(*v11);
          v18 = TimeLeft - flt_B33E9C;
          sub_41EDF0(v12, (BSExtraDataVtbl *)LODWORD(v18));
          if ( v18 <= 0.0 )
          {
            v13 = sub_447490("ITMTorchHeldExt");
            if ( v13 )
            {
              v14 = (_DWORD *)sub_65AC50(a1, *(_DWORD *)(v13 + 0xC), 0, 0x102, 1);
              v15 = (unsigned int)v14;
              if ( v14 )
              {
                sub_6B73E0(v14);
                FormHeapFree(v15);
              }
            }
            if ( ExtraDataList_HasWorn(v12, 1) )
            {
              sub_41F6A0(v12, 1);
              SetWorn(v12, 1, 0);
            }
            a1->vtbl->super.super.RemoveItem(
              (TESObjectREFR *)a1,
              (TESForm *)v10,
              (BaseExtraList *)v12,
              1,
              0,
              0,
              0,
              0,
              0,
              1,
              0);
          }
        }
      }
    }
  }
}
