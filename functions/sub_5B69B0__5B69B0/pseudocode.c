void __userpurge sub_5B69B0(
        float *a1@<ecx>,
        char bp0@<bpl>,
        double st5_0@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  double v9; // st7
  double Float; // st7
  double v12; // st7
  int v13; // eax
  int v14; // eax
  double v15; // st7
  int v17; // eax
  double v20; // st7
  int v21; // eax
  double v22; // st7
  int v23; // eax
  Tile *v24; // ebx
  double v25; // st7
  double v27; // st7
  float v29; // [esp+8h] [ebp-1Ch]
  float v30; // [esp+Ch] [ebp-18h]
  float v31; // [esp+Ch] [ebp-18h]
  float v32; // [esp+Ch] [ebp-18h]
  float a2; // [esp+10h] [ebp-14h]
  float a2a; // [esp+10h] [ebp-14h]
  float a2b; // [esp+10h] [ebp-14h]
  int v42; // [esp+28h] [ebp+4h]
  int v45; // [esp+28h] [ebp+4h]
  int v46; // [esp+28h] [ebp+4h]
  int v47; // [esp+28h] [ebp+4h]
  int v49; // [esp+28h] [ebp+4h]
  int v50; // [esp+28h] [ebp+4h]
  int v51; // [esp+28h] [ebp+4h]
  int v52; // [esp+28h] [ebp+4h]
  int v55; // [esp+28h] [ebp+4h]
  int v56; // [esp+28h] [ebp+4h]

  _ESI = a1;
  if ( a6 == 0xC )
  {
    _EDI = InterfaceManager_GetSingleton(0, 1);
    sub_57D7F0();
    __asm { fstp    qword ptr [esp+10h+a3] }
    v9 = sub_57D7F0();
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   qword ptr [esp+10h+a3]
    }
    v42 = Double_To_SInt32(v9);
    __asm
    {
      fild    [esp+10h+arg_0]
      fstp    [esp+10h+arg_0]
    }
    sub_588CF0(*((_DWORD **)_ESI + 0x10));
    __asm { fsubr   [esp+10h+arg_0] }
    __asm { fstp    qword ptr [esp+14h+a3]; a3 }
    Tile_GetFloat(*((_DWORD **)_ESI + 0x11), 0xFB6);
    __asm { fdivr   qword ptr [esp+10h+a3] }
    __asm
    {
      fstp    [esp+14h+arg_0]
      fld     dword ptr ds:0A6B1F0h
      fstp    [esp+14h+a2]; a3
    }
    Tile_SetFloat(*((Tile **)_ESI + 0x11), (_DWORD *)0xFB7, a2);
    __asm { fld     [esp+10h+arg_0] }
    __asm { fstp    qword ptr [esp+10h+a3] }
    Float = Tile_GetFloat((_DWORD *)*((_DWORD *)_ESI + 0x10), 0xFB1);
    __asm { fdivr   qword ptr [esp+10h+a3] }
    v45 = Double_To_SInt32(Float);
    __asm { fild    [esp+10h+arg_0] }
    __asm { fstp    [esp+14h+a2]; a3 }
    Tile_SetFloat(*((Tile **)_ESI + 0x11), (_DWORD *)0xFB7, a2a);
    __asm { fldz }
    __asm { fstp    [esp+14h+a2]; a3 }
    Tile_SetFloat(*((Tile **)_ESI + 0x11), (_DWORD *)0xFB7, a2b);
  }
  else if ( a6 == 0x29 || a7 && *(_DWORD *)(a7 + 0x10) == *((_DWORD *)a1 + 0x16) )
  {
    (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)a1 + 0x14))(a1, a6, a7);
    _EDI = InterfaceManager_GetSingleton(0, 1);
    v20 = sub_57D7A0();
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+20h]
    }
    v21 = Double_To_SInt32(v20);
    __asm { fld     dword ptr [esi+88h] }
    v51 = v21;
    __asm
    {
      fisub   [esp+14h+arg_0]
      fstp    [esp+14h+arg_4]
    }
    sub_57D7F0();
    __asm { fstp    qword ptr [esp+14h+a3] }
    v22 = sub_57D7F0();
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   qword ptr [esp+14h+a3]
    }
    v23 = Double_To_SInt32(v22);
    __asm { fld     dword ptr [esi+8Ch] }
    v24 = *((Tile **)_ESI + 0x16);
    v52 = v23;
    __asm { fisub   [esp+14h+arg_0] }
    __asm { fstp    [esp+18h+a3] }
    Tile_GetFloat(v24, 0xFBA);
    __asm { fadd    [esp+14h+arg_4] }
    __asm
    {
      fstp    [esp+18h+arg_0]
      fld     [esp+18h+arg_0]
      fstp    [esp+18h+var_18]; a3
    }
    Tile_SetFloat(v24, (_DWORD *)0xFB8, v31);
    Tile_GetFloat(v24, 0xFBB);
    __asm { fadd    [esp+14h+a3] }
    __asm
    {
      fstp    [esp+18h+arg_0]
      fld     [esp+18h+arg_0]
      fstp    [esp+18h+var_18]; a3
    }
    Tile_SetFloat(v24, (_DWORD *)0xFB9, v32);
    v25 = sub_57D7A0();
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+20h]
    }
    v55 = Double_To_SInt32(v25);
    __asm
    {
      fild    [esp+14h+arg_0]
      fstp    dword ptr [esi+88h]
    }
    _ESI[0x22] = _ET1;
    sub_57D7F0();
    __asm { fstp    qword ptr [esp+14h+a3] }
    v27 = sub_57D7F0();
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   qword ptr [esp+14h+a3]
    }
    v56 = Double_To_SInt32(v27);
    __asm { fild    [esp+14h+arg_0] }
    __asm { fstp    dword ptr [esi+8Ch] }
    _ESI[0x23] = _ET1;
  }
  else if ( a6 == 0x2D )
  {
    (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)a1 + 0x14))(a1, 0x2D, a7);
    _EDI = (float *)InterfaceManager_GetSingleton(0, 1);
    v12 = sub_57D7A0();
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+20h]
    }
    v13 = Double_To_SInt32(v12);
    __asm { fld     dword ptr [esi+88h] }
    v46 = v13;
    __asm { fisub   [esp+10h+arg_0] }
    __asm
    {
      fstp    [esp+10h+arg_4]
      fld     dword ptr [esi+8Ch]
      fstp    qword ptr [esp+10h+a3]
    }
    sub_593020(_EDI);
    v47 = v14;
    __asm { fild    [esp+10h+arg_0] }
    __asm
    {
      fsubr   qword ptr [esp+1Ch+a3]
      fstp    [esp+1Ch+arg_0]
      fld     [esp+1Ch+arg_0]
      fchs
      fstp    [esp+1Ch+var_18]; float
      fld     [esp+1Ch+arg_4]
      fchs
      fstp    [esp+1Ch+var_1C]; float
    }
    sub_5B67F0((Tile **)_ESI, v29, v30, 0.0);
    v15 = sub_57D7A0();
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+20h]
    }
    v49 = Double_To_SInt32(v15);
    __asm { fild    [esp+10h+arg_0] }
    __asm { fstp    dword ptr [esi+88h] }
    _ESI[0x22] = _ET1;
    sub_593020(_EDI);
    v50 = v17;
    __asm { fild    [esp+10h+arg_0] }
    __asm { fstp    dword ptr [esi+8Ch] }
    _ESI[0x23] = _ET1;
  }
}
