int __thiscall sub_733CA0(unsigned __int8 **this, _BYTE *a2)
{
  unsigned __int8 *v2; // eax
  unsigned __int8 v3; // dl
  unsigned __int8 *v4; // eax
  unsigned int v5; // ebx
  _BYTE *v6; // ebp
  int result; // eax
  unsigned __int8 v8; // [esp+14h] [ebp-Ch] BYREF
  unsigned __int8 v9; // [esp+15h] [ebp-Bh]
  char v10; // [esp+16h] [ebp-Ah]
  char v11; // [esp+17h] [ebp-9h]
  char v12; // [esp+18h] [ebp-8h]
  char v13; // [esp+19h] [ebp-7h]
  char v14; // [esp+1Ah] [ebp-6h]
  char v15; // [esp+1Bh] [ebp-5h]

  v2 = *(this + 2); /*0x733cb3*/
  v3 = *v2; /*0x733cb6*/
  v4 = v2 + 1; /*0x733cbc*/
  *(this + 2) = v4; /*0x733cc3*/
  v8 = v3; /*0x733cc6*/
  v6 = v4 + 1; /*0x733cd1*/
  v9 = *v4; /*0x733cd4*/
  v5 = v9; /*0x733ccc*/
  *(this + 2) = v4 + 1; /*0x733cdc*/
  if ( v3 <= v5 ) /*0x733cdf*/
  {
    v10 = (v5 + 4 * v3) / 5; /*0x733da0*/
    v11 = (3 * v3 + 2 * v5) / 5; /*0x733db4*/
    v12 = (3 * v5 + 2 * v3) / 5; /*0x733dc8*/
    v13 = (v3 + 4 * v5) / 5; /*0x733dd9*/
    v14 = 0; /*0x733ddd*/
    v15 = 0xFF; /*0x733de2*/
  }
  else
  {
    v10 = (v5 + 6 * v3) / 7; /*0x733cfd*/
    v11 = (5 * v3 + 2 * v5) / 7; /*0x733d19*/
    v12 = (3 * v5 + 4 * v3) / 7; /*0x733d35*/
    v13 = (3 * v3 + 4 * v5) / 7; /*0x733d51*/
    v6 = v4 + 1; /*0x733d6d*/
    v14 = (5 * v5 + 2 * v3) / 7; /*0x733d71*/
    v15 = (v3 + 6 * v5) / 7; /*0x733d8d*/
  }
  *a2 = *(&v8 + (*v6 & 7)); /*0x733df3*/
  a2[4] = *(&v8 + ((**(this + 2) >> 3) & 7)); /*0x733e06*/
  a2[8] = *(&v8 + 4 * ((*(this + 2))[1] & 1) + (**(this + 2) >> 6)); /*0x733e24*/
  a2[0xC] = *(&v8 + (((*(this + 2))[1] >> 1) & 7)); /*0x733e3b*/
  a2[0x10] = *(&v8 + (((*(this + 2))[1] >> 4) & 7)); /*0x733e53*/
  a2[0x14] = *(&v8 + 2 * ((*(this + 2))[2] & 3) + ((*(this + 2))[1] >> 7)); /*0x733e76*/
  a2[0x18] = *(&v8 + (((*(this + 2))[2] >> 2) & 7)); /*0x733e8e*/
  a2[0x1C] = *(&v8 + ((*(this + 2))[2] >> 5)); /*0x733ea3*/
  *(this + 2) += 3; /*0x733ea6*/
  a2[0x20] = *(&v8 + (**(this + 2) & 7)); /*0x733eba*/
  a2[0x24] = *(&v8 + ((**(this + 2) >> 3) & 7)); /*0x733ed1*/
  a2[0x28] = *(&v8 + 4 * ((*(this + 2))[1] & 1) + (**(this + 2) >> 6)); /*0x733ef2*/
  a2[0x2C] = *(&v8 + (((*(this + 2))[1] >> 1) & 7)); /*0x733f08*/
  a2[0x30] = *(&v8 + (((*(this + 2))[1] >> 4) & 7)); /*0x733f1c*/
  a2[0x34] = *(&v8 + 2 * ((*(this + 2))[2] & 3) + ((*(this + 2))[1] >> 7)); /*0x733f3a*/
  a2[0x38] = *(&v8 + (((*(this + 2))[2] >> 2) & 7)); /*0x733f55*/
  result = (*(this + 2))[2] >> 5; /*0x733f5e*/
  a2[0x3C] = *(&v8 + result); /*0x733f66*/
  *(this + 2) += 3; /*0x733f69*/
  return result; /*0x733f6c*/
}
