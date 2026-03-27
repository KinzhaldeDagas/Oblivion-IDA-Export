int __thiscall sub_4E9150(int *this, int **a2)
{
  int result; // eax
  bool v4; // zf
  float *v5; // edi
  int *v6; // ebp
  int v7; // ebx
  int v8; // eax
  _DWORD *v9; // esi
  char *v10; // ecx
  int *v11; // eax
  int v12; // eax
  char *v13; // ecx
  int v14; // ebp
  int (__thiscall *v15)(_DWORD *, int); // edx
  _DWORD *v16; // edi
  char *v17; // ecx
  int v18; // ebp
  int (__thiscall *v19)(_DWORD *, int); // edx
  float *v20; // edi
  char *v21; // ecx
  int v22; // ebp
  int (__thiscall *v23)(_DWORD *, int); // edx
  float *v24; // edi
  char *v25; // ecx
  char v26; // [esp+23h] [ebp-21h]
  float v27; // [esp+24h] [ebp-20h] BYREF
  float v28; // [esp+28h] [ebp-1Ch]
  int v29; // [esp+2Ch] [ebp-18h]
  int *v30; // [esp+30h] [ebp-14h]
  int *v31[2]; // [esp+34h] [ebp-10h] BYREF
  int *v32; // [esp+3Ch] [ebp-8h]
  float v33; // [esp+40h] [ebp-4h]

  v28 = flt_A32048;
  result = 0;
  v4 = *(this + 0xA) == 0;
  v31[1] = this;
  v29 = 0;
  if ( !v4 )
  {
    v5 = (float *)a2;
    v26 = 1;
    v33 = *(float *)a2;
    v30 = 0;
    v31[0] = (int *)(int)v33;
    v33 = *((float *)a2 + 1);
    v6 = (int *)((int)v31[0] >> 0xC);
    v31[0] = (int *)(int)v33;
    v27 = flt_A32048;
    v7 = (int)v31[0] >> 0xC;
    v8 = sub_4EF1D0((__int16)v6, (int)v31[0] >> 0xC);
    v9 = this + 7;
    v31[0] = 0;
    NiTMap_GetAt(v9, v8, v31);
    v10 = sub_4E8DB0((float *)a2, v31[0], &v27);
    if ( v10 )
    {
      if ( v27 < dbl_A3A5B0 )
      {
        v28 = v27;
        v29 = (int)v10;
      }
    }
    while ( 1 )
    {
      if ( !v26 )
      {
        result = v29;
        if ( v29 )
          break;
      }
      if ( (int)v30 >= 0x14 )
        return v29;
      v11 = (int *)((char *)v30 + 2);
      v6 = (int *)((char *)v6 + 0xFFFFFFFF);
      --v7;
      v26 = 0;
      v30 = v11;
      if ( (int)v11 > 0 )
      {
        v32 = v11;
        do
        {
          v12 = sub_4EF1D0((__int16)v6, v7);
          v31[0] = 0;
          NiTMap_GetAt(v9, v12, v31);
          v13 = sub_4E8DB0(v5, v31[0], &v27);
          if ( v13 )
          {
            if ( v28 > (double)v27 )
            {
              v28 = v27;
              v29 = (int)v13;
            }
          }
          v6 = (int *)((char *)v6 + 1);
          v32 = (int *)((char *)v32 + 0xFFFFFFFF);
        }
        while ( v32 );
        v31[0] = v6;
        v33 = *(float *)&v30;
        while ( 1 )
        {
          v14 = sub_4EF1D0((__int16)v6, v7);
          v15 = *(int (__thiscall **)(_DWORD *, int))(*v9 + 4);
          v32 = 0;
          v16 = *(_DWORD **)(v9[2] + 4 * v15(v9, v14));
          if ( v16 )
          {
            while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v9 + 8))(v9, v14, v16[1]) )
            {
              v16 = (_DWORD *)*v16;
              if ( !v16 )
                goto LABEL_21;
            }
            v32 = (int *)v16[2];
          }
LABEL_21:
          v17 = sub_4E8DB0((float *)a2, v32, &v27);
          if ( v17 )
          {
            if ( v28 > (double)v27 )
            {
              v28 = v27;
              v29 = (int)v17;
            }
          }
          ++v7;
          --LODWORD(v33);
          if ( v33 == 0.0 )
            break;
          LOWORD(v6) = v31[0];
        }
        v32 = v30;
        do
        {
          v18 = sub_4EF1D0((__int16)v31[0], v7);
          v19 = *(int (__thiscall **)(_DWORD *, int))(*v9 + 4);
          v33 = 0.0;
          v20 = *(float **)(v9[2] + 4 * v19(v9, v18));
          if ( v20 )
          {
            while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, int))(*v9 + 8))(v9, v18, *((_DWORD *)v20 + 1)) )
            {
              v20 = *(float **)v20;
              if ( !v20 )
                goto LABEL_31;
            }
            v33 = v20[2];
          }
LABEL_31:
          v21 = sub_4E8DB0((float *)a2, (int *)LODWORD(v33), &v27);
          if ( v21 )
          {
            if ( v28 > (double)v27 )
            {
              v28 = v27;
              v29 = (int)v21;
            }
          }
          --v31[0];
          v32 = (int *)((char *)v32 + 0xFFFFFFFF);
        }
        while ( v32 );
        v32 = v30;
        do
        {
          v22 = sub_4EF1D0((__int16)v31[0], v7);
          v23 = *(int (__thiscall **)(_DWORD *, int))(*v9 + 4);
          v33 = 0.0;
          v24 = *(float **)(v9[2] + 4 * v23(v9, v22));
          if ( v24 )
          {
            while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, int))(*v9 + 8))(v9, v22, *((_DWORD *)v24 + 1)) )
            {
              v24 = *(float **)v24;
              if ( !v24 )
                goto LABEL_41;
            }
            v33 = v24[2];
          }
LABEL_41:
          v25 = sub_4E8DB0((float *)a2, (int *)LODWORD(v33), &v27);
          if ( v25 )
          {
            if ( v28 > (double)v27 )
            {
              v28 = v27;
              v29 = (int)v25;
            }
          }
          --v7;
          v32 = (int *)((char *)v32 + 0xFFFFFFFF);
        }
        while ( v32 );
        v6 = v31[0];
        v5 = (float *)a2;
      }
    }
  }
  return result;
}
