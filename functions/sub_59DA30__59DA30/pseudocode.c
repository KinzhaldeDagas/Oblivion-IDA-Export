UInt32 __userpurge sub_59DA30@<eax>(double a1@<st0>, UInt32 a2, _DWORD *a3)
{
  InterfaceManager *Singleton; // esi
  double v5; // st7
  int v6; // eax
  double v7; // st7
  double v8; // st7
  int v10; // [esp+8h] [ebp-4h]
  int v11; // [esp+14h] [ebp+8h]

  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x59da3f*/
  UI_GetVirtualScreenWidth(); /*0x59da41*/
  v10 = Double_To_SInt32(a1 * dbl_A2FAA0 + *(float *)&Singleton->unk020[3]); /*0x59da5a*/
  v5 = sub_588C50(a3); /*0x59da5e*/
  v6 = Double_To_SInt32(v5 - (double)v10); /*0x59da67*/
  v7 = *(float *)&Singleton->unk020[5]; /*0x59da6c*/
  Singleton->unk020[8] = v6; /*0x59da6f*/
  v11 = Double_To_SInt32(v7); /*0x59da79*/
  v8 = sub_588CF0(a3); /*0x59da7d*/
  Singleton->unk020[9] = Double_To_SInt32(v8 - (double)v11); /*0x59da8b*/
  Singleton->unk020[0xB] = (UInt32)a3; /*0x59da92*/
  Singleton->unk020[0xA] = a2; /*0x59da96*/
  return a2; /*0x59da95*/
}
