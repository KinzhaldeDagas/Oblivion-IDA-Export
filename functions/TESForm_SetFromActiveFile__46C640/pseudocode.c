UInt32 __thiscall TESForm_SetFromActiveFile(TESForm *this, TESForm *a2)
{
  UInt32 result; // eax
  UInt32 v4; // edx
  int v5; // ecx
  int v6; // edx
  int v7; // ecx

  result = this->member.flags;
  if ( (_BYTE)a2 )
  {
    if ( (result & 2) == 0 )
    {
      result >>= 0xE;
      if ( (result & 1) == 0 )
      {
        result = 0;
        if ( dword_B06158 )
        {
          while ( *(TESForm **)(dword_B06150 + 4 * result) != this )
          {
            if ( ++result >= dword_B06158 )
              goto TESForm_SetFromActiveFile___AddToActiveFile;
          }
        }
        else
        {
TESForm_SetFromActiveFile___AddToActiveFile:
          a2 = this;
          result = NiTArray_AddItem_((unsigned int *)&TESForm_ActiveFileFormList, &a2);
        }
      }
    }
    this->member.flags |= 2u;
  }
  else
  {
    result >>= 1;
    if ( (result & 1) != 0 )
    {
      v4 = dword_B06158;
      result = 0;
      if ( dword_B06158 )
      {
        v5 = dword_B06150;
        while ( *(TESForm **)(v5 + 4 * result) != this )
        {
          if ( ++result >= v4 )
          {
            this->member.flags &= ~2u;
            return result;
          }
        }
        if ( result < v4 )
        {
          v6 = *(_DWORD *)(v5 + 4 * result);
          *(_DWORD *)(v5 + 4 * result) = 0;
          if ( v6 )
            --dword_B0615C;
          v7 = dword_B06158 - 1;
          if ( result == v7 )
            dword_B06158 = v7;
        }
      }
    }
    this->member.flags &= ~2u;
  }
  return result;
}
