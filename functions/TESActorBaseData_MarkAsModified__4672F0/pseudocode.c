void __thiscall TESActorBaseData_MarkAsModified(TESActorBaseData *self, unsigned int changeMask)
{
  void *v2; // eax

  v2 = OblivionDynamicCast( /*0x4672ff*/
         self,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESActorBaseData `RTTI Type Descriptor',
         (struct TypeDescriptor *)&TESForm `RTTI Type Descriptor',
         0);
  if ( v2 ) /*0x467309*/
    (*(void (__thiscall **)(void *, unsigned int))(*(_DWORD *)v2 + 0x40))(v2, changeMask); /*0x467312*/
}
