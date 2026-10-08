// TESAttributes_SetAVi: attributes are stored as single bytes in TESAttributes. AVU base-AV guards clamp attributes to 0..configuredLimit before player integer base setters/modifiers reach this storage.
void *__thiscall TESAttributes_SetAVi(_BYTE *this, char a2, char a3)
{
  void *result; // eax

  *(this + ActorValue_GetGroupOffsetFromAV(0, a2) + 4) = a3; /*0x468b15*/
  result = OblivionDynamicCast( /*0x468b19*/
             this,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESAttributes `RTTI Type Descriptor',
             (struct TypeDescriptor *)&TESForm `RTTI Type Descriptor',
             0);
  if ( result ) /*0x468b24*/
    return (*(void *(__thiscall **)(void *, int))(*(_DWORD *)result + 0x40))(result, 8); /*0x468b2f*/
  return result; /*0x468b23*/
}
