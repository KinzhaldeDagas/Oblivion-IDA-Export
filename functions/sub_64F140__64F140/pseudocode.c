TESObjectREFR *__thiscall sub_64F140(void **this, TESObjectREFR *a2)
{
  TESObjectREFR *v3; // eax
  TESObjectREFR *v4; // esi
  char v5; // bl
  UInt32 DwordAtOffset40; // ebx
  bool v7; // zf
  TESObjectREFRVtbl *vtbl; // ecx
  TESObjectREFR *result; // eax
  int v10; // [esp+10h] [ebp-4h]

  v10 = Double_To_SInt32(unk_B36C68); /*0x64f15f*/
  v3 = (TESObjectREFR *)OblivionDynamicCast( /*0x64f169*/
                          *(this + 0xB),
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
  v4 = v3; /*0x64f16e*/
  v5 = 0; /*0x64f170*/
  if ( !v3 || (v3->member.super.flags & 0x800) != 0 ) /*0x64f18a*/
    return ((TESObjectREFR *(__thiscall *)(TESObjectREFR *, TESObjectREFR *))a2->vtbl[1].IsDead)(a2, v3); /*0x64f2bb*/
  if ( !Shared_GetDwordAtOffset40(a2) /*0x64f1b6*/
    || (DwordAtOffset40 = Shared_GetDwordAtOffset40(v4),
        v7 = Shared_GetDwordAtOffset40(a2) == DwordAtOffset40,
        v5 = 0,
        !v7) )
  {
    if ( TesObjectREF_GetDistance(a2, v4, 0) >= flt_A34ABC ) /*0x64f1cd*/
      return (TESObjectREFR *)(*((int (__thiscall **)(void **, TESObjectREFR *, int, unsigned int, _DWORD))*this + 0x66))( /*0x64f1cd*/
                                this,
                                a2,
                                1,
                                0xFFFFFFFF,
                                0);
  }
  vtbl = v4[1].vtbl; /*0x64f1d3*/
  if ( !vtbl ) /*0x64f1d8*/
    return (TESObjectREFR *)(*((int (__thiscall **)(void **, TESObjectREFR *, int, unsigned int, _DWORD))*this + 0x66))( /*0x64f1d8*/
                              this,
                              a2,
                              1,
                              0xFFFFFFFF,
                              0);
  result = (TESObjectREFR *)(*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 2))(vtbl); /*0x64f1e3*/
  if ( result != (TESObjectREFR *)1 ) /*0x64f1e8*/
    return (TESObjectREFR *)(*((int (__thiscall **)(void **, TESObjectREFR *, int, unsigned int, _DWORD))*this + 0x66))( /*0x64f2a2*/
                              this,
                              a2,
                              1,
                              0xFFFFFFFF,
                              0);
  if ( v10 ) /*0x64f1f3*/
  {
    do /*0x64f272*/
    {
      result = (TESObjectREFR *)((int (__thiscall *)(TESObjectREFR *, _DWORD))a2->vtbl->IsDead)(a2, 0); /*0x64f20c*/
      if ( (_BYTE)result ) /*0x64f210*/
        break; /*0x64f210*/
      a2->vtbl[1].GetKnockedState(a2); /*0x64f21c*/
      result = (TESObjectREFR *)OblivionDynamicCast( /*0x64f230*/
                                  *(this + 0xB),
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                                  &Actor `RTTI Type Descriptor',
                                  0);
      v4 = result; /*0x64f235*/
      if ( result ) /*0x64f23c*/
      {
        result = (TESObjectREFR *)((int (__thiscall *)(TESObjectREFR *, _DWORD))result->vtbl->IsDead)(result, 0); /*0x64f24a*/
        if ( !(_BYTE)result ) /*0x64f24e*/
        {
          result = (TESObjectREFR *)(*((int (__thiscall **)(TESObjectREFRVtbl *))v4[1].vtbl->super.super.InitializeComponent /*0x64f258*/
                                     + 2))(v4[1].vtbl);
          if ( result == (TESObjectREFR *)1 ) /*0x64f25d*/
          {
            result = (TESObjectREFR *)((int (__thiscall *)(TESObjectREFR *))v4->vtbl[1].GetKnockedState)(v4); /*0x64f269*/
            v5 = 1; /*0x64f26b*/
          }
        }
      }
      --v10; /*0x64f26d*/
    }
    while ( v10 ); /*0x64f272*/
    if ( v5 ) /*0x64f276*/
    {
      if ( v4 ) /*0x64f27a*/
        return (TESObjectREFR *)(*((int (__thiscall **)(TESObjectREFRVtbl *))v4[1].vtbl->super.super.InitializeComponent /*0x64f284*/
                                 + 8))(v4[1].vtbl);
    }
  }
  return result; /*0x64f287*/
}
