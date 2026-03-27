char __cdecl sub_635D60(TESObjectREFR *a1, int a2, int a3, int a4, float a5, int a6)
{
  TESObjectCELL *ParentCell; // eax
  int *v7; // eax
  float *v8; // eax
  bool v9; // zf
  char result; // al
  int v11[3]; // [esp+14h] [ebp-18h] BYREF
  int v12[3]; // [esp+20h] [ebp-Ch] BYREF

  if ( !a1 )
    return 0;
  sub_62E790((float *)v11, *(float *)&a2, *(float *)&a3, *(float *)&a4, a5, 0.0);
  ParentCell = TESObjectREFR_GetParentCell(a1);
  v7 = sub_5E2E20(a1, v12, v11[0], v11[1], *(float *)&v11[2], ParentCell, COERCE_FLOAT(1), 0, 0);
  *(_DWORD *)a6 = *v7;
  *(_DWORD *)(a6 + 4) = v7[1];
  *(_DWORD *)(a6 + 8) = v7[2];
  v8 = a1->vtbl->GetPos(a1);
  v9 = !sub_8AA390((float *)a6, v8);
  result = 1;
  if ( v9 )
    return 0;
  return result;
}
