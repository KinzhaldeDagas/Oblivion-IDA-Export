void __usercall sub_571820(char *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  char *v6; // esi
  InterfaceManager *Singleton; // eax
  void (__thiscall ***v8)(_DWORD, int); // edi
  int v9; // edi
  double v10; // st4
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h] BYREF

  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x57182b*/
  v5 = InterlockedDecrement; /*0x571830*/
  v6 = this + 0xC; /*0x571839*/
  v11 = 0xC8; /*0x57183c*/
  do /*0x5718e3*/
  {
    if ( *(_DWORD *)v6 ) /*0x571846*/
    {
      Singleton = InterfaceManager_GetSingleton(0, 1); /*0x571851*/
      ((void (__usercall *)(NiNode *@<ecx>, int *, _DWORD, double@<st0>, double@<st1>, double@<st2>))Singleton->unk070->vtbl->RemoveObject)( /*0x57186c*/
        Singleton->unk070,
        &v12,
        *(_DWORD *)v6,
        a4,
        a3,
        a2);
      if ( v12 ) /*0x571874*/
      {
        v8 = (void (__thiscall ***)(_DWORD, int))v12; /*0x571876*/
        if ( !v5((volatile LONG *)(v12 + 4)) ) /*0x57187c*/
          (**v8)(v8, 1); /*0x57188e*/
      }
      v9 = *(_DWORD *)v6; /*0x571890*/
      if ( *(_DWORD *)v6 ) /*0x571890*/
      {
        if ( !v5((volatile LONG *)(v9 + 4)) ) /*0x57189a*/
        {
          if ( v9 ) /*0x5718a2*/
            (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x5718ac*/
        }
        *(_DWORD *)v6 = 0; /*0x5718ae*/
      }
      a4 = 0.0; /*0x5718b0*/
      *((_DWORD *)v6 + 0xFFFFFFFF) = 0; /*0x5718b2*/
      *((float *)v6 + 0xFFFFFFFD) = 0.0; /*0x5718b5*/
      *((float *)v6 + 0xFFFFFFFE) = 0.0; /*0x5718b8*/
      FormHeapFree(*((_DWORD *)v6 + 1)); /*0x5718bf*/
      v10 = kTerrainLODQuadRayDirectionZ; /*0x5718c4*/
      *((_DWORD *)v6 + 1) = 0; /*0x5718ca*/
      *((_WORD *)v6 + 5) = 0; /*0x5718cd*/
      *((_WORD *)v6 + 4) = 0; /*0x5718d1*/
      *((float *)v6 + 3) = v10; /*0x5718d5*/
    }
    v6 += 0x1C; /*0x5718db*/
    --v11; /*0x5718de*/
  }
  while ( v11 ); /*0x5718e3*/
  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x5718eb*/
}
