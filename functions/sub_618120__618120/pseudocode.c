void __userpurge sub_618120(int a1@<ecx>, char a2@<dil>, float *a3, float a4)
{
  float *v5; // eax
  int *v6; // edi
  TESObjectREFR *v7; // eax
  float v9; // [esp+4h] [ebp-Ch]
  float v10; // [esp+8h] [ebp-8h]
  float v11; // [esp+Ch] [ebp-4h]
  float v12; // [esp+18h] [ebp+8h]
  float v13; // [esp+18h] [ebp+8h]

  if ( LOBYTE(a4) ) /*0x61812b*/
    goto LABEL_6; /*0x61812b*/
  v5 = (float *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x174))(*(_DWORD *)(a1 + 0x3C)); /*0x61813c*/
  v9 = *v5 - *a3; /*0x618146*/
  v10 = v5[1] - a3[1]; /*0x618150*/
  v11 = v5[2] - a3[2]; /*0x61815a*/
  v12 = v10 * v10 + v9 * v9 + v11 * v11; /*0x61817a*/
  v13 = sqrt(v12); /*0x618187*/
  if ( *(float *)(a1 + 0x184) < 0.0 ) /*0x6181a0*/
  {
    v6 = *(int **)(a1 + 0x3C); /*0x6181a3*/
    v7 = (TESObjectREFR *)CombatController_GetCurrentTarget(a1); /*0x6181aa*/
    *(float *)(a1 + 0x184) = TESObjectREFR_GetSurfaceDistance(v6, (TESObjectREFR *)v6, v7, 0, a2); /*0x6181b6*/
  }
  if ( *(float *)(a1 + 0x184) <= (double)v13 ) /*0x6181d1*/
LABEL_6:
    *(_BYTE *)(a1 + 0x15B) = 0; /*0x6181e1*/
  else
    *(_BYTE *)(a1 + 0x15B) = 1; /*0x6181d3*/
}
