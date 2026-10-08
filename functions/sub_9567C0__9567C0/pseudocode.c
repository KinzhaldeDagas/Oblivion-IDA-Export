int __thiscall sub_9567C0(unsigned int *this, char a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  signed int v6; // ecx
  signed int v7; // eax
  signed int v8; // ecx
  signed int v9; // eax
  signed int v10; // ecx
  signed int v11; // eax
  int v12; // ecx
  int result; // eax

  *(_BYTE *)(*(this + 2) - *(this + 3) + *(this + 4) - 1) = a3; /*0x9567d3*/
  v4 = *(this + 3); /*0x9567d7*/
  v5 = *(this + 2); /*0x9567da*/
  *(this + 3) = v4 + 1; /*0x9567e2*/
  if ( v4 + 1 >= v5 ) /*0x9567e5*/
    sub_9564D0(this); /*0x9567e9*/
  *(_BYTE *)(*(this + 2) - *(this + 3) + *(this + 4) - 1) = BYTE1(a3); /*0x9567fe*/
  v6 = *(this + 2); /*0x956805*/
  v7 = *(this + 3) + 1; /*0x956809*/
  *(this + 3) = v7; /*0x95680d*/
  if ( v7 >= v6 ) /*0x956810*/
    sub_9564D0(this); /*0x956814*/
  *(_BYTE *)(*(this + 2) - *(this + 3) + *(this + 4) - 1) = BYTE2(a3); /*0x956829*/
  v8 = *(this + 2); /*0x956830*/
  v9 = *(this + 3) + 1; /*0x956834*/
  *(this + 3) = v9; /*0x956838*/
  if ( v9 >= v8 ) /*0x95683b*/
    sub_9564D0(this); /*0x95683f*/
  *(_BYTE *)(*(this + 2) - *(this + 3) + *(this + 4) - 1) = HIBYTE(a3); /*0x956852*/
  v10 = *(this + 2); /*0x956859*/
  v11 = *(this + 3) + 1; /*0x95685d*/
  *(this + 3) = v11; /*0x956861*/
  if ( v11 >= v10 ) /*0x956864*/
    sub_9564D0(this); /*0x956868*/
  *(_BYTE *)(*(this + 2) - *(this + 3) + *(this + 4) - 1) = a2; /*0x95687c*/
  v12 = *(this + 2); /*0x956883*/
  result = *(this + 3) + 1; /*0x956887*/
  *(this + 3) = result; /*0x95688b*/
  if ( result >= v12 ) /*0x95688e*/
    return sub_9564D0(this); /*0x956892*/
  return result; /*0x956897*/
}
