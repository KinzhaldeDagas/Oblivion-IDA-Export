UInt32 __thiscall sub_6479C0(LowProcess *this, Actor *a2)
{
  UInt32 unk044; // eax
  UInt32 result; // eax
  UInt32 *p_unk03C; // edi
  int v6; // ebx
  UInt32 v7; // edi

  this->Unk_2E(this, 0);
  this->SetUnk01C(this, 0);
  unk044 = this->unk044;
  this->follow = 0;
  this->unk030 = 0;
  if ( unk044 )
  {
    BSSimpleList_Remove(&this->unk03C, unk044);
    if ( this->unk044 )
      FormHeapFree(this->unk044);
    this->unk044 = 0;
  }
  result = this->unk048;
  if ( result )
  {
    BSSimpleList_Remove(&this->unk03C, this->unk048);
    result = this->unk048;
    if ( result )
      FormHeapFree(this->unk048);
    this->unk048 = 0;
  }
  p_unk03C = &this->unk03C;
  while ( this->unk040 || *p_unk03C )
  {
    v6 = *p_unk03C;
    if ( *p_unk03C )
      FormHeapFree(*p_unk03C);
    result = BSSimpleList_Remove(&this->unk03C, v6);
  }
  if ( this->unk050 )
  {
    do
    {
      v7 = *(_DWORD *)(this->unk050 + 4);
      FormHeapFree(this->unk050);
      this->unk050 = v7;
    }
    while ( v7 );
  }
  this->unk04C = 0;
  return result;
}
