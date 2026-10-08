void __userpurge sub_5A5890(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  double VirtualScreenWidth; // st7
  double VirtualScreenHeight; // st7
  int v14; // [esp+10h] [ebp+4h]
  int v15; // [esp+10h] [ebp+4h]

  if ( a6 == 0x5B ) /*0x5a589b*/
  {
    _ESI = InterfaceManager_GetSingleton(0, 1); /*0x5a58aa*/
    VirtualScreenWidth = UI_GetVirtualScreenWidth(); /*0x5a58ac*/
    __asm /*0x5a58b1*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [esi+20h]
    }
    v14 = Double_To_SInt32(VirtualScreenWidth); /*0x5a58bf*/
    __asm /*0x5a58c3*/
    {
      fild    [esp+10h+arg_0]
      fstp    dword ptr [edi+68h]
    }
    *(float *)(a1 + 0x68) = _ET1; /*0x5a58c7*/
    UI_GetVirtualScreenHeight(); /*0x5a58ca*/
    __asm { fstp    [esp+10h+var_8] } /*0x5a58cf*/
    VirtualScreenHeight = UI_GetVirtualScreenHeight(); /*0x5a58d3*/
    __asm /*0x5a58d8*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [esi+28h]
      fsubr   [esp+10h+var_8]
    }
    v15 = Double_To_SInt32(VirtualScreenHeight); /*0x5a58ea*/
    __asm { fild    [esp+10h+arg_0] } /*0x5a58ee*/
    __asm { fstp    dword ptr [edi+6Ch] }
    *(float *)(a1 + 0x6C) = _ET1; /*0x5a58f3*/
  }
}
