void __usercall sub_61CC00(int a1@<ecx>, char a2@<dil>)
{
  int v3; // ecx
  bool v4; // bl
  int *v5; // edi
  TESObjectREFR *v6; // eax
  float *v7; // eax
  Actor **v8; // eax
  char v9; // bl
  int v10; // eax
  _DWORD *v11; // eax
  Actor **v12; // eax
  int v13; // eax
  float v15; // [esp+14h] [ebp-10h]
  float v16; // [esp+14h] [ebp-10h]
  float v17; // [esp+18h] [ebp-Ch]
  float v18; // [esp+1Ch] [ebp-8h]
  float v19; // [esp+20h] [ebp-4h]

  v3 = *(_DWORD *)(a1 + 0x6C); /*0x61cc06*/
  if ( v3 != 0xE && v3 != 0x10 ) /*0x61cc11*/
    return; /*0x61cc11*/
  v4 = *(float *)(a1 + 0xD8) < *(float *)(a1 + 0x44) - *(float *)(a1 + 0xD4); /*0x61cc2e*/
  v5 = *(int **)(a1 + 0x3C); /*0x61cc3a*/
  if ( v3 != 0x10 ) /*0x61cc3d*/
  {
    if ( *(float *)(a1 + 0xD8) >= *(float *)(a1 + 0x44) - *(float *)(a1 + 0xD4) ) /*0x61cd94*/
      v9 = (*(int (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)v5[0x16] + 0x240))(v5, *(float *)(a1 + 0x170), 0x201); /*0x61cdb7*/
    else
      v9 = 1; /*0x61cd96*/
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v5[0x16] + 0x184))(v5[0x16]); /*0x61cdc4*/
    if ( !v10 /*0x61cde2*/
      || *(_BYTE *)(v10 + 0x20) != 0xC
      || !v9 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5[0x16] + 0xC8))(v5[0x16]) )
    {
      return; /*0x61cde6*/
    }
LABEL_23:
    if ( (*(int (__thiscall **)(int *))(*v5 + 0x330))(v5) ) /*0x61cdf2*/
    {
      v11 = (_DWORD *)(*(int (__thiscall **)(int *))(*v5 + 0x330))(v5); /*0x61ce04*/
      sub_612DA0(v11, 9); /*0x61ce08*/
      v12 = (Actor **)(*(int (__thiscall **)(int *))(*v5 + 0x330))(v5); /*0x61ce17*/
      sub_6160B0(v12); /*0x61ce1b*/
      v13 = (*(int (__thiscall **)(int *))(*v5 + 0x330))(v5); /*0x61ce2c*/
      sub_619920(v13, 0); /*0x61ce30*/
    }
    return; /*0x61ce30*/
  }
  if ( *(float *)(a1 + 0x184) < 0.0 ) /*0x61cc50*/
  {
    v6 = (TESObjectREFR *)CombatController_GetCurrentTarget(a1); /*0x61cc56*/
    *(float *)(a1 + 0x184) = TESObjectREFR_GetSurfaceDistance(v5, (TESObjectREFR *)v5, v6, 0, a2); /*0x61cc62*/
  }
  if ( *(float *)(a1 + 0x170) <= (double)*(float *)(a1 + 0x184) ) /*0x61cc7e*/
    goto LABEL_23; /*0x61cc7e*/
  if ( !unk_B333B8 ) /*0x61cc84*/
  {
    v7 = (float *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x174))(*(_DWORD *)(a1 + 0x3C)); /*0x61cc98*/
    v17 = *(float *)(a1 + 0x198) - *v7; /*0x61cca2*/
    v18 = *(float *)(a1 + 0x19C) - v7[1]; /*0x61ccaf*/
    v19 = *(float *)(a1 + 0x1A0) - v7[2]; /*0x61ccbc*/
    v15 = v18 * v18 + v17 * v17 + v19 * v19; /*0x61cce4*/
    if ( v15 >= g_GameSettingStringPointers_B36CD8[0x17C] * g_GameSettingStringPointers_B36CD8[0x17C] ) /*0x61ccf7*/
      sub_614BB0(a1); /*0x61ccfb*/
  }
  if ( v4 || (*(_BYTE *)(a1 + 0x192) & 2) != 0 ) /*0x61cd10*/
  {
    if ( (*(_BYTE *)(a1 + 0x192) & 2) != 0 ) /*0x61cd23*/
    {
      v8 = (Actor **)(*(int (__thiscall **)(int *))(*v5 + 0x330))(v5); /*0x61cd2f*/
      sub_6160B0(v8); /*0x61cd33*/
    }
    v16 = *(float *)(a1 + 0xDC); /*0x61cd41*/
    if ( sub_5E5850((TESObjectREFR *)*(_DWORD *)(a1 + 0x3C), 7) < v16 ) /*0x61cd5d*/
    {
      *(float *)(a1 + 0xD4) = *(float *)(a1 + 0x44); /*0x61cd68*/
      *(float *)(a1 + 0xD8) = v16; /*0x61cd74*/
      *(float *)(a1 + 0xDC) = kTerrainLODQuadRayDirectionZ; /*0x61cd80*/
      sub_619920(a1, 0xE); /*0x61cd86*/
      return; /*0x61cd91*/
    }
    goto LABEL_23; /*0x61cd5d*/
  }
}
