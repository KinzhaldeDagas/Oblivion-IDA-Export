LONG __thiscall sub_438060(_DWORD **this, TESObjectREFR *a2, int a3)
{
  LONG result; // eax
  TESForm *baseForm; // ecx
  int v10; // eax
  int v11; // ecx
  unsigned __int8 (__thiscall *v12)(int, TESObjectREFR *, LONG *); // edx
  LONG v13; // esi
  IOTask *v14; // eax
  IOTask *v15; // eax
  int v16; // eax
  int v17; // eax
  IOTask *v18; // eax
  IOTask *v19; // eax
  IOTask *v20; // eax
  IOTask *v21; // eax
  void (__thiscall ***v22)(_DWORD, int); // esi
  LONG v23; // [esp+4h] [ebp-24h]
  LONG v24; // [esp+18h] [ebp-10h] BYREF
  unsigned int v25; // [esp+24h] [ebp-4h]

  if ( sub_45A500(g_TESSaveLoadGame) ) /*0x43808b*/
  {
    result = (LONG)g_TESSaveLoadGame; /*0x438094*/
    if ( (g_TESSaveLoadGame->flags & 2) == 0 ) /*0x4380a1*/
      return result; /*0x4380a1*/
  }
  baseForm = a2->member.baseForm; /*0x4380ab*/
  if ( baseForm ) /*0x4380b0*/
  {
    if ( ((unsigned __int8 (__thiscall *)(TESForm *))baseForm->vtbl[1].Unk_06)(baseForm) ) /*0x4380ba*/
    {
      result = (LONG)a2->vtbl->GetBaseForm(a2); /*0x4380ca*/
      if ( *(_BYTE *)(result + 4) != 0x1A ) /*0x4380d0*/
        return result; /*0x4380d0*/
    }
  }
  result = (LONG)a2->vtbl->GetBaseForm(a2); /*0x4380e0*/
  if ( *(_BYTE *)(result + 4) == 0xA ) /*0x4380e6*/
    return result; /*0x4380e6*/
  if ( a2->vtbl->IsActor(a2) ) /*0x4380f6*/
  {
    if ( ((int (__thiscall *)(TESObjectREFR *))a2->vtbl[1].IsMobileObject)(a2) ) /*0x438106*/
    {
      v10 = ((int (__thiscall *)(TESObjectREFR *))a2->vtbl[1].IsMobileObject)(a2); /*0x438118*/
      CombatController_SetCombatMode(v10, 0xD); /*0x43811c*/
    }
  }
  v24 = 0; /*0x438121*/
  v11 = (int)*(this + 2); /*0x438129*/
  v12 = *(unsigned __int8 (__thiscall **)(int, TESObjectREFR *, LONG *))(*(_DWORD *)v11 + 4); /*0x43812e*/
  v25 = 0; /*0x438137*/
  if ( v12(v11, a2, &v24) ) /*0x43813f*/
  {
    v13 = v24; /*0x438145*/
    result = (unsigned __int8)BYTE2(*(_DWORD *)(v24 + 0x10)); /*0x43815a*/
    if ( (unsigned __int8)result != a3 ) /*0x43815f*/
    {
      result = (*(int (__thiscall **)(LONG, int))(*(_DWORD *)v24 + 0x1C))(v24, a3); /*0x438169*/
      v13 = v24; /*0x43816b*/
    }
    v25 = 0xFFFFFFFF; /*0x438171*/
    if ( v13 ) /*0x438179*/
    {
      result = InterlockedDecrement((volatile LONG *)(v13 + 8)); /*0x438183*/
      goto LABEL_40; /*0x438189*/
    }
    return result; /*0x438179*/
  }
  if ( a2 == (TESObjectREFR *)reference ) /*0x438194*/
  {
    v14 = (IOTask *)FormHeapAlloc(0x40u); /*0x438198*/
    if ( v14 ) /*0x4381a2*/
    {
      v15 = sub_438020(v14, a3); /*0x4381af*/
      goto LABEL_30; /*0x4381b4*/
    }
  }
  else
  {
    v16 = (unsigned __int8)a2->vtbl->GetBaseForm(a2)->member.type - 0x1E; /*0x4381c9*/
    if ( v16 ) /*0x4381cc*/
    {
      v17 = v16 - 5; /*0x4381ce*/
      if ( v17 ) /*0x4381d1*/
      {
        if ( v17 == 1 ) /*0x4381d8*/
        {
          v19 = (IOTask *)FormHeapAlloc(0x38u); /*0x4381f5*/
          if ( v19 ) /*0x4381ff*/
          {
            v15 = sub_437FE0(v19, (int)a2, a3); /*0x438209*/
            goto LABEL_30; /*0x43820e*/
          }
        }
        else
        {
          v18 = (IOTask *)FormHeapAlloc(0x38u); /*0x4381da*/
          if ( v18 ) /*0x4381e4*/
          {
            v15 = sub_437C30(v18, (int)a2, a3); /*0x4381ee*/
            goto LABEL_30; /*0x4381f3*/
          }
        }
      }
      else
      {
        v20 = (IOTask *)FormHeapAlloc(0x40u); /*0x438212*/
        if ( v20 ) /*0x43821c*/
        {
          v15 = sub_437F00(v20, (int)a2, a3); /*0x438226*/
          goto LABEL_30; /*0x43822b*/
        }
      }
    }
    else
    {
      v21 = (IOTask *)FormHeapAlloc(0x38u); /*0x43822f*/
      if ( v21 ) /*0x438239*/
      {
        v15 = QueuedTree_ctor(v21, (int)a2, a3); /*0x438243*/
        goto LABEL_30; /*0x438248*/
      }
    }
  }
  v15 = 0; /*0x43824a*/
LABEL_30:
  sub_4BCB70(&v24, (int)v15); /*0x43824c*/
  v23 = v24; /*0x43825f*/
  if ( v24 ) /*0x43826b*/
    InterlockedIncrement((volatile LONG *)(v24 + 8)); /*0x438271*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD, TESObjectREFR *, LONG, _DWORD))(**(this + 2) + 0xC))( /*0x438280*/
         *(this + 2),
         a2,
         v23,
         0) )
  {
    (*(void (__thiscall **)(LONG))(*(_DWORD *)v24 + 0x20))(v24); /*0x438295*/
    result = v24; /*0x438297*/
  }
  else
  {
    result = v24; /*0x43829d*/
    if ( v24 ) /*0x4382a3*/
    {
      v22 = (void (__thiscall ***)(_DWORD, int))v24; /*0x4382a5*/
      if ( !InterlockedDecrement((volatile LONG *)(v24 + 8)) ) /*0x4382ab*/
        (**v22)(v22, 1); /*0x4382bd*/
      result = 0; /*0x4382bf*/
      v24 = 0; /*0x4382c1*/
    }
  }
  v25 = 0xFFFFFFFF; /*0x4382c7*/
  if ( result ) /*0x4382cf*/
  {
    v13 = result; /*0x4382d1*/
    result = InterlockedDecrement((volatile LONG *)(result + 8)); /*0x4382d7*/
LABEL_40:
    if ( !result ) /*0x4382db*/
      return (**(LONG (__thiscall ***)(LONG, int))v13)(v13, 1); /*0x4382e9*/
  }
  return result; /*0x4382eb*/
}
