// Oblivion checked collision-vector index: validates index against the 0x1C-stride size and returns begin + index*0x1C.
OB_CollisionObject_010201A0 *__thiscall OB_stVector_CollisionObject_At_010201A0(
        OB_stVector_CollisionObject_010201A0 *this,
        unsigned int index)
{
  int v2; // ebx
  OB_CollisionObject_010201A0 *begin; // eax

  begin = this->begin; /*0x7876f3*/
  if ( !begin || index >= this->end - begin ) /*0x787719*/
    _invalid_parameter_noinfo(v2, index, (int)this); /*0x78771b*/
  return &this->begin[index]; /*0x78772c*/
}
