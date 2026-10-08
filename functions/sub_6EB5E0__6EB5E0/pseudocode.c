char __thiscall sub_6EB5E0(_BYTE *this, float a2, int a3, _BYTE *a4)
{
  double v4; // st7
  unsigned __int8 v6; // bl
  int v7; // ebp
  int v8; // eax
  int v9; // esi
  int v10; // ecx
  int v11; // edx
  _BYTE *v12; // edx
  _BYTE *v14; // eax
  char v15; // [esp+1Fh] [ebp-Dh]
  float v16; // [esp+20h] [ebp-Ch]
  float v17; // [esp+24h] [ebp-8h]
  float v18; // [esp+28h] [ebp-4h]

  v4 = 0.0; /*0x6eb5e3*/
  v17 = 0.0; /*0x6eb5e6*/
  v6 = 0; /*0x6eb5ef*/
  v16 = 1.0; /*0x6eb5f1*/
  v15 = 0; /*0x6eb5f8*/
  if ( !*(this + 0xD) ) /*0x6eb5f5*/
    goto LABEL_20; /*0x6eb5f5*/
  v7 = a3; /*0x6eb604*/
  while ( 1 ) /*0x6eb618*/
  {
    v8 = *((_DWORD *)this + 5); /*0x6eb618*/
    v9 = 0x18 * v6; /*0x6eb61f*/
    v10 = *(_DWORD *)(v8 + v9); /*0x6eb621*/
    v11 = v8 + v9; /*0x6eb626*/
    if ( v10 ) /*0x6eb629*/
    {
      if ( v4 < *(float *)(v11 + 8) ) /*0x6eb637*/
      {
        v18 = a2; /*0x6eb643*/
        if ( v4 == *(float *)(v11 + 8) ) /*0x6eb651*/
          goto LABEL_11; /*0x6eb651*/
        if ( (*(this + 0xC) & 1) != 0 ) /*0x6eb657*/
          v18 = *(float *)(v11 + 0x14); /*0x6eb65c*/
        if ( flt_A79F00 == v18 ) /*0x6eb673*/
        {
LABEL_11:
          v16 = v16 - *(float *)(v11 + 8); /*0x6eb67e*/
        }
        else if ( (*(unsigned __int8 (__stdcall **)(float, int, int *))(*(_DWORD *)v10 + 0x60))( /*0x6eb693*/
                    COERCE_FLOAT(LODWORD(v18)),
                    v7,
                    &a3) )
        {
          v15 = 1; /*0x6eb6a5*/
          v17 = *(float *)(*((_DWORD *)this + 5) + v9 + 8) * (double)(unsigned __int8)a3 + v17; /*0x6eb6b6*/
        }
        else
        {
          v16 = v16 - *(float *)(*((_DWORD *)this + 5) + v9 + 8); /*0x6eb6c7*/
        }
      }
    }
    if ( ++v6 >= *(this + 0xD) ) /*0x6eb6d5*/
      break; /*0x6eb6d5*/
    v4 = 0.0; /*0x6eb610*/
  }
  if ( v15 ) /*0x6eb6e2*/
  {
    *(float *)&a3 = v17 / v16; /*0x6eb6ec*/
    if ( *(float *)&a3 >= (double)kHeadBodyNormalMatchRadius ) /*0x6eb6ff*/
    {
      v14 = a4; /*0x6eb732*/
      *(this + 0x30) = 1; /*0x6eb736*/
      *v14 = 1; /*0x6eb73b*/
    }
    else
    {
      v12 = a4; /*0x6eb701*/
      *(this + 0x30) = 0; /*0x6eb705*/
      *v12 = 0; /*0x6eb70a*/
    }
    return 1; /*0x6eb70d*/
  }
  else
  {
LABEL_20:
    *a4 = 0; /*0x6eb71c*/
    *(this + 0x30) = byte_A7C6AC; /*0x6eb725*/
    return 0; /*0x6eb729*/
  }
}
