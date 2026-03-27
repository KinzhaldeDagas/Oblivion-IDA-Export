void __thiscall sub_6C3C40(int this, float a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  double v7; // st7
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int v11; // esi
  float v12; // [esp+0h] [ebp-30h]
  float v13; // [esp+10h] [ebp-20h] BYREF
  int v14; // [esp+14h] [ebp-1Ch]
  int v15; // [esp+18h] [ebp-18h]
  int v16; // [esp+1Ch] [ebp-14h] BYREF
  float v17; // [esp+20h] [ebp-10h]
  int v18; // [esp+24h] [ebp-Ch]
  int v19; // [esp+28h] [ebp-8h]
  float v20; // [esp+2Ch] [ebp-4h]
  float v21; // [esp+34h] [ebp+4h]

  if ( (*(_BYTE *)(this + 8) & 0x20) != 0 )
  {
    *(float *)(this + 0x28) = flt_A7A164;
LABEL_6:
    v4 = *(_DWORD *)(this + 0x3C);
    if ( v4 )
    {
      v5 = dword_B24260;
      v6 = dword_B24264;
      v20 = flt_A79E10;
      v7 = *(float *)(this + 0x28);
      v13 = *(float *)&v5;
      v15 = dword_B24268;
      v17 = *(float *)&dword_B3CBA8;
      v8 = dword_B3CBB0;
      v14 = v6;
      v9 = dword_B3CBA4;
      v19 = v8;
      v16 = v9;
      v10 = *(_DWORD *)(this + 0x30);
      v18 = dword_B3CBAC;
      v12 = v7;
      if ( (*(unsigned __int8 (__stdcall **)(_DWORD, int, float *))(*(_DWORD *)v4 + 0x4C))(LODWORD(v12), v10, &v13) )
      {
        v11 = *(_DWORD *)(this + 0x30);
        if ( -flt_A7DEB4 != v13 )
        {
          *(float *)(v11 + 0x54) = v13;
          *(_DWORD *)(v11 + 0x58) = v14;
          *(_DWORD *)(v11 + 0x5C) = v15;
        }
        if ( -flt_A7DEB4 != v17 )
          sub_47C600((NiTransform *)&v16, (NiTransform *)(v11 + 0x30));
        if ( -flt_A7DEB4 != v20 )
        {
          v21 = fabs(v20);
          *(float *)(v11 + 0x60) = v21;
        }
      }
    }
    return;
  }
  if ( !sub_6C36B0((float *)this, a2) )
    goto LABEL_6;
  v3 = *(_DWORD *)(this + 0x3C);
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 0x94))(v3) )
      goto LABEL_6;
  }
}
