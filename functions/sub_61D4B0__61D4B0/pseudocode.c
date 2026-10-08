void __userpurge sub_61D4B0(int a1@<ecx>, char a2@<bpl>, int *edi0@<edi>, int *a3, float a5, char a6)
{
  bool v7; // zf
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // ebx
  void (__thiscall **v11)(_DWORD *, int, int, int, _DWORD, _DWORD); // edi
  int v12; // eax
  TESPackage *v13; // eax
  _DWORD *v14; // eax

  if ( Actor_IsCreature(*(Actor **)(a1 + 0x3C)) ) /*0x61d4b7*/
  {
    v7 = a6 == 0; /*0x61d4c4*/
    goto LABEL_10; /*0x61d4c6*/
  }
  if ( a6 ) /*0x61d4ca*/
  {
LABEL_11:
    if ( TESObjectREFR_GetSurfaceDistance(edi0, (TESObjectREFR *)*(_DWORD *)(a1 + 0x3C), (TESObjectREFR *)a3, 0, a2) <= dbl_A529C0 /*0x61d52b*/
      || a6 )
    {
      v10 = *(_DWORD **)(a1 + 0x3C); /*0x61d52d*/
      v11 = (void (__thiscall **)(_DWORD *, int, int, int, _DWORD, _DWORD))(*v10 + 0x318); /*0x61d53d*/
      v12 = CombatController_GetCurrentTarget(a1); /*0x61d543*/
      (*v11)(v10, v12, 1, 1, 0, 0); /*0x61d54d*/
      v13 = Actor::GetCurrentPackage(*(Actor **)(a1 + 0x3C)); /*0x61d560*/
      v14 = OblivionDynamicCast( /*0x61d566*/
              v13,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
              &FleePackage `RTTI Type Descriptor',
              0);
      if ( v14 ) /*0x61d571*/
      {
        sub_626C90(v14, (int)a3); /*0x61d576*/
        *(_DWORD *)(a1 + 0x12C) = a3; /*0x61d57f*/
        sub_619920(a1, 6); /*0x61d585*/
        *(float *)(a1 + 0xD4) = *(float *)(a1 + 0x44); /*0x61d58d*/
        *(float *)(a1 + 0xD8) = a5; /*0x61d597*/
        *(float *)(a1 + 0xDC) = kTerrainLODQuadRayDirectionZ; /*0x61d5a3*/
      }
    }
    return; /*0x61d5a3*/
  }
  v8 = *(_DWORD *)(a1 + 0x70); /*0x61d4cc*/
  if ( v8 != 7 && v8 != 0xC ) /*0x61d4db*/
  {
    v9 = *(_DWORD *)(a1 + 0x6C); /*0x61d4e1*/
    if ( v9 != 8 && v9 != 9 && v9 != 5 ) /*0x61d4f9*/
    {
      v7 = v9 == 6; /*0x61d4ff*/
LABEL_10:
      if ( v7 ) /*0x61d502*/
        return; /*0x61d502*/
      goto LABEL_11; /*0x61d502*/
    }
  }
}
