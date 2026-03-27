char __userpurge ContainerExtraData_UnequipItem@<al>(
        float *a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        _BYTE *a7,
        TESObjectARMO *a8,
        __int16 a9,
        TESObjectREFR *a10,
        int a11,
        char a12,
        int a13)
{
  float *v13; // ebx
  unsigned int **v14; // eax
  char v17; // dl
  unsigned int *v19; // eax
  int *v21; // esi
  int v22; // edi
  TESObjectREFR *v23; // ebp
  _DWORD *v24; // ecx
  TESForm *v25; // edi
  char v26; // al
  unsigned __int16 *v27; // esi
  unsigned __int16 *v28; // eax
  TESObjectREFRVtbl *vtbl; // ecx
  unsigned __int16 *v30; // esi
  bool v31; // al
  void (__thiscall *InitializeComponent)(BaseFormComponent *); // edx
  _DWORD **v33; // eax
  bool v34; // al
  double v35; // st7
  _DWORD **v36; // eax
  int *v37; // ebp
  ExtraDataList *v38; // esi
  int v39; // eax
  TESObjectREFR *v40; // ecx
  TESContainer *Container; // eax
  SInt32 FormCount; // eax
  _DWORD *v43; // ecx
  unsigned int v44; // edx
  int v45; // [esp-4h] [ebp-18h]
  int v46; // [esp+0h] [ebp-14h]
  unsigned int *v48; // [esp+10h] [ebp-4h]
  char v49; // [esp+18h] [ebp+4h]

  __asm { fld     dword ptr ds:0A30634h }
  v13 = a1;
  v14 = *(unsigned int ***)a1;
  __asm { fst     dword ptr [ebx+8] }
  v13[2] = _ET1;
  __asm { fstp    dword ptr [ebx+0Ch] }
  v13[3] = _ET1;
  v17 = 1;
  if ( !v14 )
    return 1;
  while ( v17 )
  {
    if ( *v14 && (TESObjectARMO *)(*v14)[2] == a8 )
      v17 = 0;
    else
      v14 = (unsigned int **)v14[1];
    if ( !v14 )
      return 1;
  }
  v19 = *v14;
  v48 = v19;
  if ( !v19 )
    return 1;
  v46 = a2;
  *a7 = 1;
  v21 = (int *)*v19;
  v45 = a3;
  v49 = 1;
  if ( !*v19 )
    goto LABEL_70;
  while ( 1 )
  {
    v22 = *v21;
    if ( !*v21 )
    {
LABEL_19:
      v23 = a10;
LABEL_20:
      v13 = a1;
      goto LABEL_21;
    }
    if ( sub_41DF40((_BYTE *)*v21) && !a10->vtbl->IsDead(a10, 0) )
    {
      *a7 = 0;
      return 1;
    }
    if ( ExtraDataList_HasWorn((_BYTE *)v22, a12) && (!a11 || a11 == v22) )
      break;
    v21 = (int *)v21[1];
    if ( !v21 )
      goto LABEL_19;
  }
  v28 = (unsigned __int16 *)sub_4691B0(a8);
  v23 = a10;
  vtbl = a10[1].vtbl;
  v30 = v28;
  if ( vtbl )
  {
    switch ( *((_BYTE *)a8 + 4) )
    {
      case 0x14:
        v34 = TESBipedModelForm_CoversSlot(v28, 0xD, 0);
        InitializeComponent = a10[1].vtbl->super.super.InitializeComponent;
        if ( !v34 )
          goto LABEL_36;
        if ( (*((int (__stdcall **)(_DWORD))InitializeComponent + 0x3E))(0) )
        {
          v35 = ((double (__thiscall *)(TESObjectREFRVtbl *, _DWORD))*((_DWORD *)a10[1].vtbl->super.super.InitializeComponent
                                                                     + 0x44))(
                  a10[1].vtbl,
                  0);
          sub_4DC8F0(a10, v35, st5_0, st6_0, (char)a10, 1);
        }
        break;
      case 0x16:
        if ( TESBipedModelForm_CoversSlot(v28, 7, 0) || TESBipedModelForm_CoversSlot(v30, 6, 0) )
        {
          if ( !(*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))a10[1].vtbl->super.super.InitializeComponent
                 + 0xC8))(a10[1].vtbl) )
            sub_4DCF10(a10, (char)a10, st5_0, st6_0, st7_0, a12);
        }
        else
        {
          v31 = TESBipedModelForm_CoversSlot(v30, 8, 0);
          InitializeComponent = a10[1].vtbl->super.super.InitializeComponent;
          if ( v31 )
          {
            if ( !(*((unsigned __int8 (**)(void))InitializeComponent + 0xC8))() )
              sub_4DD000(a10, (char)a10, st5_0, st6_0, st7_0);
          }
          else
          {
LABEL_36:
            (*((void (__stdcall **)(int))InitializeComponent + 0xC7))(1);
          }
        }
        break;
      case 0x1A:
        if ( (*((int (__thiscall **)(TESObjectREFRVtbl *, _DWORD))vtbl->super.super.InitializeComponent + 0x3C))(
               vtbl,
               0) )
        {
          UnequipLight(a10, st5_0, st6_0, st7_0);
          (*((void (__stdcall **)(_DWORD))a10[1].vtbl->super.super.InitializeComponent + 0x42))(0);
        }
        break;
      case 0x21:
        v33 = (_DWORD **)(*((int (__thiscall **)(TESObjectREFRVtbl *, int))vtbl->super.super.InitializeComponent + 0x3B))(
                           vtbl,
                           1);
        if ( v33 )
        {
          if ( **v33 == v22 || !a11 )
          {
            UnequipWeapon(a10, a11, v22, st5_0, st6_0, st7_0);
            (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD, _DWORD))a10[1].vtbl->super.super.InitializeComponent
             + 0x41))(
              a10[1].vtbl,
              0,
              0);
          }
        }
        break;
      case 0x22:
        v36 = (_DWORD **)(*((int (__thiscall **)(TESObjectREFRVtbl *, int))vtbl->super.super.InitializeComponent + 0x3D))(
                           vtbl,
                           1);
        if ( v36 )
        {
          if ( **v36 == v22 )
          {
            sub_4DCCF0(a10, (char)a10, st5_0, st6_0, st7_0);
            (*((void (__stdcall **)(_DWORD))a10[1].vtbl->super.super.InitializeComponent + 0x43))(0);
          }
        }
        break;
      default:
        break;
    }
  }
  SetWorn((ExtraDataList *)v22, 0, a12);
  if ( (unsigned int)BaseExtraList_Count((ExtraDataList *)v22) <= 1 )
    ExtraDataList_SetExtraCount((ExtraDataList *)v22, 0);
  if ( !*(_DWORD *)(v22 + 4) )
  {
    BSSimpleList_Remove((_DWORD *)*v48, v22);
    (**(void (__thiscall ***)(int, int))v22)(v22, 1);
    v49 = 0;
    goto LABEL_20;
  }
  v37 = (int *)*v48;
  if ( *v48 )
  {
    while ( 1 )
    {
      v38 = (ExtraDataList *)*v37;
      if ( !*v37 || !v49 )
        break;
      if ( !v22 || (unsigned __int8)ExtraDataList_CompareListForContainer(*v37, v45, v46) || (ExtraDataList *)v22 == v38 )
      {
        v37 = (int *)v37[1];
      }
      else
      {
        LOWORD(v39) = a9 + ExtraDataList_GetExtraCount(v38);
        ExtraDataList_SetExtraCount(v38, v39);
        if ( v38->members.m_data )
        {
          BSSimpleList_Remove((_DWORD *)*v48, v22);
        }
        else
        {
          BSSimpleList_Remove((_DWORD *)*v48, (int)v38);
          (*(void (__thiscall **)(ExtraDataList *, int))v38->vtbl)(v38, 1);
        }
        v45 = 1;
        (**(void (__thiscall ***)(int))v22)(v22);
        v22 = 0;
        v49 = 0;
      }
      if ( !v37 )
        goto LABEL_19;
    }
  }
  v13 = a1;
