int __thiscall sub_7124F0(_DWORD *this, int a2)
{
  int v3; // [esp-8h] [ebp-8h]

  if ( !a2 )
    return 0xFFFFFFFF;
  v3 = a2;
  a2 = 0xFFFFFFFF;
  NiTMap_GetAt(this + 0x91, v3, &a2);
  return a2;
}
