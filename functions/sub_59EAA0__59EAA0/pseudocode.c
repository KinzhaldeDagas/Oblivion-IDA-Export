void __userpurge sub_59EAA0(int a1@<ecx>, double st6_0@<st1>, Unk1C *a3)
{
  char **v6; // edi
  double v7; // st7
  float a2; // [esp+8h] [ebp-Ch]

  Tile_SetFloat(*(Tile **)(a1 + 0x38), (_DWORD *)0xFA1, 1.0);
  if ( a3 )
  {
    if ( sub_6B7BA0(a3) )
    {
      v6 = (char **)sub_6B7C20(a3);
      (*(void (__stdcall **)(_DWORD, char **))(**(_DWORD **)(a1 + 0x60) + 0x304))(0.0, v6);
      *(float *)(a1 + 0x84) = fConstant_2;
      *(_DWORD *)(a1 + 0x80) = 2;
      a2 = (float)((byte_B13200 != 0) + 1);
      Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFA1, a2);
      Tile_SetString(*(_DWORD **)(a1 + 0x2C), (_DWORD *)0xFDE, *v6);
      Tile_SetFloat(*(Tile **)(a1 + 0x3C), (_DWORD *)0xFA1, 1.0);
    }
    else
    {
      v7 = fConstant_2;
      Tile_SetFloat(*(Tile **)(a1 + 0x3C), (_DWORD *)0xFA1, fConstant_2);
      sub_59E2B0((int *)a1, 1);
      sub_59EA10(a1, 1.0, st6_0, v7, 1, 0);
    }
  }
}
