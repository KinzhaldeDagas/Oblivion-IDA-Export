void __thiscall MobileObject_SetDeleted(TESForm *this, bool a2)
{
  char v3; // [esp+Ch] [ebp+4h]

  j_TESForm_SetDeleted(this, a2);
  sub_6748B0(&ActorProcessManager_ptr, (TESObjectREFR *)this);
  if ( a2 )
  {
    if ( OblivionDynamicCast(
           this,
           0,
           (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
           &MagicCaster `RTTI Type Descriptor',
           0)
      || (v3 = 0,
          OblivionDynamicCast(
            this,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            &TESMagicCasterForm `RTTI Type Descriptor',
            0)) )
    {
      v3 = 1;
    }
    sub_65A050((ActorVtbl *)this, v3);
  }
}
