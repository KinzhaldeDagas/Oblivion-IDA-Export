void __userpurge sub_5B1590(
        int a1@<ecx>,
        char bp0@<bpl>,
        double st5_0@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  double VirtualScreenHeight; // st7
  int v10; // eax
  double Float; // st7
  float a2; // [esp+0h] [ebp-14h]
  float a2a; // [esp+0h] [ebp-14h]
  float a2b; // [esp+0h] [ebp-14h]
  int v18; // [esp+18h] [ebp+4h]
  int v20; // [esp+18h] [ebp+4h]

  _ESI = a1; /*0x5b1599*/
  if ( a6 == 0xC ) /*0x5b159b*/
  {
    _EDI = InterfaceManager_GetSingleton(0, 1); /*0x5b15ae*/
    UI_GetVirtualScreenHeight(); /*0x5b15b0*/
    __asm { fstp    qword ptr [esp+10h+a3] } /*0x5b15b5*/
    VirtualScreenHeight = UI_GetVirtualScreenHeight(); /*0x5b15b9*/
    __asm /*0x5b15be*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   qword ptr [esp+10h+a3]
    }
    v10 = Double_To_SInt32(VirtualScreenHeight); /*0x5b15cb*/
    __asm { fld     dword ptr [esi+58h] } /*0x5b15d0*/
    v18 = v10; /*0x5b15d6*/
    __asm /*0x5b15da*/
    {
      fiadd   [esp+10h+arg_0]
      fstp    qword ptr [esp+10h+a3]
    }
    sub_588CF0(*(_DWORD **)(_ESI + 0x30)); /*0x5b15e2*/
    __asm { fsubr   qword ptr [esp+10h+a3] } /*0x5b15e7*/
    __asm { fstp    qword ptr [esp+14h+a3]; a3 }
    Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(_ESI + 0x34), 0xFB6); /*0x5b15f7*/
    __asm { fdivr   qword ptr [esp+10h+a3] } /*0x5b15fc*/
    __asm
    {
      fstp    [esp+14h+arg_0]
      fld     dword ptr ds:0A6B1F0h
      fstp    [esp+14h+a2]; value
    }
    Tile_SetFloat(*(Tile **)(_ESI + 0x34), 0xFB7u, a2); /*0x5b1616*/
    __asm { fld     [esp+10h+arg_0] } /*0x5b161b*/
    v20 = Double_To_SInt32(Float); /*0x5b1624*/
    __asm { fild    [esp+10h+arg_0] } /*0x5b1628*/
    __asm { fstp    [esp+14h+a2]; value }
    Tile_SetFloat(*(Tile **)(_ESI + 0x34), 0xFB7u, a2a); /*0x5b1638*/
    __asm { fldz } /*0x5b163d*/
    __asm { fstp    [esp+14h+a2]; value }
    Tile_SetFloat(*(Tile **)(_ESI + 0x34), 0xFB7u, a2b); /*0x5b164b*/
  }
}
