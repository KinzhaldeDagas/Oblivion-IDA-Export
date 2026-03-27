void __userpurge sub_5AE560(
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
        _DWORD *a12)
{
  bool v14; // zf
  double Float; // st7
  _DWORD *v16; // eax
  Tile *v17; // ecx
  float a2; // [esp+0h] [ebp-14h]
  float a2a; // [esp+0h] [ebp-14h]
  float a2b; // [esp+0h] [ebp-14h]
  float a2c; // [esp+0h] [ebp-14h]
  float a2d; // [esp+0h] [ebp-14h]
  float a2e; // [esp+0h] [ebp-14h]
  float a2f; // [esp+0h] [ebp-14h]

  if ( a12 )
  {
    if ( a11 < 0x65 )
    {
      v17 = *(Tile **)(a1 + 0x2C);
      if ( v17 )
      {
        __asm { fld1 }
        __asm { fstp    [esp+14h+a2]; a3 }
        Tile_SetFloat(v17, (_DWORD *)0xFA1, a2f);
      }
    }
    else
    {
      sub_57DE50(4);
      v14 = *(_DWORD *)(a1 + 0x2C) == 0;
      *(_DWORD *)(a1 + 0x30) = 0;
      if ( !v14 )
      {
        sub_588D90(a12, a10);
        __asm { fstp    qword ptr [esp+10h+a3]; a3 }
        Tile_GetFloat(*(_DWORD **)(a1 + 0x2C), 0xFBD);
        __asm { fsubr   qword ptr [esp+10h+a3] }
        __asm
        {
          fstp    [esp+14h+arg_4]
          fld     [esp+14h+arg_4]
          fstp    [esp+14h+a2]; a3
        }
        Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFAB, a2);
        Tile_GetFloat(a12, 0xFCB);
        __asm { fsub    qword ptr ds:0A3D0C0h }
        __asm
        {
          fstp    [esp+14h+arg_4]
          fld     [esp+14h+arg_4]
          fstp    [esp+14h+a2]; a3
        }
        Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFCB, a2a);
        Tile_GetFloat(a12, 0xFCA);
        __asm { fsub    qword ptr ds:0A3D0C0h }
        __asm
        {
          fstp    [esp+14h+arg_4]
          fld     [esp+14h+arg_4]
          fstp    [esp+14h+a2]; a3
        }
        Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFCA, a2b);
        sub_588C50(a12);
        __asm { fstp    [esp+14h+a2]; a3 }
        Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFAD, a2c);
        sub_588CF0(a12);
        __asm { fstp    [esp+14h+a2]; a3 }
        Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFAC, a2d);
        __asm { fld     dword ptr ds:0A379B4h }
        __asm { fstp    [esp+14h+a2]; a3 }
        Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFA1, a2e);
        *(_DWORD *)(a1 + 0x30) = a12;
        Float = Tile_GetFloat(a12, 0xFAE);
        v16 = (_DWORD *)Double_To_SInt32(Float);
        sub_5AE240(a1, st0_0, a4, a5, a6, a7, a8, a9, Float, v16);
      }
    }
  }
}
