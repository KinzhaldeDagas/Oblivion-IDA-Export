char __thiscall sub_7EE330(_DWORD *this, _DWORD *a2, int a3)
{
  char result; // al

  result = sub_7ECC60(this, a2, *(float *)&a3, &a3);
  if ( !result )
  {
    if ( a3 )
    {
      result = (unsigned __int8)sub_589640(this + 0x1B, a3, &a2);
      *(this + 9) = 0;
      return result;
    }
    result = (unsigned __int8)sub_5B1E20((BSTextureManager *)(this + 0x1B), (void **)&a2);
  }
  *(this + 9) = 0;
  return result;
}
