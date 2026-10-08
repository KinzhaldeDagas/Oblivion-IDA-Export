PlayerCharacter *__usercall sub_5F0410@<eax>(TESObjectREFR *a1@<ecx>, int a2@<ebp>)
{
  TESObjectREFR *v3; // esi
  bool v4; // zf
  TESObjectREFRVtbl *vtbl; // eax
  PlayerCharacter *result; // eax
  PlayerCharacter *v7; // ebx
  TESObjectREFRVtbl *v8; // ebp
  TESObjectREFRVtbl *v9; // eax
  LowProcess *process; // ecx
  MobileObject *v11; // ecx
  NiObjectNET *niNode; // edi
  bhkCharacterProxy *CharProxy; // eax
  int v14; // ecx
  int v15; // esi
  float *v17; // [esp+30h] [ebp-8h]
  float *AnimDataByPerspective; // [esp+34h] [ebp-4h]
  int retaddr; // [esp+38h] [ebp+0h]

  v3 = 0; /*0x5f0420*/
  v4 = ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[2].super.Unk_0C)(a1) == 0; /*0x5f0424*/
  vtbl = a1->vtbl; /*0x5f0426*/
  if ( v4 ) /*0x5f042a*/
  {
    result = (PlayerCharacter *)((int (__thiscall *)(TESObjectREFR *))vtbl[2].super.Unk_0E)(a1); /*0x5f0440*/
    if ( !result ) /*0x5f0444*/
      return result; /*0x5f0444*/
    if ( a1->vtbl->GetBaseForm(a1)->member.type == kFormType_Creature ) /*0x5f045a*/
      v3 = a1; /*0x5f045c*/
    result = (PlayerCharacter *)((int (__thiscall *)(TESObjectREFR *))a1->vtbl[2].super.Unk_0E)(a1); /*0x5f0468*/
    v7 = result; /*0x5f046a*/
  }
  else
  {
    result = (PlayerCharacter *)((int (__thiscall *)(TESObjectREFR *))vtbl[2].super.Unk_0C)(a1); /*0x5f0432*/
    v3 = (TESObjectREFR *)result; /*0x5f0434*/
    v7 = (PlayerCharacter *)a1; /*0x5f0436*/
  }
  if ( v3 ) /*0x5f046e*/
  {
    if ( v7 ) /*0x5f0476*/
    {
      v8 = v3[1].vtbl; /*0x5f0485*/
      retaddr = ((int (__thiscall *)(TESObjectREFR *, int))v3->vtbl->GetAnimData)(v3, a2); /*0x5f048c*/
      AnimDataByPerspective = (float *)v7->vtbl->super.super.super.GetAnimData((TESObjectREFR *)v7); /*0x5f04a4*/
      if ( a1 == (TESObjectREFR *)reference ) /*0x5f04a8*/
        AnimDataByPerspective = (float *)PlayerCharacter_GetAnimDataByPerspective(reference, 0); /*0x5f04b1*/
      ((void (__thiscall *)(TESObjectREFR *, _DWORD))v3->vtbl[2].super.Unk_0F)(v3, 0); /*0x5f04c1*/
      v9 = v3[1].vtbl; /*0x5f04c3*/
      if ( v9 ) /*0x5f04c8*/
        v9->super.super.CopyFromBase = 0; /*0x5f04ca*/
      if ( v3[1].vtbl ) /*0x5f04d1*/
        (*((void (__thiscall **)(TESObjectREFRVtbl *, int, _DWORD))v3[1].vtbl->super.super.InitializeComponent + 0xB1))( /*0x5f04e6*/
          v3[1].vtbl,
          0xF,
          0);
      ((void (__thiscall *)(PlayerCharacter *, _DWORD))v7->vtbl->super.Unk_E1)(v7, 0); /*0x5f04f4*/
      if ( v8 ) /*0x5f04f8*/
        (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, _DWORD, _DWORD, int))v8->super.super.InitializeComponent /*0x5f050c*/
         + 0xDC))(
          v8,
          v3,
          0,
          0,
          0x7F);
      process = v7->super.super.super.process; /*0x5f050e*/
      if ( process ) /*0x5f0514*/
        process->SetSleepState(process, (Actor *)v7, 0, 0, 0x7F); /*0x5f0525*/
      if ( v17 ) /*0x5f052d*/
      {
        v17[3] = g_zeroNiPoint3.x; /*0x5f0535*/
        v17[4] = g_zeroNiPoint3.y; /*0x5f053e*/
        v17[5] = g_zeroNiPoint3.z; /*0x5f0547*/
      }
      if ( AnimDataByPerspective ) /*0x5f0550*/
      {
        AnimDataByPerspective[3] = g_zeroNiPoint3.x; /*0x5f0558*/
        AnimDataByPerspective[4] = g_zeroNiPoint3.y; /*0x5f0561*/
        AnimDataByPerspective[5] = g_zeroNiPoint3.z; /*0x5f056a*/
      }
      sub_5E13D0(v3, 0); /*0x5f0571*/
      if ( v7 == reference ) /*0x5f057d*/
      {
        v11 = (MobileObject *)v3; /*0x5f0581*/
        reference->unk61C = 0.0; /*0x5f0583*/
        niNode = (NiObjectNET *)v3->member.niNode; /*0x5f0589*/
      }
      else
      {
        niNode = (NiObjectNET *)v7->super.super.super.super.niNode; /*0x5f058e*/
        v11 = (MobileObject *)v7; /*0x5f0591*/
      }
      CharProxy = MobileObject_GetCharProxy(v11); /*0x5f0593*/
      v14 = (unsigned __int16)(dword_B2EB3C + 1); /*0x5f05a1*/
      dword_B2EB3C = v14; /*0x5f05a7*/
      if ( !v14 ) /*0x5f05ad*/
      {
        v14 = 0xA; /*0x5f05af*/
        dword_B2EB3C = 0xA; /*0x5f05b4*/
      }
      v15 = v14; /*0x5f05bc*/
      if ( CharProxy ) /*0x5f05be*/
        sub_5EA350(CharProxy, v14); /*0x5f05c3*/
      sub_88D0E0(niNode, v15, 1, 0); /*0x5f05ce*/
      return (PlayerCharacter *)sub_65AC20((MobileObject *)v7, 0); /*0x5f05da*/
    }
  }
  return result; /*0x5f05df*/
}
