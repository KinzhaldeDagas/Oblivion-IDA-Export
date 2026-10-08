float *__thiscall sub_4D7C50(_DWORD *this, float *a2, float *a3, char a4)
{
  int v4; // eax
  float *v5; // ebx
  unsigned int IsFemale; // esi
  double v7; // st7
  double v8; // st7
  float v10[9]; // [esp+Ch] [ebp-48h] BYREF
  float v11[9]; // [esp+30h] [ebp-24h] BYREF

  v4 = *(this + 7); /*0x4d7c50*/
  if ( v4 ) /*0x4d7c5f*/
  {
    if ( *(_BYTE *)(v4 + 4) == 0x23 ) /*0x4d7c69*/
    {
      v5 = *(float **)(v4 + 0xE8); /*0x4d7c70*/
      if ( v5 ) /*0x4d7c78*/
      {
        qmemcpy(v10, &MEMORY[0xB3F9B0][0x4B], sizeof(v10)); /*0x4d7c88*/
        IsFemale = TESActorBase_IsFemale((_BYTE *)v4); /*0x4d7c91*/
        v7 = sub_4D6BC0(v5, IsFemale); /*0x4d7c96*/
        if ( a4 ) /*0x4d7ca3*/
        {
          v10[0] = 1.0 / v7; /*0x4d7ca9*/
          v10[4] = v10[0]; /*0x4d7cb1*/
          v8 = 1.0 / sub_4D6B90(v5, IsFemale); /*0x4d7cbc*/
        }
        else
        {
          v10[0] = v7; /*0x4d7cc0*/
          v10[4] = v10[0]; /*0x4d7cc8*/
          v8 = sub_4D6B90(v5, IsFemale); /*0x4d7ccc*/
        }
        v10[8] = v8; /*0x4d7cd5*/
        qmemcpy(a3, NiMAtrix33_Multiply(a3, v11, v10), 0x24u); /*0x4d7cef*/
      }
    }
  }
  qmemcpy(a2, a3, 0x24u); /*0x4d7cff*/
  return a2; /*0x4d7d01*/
}
