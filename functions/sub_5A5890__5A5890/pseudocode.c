void __userpurge sub_5A5890(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  double v9; // st7
  double v11; // st7
  int v14; // [esp+10h] [ebp+4h]
  int v15; // [esp+10h] [ebp+4h]

  if ( a6 == 0x5B )
  {
    _ESI = InterfaceManager_GetSingleton(0, 1);
    v9 = sub_57D7A0();
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [esi+20h]
    }
    v14 = Double_To_SInt32(v9);
    __asm
    {
      fild    [esp+10h+arg_0]
      fstp    dword ptr [edi+68h]
    }
    *(float *)(a1 + 0x68) = _ET1;
    sub_57D7F0();
    __asm { fstp    [esp+10h+var_8] }
    v11 = sub_57D7F0();
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [esi+28h]
      fsubr   [esp+10h+var_8]
    }
    v15 = Double_To_SInt32(v11);
    __asm { fild    [esp+10h+arg_0] }
    __asm { fstp    dword ptr [edi+6Ch] }
    *(float *)(a1 + 0x6C) = _ET1;
  }
}
