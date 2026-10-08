void __usercall sub_5CE570(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double Float@<st0>)
{
  ActorAnimData *v5; // edi
  float v6; // [esp+18h] [ebp-4h]

  if ( InterfaceManager_IsMenuVisibleByID(0x3E9, 0) /*0x5ce59f*/
    || (Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFA1), Float != fConstant_1) )
  {
    if ( !*(_BYTE *)(a1 + 0x8D0) && !unk_B3B5D8 ) /*0x5ce5b6*/
    {
      v5 = reference->vtbl->super.super.super.GetAnimData(reference); /*0x5ce5d0*/
      if ( v5 ) /*0x5ce5d4*/
      {
        Actor_ProcessAction((Actor *)reference, 1.0, 1.0); /*0x5ce5e8*/
        Float = *(float *)&MEMORY[0xB33E90][0xC]; /*0x5ce601*/
        ActorAnimData_Update(v5, (Actor *)reference, *(float *)&MEMORY[0xB33E90][0xC], kTerrainLODQuadRayDirectionZ); /*0x5ce60b*/
      }
    }
    sub_5CDEF0(a1, a2, Float, a3); /*0x5ce613*/
    sub_603CA0((Actor *)reference, a2, a3, 0.0, 0.0); /*0x5ce624*/
    v6 = *(float *)(a1 + 0x8A0) / dbl_A3F3F0; /*0x5ce63a*/
    Menu_UPdateCamera___((Menu *)a1, COERCE_INT(1.0), v6); /*0x5ce64b*/
    if ( sub_57D2F0(*(void **)(a1 + 0x8EC)) ) /*0x5ce656*/
    {
      sub_57DDE0(*(_DWORD *)(a1 + 0x8EC)); /*0x5ce669*/
      sub_5C30C0((char **)a1); /*0x5ce674*/
    }
  }
  else
  {
    EnableMenu((Menu *)a1, a2, a3, Float, 0); /*0x5ce5a5*/
  }
}
