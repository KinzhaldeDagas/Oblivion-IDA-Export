UInt32 __thiscall sub_6479C0(LowProcess *this, Actor *a2)
{
  UInt32 unk044; // eax
  UInt32 result; // eax
  UInt32 *p_unk03C; // edi
  int v6; // ebx
  UInt32 v7; // edi

  this->Unk_2E(this, 0); /*0x6479d0*/
  this->SetUnk01C(this, 0); /*0x6479dd*/
  unk044 = this->unk044; /*0x6479df*/
  this->follow = 0; /*0x6479e4*/
  this->unk030 = 0; /*0x6479e7*/
  if ( unk044 ) /*0x6479ea*/
  {
    BSSimpleList_Remove((int *)&this->unk03C, unk044); /*0x6479f0*/
    if ( this->unk044 ) /*0x6479f5*/
      FormHeapFree(this->unk044); /*0x6479fd*/
    this->unk044 = 0; /*0x647a05*/
  }
  result = this->unk048; /*0x647a08*/
  if ( result ) /*0x647a0d*/
  {
    BSSimpleList_Remove((int *)&this->unk03C, this->unk048); /*0x647a13*/
    result = this->unk048; /*0x647a18*/
    if ( result ) /*0x647a1d*/
      FormHeapFree(this->unk048); /*0x647a20*/
    this->unk048 = 0; /*0x647a28*/
  }
  p_unk03C = &this->unk03C; /*0x647a2b*/
  while ( this->unk040 || *p_unk03C ) /*0x647a37*/
  {
    v6 = *p_unk03C; /*0x647a39*/
    if ( *p_unk03C ) /*0x647a39*/
      FormHeapFree(*p_unk03C); /*0x647a40*/
    BSSimpleList_Remove((int *)&this->unk03C, v6); /*0x647a4b*/
  }
  if ( this->unk050 ) /*0x647a52*/
  {
    do /*0x647a6c*/
    {
      v7 = *(_DWORD *)(this->unk050 + 4); /*0x647a5b*/
      FormHeapFree(this->unk050); /*0x647a5f*/
      this->unk050 = v7; /*0x647a69*/
    }
    while ( v7 ); /*0x647a6c*/
  }
  this->unk04C = 0; /*0x647a6f*/
  return result; /*0x647a6e*/
}
