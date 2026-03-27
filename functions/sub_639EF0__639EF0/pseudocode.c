int *__userpurge sub_639EF0@<eax>(_DWORD *a1@<ecx>, TESObjectREFR *arg0, int a3, int a4)
{
  _DWORD *v5; // ebx
  int v6; // edi
  TESObjectCELL *ParentCell; // ebp
  int *v8; // eax
  int v9; // eax
  double v10; // st7
  TESObjectREFRVtbl *vtbl; // edx
  float *v12; // eax
  void (__thiscall *v13)(_DWORD *, TESObjectREFR *); // eax
  int v14; // esi
  _DWORD *v15; // eax
  _DWORD *v16; // ecx
  float a5; // [esp+Ch] [ebp-34h]
  int v19; // [esp+10h] [ebp-30h]
  int a2[4]; // [esp+2Ch] [ebp-14h] BYREF
  unsigned int v21; // [esp+3Ch] [ebp-4h]

  v5 = 0;
  if ( a1[0x10] )
  {
    do
    {
      v6 = *(_DWORD *)(a1[0x10] + 4);
      FormHeapFree(a1[0x10]);
      a1[0x10] = v6;
    }
    while ( v6 );
  }
  a1[0xF] = 0;
  ParentCell = TESObjectREFR_GetParentCell(arg0);
  v8 = (int *)arg0->vtbl->GetPos(arg0);
  a2[0] = *v8;
  a2[1] = v8[1];
  v9 = v8[2];
  a1[0x1B] = a4;
  a1[0x19] = 0;
  v10 = fAIAcquireObjectDistance;
  vtbl = arg0->vtbl;
  a2[2] = v9;
  a5 = v10;
  v12 = vtbl->GetPos(arg0);
  sub_446B90(
    ParentCell,
    (float *)a2,
    fAIAcquireObjectDistance,
    v12,
    a5,
    (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_646600,
    (int)arg0);
  v13 = *(void (__thiscall **)(_DWORD *, TESObjectREFR *))(*a1 + 0x568);
  a1[0x1B] = 0;
  a1[0x19] = 0;
  v13(a1, arg0);
  if ( !a1[0x10] && !a1[0xF] )
    return 0;
  v14 = a1[0xF];
  v15 = (_DWORD *)FormHeapAlloc(0xCu);
  v21 = 0;
  if ( v15 )
    v5 = ContainerEntryExtraData_constr(v15, *(_DWORD *)(v14 + 4), 1);
  v16 = (_DWORD *)*v5;
  v19 = *(_DWORD *)(v14 + 0x18);
  v21 = 0xFFFFFFFF;
  BSSimpleList_PushFront(v16, v19);
  return v5;
}
