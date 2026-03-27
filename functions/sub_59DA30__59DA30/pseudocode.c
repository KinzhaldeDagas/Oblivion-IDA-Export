UInt32 __userpurge sub_59DA30@<eax>(double a1@<st0>, UInt32 a2, _DWORD *a3)
{
  InterfaceManager *Singleton; // esi
  double v8; // st7
  int v9; // eax
  double v10; // st7
  double v11; // st7
  int v13; // [esp+8h] [ebp-4h]
  int v14; // [esp+14h] [ebp+8h]

  Singleton = InterfaceManager_GetSingleton(0, 1);
  sub_57D7A0();
  v13 = Double_To_SInt32(a1 * dbl_A2FAA0 + *(float *)&Singleton->unk020[3]);
  v8 = sub_588C50(a3);
  v9 = Double_To_SInt32(v8 - (double)v13);
  v10 = *(float *)&Singleton->unk020[5];
  Singleton->unk020[8] = v9;
  v14 = Double_To_SInt32(v10);
  v11 = sub_588CF0(a3);
  Singleton->unk020[9] = Double_To_SInt32(v11 - (double)v14);
  Singleton->unk020[0xB] = (UInt32)a3;
  Singleton->unk020[0xA] = a2;
  return a2;
}
