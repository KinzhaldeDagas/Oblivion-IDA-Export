void __userpurge sub_59FCD0(int a1@<ecx>, double a2@<st0>, int a3, int a4)
{
  InterfaceManager *Singleton; // ebx
  double v9; // st4
  double v10; // st7
  _DWORD *v11; // eax
  double v12; // [esp+Ch] [ebp-8h]

  Singleton = InterfaceManager_GetSingleton(0, 1);
  if ( a3 == 0x11 || a3 == 0x13 || a3 == 0xF )
  {
    if ( sub_59FA20((_DWORD *)a1, a3) )
    {
      v9 = sub_57D7A0();
      v10 = (double)Double_To_SInt32(a2 * dbl_A2FAA0 + *(float *)Singleton->unk020);
      v11 = (_DWORD *)sub_59FA20((_DWORD *)a1, a3);
      v12 = v10;
      sub_588C50(v11);
      *(float *)(a1 + 0x74) = v12 - v9;
    }
  }
}
