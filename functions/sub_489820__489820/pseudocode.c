void __userpurge sub_489820(int ***a1@<ecx>, double a2@<st1>, int a3, ExtraDataList *a4, char a5)
{
  int **v7; // eax
  char v8; // dl
  int *v9; // edi
  TESObjectREFR *v10; // ecx
  ExtraDataList *v11; // edx
  unsigned __int16 *EntryForForm; // ebx
  TESObjectREFR *v13; // ecx
  TESObjectREFR *v14; // ecx
  TESContainer *Container; // eax
  ExtraDataList **v16; // eax
  ExtraDataList *v17; // esi
  _DWORD *v18; // eax
  ExtraDataList *v19; // esi
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  _DWORD *v23; // eax
  _DWORD *v24; // eax
  _DWORD *v25; // edi
  _DWORD *v26; // eax
  ExtraDataList *v27; // esi
  _DWORD *v28; // eax
  char v30[260]; // [esp+28h] [ebp-114h] BYREF
  int v31; // [esp+138h] [ebp-4h]

  v7 = *a1; /*0x48986f*/
  v8 = 1; /*0x489877*/
  if ( !*a1 ) /*0x48986f*/
    goto LABEL_8; /*0x48986f*/
  while ( v8 ) /*0x489882*/
  {
    if ( *v7 && (*v7)[2] == a3 ) /*0x489891*/
      v8 = 0; /*0x489893*/
    else
      v7 = (int **)v7[1]; /*0x489897*/
    if ( !v7 ) /*0x48989c*/
      goto LABEL_8; /*0x48989c*/
  }
  if ( v7 ) /*0x48990e*/
    v9 = *v7; /*0x489910*/
  else
LABEL_8:
    v9 = 0; /*0x48989e*/
  v10 = (TESObjectREFR *)a1[1]; /*0x4898a0*/
  if ( v10 ) /*0x4898a5*/
    TESObjectREFR_GetContainer(v10); /*0x4898a7*/
  v11 = a4; /*0x4898ac*/
  EntryForForm = 0; /*0x4898b0*/
  if ( a4 ) /*0x4898b4*/
  {
    if ( sub_41DF40(a4) ) /*0x4898b8*/
    {
      memset(v30, 0, sizeof(v30)); /*0x4898cc*/
      _sprintf(v30, "%s", stru_B38BB8.value); /*0x4898e6*/
      QueueUIMessage(a3, fConstant_2, a2, v30, fConstant_2, 0, 0); /*0x4898ff*/
      return; /*0x489907*/
    }
    v11 = a4; /*0x489914*/
  }
  v13 = (TESObjectREFR *)a1[1]; /*0x489918*/
  if ( v13 ) /*0x48991d*/
  {
    if ( TESObjectREFR_GetContainer(v13) ) /*0x48991f*/
    {
      v14 = (TESObjectREFR *)a1[1]; /*0x489928*/
      if ( v14 ) /*0x48992d*/
        Container = TESObjectREFR_GetContainer(v14); /*0x48992f*/
      else
        Container = 0; /*0x489936*/
      EntryForForm = (unsigned __int16 *)TESContainer_GetEntryForForm(Container, a3); /*0x489940*/
    }
    v11 = a4; /*0x489942*/
  }
  if ( v9 ) /*0x489948*/
  {
    v16 = (ExtraDataList **)*v9; /*0x48994e*/
    if ( *v9 ) /*0x48994e*/
    {
      while ( v11 ) /*0x489956*/
      {
        v17 = *v16; /*0x489958*/
        if ( *v16 == v11 ) /*0x48995c*/
        {
          sub_422BA0(v17, a5); /*0x48999c*/
          if ( ExtraDataList_HasWorn(v17, 0) ) /*0x4899a5*/
          {
            switch ( *(_BYTE *)(v9[2] + 4) ) /*0x4899cc*/
            {
              case 0x14: /*0x4899cc*/
                if ( reference->super.super.super.process->GetEquippedShieldData( /*0x489a47*/
                       reference->super.super.super.process,
                       1) )
                {
                  v20 = ((int (__stdcall *)(int))reference->super.super.super.process->GetEquippedShieldData)(1); /*0x489a62*/
                  goto LABEL_41; /*0x489a62*/
                }
                break; /*0x489a62*/
              case 0x1A: /*0x4899cc*/
                if ( reference->super.super.super.process->GetEquippedLightData(reference->super.super.super.process, 1) ) /*0x489a76*/
                {
                  v20 = ((int (__stdcall *)(int))reference->super.super.super.process->GetEquippedLightData)(1); /*0x489a93*/
                  goto LABEL_41; /*0x489a93*/
                }
                break; /*0x489a93*/
              case 0x21: /*0x4899cc*/
                if ( reference->super.super.super.process->GetEquippedWeaponData( /*0x4899e6*/
                       reference->super.super.super.process,
                       1) )
                {
                  v20 = ((int (__stdcall *)(int))reference->super.super.super.process->GetEquippedWeaponData)(1); /*0x489a01*/
                  goto LABEL_41; /*0x489a01*/
                }
                break; /*0x489a01*/
              case 0x22: /*0x4899cc*/
                if ( reference->super.super.super.process->GetEquippedAmmoData(reference->super.super.super.process, 1) ) /*0x489a18*/
                {
                  v20 = ((int (__stdcall *)(int))reference->super.super.super.process->GetEquippedAmmoData)(1); /*0x489a33*/
LABEL_41:
                  if ( v9[2] == *(_DWORD *)(v20 + 8) ) /*0x489a9b*/
                    sub_422BA0(**(ExtraDataList ***)v20, a5); /*0x489aa6*/
                }
                break; /*0x489aab*/
              default:
                return;
            }
          }
          return;
        }
        v16 = (ExtraDataList **)v16[1]; /*0x48995e*/
        if ( !v16 ) /*0x489963*/
          break; /*0x489963*/
      }
    }
    v18 = (_DWORD *)FormHeapAlloc(0x14u); /*0x489965*/
    v31 = 0; /*0x489977*/
    if ( v18 ) /*0x48997e*/
      v19 = (ExtraDataList *)ExtraDataList_constr(v18); /*0x48998b*/
    else
      v19 = 0; /*0x489ab0*/
    v31 = 0xFFFFFFFF; /*0x489abc*/
    sub_422BA0(v19, a5); /*0x489ac7*/
    LOWORD(v21) = 0; /*0x489acc*/
    if ( EntryForForm ) /*0x489ad0*/
      v21 = *(_DWORD *)EntryForForm; /*0x489ad2*/
    v22 = *((unsigned __int16 *)v9 + 2); /*0x489ad4*/
    LOWORD(v22) = v21 + v22; /*0x489ad8*/
    ExtraDataList_SetExtraCount(v19, v22); /*0x489ade*/
    if ( !*v9 ) /*0x489ae3*/
    {
      v23 = (_DWORD *)FormHeapAlloc(8u); /*0x489ae9*/
      if ( v23 ) /*0x489af3*/
      {
        *v23 = 0; /*0x489af5*/
        v23[1] = 0; /*0x489af7*/
        *v9 = (int)v23; /*0x489afd*/
        BSSimpleList_PushFront(v23, (int)v19); /*0x489aff*/
        return; /*0x489b04*/
      }
      *v9 = 0; /*0x489b0b*/
    }
    BSSimpleList_PushFront((_DWORD *)*v9, (int)v19); /*0x489b10*/
  }
  else
  {
    v24 = (_DWORD *)FormHeapAlloc(0xCu); /*0x489b1c*/
    v31 = 1; /*0x489b2a*/
    if ( v24 ) /*0x489b35*/
      v25 = ContainerEntryExtraData_constr(v24, a3, 0); /*0x489b41*/
    else
      v25 = 0; /*0x489b45*/
    v26 = (_DWORD *)FormHeapAlloc(0x14u); /*0x489b53*/
    v31 = 2; /*0x489b61*/
    if ( v26 ) /*0x489b6c*/
      v27 = (ExtraDataList *)ExtraDataList_constr(v26); /*0x489b75*/
    else
      v27 = 0; /*0x489b79*/
    v31 = 0xFFFFFFFF; /*0x489b85*/
    sub_422BA0(v27, a5); /*0x489b8c*/
    ExtraDataList_SetExtraCount(v27, *EntryForForm); /*0x489b97*/
    if ( !*v25 ) /*0x489b9c*/
    {
      v28 = (_DWORD *)FormHeapAlloc(8u); /*0x489ba3*/
      if ( v28 ) /*0x489bad*/
      {
        *v28 = 0; /*0x489baf*/
        v28[1] = 0; /*0x489bb5*/
      }
      else
      {
        v28 = 0; /*0x489bbe*/
      }
      *v25 = v28; /*0x489bc0*/
    }
    BSSimpleList_PushFront((_DWORD *)*v25, (int)v27); /*0x489bc5*/
    BSSimpleList_PushFront(*a1, (int)v25); /*0x489bd1*/
  }
}
