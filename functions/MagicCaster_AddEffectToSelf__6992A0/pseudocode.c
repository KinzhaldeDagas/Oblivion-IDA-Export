int __thiscall MagicCaster_AddEffectToSelf(void *this, int a2)
{
  int (__thiscall ***v3)(void *, void *, int, int, _DWORD); // edi
  int v4; // eax

  v3 = (int (__thiscall ***)(void *, void *, int, int, _DWORD))OblivionDynamicCast(
                                                                 this,
                                                                 0,
                                                                 (struct _s_RTTICompleteObjectLocator *)&MagicCaster `RTTI Type Descriptor',
                                                                 &MagicTarget `RTTI Type Descriptor',
                                                                 0);
  if ( !v3 )
    return MagicCaster_AddEffectToSelf_::Return_0(a2);
  v4 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x30))(this);
  return (**v3)(v3, this, v4, a2, 0);
}
