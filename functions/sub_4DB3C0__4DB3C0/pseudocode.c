char __thiscall sub_4DB3C0(_BYTE *this)
{
  int v2; // eax
  int v3; // esi
  unsigned __int8 v5; // al

  v2 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x170))(this); /*0x4db3cc*/
  v3 = v2; /*0x4db3ce*/
  if ( !v2 ) /*0x4db3d2*/
    return 0; /*0x4db452*/
  switch ( *(_DWORD *)(v2 + 0xC) ) /*0x4db3e6*/
  {
    case 4: /*0x4db3e6*/
    case 5: /*0x4db3e6*/
    case 6: /*0x4db3e6*/
    case 0x10: /*0x4db3e6*/
    case 0x11: /*0x4db3e6*/
    case 0x12: /*0x4db3e6*/
    case 0x34: /*0x4db3e6*/
    case 0x3B: /*0x4db3e6*/
      return 1;
    default:
      v5 = *(_BYTE *)(v2 + 4); /*0x4db3f2*/
      if ( v5 != 0x29 /*0x4db450*/
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
        return 0; /*0x4db450*/
      }
      break; /*0x4db450*/
  }
  return 1; /*0x4db3ed*/
}
