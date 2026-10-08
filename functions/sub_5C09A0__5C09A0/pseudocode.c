double __userpurge sub_5C09A0@<st0>(int a1@<ecx>, double result@<st0>, int a3, int a4)
{
  InterfaceManager *Singleton; // edi
  double VirtualScreenWidth; // st6
  double v7; // [esp+8h] [ebp-8h]

  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5c09b8*/
  if ( a3 == 4 ) /*0x5c09ba*/
  {
    VirtualScreenWidth = UI_GetVirtualScreenWidth(); /*0x5c09bc*/
    v7 = (double)Double_To_SInt32(result * dbl_A2FAA0 + *(float *)Singleton->unk020); /*0x5c09da*/
    result = sub_588C50((_DWORD *)*(_DWORD *)(a1 + 0x34)); /*0x5c09de*/
    *(float *)(a1 + 0x54) = v7 - VirtualScreenWidth; /*0x5c09e7*/
  }
  return result; /*0x5c09ea*/
}
