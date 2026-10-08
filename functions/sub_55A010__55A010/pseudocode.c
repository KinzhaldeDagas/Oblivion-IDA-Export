_DWORD *__thiscall sub_55A010(_DWORD *this, unsigned int a2, int a3)
{
  int v4; // ecx
  __int64 v5; // rax

  v4 = 0; /*0x55a040*/
  *this = &BSFaceGenMorphStatistical::`vftable'; /*0x55a048*/
  *(this + 2) = a2; /*0x55a04e*/
  *(this + 3) = a3; /*0x55a051*/
  if ( a2 ) /*0x55a054*/
  {
    v5 = 4LL * a2; /*0x55a05b*/
    LOBYTE(v4) = HIDWORD(v5) != 0; /*0x55a05d*/
    *(this + 1) = FormHeapAlloc(v5 | -v4); /*0x55a06a*/
  }
  else
  {
    *(this + 1) = 0; /*0x55a085*/
  }
  return this; /*0x55a072*/
}
