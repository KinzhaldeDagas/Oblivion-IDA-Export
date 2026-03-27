char __thiscall TESForm_LessThanGroup(TESForm *this, TESForm *a2)
{
  char v2; // bl
  int type; // esi
  bool v5; // cf

  v2 = 0;
  if ( a2 )
  {
    if ( a2->vtbl == (TESFormVtbl *)dword_B05E20 )
    {
      switch ( a2->member.refID )
      {
        case 0u:
          type = this->member.type;
          if ( type >= TESForm_GetFormTypeFromChunkType(a2->member.flags) )
            return v2;
          return 1;
        case 1u:
        case 4u:
        case 5u:
          v5 = this->member.type < kFormType_WorldSpace;
          goto LABEL_9;
        case 2u:
        case 3u:
        case 6u:
          v5 = this->member.type < kFormType_Cell;
          goto LABEL_9;
        case 7u:
          v5 = this->member.type < kFormType_Dialog;
LABEL_9:
          if ( v5 )
            v2 = 1;
          break;
        default:
          return v2;
      }
    }
  }
  return v2;
}
