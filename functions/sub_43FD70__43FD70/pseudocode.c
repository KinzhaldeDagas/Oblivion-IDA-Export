unsigned int __userpurge sub_43FD70@<eax>(
        TES *this@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectCELL *a2)
{
  unsigned int result; // eax
  TESObjectCELL **interiorCellBufferArray; // ecx
  TESObjectCELL *v8; // edx
  TESObjectCELL **v9; // ecx
  int v10; // ebx
  int i; // esi
  TESObjectCELL **v12; // eax

  if ( TES::IsInteriorCellPreloaded(this, a2) )
  {
    for ( result = 0; result < uInteriorCellBuffer; ++result )
    {
      if ( this->interiorCellBufferArray[result] == a2 )
      {
        if ( !result )
          goto LABEL_17;
        do
        {
          interiorCellBufferArray = this->interiorCellBufferArray;
          v8 = interiorCellBufferArray[result - 1];
          v9 = &interiorCellBufferArray[result--];
          *v9 = v8;
        }
        while ( result );
        result = (unsigned int)this->interiorCellBufferArray;
        *(_DWORD *)result = a2;
        return result;
      }
    }
  }
  else
  {
    v10 = uInteriorCellBuffer - 1;
    for ( i = v10; i >= 0; --i )
    {
      if ( i == v10 )
      {
        v12 = &this->interiorCellBufferArray[i];
        if ( *v12 )
          sub_447BA0(st5_0, a3, a4, *v12);
      }
      if ( i )
        this->interiorCellBufferArray[i] = this->interiorCellBufferArray[i - 1];
      else
        *this->interiorCellBufferArray = 0;
    }
LABEL_17:
    result = (unsigned int)this->interiorCellBufferArray;
    *(_DWORD *)result = a2;
  }
  return result;
}
