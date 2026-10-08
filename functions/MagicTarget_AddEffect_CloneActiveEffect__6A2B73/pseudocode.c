// Verified AddEffect clone path calls the source ActiveEffect vtable clone slot (+4), then sets the clone's target before insertion. Fresh clone constructors null hitEffectList, and the registered clone/copy overrides do not overwrite +0x34. A nonempty source list is not shared by the clone.
int __usercall MagicTarget_AddEffect_::CloneActiveEffect@<eax>(
        int a1@<ebp>,
        int a2@<edi>,
        double a3@<st1>,
        double a4@<st0>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        void *a12,
        int a13)
{
  int v13; // eax
  _DWORD *v14; // esi

  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x6a2b7b*/
  v14 = (_DWORD *)v13; /*0x6a2b7d*/
  if ( !v13 ) /*0x6a2b81*/
    JUMPOUT(0x6A2CBA); /*0x6a2cba*/
  *(_DWORD *)(v13 + 0x20) = a2; /*0x6a2b9a*/
  if ( OblivionDynamicCast( /*0x6a2b9d*/
         a12,
         0,
         (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
         &IngredientItem `RTTI Type Descriptor',
         0) )
  {
    return MagicTarget_AddEffect_::AddEffectToTarget(a1, a2, (int)v14, a3, a4, a5, a6, a7); /*0x6a2ba7*/
  }
  else
  {
    return MagicTarget_AddEffect_::ApplyResistance(v14, a5, a6, a7, a8, a9, a10, a11, (int)a12, a13); /*0x6a2ba8*/
  }
}
