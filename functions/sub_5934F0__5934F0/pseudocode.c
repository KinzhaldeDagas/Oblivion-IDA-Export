void __userpurge sub_5934F0(
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

  _ESI = a1; /*0x5934f9*/
  if ( a6 == 0xC ) /*0x5934fb*/
  {
    _EDI = InterfaceManager_GetSingleton(0, 1); /*0x59350e*/
    UI_GetVirtualScreenHeight(); /*0x593510*/
    __asm { fstp    qword ptr [esp+10h+a3] } /*0x593515*/
    VirtualScreenHeight = UI_GetVirtualScreenHeight(); /*0x593519*/
    __asm /*0x59351e*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   qword ptr [esp+10h+a3]
    }
    v10 = Double_To_SInt32(VirtualScreenHeight); /*0x59352b*/
    __asm { fld     dword ptr [esi+8Ch] } /*0x593530*/
    v18 = v10; /*0x593539*/
    __asm /*0x59353d*/
    {
      fiadd   [esp+10h+arg_0]
      fstp    qword ptr [esp+10h+a3]
    }
    sub_588CF0(*(_DWORD **)(_ESI + 0x64)); /*0x593545*/
    __asm { fsubr   qword ptr [esp+10h+a3] } /*0x59354a*/
    __asm { fstp    qword ptr [esp+14h+a3]; a3 }
    Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(_ESI + 0x64), 0xFB6); /*0x59355a*/
    __asm { fdivr   qword ptr [esp+10h+a3] } /*0x59355f*/
    __asm
    {
      fstp    [esp+14h+arg_0]
      fld     dword ptr ds:0A6B1F0h
      fstp    [esp+14h+a2]; value
    }
    Tile_SetFloat(*(Tile **)(_ESI + 0x64), 0xFB7u, a2); /*0x593579*/
    __asm { fld     [esp+10h+arg_0] } /*0x59357e*/
    v20 = Double_To_SInt32(Float); /*0x593587*/
    __asm { fild    [esp+10h+arg_0] } /*0x59358b*/
    __asm { fstp    [esp+14h+a2]; value }
    Tile_SetFloat(*(Tile **)(_ESI + 0x64), 0xFB7u, a2a); /*0x59359b*/
    __asm { fldz } /*0x5935a0*/
    __asm { fstp    [esp+14h+a2]; value }
    Tile_SetFloat(*(Tile **)(_ESI + 0x64), 0xFB7u, a2b); /*0x5935ae*/
  }
}
