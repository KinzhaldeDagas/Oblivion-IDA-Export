void __thiscall TESIdleForm::~TESIdleForm(TESIdleForm *this)
{
  int v2; // eax
  UInt32 v3; // ebp
  UInt32 i; // esi
  TESObjectREFR *v5; // ecx
  _DWORD *v6; // eax
  void *v7; // eax
  void (__thiscall ***v8)(_DWORD, int); // ecx

  *(_DWORD *)this = &TESIdleForm::`vftable'{for `TESIdleForm'}; /*0x5208ac*/
  *((_DWORD *)this + 6) = &TESIdleForm::`vftable'{for `TESModelAnim'}; /*0x5208b2*/
  sub_520620((TESForm *)this); /*0x5208c1*/
  v2 = *((_DWORD *)this + 0xF); /*0x5208c6*/
  if ( v2 ) /*0x5208cb*/
  {
    v3 = *(_DWORD *)(v2 + 0xC); /*0x5208cd*/
    if ( v3 ) /*0x5208d2*/
    {
      for ( i = 0; i < v3; ++i ) /*0x5208d4*/
      {
        v5 = *((TESObjectREFR **)this + 0xF); /*0x5208e0*/
        v6 = 0; /*0x5208e3*/
        if ( v5 ) /*0x5208e7*/
        {
          v7 = (void *)sub_494ED0(v5, i); /*0x5208f6*/
          v6 = OblivionDynamicCast( /*0x5208fc*/
                 v7,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 &TESIdleForm `RTTI Type Descriptor',
                 0);
        }
        v6[0x10] = 0; /*0x520904*/
        (*(void (__thiscall **)(_DWORD *, int))(*v6 + 0x10))(v6, 1); /*0x520914*/
      }
    }
    v8 = *((void (__thiscall ****)(_DWORD, int))this + 0xF); /*0x52091d*/
    if ( v8 ) /*0x520922*/
      (**v8)(v8, 1); /*0x52092a*/
  }
  sub_56A7A0((BSSimpleList_VoidPtr *)this + 6); /*0x520934*/
  TESModel::~TESModel((TESModel *)this + 1); /*0x520941*/
  TESForm_destr((TESForm *)this); /*0x520950*/
}
