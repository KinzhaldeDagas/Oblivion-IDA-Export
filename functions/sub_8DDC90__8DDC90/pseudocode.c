char __thiscall sub_8DDC90(int this, int a2)
{
  int v2; // edx
  signed int v3; // eax
  _DWORD *v4; // esi

  v2 = *(_DWORD *)(this + 0x60); /*0x8ddc90*/
  v3 = 0; /*0x8ddc94*/
  if ( v2 <= 0 ) /*0x8ddc9d*/
  {
LABEL_5:
    v3 = 0xFFFFFFFF; /*0x8ddcae*/
  }
  else
  {
    v4 = *(_DWORD **)(this + 0x5C); /*0x8ddc9f*/
    while ( *v4 != a2 ) /*0x8ddca4*/
    {
      ++v3; /*0x8ddca6*/
      ++v4; /*0x8ddca7*/
      if ( v3 >= v2 ) /*0x8ddcac*/
        goto LABEL_5; /*0x8ddcac*/
    }
  }
  *(_DWORD *)(*(_DWORD *)(this + 0x5C) + 4 * v3) = 0; /*0x8ddcb4*/
  *(_DWORD *)(a2 + 0xC) = 0; /*0x8ddcbb*/
  *(_BYTE *)(this + 0x26) = 1; /*0x8ddcc6*/
  *(_BYTE *)(this + 0x27) = 1; /*0x8ddcc9*/
  return 1; /*0x8ddcc2*/
}
