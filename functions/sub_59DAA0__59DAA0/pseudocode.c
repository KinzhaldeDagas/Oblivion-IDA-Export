void __userpurge sub_59DAA0(
        int a1@<ecx>,
        char bp0@<bpl>,
        double st5_0@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  double VirtualScreenHeight; // st7
  double Float; // st7
  float a2; // [esp+0h] [ebp-14h]
  float a2a; // [esp+0h] [ebp-14h]
  float a2b; // [esp+0h] [ebp-14h]
  int v16; // [esp+18h] [ebp+4h]
  int v19; // [esp+18h] [ebp+4h]

  if ( a6 == 0xF ) /*0x59daab*/
  {
    _EDI = InterfaceManager_GetSingleton(0, 1); /*0x59dabe*/
    UI_GetVirtualScreenHeight(); /*0x59dac0*/
    __asm { fstp    qword ptr [esp+10h+a3] } /*0x59dac5*/
    VirtualScreenHeight = UI_GetVirtualScreenHeight(); /*0x59dac9*/
    __asm /*0x59dace*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   qword ptr [esp+10h+a3]
    }
    v16 = Double_To_SInt32(VirtualScreenHeight); /*0x59dae3*/
    __asm /*0x59dae7*/
    {
      fild    [esp+10h+arg_0]
      fstp    [esp+10h+arg_0]
    }
    sub_588CF0(*(_DWORD **)(a1 + 0x44)); /*0x59daef*/
    __asm { fsubr   [esp+10h+arg_0] } /*0x59daf4*/
    __asm { fstp    qword ptr [esp+14h+a3]; a3 }
    Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x48), 0xFB6); /*0x59db04*/
    __asm { fdivr   qword ptr [esp+10h+a3] } /*0x59db09*/
    __asm
    {
      fstp    [esp+14h+arg_0]
      fld     dword ptr ds:0A6B1F0h
      fstp    [esp+14h+a2]; value
    }
    Tile_SetFloat(*(Tile **)(a1 + 0x48), (_DWORD *)0xFB7, a2); /*0x59db23*/
    __asm { fld     [esp+10h+arg_0] } /*0x59db28*/
    v19 = Double_To_SInt32(Float); /*0x59db31*/
    __asm { fild    [esp+10h+arg_0] } /*0x59db35*/
    __asm { fstp    [esp+14h+a2]; value }
    Tile_SetFloat(*(Tile **)(a1 + 0x48), (_DWORD *)0xFB7, a2a); /*0x59db45*/
    __asm { fldz } /*0x59db4a*/
    __asm { fstp    [esp+14h+a2]; value }
    Tile_SetFloat(*(Tile **)(a1 + 0x48), (_DWORD *)0xFB7, a2b); /*0x59db58*/
  }
}
