void __thiscall sub_6CF9D0(int this, float a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  float v6; // ecx
  float v7; // edx
  float v8; // eax
  float v9; // ecx
  int v10; // edi
  bool v11; // zf
  int i; // ebx
  int *v13; // eax
  int v14; // eax
  int v15; // eax
  double v16; // st7
  float v17; // [esp+1Ch] [ebp-24h]
  float v18; // [esp+1Ch] [ebp-24h]
  float v19; // [esp+20h] [ebp-20h] BYREF
  int v20; // [esp+24h] [ebp-1Ch]
  int v21; // [esp+28h] [ebp-18h]
  float v22; // [esp+2Ch] [ebp-14h] BYREF
  float v23; // [esp+30h] [ebp-10h]
  float v24; // [esp+34h] [ebp-Ch]
  float v25; // [esp+38h] [ebp-8h]
  float v26; // [esp+3Ch] [ebp-4h]

  if ( (*(_BYTE *)(this + 8) & 8) != 0 ) /*0x6cf9de*/
  {
    v3 = dword_B24260; /*0x6cf9e4*/
    v4 = dword_B24264; /*0x6cf9f0*/
    v26 = flt_A79E10; /*0x6cf9f6*/
    v5 = dword_B24268; /*0x6cf9fa*/
    v19 = *(float *)&v3; /*0x6cf9ff*/
    v6 = flt_B3CBA4; /*0x6cfa03*/
    v20 = v4; /*0x6cfa0a*/
    v7 = flt_B3CBA8; /*0x6cfa0e*/
    v21 = v5; /*0x6cfa14*/
    v8 = flt_B3CBAC; /*0x6cfa18*/
    v22 = v6; /*0x6cfa1d*/
    v9 = flt_B3CBB0; /*0x6cfa21*/
    v10 = 0; /*0x6cfa27*/
    v11 = *(_WORD *)(this + 0x44) == 0; /*0x6cfa29*/
    v23 = v7; /*0x6cfa2d*/
    v24 = v8; /*0x6cfa31*/
    v25 = v9; /*0x6cfa35*/
    if ( !v11 ) /*0x6cfa39*/
    {
      for ( i = 0; ; i += 0x30 ) /*0x6cfa41*/
      {
        v13 = (int *)(*(_DWORD *)(this + 0x40) + 4 * v10); /*0x6cfa4a*/
        if ( !*v13 ) /*0x6cfa46*/
          goto LABEL_16; /*0x6cfa46*/
        v14 = *v13; /*0x6cfa53*/
        if ( (*(_BYTE *)(v14 + 0x18) & 2) == 0 /*0x6cfa7c*/
          || !(*(unsigned __int8 (__stdcall **)(_DWORD, int, float *))(*(_DWORD *)(*(_DWORD *)(this + 0x3C) + i) + 0x4C))(
                LODWORD(a2),
                v14,
                &v19) )
        {
          goto LABEL_16; /*0x6cfa80*/
        }
        if ( -flt_A7DEB4 != v19 ) /*0x6cfa99*/
        {
          v15 = *(_DWORD *)(*(_DWORD *)(this + 0x40) + 4 * v10) + 0x54; /*0x6cfaa5*/
          *(float *)v15 = v19; /*0x6cfaa8*/
          *(_DWORD *)(v15 + 4) = v20; /*0x6cfaae*/
          *(_DWORD *)(v15 + 8) = v21; /*0x6cfab5*/
        }
        if ( -flt_A7DEB4 != v23 ) /*0x6cfacb*/
          sub_47C600((NiTransform *)&v22, (NiTransform *)(*(_DWORD *)(*(_DWORD *)(this + 0x40) + 4 * v10) + 0x30)); /*0x6cfadb*/
        if ( -flt_A7DEB4 != v26 ) /*0x6cfaf5*/
          break; /*0x6cfaf5*/
        if ( (*(_BYTE *)(this + 8) & 0x40) != 0 ) /*0x6cfb0e*/
        {
          v18 = fabs(1.0); /*0x6cfb14*/
          v16 = v18; /*0x6cfb18*/
          goto LABEL_15; /*0x6cfb18*/
        }
LABEL_16:
        if ( ++v10 >= *(unsigned __int16 *)(this + 0x44) ) /*0x6cfb31*/
          return; /*0x6cfb31*/
      }
      v17 = fabs(v26); /*0x6cfaf9*/
      v16 = v17; /*0x6cfafd*/
LABEL_15:
      *(float *)(*(_DWORD *)(*(_DWORD *)(this + 0x40) + 4 * v10) + 0x60) = v16; /*0x6cfb1c*/
      goto LABEL_16; /*0x6cfb22*/
    }
  }
}
