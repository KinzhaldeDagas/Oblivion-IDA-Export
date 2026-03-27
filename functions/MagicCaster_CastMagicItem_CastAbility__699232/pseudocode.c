// positive sp value has been detected, the output may be wrong!
char __userpurge MagicCaster_CastMagicItem_::CastAbility@<al>(
        void *a1@<edi>,
        void (__thiscall ***a2)(_DWORD, void *)@<esi>,
        int a3,
        int a4,
        int a5)
{
  void (__thiscall **v5)(_DWORD, void *); // ebx
  void *v6; // eax

  v5 = *a2;
  v6 = OblivionDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
         &SpellItem `RTTI Type Descriptor',
         0);
  (*v5)(a2, v6);
  return 1;
}
