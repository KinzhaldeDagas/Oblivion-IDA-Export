void __userpurge sub_595CD0(
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

  _ESI = a1; /*0x595cd9*/
  if ( a6 == 0xC ) /*0x595cdb*/
  {
    _EDI = InterfaceManager_GetSingleton(0, 1); /*0x595cee*/
    UI_GetVirtualScreenHeight(); /*0x595cf0*/
    __asm { fstp    qword ptr [esp+10h+a3] } /*0x595cf5*/
    VirtualScreenHeight = UI_GetVirtualScreenHeight(); /*0x595cf9*/
    __asm /*0x595cfe*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   qword ptr [esp+10h+a3]
    }
    v10 = Double_To_SInt32(VirtualScreenHeight); /*0x595d0b*/
    __asm { fld     dword ptr [esi+38h] } /*0x595d10*/
    v18 = v10; /*0x595d16*/
    __asm /*0x595d1a*/
    {
      fiadd   [esp+10h+arg_0]
      fstp    qword ptr [esp+10h+a3]
    }
    sub_588CF0(*(_DWORD **)(_ESI + 0x28)); /*0x595d22*/
    __asm { fsubr   qword ptr [esp+10h+a3] } /*0x595d27*/
    __asm { fstp    qword ptr [esp+14h+a3]; a3 }
    Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(_ESI + 0x2C), 0xFB6); /*0x595d37*/
    __asm { fdivr   qword ptr [esp+10h+a3] } /*0x595d3c*/
    __asm
    {
      fstp    [esp+14h+arg_0]
      fld     dword ptr ds:0A6B1F0h
      fstp    [esp+14h+a2]; value
    }
    Tile_SetFloat(*(Tile **)(_ESI + 0x28), 0xFB3u, a2); /*0x595d56*/
    __asm { fld     [esp+10h+arg_0] } /*0x595d5b*/
    v20 = Double_To_SInt32(Float); /*0x595d64*/
    __asm { fild    [esp+10h+arg_0] } /*0x595d68*/
    __asm { fstp    [esp+14h+a2]; value }
    Tile_SetFloat(*(Tile **)(_ESI + 0x28), 0xFB3u, a2a); /*0x595d78*/
    __asm { fldz } /*0x595d7d*/
    __asm { fstp    [esp+14h+a2]; value }
    Tile_SetFloat(*(Tile **)(_ESI + 0x28), 0xFB3u, a2b); /*0x595d8b*/
  }
}
