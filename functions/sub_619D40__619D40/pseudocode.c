void __userpurge sub_619D40(int a1@<ecx>, int a2@<ebx>, TESObjectREFR *a3, int a4, char a5)
{
  int *v7; // eax
  int v8; // edi
  int v9; // ecx
  TESObjectREFRVtbl *vtbl; // ebx
  char v11; // bl
  double Distance; // st7
  char v13; // al
  TESObjectREFR *v14; // ecx
  float retaddr; // [esp+14h] [ebp+0h]
  int v17; // [esp+18h] [ebp+4h]

  v7 = *(int **)(a1 + 0x40); /*0x619d4b*/
  v8 = 0; /*0x619d4f*/
  if ( v7 ) /*0x619d53*/
  {
    do /*0x619d6c*/
    {
      v9 = v7[1]; /*0x619d55*/
      if ( !v9 && !*v7 ) /*0x619d5c*/
        break; /*0x619d5e*/
      v8 = *v7; /*0x619d60*/
      if ( *(TESObjectREFR **)*v7 == a3 ) /*0x619d64*/
        break; /*0x619d64*/
      v7 = (int *)v7[1]; /*0x619d66*/
      v8 = 0; /*0x619d68*/
    }
    while ( v9 ); /*0x619d6c*/
  }
  vtbl = a3[1].vtbl; /*0x619d6f*/
  if ( !vtbl ) /*0x619d74*/
    JUMPOUT(0x619F67); /*0x619f67*/
  v17 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 8))( /*0x619d8e*/
          *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
          a2);
  if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 2))(vtbl) != v17 ) /*0x619d9a*/
    JUMPOUT(0x619F5A); /*0x619f5a*/
  v11 = ((int (__thiscall *)(TESObjectREFR *, int))a3->vtbl[1].Unk_37)(a3, 4) != 0; /*0x619db4*/
  retaddr = 0.0; /*0x619dba*/
  if ( !v8 || *(_BYTE *)(v8 + 8) ) /*0x619dc4*/
    JUMPOUT(0x619F6E); /*0x619f6e*/
  switch ( *(_DWORD *)(a1 + 0x70) ) /*0x619dd6*/
  {
    case 0: /*0x619dd6*/
    case 1: /*0x619dd6*/
    case 3: /*0x619dd6*/
      if ( a3 == (TESObjectREFR *)CombatController_GetCurrentTarget(a1) ) /*0x619de6*/
        Distance = flt_A2FE7C; /*0x619de8*/
      else
        Distance = TesObjectREF_GetDistance((TESObjectREFR *)*(_DWORD *)(a1 + 0x3C), a3, 0); /*0x619df6*/
      break; /*0x619dee*/
    case 2: /*0x619dd6*/
    case 4: /*0x619dd6*/
      v13 = Actor_LineOfSight(*(Actor **)(a1 + 0x3C), 0.0, 0, a3, 1, 0, 0); /*0x619e09*/
      v14 = *(TESObjectREFR **)(a1 + 0x3C); /*0x619e10*/
      if ( v13 ) /*0x619e16*/
        Distance = TesObjectREF_GetDistance(v14, a3, 0); /*0x619e18*/
      else
        Distance = TesObjectREF_GetDistance(v14, a3, 0) + dbl_A3F450; /*0x619e24*/
      break; /*0x619e1d*/
    default:
      JUMPOUT(0x619E2E); /*0x619e2e*/
  }
  retaddr = Distance; /*0x619e2a*/
  def_619DD6(v11, a1, v8, (int *)a3, *(float *)&v17, a4, a5); /*0x619e2b*/
}
