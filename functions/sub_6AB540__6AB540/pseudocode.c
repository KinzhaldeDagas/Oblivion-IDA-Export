unsigned int __thiscall sub_6AB540(float *this, int a2, char a3)
{
  _DWORD *v4; // ecx
  int v5; // esi
  float *SafeFloatPointer; // eax
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

  v4 = *((_DWORD **)this + 0xC0); /*0x6ab551*/
  LODWORD(v12) = 0; /*0x6ab557*/
  NiTMap_GetAt(v4, a2, &v12); /*0x6ab55f*/
  v5 = LODWORD(v12); /*0x6ab564*/
  if ( !LODWORD(v12) || !bSoundEnabled_Audio ) /*0x6ab570*/
    return 0; /*0x6ab6e5*/
  if ( !sub_6B7050(SLODWORD(v12)) ) /*0x6ab57f*/
    return 0x80004005; /*0x6ab592*/
  sub_6B6F20((float *)v5, *(float *)(v5 + 0x3C)); /*0x6ab59e*/
  if ( !*((_BYTE *)this + 0xA4) || *(_BYTE *)v5 & 0x21 | 4 ) /*0x6ab5b3*/
  {
    if ( !*((_BYTE *)this + 0xA5) /*0x6ab616*/
      || (*(_BYTE *)v5 & 0x20) != 0
      || (v12 = sub_6B6B90((_DWORD *)v5),
          SafeFloatPointer = GameSetting_GetSafeFloatPointer(&flt_B161B8),
          v17 = v12 - *SafeFloatPointer,
          sub_6B6B20(v5, v17),
          (*(_DWORD *)v5 & 0x1000) == 0) )
    {
      if ( (*(_BYTE *)v5 & 2) != 0 ) /*0x6ab61f*/
      {
        v8 = *(float *)(v5 + 0x24); /*0x6ab628*/
        v9 = *(float *)(v5 + 0x28); /*0x6ab62b*/
        LODWORD(v12) = *(_DWORD *)(v5 + 0x20); /*0x6ab62e*/
        v10 = *(float *)&v12 - *(this + 0x20); /*0x6ab636*/
        *((float *)&v12 + 1) = v8; /*0x6ab63c*/
        v13 = v9; /*0x6ab640*/
        v14 = v10; /*0x6ab644*/
        v15 = v8 - *(this + 0x21); /*0x6ab652*/
        v16 = v9 - *(this + 0x22); /*0x6ab660*/
        v18 = v15 * v15 + v14 * v14 + v16 * v16; /*0x6ab680*/
        v19 = sqrt(v18); /*0x6ab68d*/
        v11 = (double)*(int *)(v5 + 0x38); /*0x6ab69a*/
        if ( *(int *)(v5 + 0x38) < 0 ) /*0x6ab69d*/
          v11 = v11 + flt_A2FC78; /*0x6ab69f*/
        sub_6B7130(v5, v11 < v19); /*0x6ab6b7*/
      }
      if ( (*(_BYTE *)v5 & 0x10) == 0 && !a3 ) /*0x6ab6c6*/
      {
        sub_6B6E60((int *)v5, 0); /*0x6ab6cc*/
        return 0; /*0x6ab6d8*/
      }
      sub_6B6E60((int *)v5, 1); /*0x6ab6df*/
    }
    return 0; /*0x6ab6df*/
  }
  if ( a3 ) /*0x6ab5bd*/
    *(_DWORD *)v5 |= 0x10u; /*0x6ab5c2*/
  *(_DWORD *)v5 |= 0x200u; /*0x6ab5c4*/
  return 0; /*0x6ab588*/
}
