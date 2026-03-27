int __thiscall sub_62B420(int *this, PlayerCharacter *a2)
{
  int v3; // ebx
  TargetData *v4; // ecx
  char *v5; // edi
  ObjectType v6; // eax
  int v7; // eax
  _DWORD *v8; // ecx
  int p_magicTarget; // eax
  int result; // eax
  PlayerCharacter *v11; // [esp+20h] [ebp-1Ch]
  unsigned __int8 v12[12]; // [esp+24h] [ebp-18h] BYREF
  unsigned int v13; // [esp+38h] [ebp-4h]

  v3 = (*(int (__thiscall **)(int *))(*this + 0x184))(this);
  v4 = *(TargetData **)(v3 + 0x28);
  v5 = 0;
  if ( v4 )
  {
    v6.form = sub_569E70(v4).form;
    v5 = (char *)OblivionDynamicCast(
                   v6.form,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                   &MagicItem `RTTI Type Descriptor',
                   0);
  }
  v11 = 0;
  if ( !v5 )
  {
    v5 = (char *)*(this + 0x52);
    if ( !v5 )
      return (*(int (__thiscall **)(int *, PlayerCharacter *, int))(*this + 0x188))(this, a2, 1);
    *(this + 0x52) = 0;
    TESPackage_TargetData_constr(v12);
    v13 = 0;
    TESPackage_TargetData_SetTargetForm(v12, (int)(v5 + 0xFFFFFFE8));
    TESPackage_SetTarget((_DWORD *)v3, v12);
    v13 = 0xFFFFFFFF;
    TESTexture::ClearComponentReferences(v12);
  }
  v7 = *(this + 0xC);
  if ( v7 )
    goto LABEL_9;
  v8 = *(_DWORD **)(v3 + 0x24);
  if ( v8 )
  {
    v7 = sub_5697E0(v8);
LABEL_9:
    v11 = (PlayerCharacter *)v7;
  }
  if ( Actor_GetCurrentAction(a2) != 0xFFFFFFFF
    || *(_BYTE *)(v3 + 0x20) != 0x1C && *(_DWORD *)(EffectItemList_GetItemByIndex2(v5 + 0xC, 0) + 0x10) )
  {
    result = Actor_GetCurrentAction(a2);
    if ( result != 0xFFFFFFFF )
      return result;
    if ( v11 )
    {
      if ( v11->vtbl->super.super.super.IsActor((TESObjectREFR *)v11) && v11 != a2 )
        v11->super.super.super.process->SetCurrentPackage(v11->super.super.super.process, 0);
    }
    return (*(int (__thiscall **)(int *, PlayerCharacter *, int))(*this + 0x188))(this, a2, 1);
  }
  if ( a2 )
    p_magicTarget = (int)&a2->super.super.magicTarget;
  else
    p_magicTarget = 0;
  MagicCaster_CastMagicItem(&a2->super.super.magicCaster.vtbl, (int)v5, p_magicTarget, 0);
  result = sub_5F25F0(a2, v3, (int)v5, flt_A3D65C, COERCE_FLOAT(1));
  if ( *(_BYTE *)(v3 + 0x20) == 0x1C )
    return (*(int (__thiscall **)(int *, PlayerCharacter *, int))(*this + 0x188))(this, a2, 1);
  return result;
}
