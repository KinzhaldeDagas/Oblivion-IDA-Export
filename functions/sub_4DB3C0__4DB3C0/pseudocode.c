char __thiscall sub_4DB3C0(_BYTE *this)
{
  int v2; // eax
  int v3; // esi
  unsigned __int8 v5; // al

  v2 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x170))(this);
  v3 = v2;
  if ( !v2 )
    return 0;
  switch ( *(_DWORD *)(v2 + 0xC) )
  {
    case 4:
    case 5:
    case 6:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x34:
    case 0x3B:
      return 1;
    default:
      v5 = *(_BYTE *)(v2 + 4);
      if ( v5 != 0x29
        && ((unsigned int)v5 - 0x23 > 1 || (*(_DWORD *)(v3 + 0x28) & 0x200) != 0)
        && (v5 != 0x18 || !sub_4B78E0((_DWORD *)v3) && !ExtraDataList_GetTeleport((ExtraDataList *)(this + 0x44)))
        && (*(_BYTE *)(v3 + 4) != 0x24
         || *((_BYTE *)OblivionDynamicCast(
                         (void *)v3,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                         &TESCreature `RTTI Type Descriptor',
                         0)
            + 0x104) != 4) )
      {
        return 0;
      }
      break;
  }
  return 1;
}
