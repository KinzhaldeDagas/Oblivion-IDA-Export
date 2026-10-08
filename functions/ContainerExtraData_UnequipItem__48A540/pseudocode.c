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
  int ***v14; // eax
  char v17; // dl
  int **v19; // eax
  int *v21; // esi
  int v22; // edi
  TESObjectREFR *v23; // ebp
  int v24; // ecx
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
  int *v43; // ecx
  int *v44; // edx
  int **v46; // [esp+10h] [ebp-4h]
  char v47; // [esp+18h] [ebp+4h]

  __asm { fld     dword ptr ds:0A30634h } /*0x48a543*/
  v13 = a1; /*0x48a54a*/
  v14 = *(int ****)a1; /*0x48a54c*/
  __asm { fst     dword ptr [ebx+8] } /*0x48a54e*/
  v13[2] = _ET1; /*0x48a54e*/
  __asm { fstp    dword ptr [ebx+0Ch] } /*0x48a553*/
  v13[3] = _ET1; /*0x48a553*/
  v17 = 1; /*0x48a55b*/
  if ( !v14 ) /*0x48a55d*/
    return 1; /*0x48a55d*/
  while ( v17 ) /*0x48a562*/
  {
    if ( *v14 && (*v14)[2] == (int *)a8 ) /*0x48a571*/
      v17 = 0; /*0x48a573*/
    else
      v14 = (int ***)v14[1]; /*0x48a577*/
    if ( !v14 ) /*0x48a57c*/
      return 1; /*0x48a585*/
  }
  v19 = *v14; /*0x48a58c*/
  v46 = v19; /*0x48a590*/
  if ( !v19 ) /*0x48a594*/
    return 1; /*0x48a59d*/
  *a7 = 1; /*0x48a5a5*/
  v21 = *v19; /*0x48a5a9*/
  v47 = 1; /*0x48a5ae*/
  if ( !*v19 ) /*0x48a5b3*/
    goto LABEL_70; /*0x48a5b3*/
  while ( 1 ) /*0x48a5c0*/
  {
    v22 = *v21; /*0x48a5c0*/
    if ( !*v21 ) /*0x48a5c4*/
    {
LABEL_19:
      v23 = a10; /*0x48a610*/
LABEL_20:
      v13 = a1; /*0x48a614*/
      goto LABEL_21; /*0x48a614*/
    }
    if ( sub_41DF40((_BYTE *)*v21) && !a10->vtbl->IsDead(a10, 0) ) /*0x48a5e3*/
    {
      *a7 = 0; /*0x48a906*/
      return 1; /*0x48a912*/
    }
    if ( ExtraDataList_HasWorn((_BYTE *)v22, a12) && (!a11 || a11 == v22) ) /*0x48a603*/
      break; /*0x48a603*/
    v21 = (int *)v21[1]; /*0x48a609*/
    if ( !v21 ) /*0x48a60e*/
      goto LABEL_19; /*0x48a60e*/
  }
  v28 = (unsigned __int16 *)sub_4691B0(a8); /*0x48a6b2*/
  v23 = a10; /*0x48a6b7*/
  vtbl = a10[1].vtbl; /*0x48a6bb*/
  v30 = v28; /*0x48a6c3*/
  if ( vtbl ) /*0x48a6c5*/
  {
    switch ( *((_BYTE *)a8 + 4) ) /*0x48a6e6*/
    {
      case 0x14: /*0x48a6e6*/
        v34 = TESBipedModelForm_CoversSlot(v28, 0xD, 0); /*0x48a7db*/
        InitializeComponent = a10[1].vtbl->super.super.InitializeComponent; /*0x48a7e5*/
        if ( !v34 ) /*0x48a7e7*/
          goto LABEL_36; /*0x48a7e7*/
        if ( (*((int (__stdcall **)(_DWORD))InitializeComponent + 0x3E))(0) ) /*0x48a7f5*/
        {
          v35 = ((double (__thiscall *)(TESObjectREFRVtbl *, _DWORD))*((_DWORD *)a10[1].vtbl->super.super.InitializeComponent /*0x48a808*/
                                                                     + 0x44))(
                  a10[1].vtbl,
                  0);
          sub_4DC8F0(a10, v35, st5_0, st6_0, (int)a10, 1); /*0x48a80e*/
        }
        break; /*0x48a813*/
      case 0x16: /*0x48a6e6*/
        if ( TESBipedModelForm_CoversSlot(v28, 7, 0) || TESBipedModelForm_CoversSlot(v30, 6, 0) ) /*0x48a702*/
        {
          if ( !(*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))a10[1].vtbl->super.super.InitializeComponent /*0x48a753*/
                 + 0xC8))(a10[1].vtbl) )
            sub_4DCF10(a10, (char)a10, a12); /*0x48a764*/
        }
        else
        {
          v31 = TESBipedModelForm_CoversSlot(v30, 8, 0); /*0x48a711*/
          InitializeComponent = a10[1].vtbl->super.super.InitializeComponent; /*0x48a71b*/
          if ( v31 ) /*0x48a71d*/
          {
            if ( !(*((unsigned __int8 (**)(void))InitializeComponent + 0xC8))() ) /*0x48a725*/
              sub_4DD000(a10, (char)a10); /*0x48a731*/
          }
          else
          {
LABEL_36:
            (*((void (__stdcall **)(int))InitializeComponent + 0xC7))(1); /*0x48a73b*/
          }
        }
        break; /*0x48a736*/
      case 0x1A: /*0x48a6e6*/
        if ( (*((int (__thiscall **)(TESObjectREFRVtbl *, _DWORD))vtbl->super.super.InitializeComponent + 0x3C))( /*0x48a7b7*/
               vtbl,
               0) )
        {
          UnequipLight(a10, st5_0, st6_0, st7_0); /*0x48a7c3*/
          (*((void (__stdcall **)(_DWORD))a10[1].vtbl->super.super.InitializeComponent + 0x42))(0); /*0x48a7d3*/
        }
        break; /*0x48a7d3*/
      case 0x21: /*0x48a6e6*/
        v33 = (_DWORD **)(*((int (__thiscall **)(TESObjectREFRVtbl *, int))vtbl->super.super.InitializeComponent + 0x3B))( /*0x48a778*/
                           vtbl,
                           1);
        if ( v33 ) /*0x48a77c*/
        {
          if ( **v33 == v22 || !a11 ) /*0x48a78a*/
          {
            UnequipWeapon(a10, a11, v22, st5_0, st6_0, st7_0); /*0x48a792*/
            (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD, _DWORD))a10[1].vtbl->super.super.InitializeComponent /*0x48a7a6*/
             + 0x41))(
              a10[1].vtbl,
              0,
              0);
          }
        }
        break; /*0x48a7a8*/
      case 0x22: /*0x48a6e6*/
        v36 = (_DWORD **)(*((int (__thiscall **)(TESObjectREFRVtbl *, int))vtbl->super.super.InitializeComponent + 0x3D))( /*0x48a81f*/
                           vtbl,
                           1);
        if ( v36 ) /*0x48a823*/
        {
          if ( **v36 == v22 ) /*0x48a829*/
          {
            TESObjectREFR_ClearEquippedAmmo3D(a10);// AMMO form-type (0x22) unequip path: only when the selected worn ExtraDataList matches current equipped ammo, clear equipped ammo/quiver 3D before clearing process equipped-ammo data at vtable +0x10C. /*0x48a82d*/
            (*((void (__stdcall **)(_DWORD))a10[1].vtbl->super.super.InitializeComponent + 0x43))(0);// After TESObjectREFR_ClearEquippedAmmo3D, call MiddleHighProcess_SetEquippedAmmoData(NULL). Normal unequip therefore performs visual cleanup first and process-entry cleanup second. /*0x48a83f*/
          }
        }
        break; /*0x48a83f*/
      default:
        break;
    }
  }
  SetWorn((ExtraDataList *)v22, 0, a12); /*0x48a841*/
  if ( (unsigned int)BaseExtraList_Count((ExtraDataList *)v22) <= 1 ) /*0x48a859*/
    ExtraDataList_SetExtraCount((ExtraDataList *)v22, 0); /*0x48a85f*/
  if ( !*(_DWORD *)(v22 + 4) ) /*0x48a868*/
  {
    BSSimpleList_Remove(*v46, v22); /*0x48a91c*/
    (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x48a929*/
    v47 = 0; /*0x48a92b*/
    goto LABEL_20; /*0x48a930*/
  }
  v37 = *v46; /*0x48a872*/
  if ( *v46 ) /*0x48a872*/
  {
    while ( 1 ) /*0x48a880*/
    {
      v38 = (ExtraDataList *)*v37; /*0x48a880*/
      if ( !*v37 || !v47 ) /*0x48a890*/
        break; /*0x48a890*/
      if ( !v22 /*0x48a8a8*/
        || ExtraDataList_CompareListForContainer((ExtraDataList *)v22, (ExtraDataList *)*v37)
        || (ExtraDataList *)v22 == v38 )
      {
        v37 = (int *)v37[1]; /*0x48a8f9*/
      }
      else
      {
        LOWORD(v39) = a9 + ExtraDataList_GetExtraCount(v38); /*0x48a8b1*/
        ExtraDataList_SetExtraCount(v38, v39); /*0x48a8b7*/
        if ( v38->members.m_data ) /*0x48a8bc*/
        {
          BSSimpleList_Remove(*v46, v22); /*0x48a8e1*/
        }
        else
        {
          BSSimpleList_Remove(*v46, (int)v38); /*0x48a8c9*/
          (*(void (__thiscall **)(ExtraDataList *, int))v38->vtbl)(v38, 1); /*0x48a8d6*/
        }
        (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x48a8ee*/
        v22 = 0; /*0x48a8f0*/
        v47 = 0; /*0x48a8f2*/
      }
      if ( !v37 ) /*0x48a8fe*/
        goto LABEL_19; /*0x48a8fe*/
    }
  }
  v13 = a1; /*0x48a935*/
LABEL_70:
  v23 = a10; /*0x48a939*/
LABEL_21:
  v24 = *((_DWORD *)v13 + 1); /*0x48a618*/
  if ( v24 ) /*0x48a61d*/
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v24 + 0x40))(v24, 0x8000000); /*0x48a62d*/
    v25 = (TESForm *)a8; /*0x48a62f*/
    v26 = *((_BYTE *)a8 + 4); /*0x48a633*/
    if ( v26 == 0x16 || v26 == 0x14 ) /*0x48a63c*/
    {
      v27 = (unsigned __int16 *)sub_4691B0(a8); /*0x48a64b*/
      if ( !TESBipedModelForm_CoversSlot(v27, 7, 0) /*0x48a68c*/
        && !TESBipedModelForm_CoversSlot(v27, 6, 0)
        && !TESBipedModelForm_CoversSlot(v27, 8, 0)
        && !TESBipedModelForm_CoversSlot(v27, 0xD, 0) )
      {
        (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)v13 + 1) + 0x40))(*((_DWORD *)v13 + 1), 0x20000000); /*0x48a6a6*/
      }
    }
  }
  else
  {
    v25 = (TESForm *)a8; /*0x48a942*/
  }
  v40 = *((TESObjectREFR **)v13 + 1); /*0x48a946*/
  if ( v40 ) /*0x48a94b*/
    Container = TESObjectREFR_GetContainer(v40); /*0x48a94d*/
  else
    Container = 0; /*0x48a954*/
  FormCount = TESContainer_GetFormCount(Container, v25); /*0x48a959*/
  v43 = *v46; /*0x48a962*/
  if ( !*v46 || v43[1] || *v43 || (v44 = v46[1]) != 0 && (int *)FormCount != v44 ) /*0x48a97c*/
  {
    if ( (int)v46[1] < 0 ) /*0x48a9b8*/
    {
      if ( v43 ) /*0x48a9bc*/
        BSSimpleList_Clear(v43); /*0x48a9be*/
    }
    sub_5EA1A0((int)v23, (int)v23, (_DWORD *)v23->member.niNode); /*0x48a9c9*/
    return v47; /*0x48a9ce*/
  }
  else
  {
    BSSimpleList_Remove(*(int **)v13, (int)v46); /*0x48a981*/
    if ( *v46 ) /*0x48a986*/
      BSSimpleList_Clear(*v46); /*0x48a98c*/
    FormHeapFree((unsigned int)*v46); /*0x48a994*/
    *v46 = 0; /*0x48a99a*/
    FormHeapFree((unsigned int)v46); /*0x48a9a0*/
    return 0; /*0x48a9ab*/
  }
}
