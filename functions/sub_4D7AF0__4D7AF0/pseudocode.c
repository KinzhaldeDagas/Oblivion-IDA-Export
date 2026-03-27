float *__thiscall sub_4D7AF0(float *this, float *a2)
{
  int v4; // eax
  int v5; // ebp
  unsigned int IsFemale; // eax
  double v7; // st7
  float v9[9]; // [esp+14h] [ebp-6Ch] BYREF
  float v10[9]; // [esp+38h] [ebp-48h] BYREF
  float v11[9]; // [esp+5Ch] [ebp-24h] BYREF
  float v12; // [esp+84h] [ebp+4h]
  float v13; // [esp+84h] [ebp+4h]

  qmemcpy(a2, &stru_B26AF0[0xA].unk2C, 0x24u);
  if ( !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 0x190))(this) )
  {
    NiMatrix33_InitRotationTransposedTransform___(v9, *(this + 8));
    qmemcpy(a2, NiMAtrix33_Multiply(a2, v10, v9), 0x24u);
    sub_70FD80(v9, *(this + 9));
    qmemcpy(a2, NiMAtrix33_Multiply(a2, v10, v9), 0x24u);
  }
  NiMatrix33_InitRotationTransform(v9, *(this + 0xA));
  qmemcpy(a2, NiMAtrix33_Multiply(a2, v10, v9), 0x24u);
  v4 = *((_DWORD *)this + 7);
  if ( *(_BYTE *)(v4 + 4) == 0x23 )
  {
    if ( v4 )
    {
      v5 = *(_DWORD *)(v4 + 0xE8);
      if ( v5 )
      {
        qmemcpy(v10, &unk_B3FADC, sizeof(v10));
        IsFemale = TESActorBase_IsFemale((_BYTE *)v4);
        v7 = 0.0;
        if ( IsFemale > 1 )
          v12 = 0.0;
        else
          v12 = *(float *)(v5 + 4 * IsFemale + 0x68);
        v10[0] = v12;
        v10[4] = v12;
        if ( IsFemale <= 1 )
          v7 = *(float *)(v5 + 4 * IsFemale + 0x60);
        v13 = v7;
        v10[8] = v13;
        qmemcpy(a2, NiMAtrix33_Multiply(a2, v11, v10), 0x24u);
      }
    }
  }
  return a2;
}
