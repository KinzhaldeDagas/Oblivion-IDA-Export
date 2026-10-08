void __userpurge sub_5D76F0(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  double VirtualScreenHeight; // st7
  double v11; // st7
  double v13; // [esp+8h] [ebp-8h]
  double v14; // [esp+8h] [ebp-8h]

  _EDI = InterfaceManager_GetSingleton(0, 1); /*0x5d7703*/
  UI_GetVirtualScreenHeight(); /*0x5d7705*/
  __asm { fstp    [esp+10h+var_8] } /*0x5d770a*/
  VirtualScreenHeight = UI_GetVirtualScreenHeight(); /*0x5d770e*/
  __asm /*0x5d7713*/
  {
    fmul    qword ptr ds:0A2FAA0h
    fadd    dword ptr [edi+28h]
    fsubr   [esp+10h+var_8]
  }
  LODWORD(v13) = Double_To_SInt32(VirtualScreenHeight); /*0x5d7728*/
  sub_588CF0(*(_DWORD **)(a1 + 0x3C)); /*0x5d772c*/
  __asm /*0x5d7731*/
  {
    fisub   dword ptr [esp+10h+var_8]
    fstp    dword ptr [esi+64h]
  }
  *(float *)(a1 + 0x64) = _ET1; /*0x5d7735*/
  UI_GetVirtualScreenHeight(); /*0x5d7738*/
  __asm { fstp    [esp+10h+var_8] } /*0x5d773d*/
  v11 = UI_GetVirtualScreenHeight(); /*0x5d7741*/
  __asm /*0x5d7746*/
  {
    fmul    qword ptr ds:0A2FAA0h
    fadd    dword ptr [edi+28h]
    fsubr   [esp+10h+var_8]
  }
  LODWORD(v14) = Double_To_SInt32(v11); /*0x5d775b*/
  sub_588CF0(*(_DWORD **)(a1 + 0x44)); /*0x5d775f*/
  __asm { fisub   dword ptr [esp+10h+var_8] } /*0x5d7764*/
  __asm { fstp    dword ptr [esi+68h] }
  *(float *)(a1 + 0x68) = _ET1; /*0x5d7769*/
}
