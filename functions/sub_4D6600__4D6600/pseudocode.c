int __thiscall sub_4D6600(void *this)
{
  void *v2; // eax

  if ( !OblivionDynamicCast( /*0x4d6612*/
          this,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
          &TESQualityForm `RTTI Type Descriptor',
          0) )
    return 0xFFFFFFFF; /*0x4d6638*/
  v2 = (void *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this); /*0x4d6628*/
  return sub_46E3F0(v2); /*0x4d6636*/
}
