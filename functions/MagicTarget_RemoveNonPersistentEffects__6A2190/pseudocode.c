void __userpurge MagicTarget_RemoveNonPersistentEffects(void *this@<ecx>, double a2@<st0>, char a3)
{
  ActiveEffect **v3; // ebx
  ActiveEffect *v4; // edi
  bool v5; // zf
  MagicItem *item; // esi
  _DWORD *v7; // eax

  v3 = (ActiveEffect **)(*(int (__usercall **)@<eax>(void *@<ecx>, double@<st0>))(*(_DWORD *)this + 8))(this, a2); /*0x6a2198*/
  while ( v3 ) /*0x6a219c*/
  {
    if ( !v3[1] && !*v3 ) /*0x6a21b7*/
      break; /*0x6a21b9*/
    v4 = *v3; /*0x6a21bf*/
    v5 = *v3 == 0; /*0x6a21c1*/
    v3 = (ActiveEffect **)v3[1]; /*0x6a21c3*/
    if ( !v5 ) /*0x6a21c5*/
    {
      item = v4->members.item; /*0x6a21c7*/
      if ( !(*(int (__thiscall **)(MagicItem *))(*(_DWORD *)item + 0x18))(item) /*0x6a222a*/
        || (*(int (__thiscall **)(MagicItem *))(*(_DWORD *)item + 0x18))(item) == 2
        || (*(int (__thiscall **)(MagicItem *))(*(_DWORD *)item + 0x18))(item) == 3
        || (*(int (__thiscall **)(MagicItem *))(*(_DWORD *)item + 0x18))(item) == 7
        || (*(int (__thiscall **)(MagicItem *))(*(_DWORD *)item + 0x18))(item) == 8
        || (v7 = OblivionDynamicCast(
                   item,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
                   &EnchantmentItem `RTTI Type Descriptor',
                   0)) != 0
        && !v7[0xD] )
      {
        a2 = ActiveEffect_Base_Remove(v4, a3, a2, a3);// Verified nonpersistent-effect sweep uses the same EffectNode traversal but only requests termination for selected magic item categories/unenchantable enchantments; list unlink and ActiveEffect destruction are deferred to MagicTarget_ProcessEffects. /*0x6a2233*/
      }
    }
  }
}
