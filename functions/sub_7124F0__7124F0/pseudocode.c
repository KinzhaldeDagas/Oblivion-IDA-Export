int __thiscall sub_7124F0(_DWORD *this, int a2)
{
  int v3; // [esp-8h] [ebp-8h]

  if ( !a2 ) /*0x7124f6*/
    return 0xFFFFFFFF; /*0x7124f8*/
  v3 = a2; /*0x712503*/
  a2 = 0xFFFFFFFF; /*0x71250a*/
  NiTMap_GetAt(this + 0x91, v3, &a2); /*0x712512*/
  return a2; /*0x7124fb*/
}
