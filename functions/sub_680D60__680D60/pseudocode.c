char __thiscall sub_680D60(int this)
{
  char result; // al
  char Format[260]; // [esp+0h] [ebp-108h] BYREF

  result = 0; /*0x680d74*/
  if ( *(_DWORD *)(this + 4) ) /*0x680d76*/
  {
    *(_DWORD *)(this + 4) = 0; /*0x680d7e*/
    *(float *)(this + 8) = 0.0; /*0x680d81*/
    _sprintf(Format, "Clearing last door."); /*0x680d90*/
    Interface_ConsolePrint(Format); /*0x680d9a*/
    return 1; /*0x680da2*/
  }
  return result; /*0x680da5*/
}
