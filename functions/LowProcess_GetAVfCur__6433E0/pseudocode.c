double __thiscall LowProcess_GetAVfCur(_DWORD *this, int a2, int a3, int a4)
{
  float AV; // [esp+8h] [ebp-Ch]
  double v7; // [esp+Ch] [ebp-8h]
  double v8; // [esp+Ch] [ebp-8h]

  AV = 0.0;
  if ( a4 )
    AV = AVCollection_GetAV((_DWORD *)(a4 + 0x88), a3);
  if ( a3 == 0xB && a4 )
  {
    v7 = AVCollection_GetAV(this + 0x1C, 0xB);
    return (float)(sub_4D8FB0((TESObjectREFR *)a4) + AV + v7);
  }
  else
  {
    v8 = AVCollection_GetAV(this + 0x1C, a3);
    return (float)(((double (__thiscall *)(int, int))*(_DWORD *)(*(_DWORD *)a2 + 0x12C))(a2, a3) + AV + v8);
  }
}
