void __userpurge sub_5B1540(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  double VirtualScreenHeight; // st7
  double v11; // [esp+8h] [ebp-8h]

  _EDI = InterfaceManager_GetSingleton(0, 1); /*0x5b1553*/
  UI_GetVirtualScreenHeight(); /*0x5b1555*/
  __asm { fstp    [esp+10h+var_8] } /*0x5b155a*/
  VirtualScreenHeight = UI_GetVirtualScreenHeight(); /*0x5b155e*/
  __asm /*0x5b1563*/
  {
    fmul    qword ptr ds:0A2FAA0h
    fadd    dword ptr [edi+28h]
    fsubr   [esp+10h+var_8]
  }
  LODWORD(v11) = Double_To_SInt32(VirtualScreenHeight); /*0x5b1578*/
  sub_588CF0(*(_DWORD **)(a1 + 0x34)); /*0x5b157c*/
  __asm { fisub   dword ptr [esp+10h+var_8] } /*0x5b1581*/
  __asm { fstp    dword ptr [esi+58h] }
  *(float *)(a1 + 0x58) = _ET1; /*0x5b1586*/
}
