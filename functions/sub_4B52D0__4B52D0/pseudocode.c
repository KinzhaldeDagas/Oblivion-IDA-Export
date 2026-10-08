int __thiscall sub_4B52D0(char *this)
{
  char v1; // al

  v1 = *(this + 0x89); /*0x4b52d0*/
  if ( v1 == (char)0xFF ) /*0x4b52d8*/
    return 0xFFFFFFFF; /*0x4b52da*/
  else
    return ActorValue_GetAVFromGroupOffset(2, v1); /*0x4b52e1*/
}
