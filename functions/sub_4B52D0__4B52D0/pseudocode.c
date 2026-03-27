int __thiscall sub_4B52D0(char *this)
{
  char v1; // al

  v1 = *(this + 0x89);
  if ( v1 == (char)0xFF )
    return 0xFFFFFFFF;
  else
    return ActorValue_GetAVFromGroupOffset(2, v1);
}
