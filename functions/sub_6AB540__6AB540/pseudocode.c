unsigned int __thiscall sub_6AB540(float *this, int a2, char a3)
{
  _DWORD *v4; // ecx
  int v5; // esi
  int *SafeFloatPointer; // eax
  float v8; // ecx
  float v9; // edx
  double v10; // st7
  double v11; // st6
  double v12; // [esp+Ch] [ebp-18h] BYREF
  float v13; // [esp+14h] [ebp-10h]
  float v14; // [esp+18h] [ebp-Ch]
  float v15; // [esp+1Ch] [ebp-8h]
  float v16; // [esp+20h] [ebp-4h]
  float v17; // [esp+28h] [ebp+4h]
  float v18; // [esp+28h] [ebp+4h]
  float v19; // [esp+28h] [ebp+4h]

  v4 = *((_DWORD **)this + 0xC0);
  LODWORD(v12) = 0;
  NiTMap_GetAt(v4, a2, &v12);
  v5 = LODWORD(v12);
  if ( !LODWORD(v12) || !bSoundEnabled_Audio )
    return 0;
  if ( !sub_6B7050(SLODWORD(v12)) )
    return 0x80004005;
  sub_6B6F20((float *)v5, *(float *)(v5 + 0x3C));
  if ( !*((_BYTE *)this + 0xA4) || *(_BYTE *)v5 & 0x21 | 4 )
  {
    if ( !*((_BYTE *)this + 0xA5)
      || (*(_BYTE *)v5 & 0x20) != 0
      || (v12 = sub_6B6B90((_DWORD *)v5),
          SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&flt_B161B8),
          v17 = v12 - *(float *)SafeFloatPointer,
          sub_6B6B20(v5, v17),
          (*(_DWORD *)v5 & 0x1000) == 0) )
    {
      if ( (*(_BYTE *)v5 & 2) != 0 )
      {
        v8 = *(float *)(v5 + 0x24);
        v9 = *(float *)(v5 + 0x28);
        LODWORD(v12) = *(_DWORD *)(v5 + 0x20);
        v10 = *(float *)&v12 - *(this + 0x20);
        *((float *)&v12 + 1) = v8;
        v13 = v9;
        v14 = v10;
        v15 = v8 - *(this + 0x21);
        v16 = v9 - *(this + 0x22);
        v18 = v15 * v15 + v14 * v14 + v16 * v16;
        v19 = sqrt(v18);
        v11 = (double)*(int *)(v5 + 0x38);
        if ( *(int *)(v5 + 0x38) < 0 )
          v11 = v11 + flt_A2FC78;
        sub_6B7130(v5, v11 < v19);
      }
      if ( (*(_BYTE *)v5 & 0x10) == 0 && !a3 )
      {
        sub_6B6E60((_DWORD *)v5, 0);
        return 0;
      }
      sub_6B6E60((_DWORD *)v5, 1);
    }
    return 0;
  }
  if ( a3 )
    *(_DWORD *)v5 |= 0x10u;
  *(_DWORD *)v5 |= 0x200u;
  return 0;
}
