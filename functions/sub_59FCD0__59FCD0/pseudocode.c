double __userpurge sub_59FCD0@<st0>(int a1@<ecx>, double result@<st0>, int a3, int a4)
{
  InterfaceManager *Singleton; // ebx
  double VirtualScreenWidth; // st6
  double v7; // st7
  _DWORD *v8; // eax
  double v9; // [esp+Ch] [ebp-8h]

  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x59fceb*/
  if ( a3 == 0x11 || a3 == 0x13 || a3 == 0xF ) /*0x59fcf7*/
  {
    if ( sub_59FA20((_DWORD *)a1, a3) ) /*0x59fcfc*/
    {
      VirtualScreenWidth = UI_GetVirtualScreenWidth(); /*0x59fd05*/
      v7 = (double)Double_To_SInt32(result * dbl_A2FAA0 + *(float *)Singleton->unk020); /*0x59fd1c*/
      v8 = (_DWORD *)sub_59FA20((_DWORD *)a1, a3); /*0x59fd23*/
      v9 = v7; /*0x59fd2a*/
      result = sub_588C50(v8); /*0x59fd2e*/
      *(float *)(a1 + 0x74) = v9 - VirtualScreenWidth; /*0x59fd37*/
    }
  }
  return result; /*0x59fd3a*/
}
