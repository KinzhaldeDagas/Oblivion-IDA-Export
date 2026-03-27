void __userpurge MagicTarget_RemoveNonPersistentEffects(void *this@<ecx>, double a2@<st0>, char a3)
{
  ActiveEffect **v3; // ebx
  ActiveEffect *v4; // edi
  bool v5; // zf
  MagicItem *item; // esi
  _DWORD *v7; // eax

  v3 = (ActiveEffect **)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 8))(this);
  while ( v3 )
  {
    if ( !v3[1] && !*v3 )
      break;
    v4 = *v3;
    v5 = *v3 == 0;
    v3 = (ActiveEffect **)v3[1];
    if ( !v5 )
    {
      item = v4->members.item;
      if ( !(*(int (__thiscall **)(MagicItem *))(*(_DWORD *)item + 0x18))(item)
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
        a2 = ActiveEffect_Base_Remove(v4, a3, a2, a3);
      }
    }
  }
}
