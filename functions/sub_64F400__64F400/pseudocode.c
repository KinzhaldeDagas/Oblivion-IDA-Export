int __thiscall sub_64F400(_DWORD *this, TESChildCELL *a2)
{
  _DWORD *v2; // edi
  int v3; // ebx
  TESClass *BaseClass; // eax
  int v6; // ebx
  void *v7; // edi
  void *v8; // ebp
  TESObjectCELL *DwordAtOffset40; // eax
  int v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  float *v15; // [esp-4h] [ebp-34h]
  int v16; // [esp-4h] [ebp-34h]
  float a3a; // [esp+0h] [ebp-30h]
  float a3; // [esp+0h] [ebp-30h]
  float a3b; // [esp+0h] [ebp-30h]
  float *v20; // [esp+4h] [ebp-2Ch]
  bool v21; // [esp+4h] [ebp-2Ch]
  float a5; // [esp+8h] [ebp-28h]
  char v23; // [esp+27h] [ebp-9h]
  int friendlyFight_; // [esp+28h] [ebp-8h]
  int *v26; // [esp+34h] [ebp+4h]

  v2 = this; /*0x64f406*/
  v3 = *(this + 2); /*0x64f408*/
  friendlyFight_ = (int)sub_569E60(*(TargetData **)(v3 + 0x28)).form; /*0x64f41d*/
  v23 = 0; /*0x64f421*/
  BaseClass = (TESClass *)Actor_GetBaseClass((Actor *)a2); /*0x64f426*/
  if ( TESClass::IsGuardClass(BaseClass) ) /*0x64f42d*/
    return (*(int (__thiscall **)(_DWORD *, TESChildCELL *, int))(*v2 + 0x188))(v2, a2, 1); /*0x64f5d2*/
  v26 = *(int **)(v3 + 0x3C); /*0x64f43f*/
  if ( !v26 ) /*0x64f443*/
    return (*(int (__thiscall **)(_DWORD *, TESChildCELL *, int))(*v2 + 0x188))(v2, a2, 3); /*0x64f443*/
  do /*0x64f454*/
  {
    v6 = *v26; /*0x64f454*/
    if ( !*v26 ) /*0x64f454*/
      break; /*0x64f454*/
    v7 = *(void **)(v6 + 8); /*0x64f45e*/
    v8 = 0; /*0x64f461*/
    if ( v7 ) /*0x64f465*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v7 + 0x190))(*(_DWORD *)(v6 + 8)) ) /*0x64f471*/
        v8 = OblivionDynamicCast( /*0x64f48c*/
               v7,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
               &Actor `RTTI Type Descriptor',
               0);
    }
    if ( !*(_BYTE *)(v6 + 0x10) ) /*0x64f48e*/
    {
      a5 = (float)(int)stru_B36A50.value; /*0x64f4ab*/
      v20 = (float *)(*((int (__thiscall **)(TESChildCELL *))a2->vtbl + 0x5D))(a2); /*0x64f4b8*/
      a3a = (float)(int)stru_B36A50.value; /*0x64f4c2*/
      v15 = (float *)(*((int (__thiscall **)(TESChildCELL *))a2->vtbl + 0x5D))(a2); /*0x64f4c7*/
      DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a2); /*0x64f4ca*/
      sub_446B90(DwordAtOffset40, v15, a3a, v20, a5, (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_62E890, v6); /*0x64f4d6*/
    }
    if ( v23 ) /*0x64f4e0*/
      goto LABEL_16; /*0x64f4e0*/
    if ( *(int *)(v6 + 4) <= 2 ) /*0x64f4ea*/
    {
      v10 = friendlyFight_; /*0x64f52d*/
      v21 = 0; /*0x64f537*/
      a3b = TesObjectREF_GetDistance((TESObjectREFR *)a2, (TESObjectREFR *)friendlyFight_, 0); /*0x64f54c*/
      a3 = COERCE_FLOAT((*((int (__thiscall **)(TESChildCELL *, int, _DWORD))a2->vtbl + 0xA1))(a2, 0x21, LODWORD(a3b))); /*0x64f555*/
      v16 = 0; /*0x64f556*/
LABEL_14:
      v12 = (*((int (__thiscall **)(TESChildCELL *))a2->vtbl + 0x89))(a2); /*0x64f558*/
      shouldActorFight(v12, v10, v16, a3, v21, 0, 0, 0x64); /*0x64f566*/
      if ( v13 > 0 ) /*0x64f570*/
        v23 = 1; /*0x64f572*/
      goto LABEL_16; /*0x64f572*/
    }
    if ( v8 ) /*0x64f4ee*/
    {
      v10 = friendlyFight_; /*0x64f4f4*/
      v21 = 1; /*0x64f4fe*/
      a3 = TesObjectREF_GetDistance((TESObjectREFR *)a2, (TESObjectREFR *)friendlyFight_, 0); /*0x64f513*/
      v11 = (*((int (__thiscall **)(TESChildCELL *, int))a2->vtbl + 0xA1))(a2, 0x21); /*0x64f51a*/
      v16 = (*((int (__thiscall **)(TESChildCELL *, void *, int))a2->vtbl + 0x89))(a2, v8, v11); /*0x64f52a*/
      goto LABEL_14; /*0x64f52b*/
    }
LABEL_16:
    v2 = this; /*0x64f577*/
    v26 = (int *)v26[1]; /*0x64f584*/
  }
  while ( v26 ); /*0x64f454*/
  if ( v23 ) /*0x64f594*/
    return (*(int (__thiscall **)(_DWORD *, TESChildCELL *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*v2 + 0x228))( /*0x64f5be*/
             v2,
             a2,
             friendlyFight_,
             0,
             0,
             0,
             0,
             0,
             0,
             0,
             1);
  return (*(int (__thiscall **)(_DWORD *, TESChildCELL *, int))(*v2 + 0x188))(v2, a2, 3); /*0x64f5b8*/
}
