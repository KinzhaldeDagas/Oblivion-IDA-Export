char __userpurge MagicCaster_CastMagicItem_::CastDisease@<al>(void *a1@<edi>, int *a2@<esi>, int a3, int a4, int a5)
{
  int v5; // ebx
  void *v6; // eax

  v5 = *a2;
  v6 = OblivionDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
         &SpellItem `RTTI Type Descriptor',
         0);
  (*(void (__thiscall **)(int *, void *))(v5 + 4))(a2, v6);
  return 1;
}
