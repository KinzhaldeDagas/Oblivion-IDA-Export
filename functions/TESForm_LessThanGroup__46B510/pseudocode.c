char __thiscall TESForm_LessThanGroup(TESForm *this, TESForm *a2)
{
  char v2; // bl
  int type; // esi
  bool v5; // cf

  v2 = 0; /*0x46b515*/
  if ( a2 ) /*0x46b519*/
  {
    if ( a2->vtbl == (TESFormVtbl *)dword_B05E20 ) /*0x46b523*/
    {
      switch ( a2->member.refID ) /*0x46b52d*/
      {
        case 0u: /*0x46b52d*/
          type = this->member.type; /*0x46b538*/
          if ( type >= TESForm_GetFormTypeFromChunkType(a2->member.flags) ) /*0x46b548*/
            return v2; /*0x46b548*/
          return 1; /*0x46b54f*/
        case 1u: /*0x46b52d*/
        case 4u: /*0x46b52d*/
        case 5u: /*0x46b52d*/
          v5 = this->member.type < kFormType_WorldSpace; /*0x46b558*/
          goto LABEL_9; /*0x46b55c*/
        case 2u: /*0x46b52d*/
        case 3u: /*0x46b52d*/
        case 6u: /*0x46b52d*/
          v5 = this->member.type < kFormType_Cell; /*0x46b552*/
          goto LABEL_9; /*0x46b556*/
        case 7u: /*0x46b52d*/
          v5 = this->member.type < kFormType_Dialog; /*0x46b55e*/
LABEL_9:
          if ( v5 ) /*0x46b562*/
            v2 = 1; /*0x46b564*/
          break; /*0x46b564*/
        default:
          return v2;
      }
    }
  }
  return v2; /*0x46b54e*/
}
