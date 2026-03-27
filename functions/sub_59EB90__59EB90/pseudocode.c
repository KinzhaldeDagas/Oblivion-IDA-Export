void __usercall sub_59EB90(int a1@<ecx>, const char **ebp0@<ebp>, double a3@<st0>, double a4@<st2>, double a5@<st1>)
{
  int **v6; // ebx
  _DWORD *v7; // eax
  _DWORD *v8; // edi
  char **v9; // ebp
  bool v11; // al
  UnkBohBoh *v12; // eax
  UnkBohBoh *v13; // edi
  float v14; // [esp+4h] [ebp-1Ch]
  float a2; // [esp+8h] [ebp-18h]
  float a2a; // [esp+8h] [ebp-18h]
  float a2b; // [esp+8h] [ebp-18h]
  float a2c; // [esp+8h] [ebp-18h]
  int v19; // [esp+10h] [ebp-10h]
  int v20; // [esp+1Ch] [ebp-4h]

  __asm { fld1 }
  __asm { fstp    [esp+18h+a2]; a3 }
  Tile_SetFloat(*(Tile **)(a1 + 0x38), (_DWORD *)0xFA1, a2);
  v6 = (int **)sub_6B8660();
  v7 = (_DWORD *)sub_6B8650(v6);
  v8 = v7;
  if ( v7 && (v9 = (char **)sub_6B85B0(v7)) != 0 )
  {
    __asm { fldz }
    __asm { fstp    [esp+1Ch+var_1C]; a3 }
    (*(void (__stdcall **)(_DWORD, char **))(**(_DWORD **)(a1 + 0x60) + 0x304))(LODWORD(v14), v9);
    __asm { fld     dword ptr ds:0A379B4h }
    __asm { fstp    dword ptr [esi+84h] }
    *(float *)(a1 + 0x84) = _ET1;
    *(_DWORD *)(a1 + 0x80) = 2;
    *v6 = (int *)(v6 + 1);
    while ( sub_6B8650(v6) )
    {
      if ( (_DWORD *)sub_6B8650(v6) == v8 )
        break;
      sub_6B85F0(v6);
    }
    sub_6B8560(v8);
    while ( sub_6B85B0(v8) )
    {
      if ( (char **)sub_6B85B0(v8) == v9 )
        break;
      sub_6B8580(v8);
    }
    v20 = (byte_B13200 != 0) + 1;
    __asm { fild    [esp+14h+var_4] }
    __asm { fstp    [esp+18h+a2]; a3 }
    Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFA1, a2a);
    Tile_SetString(*(_DWORD **)(a1 + 0x2C), (_DWORD *)0xFDE, *v9);
    sub_6B8580(v8);
    __asm { fld1 }
    __asm { fstp    [esp+18h+a2]; a3 }
    Tile_SetFloat(*(Tile **)(a1 + 0x3C), (_DWORD *)0xFA1, a2b);
  }
  else
  {
    __asm { fld     dword ptr ds:0A379B4h }
    __asm { fstp    [esp+18h+a2]; a3 }
    Tile_SetFloat(*(Tile **)(a1 + 0x3C), (_DWORD *)0xFA1, a2c);
    v11 = v8 && *((_BYTE *)v8 + 8);
    sub_59E2B0((int *)a1, !v11);
    v12 = sub_6B8660();
    v13 = v12;
    if ( *(_BYTE *)(a1 + 0x96) )
    {
      v12->unk00 = 0;
      sub_59E2B0((int *)a1, 1);
    }
    *(_BYTE *)(a1 + 0x88) = sub_6B92C0(v13, a5, a3, 1, 0);
    *(_BYTE *)(a1 + 0x96) = 0;
    sub_59E680(a1, v19, a4, a5);
  }
}
