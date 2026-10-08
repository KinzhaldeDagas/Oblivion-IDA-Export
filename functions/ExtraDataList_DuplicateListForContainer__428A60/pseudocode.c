int __thiscall ExtraDataList_DuplicateListForContainer(ExtraDataList *this, int a2)
{
  BSExtraData *i; // esi

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&MEMORY[0xB33800], (int)&aExtradatalistD); /*0x428a6e*/
  for ( i = *(BSExtraData **)(a2 + 4); i; i = i->members.next ) /*0x428a7c*/
  {
    switch ( i->members.type ) /*0x428a93*/
    {
      case 0x12u: /*0x428a93*/
      case 0x1Bu: /*0x428a93*/
      case 0x1Cu: /*0x428a93*/
      case 0x22u: /*0x428a93*/
      case 0x27u: /*0x428a93*/
      case 0x28u: /*0x428a93*/
      case 0x29u: /*0x428a93*/
      case 0x2Au: /*0x428a93*/
      case 0x2Bu: /*0x428a93*/
      case 0x2Cu: /*0x428a93*/
      case 0x2Du: /*0x428a93*/
      case 0x2Eu: /*0x428a93*/
      case 0x2Fu: /*0x428a93*/
      case 0x36u: /*0x428a93*/
      case 0x37u: /*0x428a93*/
      case 0x48u: /*0x428a93*/
      case 0x50u: /*0x428a93*/
      case 0x55u: /*0x428a93*/
        ExtraDataList_CopyBSExtraData(this, i); /*0x428a9d*/
        break; /*0x428a9d*/
      default:
        continue;
    }
  }
  return NiLeaveCriticalSection_0(&MEMORY[0xB33800]); /*0x428ab3*/
}
