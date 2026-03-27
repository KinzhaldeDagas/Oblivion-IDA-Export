TESObjectREFR *__thiscall sub_64F140(void **this, TESObjectREFR *a2)
{
  TESObjectREFR *v3; // eax
  TESObjectREFR *v4; // esi
  char v5; // bl
  TESObjectCELL *ParentCell; // ebx
  bool v7; // zf
  TESObjectREFRVtbl *vtbl; // ecx
  TESObjectREFR *result; // eax
  int v10; // [esp+10h] [ebp-4h]

  v10 = Double_To_SInt32(flt_B36C68);
  v3 = (TESObjectREFR *)OblivionDynamicCast(
                          *(this + 0xB),
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
  v4 = v3;
  v5 = 0;
  if ( !v3 || (v3->member.super.flags & 0x800) != 0 )
    return (TESObjectREFR *)((int (__thiscall *)(TESObjectREFR *, TESObjectREFR *))a2->vtbl[1].IsDead)(a2, v3);
  if ( !TESObjectREFR_GetParentCell(a2)
    || (ParentCell = TESObjectREFR_GetParentCell(v4), v7 = TESObjectREFR_GetParentCell(a2) == ParentCell, v5 = 0, !v7) )
  {
    if ( TesObjectREF_GetDistance(a2, v4, 0) >= flt_A34ABC )
      return (TESObjectREFR *)(*((int (__thiscall **)(void **, TESObjectREFR *, int, unsigned int, _DWORD))*this + 0x66))(
                                this,
                                a2,
                                1,
                                0xFFFFFFFF,
                                0);
  }
  vtbl = v4[1].vtbl;
  if ( !vtbl )
    return (TESObjectREFR *)(*((int (__thiscall **)(void **, TESObjectREFR *, int, unsigned int, _DWORD))*this + 0x66))(
                              this,
                              a2,
                              1,
                              0xFFFFFFFF,
                              0);
  result = (TESObjectREFR *)(*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 2))(vtbl);
  if ( result != (TESObjectREFR *)1 )
    return (TESObjectREFR *)(*((int (__thiscall **)(void **, TESObjectREFR *, int, unsigned int, _DWORD))*this + 0x66))(
                              this,
                              a2,
                              1,
                              0xFFFFFFFF,
                              0);
  if ( v10 )
  {
    do
    {
      result = (TESObjectREFR *)((int (__thiscall *)(TESObjectREFR *, _DWORD))a2->vtbl->IsDead)(a2, 0);
      if ( (_BYTE)result )
        break;
      a2->vtbl[1].GetKnockedState(a2);
      result = (TESObjectREFR *)OblivionDynamicCast(
                                  *(this + 0xB),
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                                  &Actor `RTTI Type Descriptor',
                                  0);
      v4 = result;
      if ( result )
      {
        result = (TESObjectREFR *)((int (__thiscall *)(TESObjectREFR *, _DWORD))result->vtbl->IsDead)(result, 0);
        if ( !(_BYTE)result )
        {
          result = (TESObjectREFR *)(*((int (__thiscall **)(TESObjectREFRVtbl *))v4[1].vtbl->super.super.InitializeComponent
                                     + 2))(v4[1].vtbl);
          if ( result == (TESObjectREFR *)1 )
          {
            result = (TESObjectREFR *)((int (__thiscall *)(TESObjectREFR *))v4->vtbl[1].GetKnockedState)(v4);
            v5 = 1;
          }
        }
      }
      --v10;
    }
    while ( v10 );
    if ( v5 )
    {
      if ( v4 )
        return (TESObjectREFR *)(*((int (__thiscall **)(TESObjectREFRVtbl *))v4[1].vtbl->super.super.InitializeComponent
                                 + 8))(v4[1].vtbl);
    }
  }
  return result;
}
