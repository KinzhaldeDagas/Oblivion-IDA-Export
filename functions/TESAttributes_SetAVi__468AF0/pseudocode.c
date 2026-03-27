void *__thiscall TESAttributes_SetAVi(_BYTE *this, char a2, char a3)
{
  void *result; // eax

  *(this + ActorValue_GetGroupOffsetFromAV(0, a2) + 4) = a3;
  result = OblivionDynamicCast(
             this,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESAttributes `RTTI Type Descriptor',
             (struct TypeDescriptor *)&TESForm `RTTI Type Descriptor',
             0);
  if ( result )
    return (void *)(*(int (__thiscall **)(void *, int))(*(_DWORD *)result + 0x40))(result, 8);
  return result;
}
