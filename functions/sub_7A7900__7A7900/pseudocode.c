float *__cdecl sub_7A7900(unsigned int *a1)
{
  float *v1; // eax
  float *v2; // edi
  int v3; // eax
  char **v4; // eax
  unsigned int v5; // ebp
  char **v6; // ebx
  char **v7; // eax
  unsigned int v8; // ebp
  char **v9; // ebx
  char **v10; // eax
  unsigned int v11; // ebp
  char **v12; // ebx
  char **v13; // eax
  unsigned int v14; // ebp
  char **v15; // ebx
  char **v16; // eax
  unsigned int v17; // ebp
  char **v18; // ebx
  char **v19; // eax
  unsigned int v20; // ebp
  char **v21; // ebx
  char **v22; // eax
  unsigned int v23; // ebp
  char **v24; // ebx
  char **v25; // eax
  unsigned int v26; // ebp
  char **v27; // ebx
  char **v28; // eax
  unsigned int v29; // ebp
  char **v30; // ebx
  unsigned int v31; // ebp
  unsigned int v32; // ecx
  unsigned int v33; // ebp
  unsigned int v34; // ecx
  rsize_t v36; // [esp-4h] [ebp-B0h]
  int v37; // [esp+18h] [ebp-94h] BYREF
  char v38; // [esp+1Ch] [ebp-90h]
  int v39; // [esp+2Ch] [ebp-80h]
  int v40; // [esp+30h] [ebp-7Ch]
  int v41; // [esp+34h] [ebp-78h] BYREF
  char v42; // [esp+38h] [ebp-74h]
  int v43; // [esp+48h] [ebp-64h]
  int v44; // [esp+4Ch] [ebp-60h]
  _BYTE v45[40]; // [esp+50h] [ebp-5Ch] BYREF
  _BYTE v46[40]; // [esp+78h] [ebp-34h] BYREF
  int v47; // [esp+A8h] [ebp-4h]

  v1 = (float *)FormHeapAlloc(0x74u);
  v47 = 0;
  if ( v1 )
    v2 = sub_7A7610(v1);
  else
    v2 = 0;
  v47 = 0xFFFFFFFF;
  if ( sub_78EB40(a1) != 0x3F8 )
  {
    LODWORD(v36) = 0x15;
    v44 = 0xF;
    v43 = 0;
    v42 = 0;
    sub_414500(&v41, (int)v2, "malformed branch data", v36);
    v47 = 1;
    sub_789190((std::exception *)v45, &v41, 0);
    ThrowException__((int)v45, &_TI3_AVIdvFileError__);
  }
  v3 = sub_78EB40(a1);
  do
  {
    switch ( v3 )
    {
      case 0x1770:
        v4 = sub_7909D0(a1);
        v5 = *((_DWORD *)v2 + 0x14);
        v6 = v4;
        if ( (char **)v5 != v4 )
        {
          if ( v5 )
          {
            sub_784B60(*((unsigned int **)v2 + 0x14));
            FormHeapFree(v5);
          }
          *((_DWORD *)v2 + 0x14) = v6;
        }
        break;
      case 0x1771:
        v7 = sub_7909D0(a1);
        v8 = *((_DWORD *)v2 + 0x15);
        v9 = v7;
        if ( (char **)v8 != v7 )
        {
          if ( v8 )
          {
            sub_784B60(*((unsigned int **)v2 + 0x15));
            FormHeapFree(v8);
          }
          *((_DWORD *)v2 + 0x15) = v9;
        }
        break;
      case 0x1772:
        v10 = sub_7909D0(a1);
        v11 = *((_DWORD *)v2 + 0x16);
        v12 = v10;
        if ( (char **)v11 != v10 )
        {
          if ( v11 )
          {
            sub_784B60(*((unsigned int **)v2 + 0x16));
            FormHeapFree(v11);
          }
          *((_DWORD *)v2 + 0x16) = v12;
        }
        break;
      case 0x1773:
        v13 = sub_7909D0(a1);
        v14 = *((_DWORD *)v2 + 0x17);
        v15 = v13;
        if ( (char **)v14 != v13 )
        {
          if ( v14 )
          {
            sub_784B60(*((unsigned int **)v2 + 0x17));
            FormHeapFree(v14);
          }
          *((_DWORD *)v2 + 0x17) = v15;
        }
        break;
      case 0x1774:
        v19 = sub_7909D0(a1);
        v20 = *((_DWORD *)v2 + 0x18);
        v21 = v19;
        if ( (char **)v20 != v19 )
        {
          if ( v20 )
          {
            sub_784B60(*((unsigned int **)v2 + 0x18));
            FormHeapFree(v20);
          }
          *((_DWORD *)v2 + 0x18) = v21;
        }
        break;
      case 0x1775:
        v22 = sub_7909D0(a1);
        v23 = *((_DWORD *)v2 + 0x19);
        v24 = v22;
        if ( (char **)v23 != v22 )
        {
          if ( v23 )
          {
            sub_784B60(*((unsigned int **)v2 + 0x19));
            FormHeapFree(v23);
          }
          *((_DWORD *)v2 + 0x19) = v24;
        }
        break;
      case 0x1776:
        v25 = sub_7909D0(a1);
        v26 = *((_DWORD *)v2 + 0x1A);
        v27 = v25;
        if ( (char **)v26 != v25 )
        {
          if ( v26 )
          {
            sub_784B60(*((unsigned int **)v2 + 0x1A));
            FormHeapFree(v26);
          }
          *((_DWORD *)v2 + 0x1A) = v27;
        }
        break;
      case 0x1777:
        v28 = sub_7909D0(a1);
        v29 = *((_DWORD *)v2 + 0x1B);
        v30 = v28;
        if ( (char **)v29 != v28 )
        {
          if ( v29 )
          {
            sub_784B60(*((unsigned int **)v2 + 0x1B));
            FormHeapFree(v29);
          }
          *((_DWORD *)v2 + 0x1B) = v30;
        }
        break;
      case 0x1778:
        *(_DWORD *)v2 = sub_78EB40(a1);
        break;
      case 0x1779:
        *((_DWORD *)v2 + 1) = sub_78EB40(a1);
        break;
      case 0x177A:
        v2[2] = sub_78EB10(a1);
        break;
      case 0x177B:
        v2[3] = sub_78EB10(a1);
        break;
      case 0x177C:
        v2[4] = sub_78EB10(a1);
        break;
      case 0x177D:
        v2[5] = sub_78EB10(a1);
        break;
      case 0x177E:
        v2[6] = sub_78EB10(a1);
        break;
      case 0x177F:
        v31 = (*a1)++;
        v32 = a1[2];
        if ( !v32 || v31 >= a1[3] - v32 )
          _invalid_parameter_noinfo();
        *((_BYTE *)v2 + 0x1C) = *(_BYTE *)(a1[2] + v31) != 0;
        break;
      case 0x1780:
        v33 = (*a1)++;
        v34 = a1[2];
        if ( !v34 || v33 >= a1[3] - v34 )
          _invalid_parameter_noinfo();
        *((_BYTE *)v2 + 0x1D) = *(_BYTE *)(a1[2] + v33) != 0;
        break;
      case 0x1781:
        v16 = sub_7909D0(a1);
        v17 = *((_DWORD *)v2 + 0x1C);
        v18 = v16;
        if ( (char **)v17 != v16 )
        {
          if ( v17 )
          {
            sub_784B60(*((unsigned int **)v2 + 0x1C));
            FormHeapFree(v17);
          }
          *((_DWORD *)v2 + 0x1C) = v18;
        }
        break;
      default:
        LODWORD(v36) = 0x24;
        v40 = 0xF;
        v39 = 0;
        v38 = 0;
        sub_414500(&v37, (int)v2, "malformed general branch information", v36);
        v47 = 2;
        sub_789190((std::exception *)v46, &v37, 0);
        ThrowException__((int)v46, &_TI3_AVIdvFileError__);
    }
    v3 = sub_78EB40(a1);
  }
  while ( v3 != 0x3F9 );
  return v2;
}
