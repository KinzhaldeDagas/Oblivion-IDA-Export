void __userpurge sub_5A6940(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  double v9; // st7
  double v10; // st7
  int v11; // eax
  double v12; // st7
  double v14; // st7
  float v16; // [esp+0h] [ebp-18h]
  float v17; // [esp+4h] [ebp-14h]
  double v18; // [esp+10h] [ebp-8h]
  int v20; // [esp+1Ch] [ebp+4h]
  int v23; // [esp+1Ch] [ebp+4h]
  int v24; // [esp+1Ch] [ebp+4h]

  _EDI = a1;
  if ( a6 == 0x5B )
  {
    _ESI = InterfaceManager_GetSingleton(0, 1);
    sub_57D7F0();
    __asm { fstp    [esp+18h+var_8] }
    v9 = sub_57D7F0();
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [esi+28h]
      fsubr   [esp+18h+var_8]
    }
    v20 = Double_To_SInt32(v9);
    v10 = sub_57D7A0();
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [esi+20h]
    }
    v11 = Double_To_SInt32(v10);
    __asm
    {
      fld     dword ptr [edi+6Ch]
      fisub   [esp+18h+arg_0]
    }
    LODWORD(v18) = v11;
    __asm
    {
      fstp    [esp+18h+arg_0]
      fld     [esp+18h+arg_0]
      fstp    [esp+18h+var_14]; float
      fild    dword ptr [esp+18h+var_8]
      fsub    dword ptr [edi+68h]
      fstp    [esp+18h+arg_0]
      fld     [esp+18h+arg_0]
      fstp    [esp+18h+var_18]; float
    }
    sub_5A5900(v16, v17);
    v12 = sub_57D7A0();
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [esi+20h]
    }
    v23 = Double_To_SInt32(v12);
    __asm
    {
      fild    [esp+10h+arg_0]
      fstp    dword ptr [edi+68h]
    }
    *(float *)(_EDI + 0x68) = _ET1;
    sub_57D7F0();
    __asm { fstp    [esp+10h+var_8] }
    v14 = sub_57D7F0();
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [esi+28h]
      fsubr   [esp+10h+var_8]
    }
    v24 = Double_To_SInt32(v14);
    __asm { fild    [esp+10h+arg_0] }
    __asm { fstp    dword ptr [edi+6Ch] }
    *(float *)(_EDI + 0x6C) = _ET1;
  }
}
