void __thiscall TESIdleForm::~TESIdleForm(TESIdleForm *this)
{
  int v2; // eax
  UInt32 v3; // ebp
  UInt32 i; // esi
  TESObjectREFR *v5; // ecx
  _DWORD *v6; // eax
  void *v7; // eax
  void (__thiscall ***v8)(_DWORD, int); // ecx

  *(_DWORD *)this = &TESIdleForm::`vftable'{for `TESIdleForm'};
  *((_DWORD *)this + 6) = &TESIdleForm::`vftable'{for `TESModelAnim'};
  sub_520620((TESForm *)this);
  v2 = *((_DWORD *)this + 0xF);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 0xC);
    if ( v3 )
    {
      for ( i = 0; i < v3; ++i )
      {
        v5 = *((TESObjectREFR **)this + 0xF);
        v6 = 0;
        if ( v5 )
        {
          v7 = (void *)sub_494ED0(v5, i);
          v6 = OblivionDynamicCast(
                 v7,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 &TESIdleForm `RTTI Type Descriptor',
                 0);
        }
        v6[0x10] = 0;
        (*(void (__thiscall **)(_DWORD *, int))(*v6 + 0x10))(v6, 1);
      }
    }
    v8 = *((void (__thiscall ****)(_DWORD, int))this + 0xF);
    if ( v8 )
      (**v8)(v8, 1);
  }
  sub_56A7A0((char *)this + 0x30);
  TESModel::~TESModel((TESModel *)this + 1);
  TESForm_destr((TESForm *)this);
}
