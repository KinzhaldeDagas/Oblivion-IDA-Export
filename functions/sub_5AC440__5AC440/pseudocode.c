void __userpurge sub_5AC440(
        int a1@<ecx>,
        char bp0@<bpl>,
        double st0_0@<st7>,
        double a4@<st6>,
        double a5@<st5>,
        double a6@<st4>,
        double a7@<st3>,
        double a8@<st2>,
        double a9@<st1>,
        double a10@<st0>,
        signed int a11,
        Tile *a12)
{
  double VirtualScreenHeight; // st7
  int v15; // eax
  double Float; // st7
  float a2; // [esp+0h] [ebp-14h]
  float a2a; // [esp+0h] [ebp-14h]
  float a2b; // [esp+0h] [ebp-14h]
  int v24; // [esp+18h] [ebp+4h]
  int v26; // [esp+18h] [ebp+4h]

  _ESI = a1; /*0x5ac44b*/
  if ( a11 == 0xC ) /*0x5ac44d*/
  {
    _EDI = InterfaceManager_GetSingleton(0, 1); /*0x5ac460*/
    UI_GetVirtualScreenHeight(); /*0x5ac462*/
    __asm { fstp    qword ptr [esp+10h+a3] } /*0x5ac467*/
    VirtualScreenHeight = UI_GetVirtualScreenHeight(); /*0x5ac46b*/
    __asm /*0x5ac470*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   qword ptr [esp+10h+a3]
    }
    v15 = Double_To_SInt32(VirtualScreenHeight); /*0x5ac47d*/
    __asm { fld     dword ptr [esi+48h] } /*0x5ac482*/
    v24 = v15; /*0x5ac488*/
    __asm /*0x5ac48c*/
    {
      fiadd   [esp+10h+arg_0]
      fstp    qword ptr [esp+10h+a3]
    }
    sub_588CF0(*(_DWORD **)(_ESI + 0x30)); /*0x5ac494*/
    __asm { fsubr   qword ptr [esp+10h+a3] } /*0x5ac499*/
    __asm { fstp    qword ptr [esp+14h+a3]; a3 }
    Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(_ESI + 0x34), 0xFB6); /*0x5ac4a9*/
    __asm { fdivr   qword ptr [esp+10h+a3] } /*0x5ac4ae*/
    __asm
    {
      fstp    [esp+14h+arg_0]
      fld     dword ptr ds:0A6B1F0h
      fstp    [esp+14h+a2]; value
    }
    Tile_SetFloat(*(Tile **)(_ESI + 0x34), (_DWORD *)0xFB7, a2); /*0x5ac4c8*/
    __asm { fld     [esp+10h+arg_0] } /*0x5ac4cd*/
    v26 = Double_To_SInt32(Float); /*0x5ac4d6*/
    __asm { fild    [esp+10h+arg_0] } /*0x5ac4da*/
    __asm { fstp    [esp+14h+a2]; value }
    Tile_SetFloat(*(Tile **)(_ESI + 0x34), (_DWORD *)0xFB7, a2a); /*0x5ac4ea*/
    __asm { fldz } /*0x5ac4ef*/
    __asm { fstp    [esp+14h+a2]; value }
    Tile_SetFloat(*(Tile **)(_ESI + 0x34), (_DWORD *)0xFB7, a2b); /*0x5ac4fd*/
  }
  else if ( a11 >= 0x3E9 ) /*0x5ac50f*/
  {
    if ( BYTE1(dword_B3B0B4[0xC9]) ) /*0x5ac511*/
    {
      _EAX = InterfaceManager_GetSingleton(0, 1); /*0x5ac51e*/
      __asm /*0x5ac523*/
      {
        fld1
        fcomp   dword ptr [eax+3Ch]
      }
      __asm { fnstsw  ax }
      if ( !__SETP__(BYTE1(_EAX) & 5, 0) ) /*0x5ac530*/
        sub_5AB980(bp0, st0_0, a4, a5, a6, a7, a8, a9, a10, a12); /*0x5ac537*/
    }
  }
}
