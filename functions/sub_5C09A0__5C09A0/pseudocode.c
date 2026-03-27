void __userpurge sub_5C09A0(int a1@<ecx>, double a2@<st0>, int a3, int a4)
{
  InterfaceManager *Singleton; // edi
  double v9; // st4
  double v10; // [esp+8h] [ebp-8h]

  Singleton = InterfaceManager_GetSingleton(0, 1);
  if ( a3 == 4 )
  {
    v9 = sub_57D7A0();
    v10 = (double)Double_To_SInt32(a2 * dbl_A2FAA0 + *(float *)Singleton->unk020);
    sub_588C50(*(_DWORD **)(a1 + 0x34));
    *(float *)(a1 + 0x54) = v10 - v9;
  }
}
