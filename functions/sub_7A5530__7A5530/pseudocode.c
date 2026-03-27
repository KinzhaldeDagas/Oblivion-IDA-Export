int __thiscall sub_7A5530(float *this, unsigned int *a2)
{
  int result; // eax
  int v4; // edx
  float *v5; // eax
  float *v6; // eax
  float *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  int v10[13]; // [esp-1Ch] [ebp-E4h] BYREF
  _BYTE v11[4]; // [esp+18h] [ebp-B0h] BYREF
  unsigned int v12; // [esp+1Ch] [ebp-ACh]
  int v13; // [esp+2Ch] [ebp-9Ch]
  unsigned int v14; // [esp+30h] [ebp-98h]
  float v15[3]; // [esp+34h] [ebp-94h] BYREF
  float v16[3]; // [esp+40h] [ebp-88h] BYREF
  float v17[3]; // [esp+4Ch] [ebp-7Ch] BYREF
  _BYTE v18[40]; // [esp+58h] [ebp-70h] BYREF
  _BYTE v19[28]; // [esp+80h] [ebp-48h] BYREF
  char v20[4]; // [esp+9Ch] [ebp-2Ch] BYREF
  unsigned int v21; // [esp+A0h] [ebp-28h]
  int v22; // [esp+B0h] [ebp-18h]
  unsigned int v23; // [esp+B4h] [ebp-14h]
  int v24; // [esp+C4h] [ebp-4h]

  result = sub_78EB40(a2);
  do
  {
    switch ( result )
    {
      case 0x4652:
        v5 = sub_78EBA0(a2, v17);
        *this = *v5;
        *(this + 1) = v5[1];
        *(this + 2) = v5[2];
        break;
      case 0x4653:
        v6 = sub_78EBA0(a2, v16);
        *(this + 3) = *v6;
        *(this + 4) = v6[1];
        *(this + 5) = v6[2];
        break;
      case 0x4654:
        v7 = sub_78EBA0(a2, v15);
        *(this + 6) = *v7;
        *(this + 7) = v7[1];
        *(this + 8) = v7[2];
        break;
      case 0x4655:
        v10[0xC] = (int)v10;
        sub_78EC20(a2, v4, (int)v10);
        sub_789120((int)v20, v10[0], v10[1], v10[2], v10[3], v10[4], v10[5], v10[6]);
        v24 = 0;
        v8 = (_DWORD *)sub_789430(v20, (int)v11);
        LOBYTE(v24) = 1;
        sub_414420((int)(this + 9), v8, 0, 0xFFFFFFFF);
        if ( v14 >= 0x10 )
          FormHeapFree(v12);
        v14 = 0xF;
        v13 = 0;
        LOBYTE(v12) = 0;
        v24 = 0xFFFFFFFF;
        if ( v23 >= 0x10 )
          FormHeapFree(v21);
        v23 = 0xF;
        v22 = 0;
        LOBYTE(v21) = 0;
        break;
      default:
        v9 = (_DWORD *)sub_7A54A0((int)v19, (int)a2, "malformed frond info (token %d)", result);
        v24 = 2;
        sub_789190((std::exception *)v18, v9, 0);
        ThrowException__((int)v18, &_TI3_AVIdvFileError__);
    }
    result = sub_78EB40(a2);
  }
  while ( result != 0x4651 );
  return result;
}
