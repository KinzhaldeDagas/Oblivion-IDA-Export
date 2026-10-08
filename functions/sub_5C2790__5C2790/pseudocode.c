void __userpurge sub_5C2790(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        _DWORD *a7)
{
  double VirtualScreenWidth; // st7
  double VirtualScreenHeight; // st7
  double v14; // st7
  int v18; // [esp+18h] [ebp+4h]
  int v19; // [esp+18h] [ebp+4h]
  int v20; // [esp+18h] [ebp+4h]

  _ESI = a1; /*0x5c279a*/
  _EDI = InterfaceManager_GetSingleton(0, 1); /*0x5c27b0*/
  if ( *(_DWORD *)(_ESI + 4 * a6 + 0x94) ) /*0x5c27a8*/
  {
    VirtualScreenWidth = UI_GetVirtualScreenWidth(); /*0x5c27b5*/
    __asm /*0x5c27ba*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+20h]
    }
    v18 = Double_To_SInt32(VirtualScreenWidth); /*0x5c27ce*/
    sub_588C50(a7); /*0x5c27d2*/
    __asm { fisub   [esp+18h+arg_0] } /*0x5c27d7*/
    __asm { fstp    [esp+1Ch+var_8] }
    Tile_GetFloat(a7, 0xFCB); /*0x5c27e6*/
    __asm { fsubr   [esp+18h+var_8] } /*0x5c27eb*/
    __asm { fstp    dword ptr [esi+898h] }
    *(float *)(_ESI + 0x898) = _ET1; /*0x5c27f0*/
  }
  UI_GetVirtualScreenHeight(); /*0x5c27f6*/
  __asm { fstp    [esp+14h+var_8] } /*0x5c27fb*/
  VirtualScreenHeight = UI_GetVirtualScreenHeight(); /*0x5c27ff*/
  __asm /*0x5c2804*/
  {
    fmul    qword ptr ds:0A2FAA0h
    fadd    dword ptr [edi+28h]
    fsubr   [esp+14h+var_8]
  }
  v19 = Double_To_SInt32(VirtualScreenHeight); /*0x5c2819*/
  sub_588CF0(*(_DWORD **)(_ESI + 0x34)); /*0x5c281d*/
  __asm { fisub   [esp+14h+arg_0] } /*0x5c2822*/
  __asm { fstp    dword ptr [esi+89Ch] }
  *(float *)(_ESI + 0x89C) = _ET1; /*0x5c2829*/
  if ( a6 == 2 && (_EDI->unk0C0[0x16] & 4) == 0 ) /*0x5c283c*/
  {
    v14 = UI_GetVirtualScreenWidth(); /*0x5c283e*/
    __asm /*0x5c2843*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+20h]
    }
    v20 = Double_To_SInt32(v14); /*0x5c2851*/
    __asm /*0x5c2855*/
    {
      fild    [esp+14h+arg_0]
      fsub    dword ptr [esi+8A0h]
      fstp    dword ptr [esi+898h]
    }
    *(float *)(_ESI + 0x898) = _ET1; /*0x5c285f*/
  }
}
