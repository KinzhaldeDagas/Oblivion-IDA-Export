int __thiscall ExtraDataList_DuplicateListForContainer(ExtraDataList *this, int a2)
{
  BSExtraData *i; // esi

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&BSExtraDataCS, (int)&aExtradatalistD);
  for ( i = *(BSExtraData **)(a2 + 4); i; i = i->members.next )
  {
    switch ( i->members.type )
    {
      case 0x12u:
      case 0x1Bu:
      case 0x1Cu:
      case 0x22u:
      case 0x27u:
      case 0x28u:
      case 0x29u:
      case 0x2Au:
      case 0x2Bu:
      case 0x2Cu:
      case 0x2Du:
      case 0x2Eu:
      case 0x2Fu:
      case 0x36u:
      case 0x37u:
      case 0x48u:
      case 0x50u:
      case 0x55u:
        ExtraDataList_CopyBSExtraData(this, i);
        break;
      default:
        continue;
    }
  }
  return NiLeaveCriticalSection_0(&BSExtraDataCS);
}