LABEL_70:
  v23 = a10;
LABEL_21:
  v24 = *((_DWORD **)v13 + 1);
  if ( v24 )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*v24 + 0x40))(v24, 0x8000000);
    v25 = (TESForm *)a8;
    v26 = *((_BYTE *)a8 + 4);
    if ( v26 == 0x16 || v26 == 0x14 )
    {
      v27 = (unsigned __int16 *)sub_4691B0(a8);
      if ( !TESBipedModelForm_CoversSlot(v27, 7, 0)
        && !TESBipedModelForm_CoversSlot(v27, 6, 0)
        && !TESBipedModelForm_CoversSlot(v27, 8, 0)
        && !TESBipedModelForm_CoversSlot(v27, 0xD, 0) )
      {
        (*(void (__thiscall **)(_DWORD *, int))(**((_DWORD **)v13 + 1) + 0x40))(*((_DWORD **)v13 + 1), 0x20000000);
      }
    }
  }
  else
  {
    v25 = (TESForm *)a8;
  }
  v40 = *((TESObjectREFR **)v13 + 1);
  if ( v40 )
    Container = TESObjectREFR_GetContainer(v40);
  else
    Container = 0;
  FormCount = TESContainer_GetFormCount(Container, v25);
  v43 = (_DWORD *)*v48;
  if ( !*v48 || v43[1] || *v43 || (v44 = v48[1]) != 0 && FormCount != v44 )
  {
    if ( (int)v48[1] < 0 )
    {
      if ( v43 )
        BSSimpleList_Clear(v43);
    }
    sub_5EA1A0((int)v23, (int)v23, (_DWORD *)v23->member.niNode);
    return v49;
  }
  else
  {
    BSSimpleList_Remove(*(_DWORD **)v13, (int)v48);
    if ( *v48 )
      BSSimpleList_Clear((_DWORD *)*v48);
    FormHeapFree(*v48);
    *v48 = 0;
    FormHeapFree((unsigned int)v48);
    return 0;
  }
}
