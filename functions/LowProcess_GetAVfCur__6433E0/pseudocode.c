double __thiscall LowProcess_GetAVfCur(_DWORD *this, int a2, int actorValue, int a4)
{
  float AV; // [esp+8h] [ebp-Ch]
  double v7; // [esp+Ch] [ebp-8h]
  double v8; // [esp+Ch] [ebp-8h]

  AV = 0.0; /*0x6433e7*/
  if ( a4 ) /*0x6433f8*/
    AV = AVCollection_GetAV((AVCollection *)(a4 + 0x88), actorValue); /*0x643406*/
  if ( actorValue == 0xB && a4 ) /*0x643411*/
  {
    v7 = AVCollection_GetAV((AVCollection *)(this + 0x1C), 0xB); /*0x64341c*/
    return (float)(sub_4D8FB0((TESObjectREFR *)a4) + AV + v7); /*0x643436*/
  }
  else
  {
    v8 = AVCollection_GetAV((AVCollection *)(this + 0x1C), actorValue); /*0x643449*/
    return (float)(((double (__thiscall *)(int, int))*(_DWORD *)(*(_DWORD *)a2 + 0x12C))(a2, actorValue) + AV + v8); /*0x64346b*/
  }
}
