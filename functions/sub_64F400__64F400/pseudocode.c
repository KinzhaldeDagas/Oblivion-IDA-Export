int __thiscall sub_64F400(_DWORD *this, TESChildCELL *a2)
{
  _DWORD *v2; // edi
  int v3; // ebx
  TESClass *BaseClass; // eax
  int v6; // ebx
  void *v7; // edi
  void *v8; // ebp
  TESObjectCELL *ParentCell; // eax
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

  v2 = this;
  v3 = *(this + 2);
  friendlyFight_ = (int)sub_569E60(*(TargetData **)(v3 + 0x28)).form;
  v23 = 0;
  BaseClass = (TESClass *)Actor_GetBaseClass((Actor *)a2);
  if ( TESClass::IsGuardClass(BaseClass) )
    return (*(int (__thiscall **)(_DWORD *, TESChildCELL *, int))(*v2 + 0x188))(v2, a2, 1);
  v26 = *(int **)(v3 + 0x3C);
  if ( !v26 )
    return (*(int (__thiscall **)(_DWORD *, TESChildCELL *, int))(*v2 + 0x188))(v2, a2, 3);
  do
  {
    v6 = *v26;
    if ( !*v26 )
      break;
    v7 = *(void **)(v6 + 8);
    v8 = 0;
    if ( v7 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v7 + 0x190))(*(_DWORD *)(v6 + 8)) )
        v8 = OblivionDynamicCast(
               v7,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
               &Actor `RTTI Type Descriptor',
               0);
    }
    if ( !*(_BYTE *)(v6 + 0x10) )
    {
      a5 = (float)dword_B36A50;
      v20 = (float *)(*((int (__thiscall **)(TESChildCELL *))a2->vtbl + 0x5D))(a2);
      a3a = (float)dword_B36A50;
      v15 = (float *)(*((int (__thiscall **)(TESChildCELL *))a2->vtbl + 0x5D))(a2);
      ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a2);
      sub_446B90(ParentCell, v15, a3a, v20, a5, (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_62E890, v6);
    }
    if ( v23 )
      goto LABEL_16;
    if ( *(int *)(v6 + 4) <= 2 )
    {
      v10 = friendlyFight_;
      v21 = 0;
      a3b = TesObjectREF_GetDistance((TESObjectREFR *)a2, (TESObjectREFR *)friendlyFight_, 0);
      a3 = COERCE_FLOAT((*((int (__thiscall **)(TESChildCELL *, int, _DWORD))a2->vtbl + 0xA1))(a2, 0x21, LODWORD(a3b)));
      v16 = 0;
LABEL_14:
      v12 = (*((int (__thiscall **)(TESChildCELL *))a2->vtbl + 0x89))(a2);
      shouldActorFight(v12, v10, v16, a3, v21, 0, 0, 0x64);
      if ( v13 > 0 )
        v23 = 1;
      goto LABEL_16;
    }
    if ( v8 )
    {
      v10 = friendlyFight_;
      v21 = 1;
      a3 = TesObjectREF_GetDistance((TESObjectREFR *)a2, (TESObjectREFR *)friendlyFight_, 0);
      v11 = (*((int (__thiscall **)(TESChildCELL *, int))a2->vtbl + 0xA1))(a2, 0x21);
      v16 = (*((int (__thiscall **)(TESChildCELL *, void *, int))a2->vtbl + 0x89))(a2, v8, v11);
      goto LABEL_14;
    }
LABEL_16:
    v2 = this;
    v26 = (int *)v26[1];
  }
  while ( v26 );
  if ( v23 )
    return (*(int (__thiscall **)(_DWORD *, TESChildCELL *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*v2 + 0x228))(
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
  return (*(int (__thiscall **)(_DWORD *, TESChildCELL *, int))(*v2 + 0x188))(v2, a2, 3);
}
