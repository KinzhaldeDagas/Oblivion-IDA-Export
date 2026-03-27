int __userpurge sub_7A4950@<eax>(float *this@<ecx>, float *a2@<edi>, unsigned int *a3)
{
  int result; // eax
  int v5; // edx
  _DWORD *v6; // eax
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edx
  int v10[6]; // [esp-1Ch] [ebp-BCh] BYREF
  rsize_t v11; // [esp-4h] [ebp-A4h]
  int *v12; // [esp+14h] [ebp-8Ch]
  int v13; // [esp+18h] [ebp-88h] BYREF
  unsigned int v14; // [esp+1Ch] [ebp-84h]
  int v15; // [esp+2Ch] [ebp-74h]
  unsigned int v16; // [esp+30h] [ebp-70h]
  _BYTE v17[4]; // [esp+34h] [ebp-6Ch] BYREF
  unsigned int v18; // [esp+38h] [ebp-68h]
  int v19; // [esp+48h] [ebp-58h]
  unsigned int v20; // [esp+4Ch] [ebp-54h]
  int v21; // [esp+50h] [ebp-50h] BYREF
  char v22; // [esp+54h] [ebp-4Ch]
  int v23; // [esp+64h] [ebp-3Ch]
  int v24; // [esp+68h] [ebp-38h]
  _BYTE v25[40]; // [esp+6Ch] [ebp-34h] BYREF
  int v26; // [esp+9Ch] [ebp-4h]

  result = sub_78EB40(a3);
  do
  {
    if ( result > 0x7D0 )
    {
      switch ( result )
      {
        case 0x7D1:
          *(this + 0x10) = sub_78EB10(a3);
          goto LABEL_21;
        case 0x7D2:
          v8 = (*a3)++;
          v9 = a3[2];
          if ( !v9 || v8 >= a3[3] - v9 )
            _invalid_parameter_noinfo();
          goto LABEL_21;
        case 0x7D3:
          *(this + 0x11) = sub_78EB10(a3);
          goto LABEL_21;
        case 0x7D4:
          sub_78EB40(a3);
          goto LABEL_21;
        case 0x7D5:
          v7 = sub_78EB40(a3);
          sub_7A24F0(this, v7);
          goto LABEL_21;
        case 0x7D6:
          *(this + 0x13) = sub_78EB10(a3);
          goto LABEL_21;
        case 0x7D7:
          *(this + 0x14) = sub_78EB10(a3);
          goto LABEL_21;
        default:
          goto LABEL_23;
      }
    }
    if ( result == 0x7D0 )
    {
      v12 = v10;
      sub_78EC20(a3, v5, (int)v10);
      sub_789120((int)&v13, v10[0], v10[1], v10[2], v10[3], v10[4], v10[5], v11);
      a2 = this + 9;
      v26 = 0;
      sub_414420((int)(this + 9), &v13, 0, 0xFFFFFFFF);
      v26 = 0xFFFFFFFF;
      if ( v16 >= 0x10 )
        FormHeapFree(v14);
      v16 = 0xF;
      v15 = 0;
      LOBYTE(v14) = 0;
      v6 = (_DWORD *)sub_789430((char *)this + 0x24, (int)v17);
      v26 = 1;
      sub_414420((int)(this + 9), v6, 0, 0xFFFFFFFF);
      v26 = 0xFFFFFFFF;
      if ( v20 >= 0x10 )
        FormHeapFree(v18);
      v20 = 0xF;
      v19 = 0;
      LOBYTE(v18) = 0;
    }
    else
    {
      if ( result != 0x3F6 )
      {
LABEL_23:
        LODWORD(v11) = 0x22;
        v24 = 0xF;
        v23 = 0;
        v22 = 0;
        sub_414500(&v21, (int)a2, "malformed general tree information", v11);
        v26 = 2;
        sub_789190((std::exception *)v25, &v21, 0);
        ThrowException__((int)v25, &_TI3_AVIdvFileError__);
      }
      sub_7A4190((unsigned int *)this, a3);
    }
LABEL_21:
    result = sub_78EB40(a3);
  }
  while ( result != 0x3EB );
  return result;
}
