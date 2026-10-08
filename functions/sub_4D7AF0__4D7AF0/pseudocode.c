NiMatrix33 *__thiscall sub_4D7AF0(float *this, NiMatrix33 *a2)
{
  int v4; // eax
  int v5; // ebp
  unsigned int IsFemale; // eax
  double v7; // st7
  NiMatrix33 right; // [esp+14h] [ebp-6Ch] BYREF
  NiMatrix33 out; // [esp+38h] [ebp-48h] BYREF
  NiMatrix33 v11; // [esp+5Ch] [ebp-24h] BYREF
  float v12; // [esp+84h] [ebp+4h]
  float v13; // [esp+84h] [ebp+4h]

  qmemcpy(a2, &stru_B26AF0[0xA].unk2C, sizeof(NiMatrix33)); /*0x4d7b09*/
  if ( !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 0x190))(this) ) /*0x4d7b16*/
  {
    NiMatrix33_InitRotationXTransposed(&right, *(this + 8)); /*0x4d7b27*/
    qmemcpy(a2, NiMAtrix33_Multiply(a2, &out, &right), sizeof(NiMatrix33)); /*0x4d7b46*/
    NiMatrix33_InitRotationY(&right, *(this + 9)); /*0x4d7b53*/
    qmemcpy(a2, NiMAtrix33_Multiply(a2, &out, &right), sizeof(NiMatrix33)); /*0x4d7b72*/
  }
  NiMatrix33_InitRotationZ(&right, *(this + 0xA)); /*0x4d7b7f*/
  qmemcpy(a2, NiMAtrix33_Multiply(a2, &out, &right), sizeof(NiMatrix33)); /*0x4d7b9e*/
  v4 = *((_DWORD *)this + 7); /*0x4d7ba0*/
  if ( *(_BYTE *)(v4 + 4) == 0x23 ) /*0x4d7ba7*/
  {
    if ( v4 ) /*0x4d7baf*/
    {
      v5 = *(_DWORD *)(v4 + 0xE8); /*0x4d7bb5*/
      if ( v5 ) /*0x4d7bbd*/
      {
        qmemcpy(&out, &unk_B3FADC, sizeof(out)); /*0x4d7bcd*/
        IsFemale = TESActorBase_IsFemale((_BYTE *)v4); /*0x4d7bd1*/
        v7 = 0.0; /*0x4d7bd9*/
        if ( IsFemale > 1 ) /*0x4d7bdb*/
          v12 = 0.0; /*0x4d7bea*/
        else
          v12 = *(float *)(v5 + 4 * IsFemale + 0x68); /*0x4d7be1*/
        out.data[0][0] = v12; /*0x4d7bfb*/
        out.data[1][1] = v12; /*0x4d7bff*/
        if ( IsFemale <= 1 ) /*0x4d7c03*/
          v7 = *(float *)(v5 + 4 * IsFemale + 0x60); /*0x4d7c07*/
        v13 = v7; /*0x4d7c0f*/
        out.data[2][2] = v13; /*0x4d7c22*/
        qmemcpy(a2, NiMAtrix33_Multiply(a2, &v11, &out), sizeof(NiMatrix33)); /*0x4d7c37*/
      }
    }
  }
  return a2; /*0x4d7c39*/
}
