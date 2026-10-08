int __usercall sub_6AC020@<eax>(int a1@<ecx>, double a2@<st1>, double a3@<st0>)
{
  int *v4; // ecx
  unsigned int v5; // esi
  int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // eax
  _DWORD *v9; // esi
  _DWORD *v10; // ecx
  MEF_U32PointerMapEntry32 *v11; // eax
  void *v12; // esi
  void (__thiscall ***v13)(_DWORD, int); // ecx
  void (__thiscall ***v14)(_DWORD, int); // ecx
  void (__thiscall ***v15)(_DWORD, int); // ecx
  int v16; // eax
  _DWORD *v17; // esi
  unsigned int v18; // ebx
  int *v19; // ecx
  int v20; // eax
  bool v21; // zf
  int v22; // esi
  void (__thiscall ***v23)(_DWORD, int); // ecx
  int v24; // edi
  MEF_U32PointerMapEntry32 *position; // [esp+8h] [ebp-Ch] BYREF
  void *valueOut; // [esp+Ch] [ebp-8h] BYREF
  unsigned int keyOut; // [esp+10h] [ebp-4h] BYREF

  flt_B16190 = *(float *)(a1 + 0xB8); /*0x6ac02c*/
  flt_B16198 = *(float *)(a1 + 0xBC); /*0x6ac038*/
  flt_B161A8 = *(float *)(a1 + 0xC4); /*0x6ac044*/
  flt_B161A0 = *(float *)(a1 + 0x2F8); /*0x6ac050*/
  if ( (*(_BYTE *)(a1 + 0xDC) & 1) != 0 ) /*0x6ac05d*/
  {
    sub_6A8DB0((_DWORD *)a1); /*0x6ac05f*/
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 0x74) + 8))(*(_DWORD *)(a1 + 0x74)); /*0x6ac06d*/
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 0x70) + 8))(*(_DWORD *)(a1 + 0x70)); /*0x6ac078*/
    *(_DWORD *)(a1 + 0xDC) &= ~1u; /*0x6ac07a*/
  }
  v4 = *(int **)(a1 + 0x324); /*0x6ac081*/
  if ( v4 ) /*0x6ac08d*/
  {
    sub_6B73C0(v4); /*0x6ac08f*/
    v5 = *(_DWORD *)(a1 + 0x324); /*0x6ac094*/
    if ( v5 ) /*0x6ac09c*/
    {
      sub_6B73E0(*(_DWORD **)(a1 + 0x324)); /*0x6ac0a0*/
      FormHeapFree(v5); /*0x6ac0a6*/
    }
  }
  v6 = *(_DWORD *)(a1 + 0x300); /*0x6ac0ae*/
  if ( v6 ) /*0x6ac0b6*/
  {
    v7 = *(_DWORD *)(v6 + 4); /*0x6ac0b8*/
    v8 = 0; /*0x6ac0bb*/
    if ( v7 ) /*0x6ac0bf*/
    {
      v9 = *(_DWORD **)(v6 + 8); /*0x6ac0c1*/
      v10 = v9; /*0x6ac0c4*/
      while ( !*v10 ) /*0x6ac0c8*/
      {
        ++v8; /*0x6ac0ce*/
        ++v10; /*0x6ac0d1*/
        if ( v8 >= v7 ) /*0x6ac0d6*/
          goto LABEL_11; /*0x6ac0d6*/
      }
      v11 = (MEF_U32PointerMapEntry32 *)v9[v8]; /*0x6ac180*/
    }
    else
    {
LABEL_11:
      v11 = 0; /*0x6ac0d8*/
    }
    position = v11; /*0x6ac0dc*/
    while ( position ) /*0x6ac0e0*/
    {
      NiTMap_U32Pointer_GetNextEntry(*(MEF_U32PointerMapLayout32 **)(a1 + 0x300), &position, &keyOut, &valueOut); /*0x6ac0f7*/
      v12 = valueOut; /*0x6ac0fc*/
      if ( valueOut ) /*0x6ac102*/
      {
        sub_6B6700((unsigned int *)valueOut); /*0x6ac106*/
        FormHeapFree((unsigned int)v12); /*0x6ac10c*/
      }
    }
    v13 = *(void (__thiscall ****)(_DWORD, int))(a1 + 0x300); /*0x6ac11a*/
    if ( v13 ) /*0x6ac122*/
      (**v13)(v13, 1); /*0x6ac12a*/
  }
  v14 = *(void (__thiscall ****)(_DWORD, int))(a1 + 0x304); /*0x6ac12c*/
  if ( v14 ) /*0x6ac134*/
    (**v14)(v14, 1); /*0x6ac13c*/
  v15 = *(void (__thiscall ****)(_DWORD, int))(a1 + 0x320); /*0x6ac13e*/
  if ( v15 ) /*0x6ac146*/
    (**v15)(v15, 1); /*0x6ac14e*/
  v16 = *(_DWORD *)(a1 + 0x308); /*0x6ac150*/
  if ( v16 ) /*0x6ac158*/
  {
    if ( *(_DWORD *)(v16 + 0xC) ) /*0x6ac15e*/
    {
      do /*0x6ac1cf*/
      {
        v17 = *(_DWORD **)(a1 + 0x308); /*0x6ac164*/
        v18 = *(_DWORD *)(v17[1] + 8); /*0x6ac16d*/
        v19 = (int *)v17[1]; /*0x6ac170*/
        v20 = *v19; /*0x6ac172*/
        v21 = *v19 == 0; /*0x6ac174*/
        v17[1] = *v19; /*0x6ac176*/
        if ( v21 ) /*0x6ac179*/
          v17[2] = 0; /*0x6ac188*/
        else
          *(_DWORD *)(v20 + 4) = 0; /*0x6ac17b*/
        (*(void (__thiscall **)(_DWORD *, int *))(*v17 + 8))(v17, v19); /*0x6ac193*/
        --v17[3]; /*0x6ac195*/
        if ( v18 ) /*0x6ac19b*/
        {
          v22 = *(_DWORD *)(v18 + 0x10); /*0x6ac19d*/
          if ( v22 ) /*0x6ac1a2*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x6ac1a8*/
              (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x6ac1be*/
          }
          FormHeapFree(v18); /*0x6ac1c1*/
        }
      }
      while ( *(_DWORD *)(*(_DWORD *)(a1 + 0x308) + 0xC) ); /*0x6ac1cf*/
    }
    v23 = *(void (__thiscall ****)(_DWORD, int))(a1 + 0x308); /*0x6ac1d5*/
    if ( v23 ) /*0x6ac1dd*/
      (**v23)(v23, 1); /*0x6ac1e5*/
  }
  v24 = *(_DWORD *)(a1 + 8); /*0x6ac1e7*/
  if ( v24 ) /*0x6ac1ee*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v24 + 8))(v24); /*0x6ac1f6*/
  ((void (__usercall *)(double@<st0>, double@<st1>))CoUninitialize)(a3, a2); /*0x6ac1f8*/
  return NiTMap_Clear(&self); /*0x6ac1fe*/
}
