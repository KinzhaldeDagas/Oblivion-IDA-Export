int __thiscall sub_6AB6F0(float *this, int a2, int a3)
{
  _DWORD *v4; // ecx
  float *v5; // esi
  float v6; // eax
  float v7; // ecx
  double v8; // st7
  double v9; // st6
  float *v11; // [esp+Ch] [ebp-1Ch] BYREF
  float v12; // [esp+10h] [ebp-18h]
  float v13; // [esp+14h] [ebp-14h]
  float v14; // [esp+18h] [ebp-10h]
  float v15; // [esp+1Ch] [ebp-Ch]
  float v16; // [esp+20h] [ebp-8h]
  float v17; // [esp+24h] [ebp-4h]
  float v18; // [esp+2Ch] [ebp+4h]
  float v19; // [esp+2Ch] [ebp+4h]
  float v20; // [esp+2Ch] [ebp+4h]

  v4 = *((_DWORD **)this + 0xC0);
  v11 = 0;
  NiTMap_GetAt(v4, a2, &v11);
  if ( bSoundEnabled_Audio )
  {
    v5 = v11;
    if ( !*((_BYTE *)this + 0xA4) || v11 && (*(_BYTE *)v11 & 0x21) != 0 )
    {
      if ( v11 )
      {
        if ( !*((_BYTE *)this + 0xA5)
          || (*(_BYTE *)v11 & 0x20) != 0
          || (v18 = sub_6B6B90(v11) - flt_B161B8, sub_6B6B20((int)v5, v18), (*(_DWORD *)v5 & 0x1000) == 0) )
        {
          sub_6B6F20(v5, v5[0xF]);
          if ( (*(_BYTE *)v5 & 2) != 0 )
          {
            v6 = v5[9];
            v7 = v5[0xA];
            v12 = v5[8];
            v8 = v12 - *(this + 0x20);
            v13 = v6;
            v14 = v7;
            v15 = v8;
            v16 = v6 - *(this + 0x21);
            v17 = v7 - *(this + 0x22);
            v19 = v16 * v16 + v15 * v15 + v17 * v17;
            v20 = sqrt(v19);
            v9 = (double)*((int *)v5 + 0xE);
            if ( *((int *)v5 + 0xE) < 0 )
              v9 = v9 + flt_A2FC78;
            sub_6B7130((int)v5, v9 < v20);
          }
          sub_6B6A50(v5, a3);
        }
      }
    }
  }
  return 0;
}
