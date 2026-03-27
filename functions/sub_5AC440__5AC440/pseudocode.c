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
  double v14; // st7
  int v15; // eax
  double Float; // st7
  float a2; // [esp+0h] [ebp-14h]
  float a2a; // [esp+0h] [ebp-14h]
  float a2b; // [esp+0h] [ebp-14h]
  int v24; // [esp+18h] [ebp+4h]
  int v26; // [esp+18h] [ebp+4h]

  _ESI = a1;
  if ( a11 == 0xC )
  {
    _EDI = InterfaceManager_GetSingleton(0, 1);
    sub_57D7F0();
    __asm { fstp    qword ptr [esp+10h+a3] }
    v14 = sub_57D7F0();
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   qword ptr [esp+10h+a3]
    }
    v15 = Double_To_SInt32(v14);
    __asm { fld     dword ptr [esi+48h] }
    v24 = v15;
    __asm
    {
      fiadd   [esp+10h+arg_0]
      fstp    qword ptr [esp+10h+a3]
    }
    sub_588CF0(*(_DWORD **)(_ESI + 0x30));
    __asm { fsubr   qword ptr [esp+10h+a3] }
    __asm { fstp    qword ptr [esp+14h+a3]; a3 }
    Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(_ESI + 0x34), 0xFB6);
    __asm { fdivr   qword ptr [esp+10h+a3] }
    __asm
    {
      fstp    [esp+14h+arg_0]
      fld     dword ptr ds:0A6B1F0h
      fstp    [esp+14h+a2]; a3
    }
    Tile_SetFloat(*(Tile **)(_ESI + 0x34), (_DWORD *)0xFB7, a2);
    __asm { fld     [esp+10h+arg_0] }
    v26 = Double_To_SInt32(Float);
    __asm { fild    [esp+10h+arg_0] }
    __asm { fstp    [esp+14h+a2]; a3 }
    Tile_SetFloat(*(Tile **)(_ESI + 0x34), (_DWORD *)0xFB7, a2a);
    __asm { fldz }
    __asm { fstp    [esp+14h+a2]; a3 }
    Tile_SetFloat(*(Tile **)(_ESI + 0x34), (_DWORD *)0xFB7, a2b);
  }
  else if ( a11 >= 0x3E9 )
  {
    if ( byte_B3B3D9 )
    {
      _EAX = InterfaceManager_GetSingleton(0, 1);
      __asm
      {
        fld1
        fcomp   dword ptr [eax+3Ch]
      }
      __asm { fnstsw  ax }
      if ( !__SETP__(BYTE1(_EAX) & 5, 0) )
        sub_5AB980(bp0, st0_0, a4, a5, a6, a7, a8, a9, a10, a12);
    }
  }
}
