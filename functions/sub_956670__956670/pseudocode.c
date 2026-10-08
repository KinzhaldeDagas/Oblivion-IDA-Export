int __thiscall sub_956670(unsigned int *this, char a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  signed int v6; // ecx
  signed int v7; // eax
  signed int v8; // ecx
  signed int v9; // eax
  int v10; // ecx
  int result; // eax

  *(_BYTE *)(*(this + 2) - *(this + 3) + *(this + 4) - 1) = a3; /*0x956683*/
  v4 = *(this + 3); /*0x956687*/
  v5 = *(this + 2); /*0x95668a*/
  *(this + 3) = v4 + 1; /*0x956692*/
  if ( v4 + 1 >= v5 ) /*0x956695*/
    sub_9564D0(this); /*0x956699*/
  *(_BYTE *)(*(this + 2) - *(this + 3) + *(this + 4) - 1) = BYTE1(a3); /*0x9566ae*/
  v6 = *(this + 2); /*0x9566b5*/
  v7 = *(this + 3) + 1; /*0x9566b9*/
  *(this + 3) = v7; /*0x9566bd*/
  if ( v7 >= v6 ) /*0x9566c0*/
    sub_9564D0(this); /*0x9566c4*/
  *(_BYTE *)(*(this + 2) - *(this + 3) + *(this + 4) - 1) = BYTE2(a3); /*0x9566d7*/
  v8 = *(this + 2); /*0x9566de*/
  v9 = *(this + 3) + 1; /*0x9566e2*/
  *(this + 3) = v9; /*0x9566e6*/
  if ( v9 >= v8 ) /*0x9566e9*/
    sub_9564D0(this); /*0x9566ed*/
  *(_BYTE *)(*(this + 2) - *(this + 3) + *(this + 4) - 1) = a2; /*0x956701*/
  v10 = *(this + 2); /*0x956708*/
  result = *(this + 3) + 1; /*0x95670c*/
  *(this + 3) = result; /*0x956710*/
  if ( result >= v10 ) /*0x956713*/
    return sub_9564D0(this); /*0x956717*/
  return result; /*0x95671c*/
}
