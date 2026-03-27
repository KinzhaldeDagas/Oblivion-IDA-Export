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

  v2 = *(this + 2);
  v3 = *v2;
  v4 = v2 + 1;
  *(this + 2) = v4;
  v8 = v3;
  v6 = v4 + 1;
  v9 = *v4;
  v5 = v9;
  *(this + 2) = v4 + 1;
  if ( v3 <= v5 )
  {
    v10 = (v5 + 4 * v3) / 5;
    v11 = (3 * v3 + 2 * v5) / 5;
    v12 = (3 * v5 + 2 * v3) / 5;
    v13 = (v3 + 4 * v5) / 5;
    v14 = 0;
    v15 = 0xFF;
  }
  else
  {
    v10 = (v5 + 6 * v3) / 7;
    v11 = (5 * v3 + 2 * v5) / 7;
    v12 = (3 * v5 + 4 * v3) / 7;
    v13 = (3 * v3 + 4 * v5) / 7;
    v6 = v4 + 1;
    v14 = (5 * v5 + 2 * v3) / 7;
    v15 = (v3 + 6 * v5) / 7;
  }
  *a2 = *(&v8 + (*v6 & 7));
  a2[4] = *(&v8 + ((**(this + 2) >> 3) & 7));
  a2[8] = *(&v8 + 4 * ((*(this + 2))[1] & 1) + (**(this + 2) >> 6));
  a2[0xC] = *(&v8 + (((*(this + 2))[1] >> 1) & 7));
  a2[0x10] = *(&v8 + (((*(this + 2))[1] >> 4) & 7));
  a2[0x14] = *(&v8 + 2 * ((*(this + 2))[2] & 3) + ((*(this + 2))[1] >> 7));
  a2[0x18] = *(&v8 + (((*(this + 2))[2] >> 2) & 7));
  a2[0x1C] = *(&v8 + ((*(this + 2))[2] >> 5));
  *(this + 2) += 3;
  a2[0x20] = *(&v8 + (**(this + 2) & 7));
  a2[0x24] = *(&v8 + ((**(this + 2) >> 3) & 7));
  a2[0x28] = *(&v8 + 4 * ((*(this + 2))[1] & 1) + (**(this + 2) >> 6));
  a2[0x2C] = *(&v8 + (((*(this + 2))[1] >> 1) & 7));
  a2[0x30] = *(&v8 + (((*(this + 2))[1] >> 4) & 7));
  a2[0x34] = *(&v8 + 2 * ((*(this + 2))[2] & 3) + ((*(this + 2))[1] >> 7));
  a2[0x38] = *(&v8 + (((*(this + 2))[2] >> 2) & 7));
  result = (*(this + 2))[2] >> 5;
  a2[0x3C] = *(&v8 + result);
  *(this + 2) += 3;
  return result;
}
