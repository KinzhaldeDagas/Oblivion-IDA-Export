void __thiscall LowProcess_GetAViCur(_DWORD *this, int a2, int a3, int a4)
{
  double v5; // st7
  float AV; // [esp+8h] [ebp-Ch]
  double v7; // [esp+Ch] [ebp-8h]
  double v8; // [esp+Ch] [ebp-8h]
  int v9; // [esp+20h] [ebp+Ch]

  AV = 0.0;
  if ( a4 )
    AV = AVCollection_GetAV((_DWORD *)(a4 + 0x88), a3);
  if ( a3 == 0xB && a4 )
  {
    v7 = AVCollection_GetAV(this + 0x1C, 0xB);
    v5 = sub_4D8FB0((TESObjectREFR *)a4);
    Double_To_SInt32(v5 + AV + v7);
  }
  else
  {
    v8 = AVCollection_GetAV(this + 0x1C, a3);
    v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 0x128))(a2, a3);
    Double_To_SInt32((double)v9 + AV + v8);
  }
}
