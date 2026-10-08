int *__userpurge sub_639EF0@<eax>(_DWORD *a1@<ecx>, TESObjectREFR *arg0, int a3, int a4)
{
  _DWORD *v5; // ebx
  int v6; // edi
  TESObjectCELL *DwordAtOffset40; // ebp
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

  v5 = 0; /*0x639f19*/
  if ( a1[0x10] ) /*0x639f1b*/
  {
    do /*0x639f34*/
    {
      v6 = *(_DWORD *)(a1[0x10] + 4); /*0x639f23*/
      FormHeapFree(a1[0x10]); /*0x639f27*/
      a1[0x10] = v6; /*0x639f31*/
    }
    while ( v6 ); /*0x639f34*/
  }
  a1[0xF] = 0; /*0x639f3c*/
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(arg0); /*0x639f44*/
  v8 = (int *)arg0->vtbl->GetPos(arg0); /*0x639f50*/
  a2[0] = *v8; /*0x639f54*/
  a2[1] = v8[1]; /*0x639f5f*/
  v9 = v8[2]; /*0x639f63*/
  a1[0x1B] = a4; /*0x639f67*/
  a1[0x19] = 0; /*0x639f6a*/
  v10 = flt_B36778[0x5C]; /*0x639f6d*/
  vtbl = arg0->vtbl; /*0x639f73*/
  a2[2] = v9; /*0x639f7b*/
  a5 = v10; /*0x639f7f*/
  v12 = vtbl->GetPos(arg0); /*0x639f8a*/
  sub_446B90( /*0x639fa3*/
    DwordAtOffset40,
    (float *)a2,
    flt_B36778[0x5C],
    v12,
    a5,
    (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_646600,
    (int)arg0);
  v13 = *(void (__thiscall **)(_DWORD *, TESObjectREFR *))(*a1 + 0x568); /*0x639faa*/
  a1[0x1B] = 0; /*0x639fb3*/
  a1[0x19] = 0; /*0x639fb6*/
  v13(a1, arg0); /*0x639fb9*/
  if ( !a1[0x10] && !a1[0xF] ) /*0x639fc0*/
    return 0; /*0x63a004*/
  v14 = a1[0xF]; /*0x639fc5*/
  v15 = (_DWORD *)FormHeapAlloc(0xCu); /*0x639fca*/
  v21 = 0; /*0x639fd8*/
  if ( v15 ) /*0x639fdc*/
    v5 = ContainerEntryExtraData_constr(v15, *(_DWORD *)(v14 + 4), 1); /*0x639feb*/
  v16 = (_DWORD *)*v5; /*0x639ff0*/
  v19 = *(_DWORD *)(v14 + 0x18); /*0x639ff2*/
  v21 = 0xFFFFFFFF; /*0x639ff3*/
  BSSimpleList_PushFront(v16, v19); /*0x639ffb*/
  return v5; /*0x63a006*/
}
