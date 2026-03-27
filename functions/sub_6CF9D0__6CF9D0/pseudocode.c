void __thiscall sub_6CF9D0(int this, float a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
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
  int v22; // [esp+2Ch] [ebp-14h] BYREF
  float v23; // [esp+30h] [ebp-10h]
  int v24; // [esp+34h] [ebp-Ch]
  int v25; // [esp+38h] [ebp-8h]
  float v26; // [esp+3Ch] [ebp-4h]

  if ( (*(_BYTE *)(this + 8) & 8) != 0 )
  {
    v3 = dword_B24260;
    v4 = dword_B24264;
    v26 = flt_A79E10;
    v5 = dword_B24268;
    v19 = *(float *)&v3;
    v6 = dword_B3CBA4;
    v20 = v4;
    v7 = dword_B3CBA8;
    v21 = v5;
    v8 = dword_B3CBAC;
    v22 = v6;
    v9 = dword_B3CBB0;
    v10 = 0;
    v11 = *(_WORD *)(this + 0x44) == 0;
    v23 = *(float *)&v7;
    v24 = v8;
    v25 = v9;
    if ( !v11 )
    {
      for ( i = 0; ; i += 0x30 )
      {
        v13 = (int *)(*(_DWORD *)(this + 0x40) + 4 * v10);
        if ( !*v13 )
          goto LABEL_16;
        v14 = *v13;
        if ( (*(_BYTE *)(v14 + 0x18) & 2) == 0
          || !(*(unsigned __int8 (__stdcall **)(_DWORD, int, float *))(*(_DWORD *)(*(_DWORD *)(this + 0x3C) + i) + 0x4C))(
                LODWORD(a2),
                v14,
                &v19) )
        {
          goto LABEL_16;
        }
        if ( -flt_A7DEB4 != v19 )
        {
          v15 = *(_DWORD *)(*(_DWORD *)(this + 0x40) + 4 * v10) + 0x54;
          *(float *)v15 = v19;
          *(_DWORD *)(v15 + 4) = v20;
          *(_DWORD *)(v15 + 8) = v21;
        }
        if ( -flt_A7DEB4 != v23 )
          sub_47C600((NiTransform *)&v22, (NiTransform *)(*(_DWORD *)(*(_DWORD *)(this + 0x40) + 4 * v10) + 0x30));
        if ( -flt_A7DEB4 != v26 )
          break;
        if ( (*(_BYTE *)(this + 8) & 0x40) != 0 )
        {
          v18 = fabs(1.0);
          v16 = v18;
          goto LABEL_15;
        }
LABEL_16:
        if ( ++v10 >= *(unsigned __int16 *)(this + 0x44) )
          return;
      }
      v17 = fabs(v26);
      v16 = v17;
LABEL_15:
      *(float *)(*(_DWORD *)(*(_DWORD *)(this + 0x40) + 4 * v10) + 0x60) = v16;
      goto LABEL_16;
    }
  }
}
