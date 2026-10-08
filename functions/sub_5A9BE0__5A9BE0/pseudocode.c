void __userpurge sub_5A9BE0(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  double v9; // st7
  double v11; // [esp+8h] [ebp-8h]

  _EDI = InterfaceManager_GetSingleton(0, 1); /*0x5a9bf3*/
  UI_GetVirtualScreenHeight(); /*0x5a9bf5*/
  __asm { fstp    [esp+10h+var_8] } /*0x5a9bfa*/
  v9 = UI_GetVirtualScreenHeight(); /*0x5a9bfe*/
  __asm /*0x5a9c03*/
  {
    fmul    qword ptr ds:0A2FAA0h
    fadd    dword ptr [edi+28h]
    fsubr   [esp+10h+var_8]
  }
  LODWORD(v11) = Double_To_SInt32(v9); /*0x5a9c18*/
  sub_588CF0(*(_DWORD **)(a1 + 0x34)); /*0x5a9c1c*/
  __asm { fisub   dword ptr [esp+10h+var_8] } /*0x5a9c21*/
  MEMORY[0xB3B3D9] = 1; /*0x5a9c26*/
  __asm { fstp    dword ptr [esi+48h] } /*0x5a9c2d*/
  *(float *)(a1 + 0x48) = _ET1; /*0x5a9c2d*/
}
