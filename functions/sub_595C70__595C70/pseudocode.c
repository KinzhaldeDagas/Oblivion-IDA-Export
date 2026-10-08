void __userpurge sub_595C70(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  double VirtualScreenHeight; // st7
  int v12; // [esp+10h] [ebp+4h]

  if ( a6 == 0xC ) /*0x595c7b*/
  {
    _EDI = InterfaceManager_GetSingleton(0, 1); /*0x595c8a*/
    UI_GetVirtualScreenHeight(); /*0x595c8c*/
    __asm { fstp    [esp+10h+var_8] } /*0x595c91*/
    VirtualScreenHeight = UI_GetVirtualScreenHeight(); /*0x595c95*/
    __asm /*0x595c9a*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   [esp+10h+var_8]
    }
    v12 = Double_To_SInt32(VirtualScreenHeight); /*0x595caf*/
    sub_588CF0(*(_DWORD **)(a1 + 0x2C)); /*0x595cb3*/
    __asm { fisub   [esp+10h+arg_0] } /*0x595cb8*/
    __asm { fstp    dword ptr [esi+38h] }
    *(float *)(a1 + 0x38) = _ET1; /*0x595cbd*/
  }
}
