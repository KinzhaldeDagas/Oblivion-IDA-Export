void __userpurge sub_595C70(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  double v9; // st7
  int v12; // [esp+10h] [ebp+4h]

  if ( a6 == 0xC )
  {
    _EDI = InterfaceManager_GetSingleton(0, 1);
    sub_57D7F0();
    __asm { fstp    [esp+10h+var_8] }
    v9 = sub_57D7F0();
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   [esp+10h+var_8]
    }
    v12 = Double_To_SInt32(v9);
    sub_588CF0(*(_DWORD **)(a1 + 0x2C));
    __asm { fisub   [esp+10h+arg_0] }
    __asm { fstp    dword ptr [esi+38h] }
    *(float *)(a1 + 0x38) = _ET1;
  }
}
