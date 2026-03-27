float *__thiscall sub_4D7C50(_DWORD *this, float *a2, float *a3, char a4)
{
  int v4; // eax
  float *v5; // ebx
  unsigned int IsFemale; // esi
  double v7; // st7
  double v8; // st7
  float v10[9]; // [esp+Ch] [ebp-48h] BYREF
  float v11[9]; // [esp+30h] [ebp-24h] BYREF

  v4 = *(this + 7);
  if ( v4 )
  {
    if ( *(_BYTE *)(v4 + 4) == 0x23 )
    {
      v5 = *(float **)(v4 + 0xE8);
      if ( v5 )
      {
        qmemcpy(v10, &unk_B3FADC, sizeof(v10));
        IsFemale = TESActorBase_IsFemale((_BYTE *)v4);
        v7 = sub_4D6BC0(v5, IsFemale);
        if ( a4 )
        {
          v10[0] = 1.0 / v7;
          v10[4] = v10[0];
          v8 = 1.0 / sub_4D6B90(v5, IsFemale);
        }
        else
        {
          v10[0] = v7;
          v10[4] = v10[0];
          v8 = sub_4D6B90(v5, IsFemale);
        }
        v10[8] = v8;
        qmemcpy(a3, NiMAtrix33_Multiply(a3, v11, v10), 0x24u);
      }
    }
  }
  qmemcpy(a2, a3, 0x24u);
  return a2;
}
