int __thiscall sub_79F1E0(_DWORD *this, unsigned int *a2)
{
  _DWORD *v2; // edi
  int result; // eax
  char **v4; // eax
  double v5; // st7
  int v6; // eax
  int v7; // edx
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  int v10[12]; // [esp-1Ch] [ebp-138h] BYREF
  _DWORD *v11; // [esp+14h] [ebp-108h]
  int v12; // [esp+18h] [ebp-104h]
  int *v13; // [esp+1Ch] [ebp-100h]
  int v14; // [esp+20h] [ebp-FCh] BYREF
  unsigned int v15; // [esp+24h] [ebp-F8h]
  int v16; // [esp+34h] [ebp-E8h]
  unsigned int v17; // [esp+38h] [ebp-E4h]
  _BYTE v18[4]; // [esp+3Ch] [ebp-E0h] BYREF
  unsigned int v19; // [esp+40h] [ebp-DCh]
  int v20; // [esp+50h] [ebp-CCh]
  unsigned int v21; // [esp+54h] [ebp-C8h]
  _BYTE v22[68]; // [esp+80h] [ebp-9Ch] BYREF
  _BYTE v23[28]; // [esp+C4h] [ebp-58h] BYREF
  char v24[20]; // [esp+E0h] [ebp-3Ch] BYREF
  int v25; // [esp+F4h] [ebp-28h]
  int v26; // [esp+F8h] [ebp-24h]
  float v27; // [esp+FCh] [ebp-20h]
  float v28; // [esp+100h] [ebp-1Ch]
  float v29; // [esp+104h] [ebp-18h]
  float v30; // [esp+108h] [ebp-14h]
  int v31; // [esp+118h] [ebp-4h]

  v2 = this;
  v11 = this;
  result = sub_78EB40(a2);
  do
  {
    if ( result > 0x36B7 )
    {
      if ( result != 0x36B8 )
      {
LABEL_36:
        v9 = (_DWORD *)sub_7A54A0((int)v23, "malformed frond info (token %d)", result);
        v31 = 4;
        sub_789190((std::exception *)v22, v9, 0);
        ThrowException__((int)v22, &_TI3_AVIdvFileError__);
      }
      v2[0x1A] = sub_78EB40(a2);
    }
    else
    {
      if ( result != 0x36B7 )
      {
        switch ( result )
        {
          case 0x32CA:
            v2[0xE] = sub_78EB40(a2);
            goto LABEL_31;
          case 0x32CB:
            v2[0xA] = sub_78EB40(a2);
            goto LABEL_31;
          case 0x32CC:
            v2[0xB] = sub_78EB40(a2);
            goto LABEL_31;
          case 0x32CD:
            v4 = sub_7909D0(a2);
            sub_799EB0(v2, (unsigned int)v4);
            goto LABEL_31;
          case 0x32CE:
            v2[0xD] = sub_78EB40(a2);
            goto LABEL_31;
          case 0x32CF:
            *((_BYTE *)v2 + 0x3C) = sub_7877E0(a2);
            goto LABEL_31;
          case 0x32D0:
            sub_79E380(v2 + 0x10);
            v12 = sub_78EB40(a2);
            if ( v12 > 0 )
            {
              v5 = flt_A3D65C;
              v26 = 0xF;
              v27 = v5;
              v25 = 0;
              v24[4] = 0;
              v28 = 1.0;
              v29 = 0.0;
              v30 = 0.0;
              v31 = 0;
              sub_78EB40(a2);
              v6 = sub_78EB40(a2);
              while ( 1 )
              {
                switch ( v6 )
                {
                  case 0x36B2:
                    v13 = v10;
                    sub_78EC20(a2, v7, (int)v10);
                    sub_789120((int)&v14, v10[0], v10[1], v10[2], v10[3], v10[4], v10[5], v10[6]);
                    LOBYTE(v31) = 1;
                    sub_414420((int)v24, &v14, 0, 0xFFFFFFFF);
                    LOBYTE(v31) = 0;
                    if ( v17 >= 0x10 )
                      FormHeapFree(v15);
                    v17 = 0xF;
                    v16 = 0;
                    LOBYTE(v15) = 0;
                    v8 = (_DWORD *)sub_789430(v24, (int)v18);
                    LOBYTE(v31) = 2;
                    sub_414420((int)v24, v8, 0, 0xFFFFFFFF);
                    LOBYTE(v31) = 0;
                    if ( v21 >= 0x10 )
                      FormHeapFree(v19);
                    v21 = 0xF;
                    v20 = 0;
                    LOBYTE(v19) = 0;
                    break;
                  case 0x36B3:
                    v27 = sub_78EB10(a2);
                    break;
                  case 0x36B4:
                    v28 = sub_78EB10(a2);
                    break;
                  case 0x36B5:
                    v29 = sub_78EB10(a2);
                    break;
                  case 0x36B6:
                    v30 = sub_78EB10(a2);
                    break;
                  default:
                    JUMPOUT(0x79F568);
                }
                v6 = sub_78EB40(a2);
                if ( v6 == 0x36B1 )
                  sub_79F040(v11 + 0x10, (int)v24);
              }
            }
            v2 = v11;
            goto LABEL_31;
          case 0x32D1:
            v2[0x14] = sub_78EB40(a2);
            goto LABEL_31;
          case 0x32D2:
            *((float *)v2 + 0x15) = sub_78EB10(a2);
            goto LABEL_31;
          case 0x32D3:
            *((float *)v2 + 0x16) = sub_78EB10(a2);
            goto LABEL_31;
          case 0x32D4:
            *((float *)v2 + 0x17) = sub_78EB10(a2);
            goto LABEL_31;
          case 0x32D5:
            *((float *)v2 + 0x18) = sub_78EB10(a2);
            goto LABEL_31;
          default:
            goto LABEL_36;
        }
      }
      v2[0x19] = sub_78EB40(a2);
    }
LABEL_31:
    result = sub_78EB40(a2);
  }
  while ( result != 0x32C9 );
  return result;
}
