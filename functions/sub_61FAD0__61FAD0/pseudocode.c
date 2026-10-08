void __usercall sub_61FAD0(int a1@<ecx>, float a2@<edi>)
{
  int v2; // ecx
  int (__thiscall *v3)(int); // edx
  int v4; // edi
  int v6; // eax
  TESObjectREFR *v7; // edi
  int CurrentTarget; // eax
  bool v9; // bl
  int v10; // edi
  int v11; // ebx
  float *v12; // edi
  float *v13; // eax
  int v14; // [esp+4h] [ebp-24h]
  float v16; // [esp+10h] [ebp-18h]
  float v17; // [esp+14h] [ebp-14h]
  float v18; // [esp+14h] [ebp-14h]
  float v19; // [esp+14h] [ebp-14h]
  float v20; // [esp+18h] [ebp-10h] BYREF
  float v21[2]; // [esp+1Ch] [ebp-Ch] BYREF
  float v22; // [esp+24h] [ebp-4h]

  if ( *(_BYTE *)(a1 + 0x17D) ) /*0x61fad6*/
  {
    v6 = *(_DWORD *)(a1 + 0x70); /*0x61fae3*/
    if ( v6 == 2 || v6 == 4 ) /*0x61faf0*/
    {
      v7 = *(TESObjectREFR **)(a1 + 0x3C); /*0x61fafc*/
      v14 = *(_DWORD *)(a1 + 0x180); /*0x61faff*/
      CurrentTarget = CombatController_GetCurrentTarget(a1); /*0x61fb07*/
      v17 = Actor_CalculateAimAnglesToTarget(v7, CurrentTarget, &v20, v14); /*0x61fb13*/
      v20 = v17 * dbl_A30DC8; /*0x61fb24*/
      v20 = fabs(v20); /*0x61fb2e*/
      v9 = v20 > dbl_A2FC80; /*0x61fb41*/
      v18 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(a1 + 0x3C) + 0x1E0))(*(_DWORD *)(a1 + 0x3C)) + v17; /*0x61fb5c*/
      if ( v9 ) /*0x61fb60*/
      {
LABEL_5:
        sub_685530(*(Actor **)(a1 + 0x3C), v18, 1); /*0x61fb66*/
        return; /*0x61fb74*/
      }
    }
    else
    {
      v10 = *(_DWORD *)(a1 + 0x3C); /*0x61fb83*/
      v11 = CombatController_GetCurrentTarget(a1); /*0x61fb8d*/
      v12 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x174))(v10); /*0x61fb9b*/
      v13 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x174))(v11); /*0x61fba5*/
      v20 = v13[1] - v12[1]; /*0x61fbb2*/
      v19 = v13[2] - v12[2]; /*0x61fbbc*/
      v21[0] = *v13 - *v12; /*0x61fbc4*/
      v21[1] = v20; /*0x61fbcc*/
      v22 = v19; /*0x61fbd4*/
      v18 = Vector3_CalculateHeadingRadiansXY(v21); /*0x61fbe0*/
      v20 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(a1 + 0x3C) + 0x1E0))(*(_DWORD *)(a1 + 0x3C)) - v18; /*0x61fbf5*/
      v20 = fabs(v20); /*0x61fbff*/
      if ( v20 > dbl_A2FC80 ) /*0x61fc12*/
        goto LABEL_5; /*0x61fc12*/
    }
    v22 = v16; /*0x615050*/
    if ( *(_BYTE *)(a1 + 0x17D) ) /*0x615053*/
    {
      (*(void (__thiscall **)(_DWORD, int, float))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0xC4))( /*0x61506c*/
        *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
        1,
        COERCE_FLOAT(LODWORD(v22)));
      sub_5E05F0(*(Actor **)(a1 + 0x3C), 0x30); /*0x615073*/
      *(_BYTE *)(a1 + 0x17D) = 0; /*0x615078*/
    }
    if ( *(_DWORD *)(a1 + 0x1A8) < (int)MEMORY[0xB372F0].value ) /*0x61508b*/
    {
      v2 = *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58); /*0x615090*/
      v3 = *(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x4CC); /*0x615095*/
      v21[0] = a2; /*0x61509b*/
      v4 = v3(v2); /*0x6150a0*/
      if ( v4 == CombatController_GetCurrentTarget(a1) ) /*0x6150aa*/
        __asm { jmp     eax } /*0x6150bb*/
    }
  }
}
