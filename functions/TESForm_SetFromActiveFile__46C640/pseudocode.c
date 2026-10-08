// local variable allocation has failed, the output may be wrong!
unsigned int __thiscall TESForm_SetFromActiveFile(TESForm *self, bool fromActiveFile)
{
  unsigned int result; // eax
  unsigned int usedEnd; // edx
  void **data; // ecx
  void *v6; // edx
  unsigned int v7; // ecx

  result = self->member.flags; /*0x46c648*/
  if ( fromActiveFile ) /*0x46c64b*/
  {
    if ( (result & 2) == 0 ) /*0x46c654*/
    {
      result >>= 0xE; /*0x46c656*/
      if ( (result & 1) == 0 ) /*0x46c65b*/
      {
        result = 0; /*0x46c663*/
        if ( TESForm_ActiveFileFormList.usedEnd ) /*0x46c65d*/
        {
          while ( TESForm_ActiveFileFormList.data[result] != self ) /*0x46c673*/
          {
            if ( ++result >= TESForm_ActiveFileFormList.usedEnd ) /*0x46c67a*/
              goto TESForm_SetFromActiveFile___AddToActiveFile; /*0x46c67a*/
          }
        }
        else
        {
TESForm_SetFromActiveFile___AddToActiveFile:
          *(_DWORD *)&fromActiveFile = self; /*0x46c67c*/
          result = NiTLargeArray_RawPointer_AddFirstEmpty(&TESForm_ActiveFileFormList, (void **)&fromActiveFile); /*0x46c68a*/
        }
      }
    }
    self->member.flags |= 2u; /*0x46c68f*/
  }
  else
  {
    result >>= 1; /*0x46c697*/
    if ( (result & 1) != 0 ) /*0x46c69b*/
    {
      usedEnd = TESForm_ActiveFileFormList.usedEnd; /*0x46c69d*/
      result = 0; /*0x46c6a3*/
      if ( TESForm_ActiveFileFormList.usedEnd ) /*0x46c69d*/
      {
        data = TESForm_ActiveFileFormList.data; /*0x46c6a9*/
        while ( data[result] != self ) /*0x46c6b3*/
        {
          if ( ++result >= usedEnd ) /*0x46c6ba*/
          {
            self->member.flags &= ~2u; /*0x46c6bc*/
            return result; /*0x46c6c1*/
          }
        }
        if ( result < usedEnd ) /*0x46c6c6*/
        {
          v6 = data[result]; /*0x46c6c8*/
          data[result] = 0; /*0x46c6cd*/
          if ( v6 ) /*0x46c6d4*/
            --TESForm_ActiveFileFormList.occupiedCount; /*0x46c6d6*/
          v7 = TESForm_ActiveFileFormList.usedEnd - 1; /*0x46c6e3*/
          if ( result == v7 ) /*0x46c6e8*/
            TESForm_ActiveFileFormList.usedEnd = v7; /*0x46c6ea*/
        }
      }
    }
    self->member.flags &= ~2u; /*0x46c6f0*/
  }
  return result; /*0x46c693*/
}
