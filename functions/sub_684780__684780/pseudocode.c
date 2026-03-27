bool __thiscall sub_684780(char **this)
{
  char *v1; // ecx
  bool result; // al
  int v3; // eax

  v1 = *(this + 0xC);
  result = 0;
  if ( v1 )
  {
    v3 = sub_680CB0(v1);
    return v3 && v3 != 7;
  }
  return result;
}
