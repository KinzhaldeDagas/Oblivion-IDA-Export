char __thiscall sub_6EA430(float *this, float a2, int a3, _DWORD *a4)
{
  double v4; // st7
  float *v6; // esi
  unsigned __int8 v7; // bl
  int v8; // eax
  int v9; // ebp
  int v10; // ecx
  int v11; // edx
  float *v12; // eax
  float *v13; // eax
  float *v14; // eax
  char v16; // [esp+23h] [ebp-51h]
  float v17; // [esp+24h] [ebp-50h]
  float v18; // [esp+28h] [ebp-4Ch]
  float v19; // [esp+28h] [ebp-4Ch]
  float v20; // [esp+28h] [ebp-4Ch]
  float v21; // [esp+2Ch] [ebp-48h]
  float v22; // [esp+30h] [ebp-44h]
  float v23; // [esp+34h] [ebp-40h] BYREF
  float v24; // [esp+38h] [ebp-3Ch]
  float v25; // [esp+3Ch] [ebp-38h]
  float v26; // [esp+40h] [ebp-34h]
  float v27[4]; // [esp+44h] [ebp-30h] BYREF
  int v28[4]; // [esp+54h] [ebp-20h] BYREF
  int v29[4]; // [esp+64h] [ebp-10h] BYREF

  v4 = 0.0; /*0x6ea433*/
  v6 = this + 0xC; /*0x6ea43a*/
  *(this + 0xC) = 0.0; /*0x6ea43d*/
  v7 = 0; /*0x6ea43f*/
  *(this + 0xD) = 0.0; /*0x6ea441*/
  v16 = 0; /*0x6ea444*/
  *(this + 0xE) = 0.0; /*0x6ea449*/
  *(this + 0xF) = 0.0; /*0x6ea44c*/
  v17 = 0.0; /*0x6ea452*/
  if ( !*((_BYTE *)this + 0xD) ) /*0x6ea44f*/
    goto LABEL_16; /*0x6ea44f*/
  do /*0x6ea618*/
  {
    v8 = *((_DWORD *)this + 5); /*0x6ea463*/
    v9 = 0x18 * v7; /*0x6ea46a*/
    v10 = *(_DWORD *)(v8 + v9); /*0x6ea46c*/
    v11 = v8 + v9; /*0x6ea471*/
    if ( v10 ) /*0x6ea474*/
    {
      if ( v4 < *(float *)(v11 + 8) ) /*0x6ea482*/
      {
        v18 = a2; /*0x6ea48e*/
        if ( v4 != *(float *)(v11 + 8) ) /*0x6ea4a0*/
        {
          if ( (*(_BYTE *)(this + 3) & 1) != 0 ) /*0x6ea4aa*/
            v18 = *(float *)(v11 + 0x14); /*0x6ea4af*/
          if ( flt_A79F00 != v18 ) /*0x6ea4c6*/
          {
            v4 = 0.0; /*0x6ea4e5*/
            if ( (*(unsigned __int8 (__stdcall **)(float, int, float *))(*(_DWORD *)v10 + 0x58))( /*0x6ea4e1*/
                   COERCE_FLOAT(LODWORD(v18)),
                   a3,
                   &v23) )
            {
              if ( v17 > 0.0 ) /*0x6ea4f6*/
              {
                v19 = v6[1] * v24 + *v6 * v23 + v6[2] * v25 + v6[3] * v26; /*0x6ea519*/
                if ( v19 < 0.0 ) /*0x6ea526*/
                {
                  v12 = sub_714CC0(&v23, v27); /*0x6ea531*/
                  v23 = *v12; /*0x6ea538*/
                  v24 = v12[1]; /*0x6ea53f*/
                  v25 = v12[2]; /*0x6ea546*/
                  v26 = v12[3]; /*0x6ea54d*/
                }
              }
              v13 = sub_72F930(&v23, (float *)v28, *(float *)(*((_DWORD *)this + 5) + v9 + 8)); /*0x6ea569*/
              v23 = *v13; /*0x6ea574*/
              v24 = v13[1]; /*0x6ea57b*/
              v25 = v13[2]; /*0x6ea58a*/
              v26 = v13[3]; /*0x6ea594*/
              v14 = sub_72F930(v6, (float *)v29, v17); /*0x6ea598*/
              *v6 = *v14; /*0x6ea59f*/
              v6[1] = v14[1]; /*0x6ea5a4*/
              v6[2] = v14[2]; /*0x6ea5aa*/
              v6[3] = v14[3]; /*0x6ea5b0*/
              v22 = *(this + 0xF); /*0x6ea5b6*/
              v21 = *(this + 0xE); /*0x6ea5bf*/
              v20 = *(this + 0xD); /*0x6ea5c6*/
              *v6 = v23 + *v6; /*0x6ea5d0*/
              v6[1] = v24 + v20; /*0x6ea5da*/
              v6[2] = v25 + v21; /*0x6ea5e5*/
              v6[3] = v26 + v22; /*0x6ea5f0*/
              sub_715340(v6); /*0x6ea5f3*/
              v16 = 1; /*0x6ea5ff*/
              v17 = *(float *)(*((_DWORD *)this + 5) + v9 + 8) + v17; /*0x6ea608*/
              v4 = 0.0; /*0x6ea60c*/
            }
          }
        }
      }
    }
    ++v7; /*0x6ea612*/
  }
  while ( v7 < *((_BYTE *)this + 0xD) ); /*0x6ea618*/
  if ( v16 ) /*0x6ea626*/
  {
    *a4 = *(_DWORD *)v6; /*0x6ea62e*/
    a4[1] = *((_DWORD *)v6 + 1); /*0x6ea633*/
    a4[2] = *((_DWORD *)v6 + 2); /*0x6ea639*/
    a4[3] = *((_DWORD *)v6 + 3); /*0x6ea641*/
    return 1; /*0x6ea644*/
  }
  else
  {
LABEL_16:
    *v6 = flt_B3EBA0[0]; /*0x6ea655*/
    v6[1] = flt_B3EBA0[1]; /*0x6ea65c*/
    v6[2] = flt_B3EBA0[2]; /*0x6ea669*/
    v6[3] = flt_B3EBA0[3]; /*0x6ea672*/
    *a4 = *(_DWORD *)v6; /*0x6ea677*/
    a4[1] = *((_DWORD *)v6 + 1); /*0x6ea67c*/
    a4[2] = *((_DWORD *)v6 + 2); /*0x6ea682*/
    a4[3] = *((_DWORD *)v6 + 3); /*0x6ea68a*/
    return 0; /*0x6ea68d*/
  }
}
