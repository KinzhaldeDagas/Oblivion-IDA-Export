void __usercall sub_5CE570(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double Float@<st0>)
{
  AnimSequenceSingle *v7; // edi
  float v8; // [esp+18h] [ebp-4h]

  if ( sub_5790E0(0x3E9, 0) || (Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFA1), Float != fConstant_1) )
  {
    if ( !*(_BYTE *)(a1 + 0x8D0) && !byte_B3B5D8 )
    {
      v7 = (AnimSequenceSingle *)TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetAnimData(TESDataHandler_g_PlayerRef);
      if ( v7 )
      {
        Actor_ProcessAction((Actor *)TESDataHandler_g_PlayerRef, a2, a3, 1.0, 1.0, 1.0);
        Float = flt_B33E9C;
        sub_476D10(v7, (int)v7, a2, a3, Float, (int)TESDataHandler_g_PlayerRef, flt_B33E9C, flt_A30634);
      }
    }
    sub_5CDEF0(a1, a2, Float);
    sub_603CA0((Actor *)TESDataHandler_g_PlayerRef, a2, a3, 0.0, 0.0);
    v8 = *(float *)(a1 + 0x8A0) / dbl_A3F3F0;
    Menu_UPdateCamera___((Menu *)a1, COERCE_INT(1.0), v8);
    if ( sub_57D2F0(*(void **)(a1 + 0x8EC)) )
    {
      sub_57DDE0(*(_DWORD *)(a1 + 0x8EC));
      sub_5C30C0((char **)a1);
    }
  }
  else
  {
    EnableMenu((Menu *)a1, a2, a3, Float, 0);
  }
}
