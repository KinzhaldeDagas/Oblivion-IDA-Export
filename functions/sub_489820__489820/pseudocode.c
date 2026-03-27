void __userpurge sub_489820(int ***a1@<ecx>, double a2@<st2>, int a3, ExtraDataList *a4, char a5)
{
  int **v6; // eax
  char v7; // dl
  int *v8; // edi
  TESObjectREFR *v9; // ecx
  ExtraDataList *v10; // edx
  unsigned __int16 *EntryForForm; // ebx
  TESObjectREFR *v12; // ecx
  TESObjectREFR *v13; // ecx
  TESContainer *Container; // eax
  ExtraDataList **v15; // eax
  ExtraDataList *v16; // esi
  _DWORD *v17; // eax
  ExtraDataList *v18; // esi
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  _DWORD *v22; // eax
  _DWORD *v23; // eax
  _DWORD *v24; // edi
  _DWORD *v25; // eax
  ExtraDataList *v26; // esi
  _DWORD *v27; // eax
  char v29[260]; // [esp+28h] [ebp-114h] BYREF
  int v30; // [esp+138h] [ebp-4h]

  v6 = *a1;
  v7 = 1;
  if ( !*a1 )
    goto LABEL_8;
  while ( v7 )
  {
    if ( *v6 && (*v6)[2] == a3 )
      v7 = 0;
    else
      v6 = (int **)v6[1];
    if ( !v6 )
      goto LABEL_8;
  }
  if ( v6 )
    v8 = *v6;
  else
LABEL_8:
    v8 = 0;
  v9 = (TESObjectREFR *)a1[1];
  if ( v9 )
    TESObjectREFR_GetContainer(v9);
  v10 = a4;
  EntryForForm = 0;
  if ( a4 )
  {
    if ( sub_41DF40(a4) )
    {
      memset(v29, 0, sizeof(v29));
      _sprintf(v29, "%s", (const char *)dword_B38BB8);
      QueueUIMessage(a3, a2, fConstant_2, (int)v29, fConstant_2, 0, 0);
      return;
    }
    v10 = a4;
  }
  v12 = (TESObjectREFR *)a1[1];
  if ( v12 )
  {
    if ( TESObjectREFR_GetContainer(v12) )
    {
      v13 = (TESObjectREFR *)a1[1];
      if ( v13 )
        Container = TESObjectREFR_GetContainer(v13);
      else
        Container = 0;
      EntryForForm = (unsigned __int16 *)TESContainer_GetEntryForForm(Container, a3);
    }
    v10 = a4;
  }
  if ( v8 )
  {
    v15 = (ExtraDataList **)*v8;
    if ( *v8 )
    {
      while ( v10 )
      {
        v16 = *v15;
        if ( *v15 == v10 )
        {
          sub_422BA0(v16, a5);
          if ( ExtraDataList_HasWorn(v16, 0) )
          {
            switch ( *(_BYTE *)(v8[2] + 4) )
            {
              case 0x14:
                if ( TESDataHandler_g_PlayerRef->super.super.super.process->GetEquippedShieldData(
                       TESDataHandler_g_PlayerRef->super.super.super.process,
                       1) )
                {
                  v19 = ((int (__stdcall *)(int))TESDataHandler_g_PlayerRef->super.super.super.process->GetEquippedShieldData)(1);
                  goto LABEL_41;
                }
                break;
              case 0x1A:
                if ( TESDataHandler_g_PlayerRef->super.super.super.process->GetEquippedLightData(
                       TESDataHandler_g_PlayerRef->super.super.super.process,
                       1) )
                {
                  v19 = ((int (__stdcall *)(int))TESDataHandler_g_PlayerRef->super.super.super.process->GetEquippedLightData)(1);
                  goto LABEL_41;
                }
                break;
              case 0x21:
                if ( TESDataHandler_g_PlayerRef->super.super.super.process->GetEquippedWeaponData(
                       TESDataHandler_g_PlayerRef->super.super.super.process,
                       1) )
                {
                  v19 = ((int (__stdcall *)(int))TESDataHandler_g_PlayerRef->super.super.super.process->GetEquippedWeaponData)(1);
                  goto LABEL_41;
                }
                break;
              case 0x22:
                if ( TESDataHandler_g_PlayerRef->super.super.super.process->GetEquippedAmmoData(
                       TESDataHandler_g_PlayerRef->super.super.super.process,
                       1) )
                {
                  v19 = ((int (__stdcall *)(int))TESDataHandler_g_PlayerRef->super.super.super.process->GetEquippedAmmoData)(1);
LABEL_41:
                  if ( v8[2] == *(_DWORD *)(v19 + 8) )
                    sub_422BA0(**(ExtraDataList ***)v19, a5);
                }
                break;
              default:
                return;
            }
          }
          return;
        }
        v15 = (ExtraDataList **)v15[1];
        if ( !v15 )
          break;
      }
    }
    v17 = (_DWORD *)FormHeapAlloc(0x14u);
    v30 = 0;
    if ( v17 )
      v18 = (ExtraDataList *)ExtraDataList_constr(v17);
    else
      v18 = 0;
    v30 = 0xFFFFFFFF;
    sub_422BA0(v18, a5);
    LOWORD(v20) = 0;
    if ( EntryForForm )
      v20 = *(_DWORD *)EntryForForm;
    v21 = *((unsigned __int16 *)v8 + 2);
    LOWORD(v21) = v20 + v21;
    ExtraDataList_SetExtraCount(v18, v21);
    if ( !*v8 )
    {
      v22 = (_DWORD *)FormHeapAlloc(8u);
      if ( v22 )
      {
        *v22 = 0;
        v22[1] = 0;
        *v8 = (int)v22;
        BSSimpleList_PushFront(v22, (int)v18);
        return;
      }
      *v8 = 0;
    }
    BSSimpleList_PushFront((_DWORD *)*v8, (int)v18);
  }
  else
  {
    v23 = (_DWORD *)FormHeapAlloc(0xCu);
    v30 = 1;
    if ( v23 )
      v24 = ContainerEntryExtraData_constr(v23, a3, 0);
    else
      v24 = 0;
    v25 = (_DWORD *)FormHeapAlloc(0x14u);
    v30 = 2;
    if ( v25 )
      v26 = (ExtraDataList *)ExtraDataList_constr(v25);
    else
      v26 = 0;
    v30 = 0xFFFFFFFF;
    sub_422BA0(v26, a5);
    ExtraDataList_SetExtraCount(v26, *EntryForForm);
    if ( !*v24 )
    {
      v27 = (_DWORD *)FormHeapAlloc(8u);
      if ( v27 )
      {
        *v27 = 0;
        v27[1] = 0;
      }
      else
      {
        v27 = 0;
      }
      *v24 = v27;
    }
    BSSimpleList_PushFront((_DWORD *)*v24, (int)v26);
    BSSimpleList_PushFront(*a1, (int)v24);
  }
}
