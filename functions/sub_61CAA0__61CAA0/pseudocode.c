void __userpurge sub_61CAA0(int a1@<ecx>, char a2@<dil>, int a3, float a4, float a5)
{
  int v6; // eax
  int v7; // edi
  int v8; // eax
  double v9; // st6
  double v10; // st7
  float v11; // [esp+Ch] [ebp+8h]
  float v12; // [esp+10h] [ebp+Ch]

  v6 = *(_DWORD *)(a1 + 0x6C); /*0x61caa3*/
  if ( v6 != 0xE && v6 != 0x10 && a5 > 0.0 && a4 > 0.0 && a5 > CombatController_GetCachedTargetSurfaceDistance(a1, a2) ) /*0x61caea*/
  {
    v7 = *(_DWORD *)(a1 + 0x3C); /*0x61caf1*/
    if ( v7 ) /*0x61caf6*/
    {
      if ( *(_DWORD *)(v7 + 0x58) ) /*0x61cafc*/
      {
        *(float *)(a1 + 0x170) = a5; /*0x61cb08*/
        v8 = CombatController_GetCurrentTarget(a1); /*0x61cb10*/
        if ( !Actor_IsFacingReferenceWithinCombatAngle(v7, v8, 0) || (*(_BYTE *)(a1 + 0x192) & 2) != 0 ) /*0x61cb33*/
        {
          *(float *)(a1 + 0xD4) = *(float *)(a1 + 0x44); /*0x61cbb3*/
          *(float *)(a1 + 0xD8) = a4; /*0x61cbbf*/
          *(float *)(a1 + 0xDC) = kTerrainLODQuadRayDirectionZ; /*0x61cbcb*/
          sub_619920(a1, 0xE); /*0x61cbd1*/
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x180))(*(_DWORD *)(a1 + 0x3C), 0); /*0x61cbe3*/
        }
        else
        {
          sub_614BB0(a1); /*0x61cb37*/
          v12 = sub_5E5850((TESObjectREFR *)*(_DWORD *)(a1 + 0x3C), 4); /*0x61cb46*/
          v9 = a4; /*0x61cb4e*/
          if ( a4 >= (double)v12 ) /*0x61cb59*/
          {
            v10 = a4; /*0x61cb63*/
          }
          else
          {
            v9 = v12; /*0x61cb5b*/
            v10 = a4; /*0x61cb5b*/
          }
          v11 = v9; /*0x61cb5d*/
          *(float *)(a1 + 0xD4) = *(float *)(a1 + 0x44); /*0x61cb6e*/
          *(float *)(a1 + 0xD8) = v11; /*0x61cb7a*/
          *(float *)(a1 + 0xDC) = v10; /*0x61cb80*/
          sub_619920(a1, 0x10); /*0x61cb86*/
          sub_6160B0((Actor **)a1); /*0x61cb8d*/
          (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C4))( /*0x61cba7*/
            *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
            0x102,
            1);
        }
      }
    }
  }
}
