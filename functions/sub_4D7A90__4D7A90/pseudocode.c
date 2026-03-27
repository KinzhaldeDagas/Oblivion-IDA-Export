unsigned int __thiscall sub_4D7A90(int *this, char a2)
{
  unsigned int result; // eax
  int v4; // eax

  result = *(unsigned __int8 *)((*(int (__thiscall **)(int *))(*this + 0x170))(this) + 4) - 0x23;
  if ( result <= 2 )
  {
    v4 = *this;
    if ( a2 )
      (*(void (__thiscall **)(int *, int))(v4 + 0x40))(this, 0x10000000);
    else
      (*(void (__thiscall **)(int *, int))(v4 + 0x44))(this, 0x10000000);
    return sub_4209D0((ExtraDataList *)(this + 0x11), a2);
  }
  return result;
}
