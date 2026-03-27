void __userpurge sub_63CFB0(_DWORD *a1@<ecx>, double st5_0@<st2>, double a3@<st1>, TESObjectREFR *a2)
{
  bool v7; // bl
  double v8; // st7
  double v9; // st7
  ActorAnimData *v10; // edi
  PowerListEntry *v11; // eax
  int v12; // ebp
  double v13; // st7
  float v14; // [esp+0h] [ebp-20h]
  float v15; // [esp+4h] [ebp-1Ch]
  float v16; // [esp+18h] [ebp-8h]
  float a2a; // [esp+24h] [ebp+4h]
  float a2b; // [esp+24h] [ebp+4h]

  v7 = sub_88D150((_WORD *)a2->member.niNode, 1, 0);
  if ( v7 )
  {
    v16 = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*a1 + 0x28))(a1);
    a2a = TimeGlobals_GetGameHour(&TimeGlobals);
    v8 = a2a;
    a3 = v16;
    if ( v16 <= (double)a2a )
    {
      v9 = v8 - a3;
    }
    else
    {
      a3 = a3 + dbl_A492B8;
      v9 = a3 - v8;
    }
    a2b = v9;
    v7 = sub_4029D0(&TimeGlobals) * dbl_A59B38 > a2b;
  }
  v10 = (ActorAnimData *)a1[0x5F];
  if ( v10 )
  {
    v11 = sub_4706E0(v10, 0);
    v12 = (int)v11;
    if ( v11 )
    {
      if ( TESAnimGroup_GetAnimationGroup((TESAnimGroup *)v11[0xD].data) == 0x20 )
      {
        v15 = flt_A30634;
        v13 = sub_470CE0(v12);
        v14 = v13;
        sub_476D10((AnimSequenceSingle *)v10, (int)v10, st5_0, a3, v13, (int)a2, v14, v15);
        sub_474510(v10, a2);
      }
    }
  }
  if ( !v7 )
  {
    sub_5E9E70(a2);
    a2->vtbl->Unk_51(a2);
    ((void (__thiscall *)(TESObjectREFR *, int))a2->vtbl->super.Unk_27)(a2, 1);
    sub_4DC550(a2);
    sub_424870(&a2->member.baseExtraList, (int)a2);
  }
}
