void __userpurge sub_597B80(
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

  _EDI = InterfaceManager_GetSingleton(0, 1); /*0x597b93*/
  UI_GetVirtualScreenHeight(); /*0x597b95*/
  __asm { fstp    [esp+10h+var_8] } /*0x597b9a*/
  v9 = UI_GetVirtualScreenHeight(); /*0x597b9e*/
  __asm /*0x597ba3*/
  {
    fmul    qword ptr ds:0A2FAA0h
    fadd    dword ptr [edi+28h]
    fsubr   [esp+10h+var_8]
  }
  LODWORD(v11) = Double_To_SInt32(v9); /*0x597bb8*/
  sub_588CF0(*(_DWORD **)(a1 + 0x2C)); /*0x597bbc*/
  __asm { fisub   dword ptr [esp+10h+var_8] } /*0x597bc1*/
  __asm { fstp    dword ptr [esi+50h] }
  *(float *)(a1 + 0x50) = _ET1; /*0x597bc6*/
}
