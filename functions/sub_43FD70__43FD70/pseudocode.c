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

  if ( TES::IsInteriorCellPreloaded(this, a2) ) /*0x43fd79*/
  {
    for ( result = 0; result < uInteriorCellBuffer; ++result ) /*0x43fd88*/
    {
      if ( this->interiorCellBufferArray[result] == a2 ) /*0x43fd9e*/
      {
        if ( !result ) /*0x43fda7*/
          goto LABEL_17; /*0x43fda7*/
        do /*0x43fdbf*/
        {
          interiorCellBufferArray = this->interiorCellBufferArray; /*0x43fdb0*/
          v8 = interiorCellBufferArray[result - 1]; /*0x43fdb3*/
          v9 = &interiorCellBufferArray[result--]; /*0x43fdb7*/
          *v9 = v8; /*0x43fdbd*/
        }
        while ( result ); /*0x43fdbf*/
        result = (unsigned int)this->interiorCellBufferArray; /*0x43fdc1*/
        *(_DWORD *)result = a2; /*0x43fdc5*/
        return result; /*0x43fdc8*/
      }
    }
  }
  else
  {
    v10 = uInteriorCellBuffer - 1; /*0x43fdd2*/
    for ( i = v10; i >= 0; --i ) /*0x43fdd8*/
    {
      if ( i == v10 ) /*0x43fde2*/
      {
        v12 = &this->interiorCellBufferArray[i]; /*0x43fdeb*/
        if ( *v12 ) /*0x43fde7*/
          TESObjectCELL_Deactivate(st5_0, a3, a4, *v12); /*0x43fdf9*/
      }
      if ( i ) /*0x43fe00*/
        this->interiorCellBufferArray[i] = this->interiorCellBufferArray[i - 1]; /*0x43fe0c*/
      else
        *this->interiorCellBufferArray = 0; /*0x43fe13*/
    }
LABEL_17:
    result = (unsigned int)this->interiorCellBufferArray; /*0x43fe20*/
    *(_DWORD *)result = a2; /*0x43fe23*/
  }
  return result; /*0x43fdc7*/
}
