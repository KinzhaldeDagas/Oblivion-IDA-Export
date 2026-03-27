int __usercall sub_6AC020@<eax>(int a1@<ecx>, double a2@<st1>, double a3@<st0>)
{
  int *v5; // ecx
  unsigned int v6; // esi
  int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // eax
  _DWORD *v10; // esi
  _DWORD *v11; // ecx
  NiTMap_Entry_TESCELL *v12; // eax
  TESObjectCELL *v13; // esi
  void (__thiscall ***v14)(_DWORD, int); // ecx
  void (__thiscall ***v15)(_DWORD, int); // ecx
  void (__thiscall ***v16)(_DWORD, int); // ecx
  int v17; // eax
  _DWORD *v18; // esi
  unsigned int v19; // ebx
  int *v20; // ecx
  int v21; // eax
  bool v22; // zf
  int v23; // esi
  void (__thiscall ***v24)(_DWORD, int); // ecx
  int v25; // edi
  NiTMap_Entry_TESCELL *v27; // [esp+8h] [ebp-Ch] BYREF
  TESObjectCELL *v28; // [esp+Ch] [ebp-8h] BYREF
  void *v29; // [esp+10h] [ebp-4h] BYREF

  flt_B16190 = *(float *)(a1 + 0xB8);
  flt_B16198 = *(float *)(a1 + 0xBC);
  flt_B161A8 = *(float *)(a1 + 0xC4);
  flt_B161A0 = *(float *)(a1 + 0x2F8);
  if ( (*(_BYTE *)(a1 + 0xDC) & 1) != 0 )
  {
    sub_6A8DB0((_DWORD *)a1);
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 0x74) + 8))(*(_DWORD *)(a1 + 0x74));
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 0x70) + 8))(*(_DWORD *)(a1 + 0x70));
    *(_DWORD *)(a1 + 0xDC) &= ~1u;
  }
  v5 = *(int **)(a1 + 0x324);
  if ( v5 )
  {
    sub_6B73C0(v5);
    v6 = *(_DWORD *)(a1 + 0x324);
    if ( v6 )
    {
      sub_6B73E0(*(_DWORD **)(a1 + 0x324));
      FormHeapFree(v6);
    }
  }
  v7 = *(_DWORD *)(a1 + 0x300);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 4);
    v9 = 0;
    if ( v8 )
    {
      v10 = *(_DWORD **)(v7 + 8);
      v11 = v10;
      while ( !*v11 )
      {
        ++v9;
        ++v11;
        if ( v9 >= v8 )
          goto LABEL_11;
      }
      v12 = (NiTMap_Entry_TESCELL *)v10[v9];
    }
    else
    {
LABEL_11:
      v12 = 0;
    }
    v27 = v12;
    while ( v27 )
    {
      sub_452600(*(NiTMap_TESCELL **)(a1 + 0x300), &v27, &v29, &v28);
      v13 = v28;
      if ( v28 )
      {
        sub_6B6700(v28);
        FormHeapFree((unsigned int)v13);
      }
    }
    v14 = *(void (__thiscall ****)(_DWORD, int))(a1 + 0x300);
    if ( v14 )
      (**v14)(v14, 1);
  }
  v15 = *(void (__thiscall ****)(_DWORD, int))(a1 + 0x304);
  if ( v15 )
    (**v15)(v15, 1);
  v16 = *(void (__thiscall ****)(_DWORD, int))(a1 + 0x320);
  if ( v16 )
    (**v16)(v16, 1);
  v17 = *(_DWORD *)(a1 + 0x308);
  if ( v17 )
  {
    if ( *(_DWORD *)(v17 + 0xC) )
    {
      do
      {
        v18 = *(_DWORD **)(a1 + 0x308);
        v19 = *(_DWORD *)(v18[1] + 8);
        v20 = (int *)v18[1];
        v21 = *v20;
        v22 = *v20 == 0;
        v18[1] = *v20;
        if ( v22 )
          v18[2] = 0;
        else
          *(_DWORD *)(v21 + 4) = 0;
        (*(void (__thiscall **)(_DWORD *, int *))(*v18 + 8))(v18, v20);
        --v18[3];
        if ( v19 )
        {
          v23 = *(_DWORD *)(v19 + 0x10);
          if ( v23 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) )
              (**(void (__thiscall ***)(int, int))v23)(v23, 1);
          }
          FormHeapFree(v19);
        }
      }
      while ( *(_DWORD *)(*(_DWORD *)(a1 + 0x308) + 0xC) );
    }
    v24 = *(void (__thiscall ****)(_DWORD, int))(a1 + 0x308);
    if ( v24 )
      (**v24)(v24, 1);
  }
  v25 = *(_DWORD *)(a1 + 8);
  if ( v25 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v25 + 8))(v25);
  ((void (__usercall *)(double@<st0>, double@<st1>))CoUninitialize)(a3, a2);
  return NiTMap_Clear(&off_B1630C);
}
