int __thiscall sub_8DDBD0(int *this, int a2, int *a3)
{
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int result; // eax

  v3 = *a3; /*0x8ddbd4*/
  if ( *(this + 2) > *a3 ) /*0x8ddbdc*/
    v3 = *(this + 2); /*0x8ddbde*/
  *(this + 2) = v3; /*0x8ddbe0*/
  if ( v3 <= a3[1] ) /*0x8ddbe8*/
    v3 = a3[1]; /*0x8ddbea*/
  v4 = *(this + 3); /*0x8ddbec*/
  *(this + 2) = v3; /*0x8ddbef*/
  *(this + 3) = a3[1] + v4; /*0x8ddbf7*/
  v5 = *(this + 6); /*0x8ddc02*/
  *(this + 4) += a3[2]; /*0x8ddc05*/
  result = a3[3] + v5; /*0x8ddc0b*/
  *(this + 6) = result; /*0x8ddc0d*/
  return result; /*0x8ddc10*/
}
