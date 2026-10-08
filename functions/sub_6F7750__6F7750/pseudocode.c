int __usercall sub_6F7750@<eax>(int this@<ecx>, int a2@<edi>)
{
  int v2; // eax
  _DWORD *v3; // eax
  unsigned __int8 *v4; // ecx
  int result; // eax
  FILE *v6; // eax
  int v7; // eax
  unsigned int capacity; // edi
  OB_stStringStorage16_010201A0 *heapData; // eax
  OB_stStringStorage16_010201A0 *p_storage; // ebx
  OB_stStringStorage16_010201A0 *v11; // ecx
  OB_stStringStorage16_010201A0 *v12; // ecx
  unsigned int size; // edx
  OB_stStringStorage16_010201A0 *v14; // ecx
  int v15; // ebp
  OB_stStringStorage16_010201A0 *v16; // esi
  OB_stStringStorage16_010201A0 *v17; // ecx
  OB_stStringStorage16_010201A0 *v18; // ecx
  int v19; // eax
  _DWORD *v20; // eax
  int v21; // esi
  unsigned int v22; // edx
  OB_stStringStorage16_010201A0 *v23; // eax
  OB_stStringStorage16_010201A0 *v24; // esi
  OB_stStringStorage16_010201A0 *v25; // ecx
  OB_stStringStorage16_010201A0 *v26; // ecx
  unsigned int v27; // edi
  _DWORD *v28; // eax
  int v29; // eax
  int i; // esi
  int v31; // edx
  int v32; // esi
  rsize_t v33; // [esp-6h] [ebp-6Ch]
  rsize_t v34[2]; // [esp+6h] [ebp-60h] BYREF
  unsigned __int8 Dst; // [esp+1Dh] [ebp-49h] BYREF
  int v36; // [esp+1Eh] [ebp-48h] BYREF
  int v37; // [esp+22h] [ebp-44h]
  unsigned __int8 *v38; // [esp+26h] [ebp-40h] BYREF
  int v39; // [esp+2Ah] [ebp-3Ch] BYREF
  int v40; // [esp+32h] [ebp-34h] BYREF
  OB_stString28_010201A0 v41; // [esp+3Ah] [ebp-2Ch] BYREF
  int v42; // [esp+62h] [ebp-4h]

  v2 = **(_DWORD **)(this + 0x20); /*0x6f7785*/
  v37 = this; /*0x6f778b*/
  if ( v2 && **(_DWORD **)(this + 0x20) < (unsigned int)(**(_DWORD **)(this + 0x20) + **(_DWORD **)(this + 0x30)) ) /*0x6f779f*/
  {
    --**(_DWORD **)(this + 0x30); /*0x6f77a4*/
    v3 = *(_DWORD **)(this + 0x20); /*0x6f77a7*/
    v4 = (unsigned __int8 *)(*v3)++; /*0x6f77aa*/
    return *v4; /*0x6f77b4*/
  }
  v6 = *(FILE **)(this + 0x4C); /*0x6f77b9*/
  if ( !v6 ) /*0x6f77be*/
    return 0xFFFFFFFF; /*0x6f77be*/
  if ( !*(_DWORD *)(this + 0x3C) ) /*0x6f77c4*/
  {
    result = fgetc(*(FILE **)(this + 0x4C)); /*0x6f77ca*/
    if ( result != 0xFFFFFFFF ) /*0x6f77d5*/
      return (unsigned __int8)result; /*0x6f77de*/
    return 0xFFFFFFFF; /*0x6f77d5*/
  }
  v41.capacity = 0xF; /*0x6f77e3*/
  v41.size = 0; /*0x6f77eb*/
  v41.storage.inlineData[0] = 0; /*0x6f77ef*/
  v42 = 0; /*0x6f77f4*/
  v7 = fgetc(v6); /*0x6f77f8*/
  if ( v7 == 0xFFFFFFFF ) /*0x6f7803*/
  {
LABEL_61:
    OB_stString28_Dtor_010201A0(&v41); /*0x6f7a22*/
    return 0xFFFFFFFF; /*0x6f7a4c*/
  }
  while ( 1 ) /*0x6f7810*/
  {
    sub_6EDAA0(&v41, a2, 1u, v7); /*0x6f7810*/
    capacity = v41.capacity; /*0x6f7815*/
    heapData = (OB_stStringStorage16_010201A0 *)v41.storage.heapData; /*0x6f781c*/
    if ( v41.capacity < 0x10 ) /*0x6f7820*/
    {
      p_storage = &v41.storage; /*0x6f7972*/
    }
    else
    {
      p_storage = (OB_stStringStorage16_010201A0 *)v41.storage.heapData; /*0x6f7828*/
      if ( !v41.storage.heapData ) /*0x6f782a*/
        goto LABEL_17; /*0x6f782a*/
    }
    v11 = (OB_stStringStorage16_010201A0 *)v41.storage.heapData; /*0x6f782f*/
    if ( v41.capacity < 0x10 ) /*0x6f7831*/
      v11 = &v41.storage; /*0x6f7833*/
    if ( v11 > p_storage ) /*0x6f7839*/
      goto LABEL_17; /*0x6f7839*/
    v12 = (OB_stStringStorage16_010201A0 *)v41.storage.heapData; /*0x6f783e*/
    if ( v41.capacity < 0x10 ) /*0x6f7840*/
      v12 = &v41.storage; /*0x6f7842*/
    size = v41.size; /*0x6f7846*/
    if ( p_storage > (OB_stStringStorage16_010201A0 *)&v12->inlineData[v41.size] ) /*0x6f784e*/
    {
LABEL_17:
      _invalid_parameter_noinfo(); /*0x6f7850*/
      capacity = v41.capacity; /*0x6f7855*/
      size = v41.size; /*0x6f7859*/
      heapData = (OB_stStringStorage16_010201A0 *)v41.storage.heapData; /*0x6f785d*/
    }
    if ( v34 != (rsize_t *)0xFFFFFFCA ) /*0x6f7868*/
    {
      v14 = heapData; /*0x6f786d*/
      if ( capacity < 0x10 ) /*0x6f786f*/
        v14 = &v41.storage; /*0x6f7871*/
      if ( p_storage >= (OB_stStringStorage16_010201A0 *)&v14->inlineData[size] ) /*0x6f7879*/
      {
        _invalid_parameter_noinfo(); /*0x6f787b*/
        capacity = v41.capacity; /*0x6f7880*/
        size = v41.size; /*0x6f7884*/
        heapData = (OB_stStringStorage16_010201A0 *)v41.storage.heapData; /*0x6f7888*/
      }
    }
    v15 = size; /*0x6f788f*/
    if ( capacity < 0x10 ) /*0x6f7891*/
    {
      v16 = &v41.storage; /*0x6f797b*/
    }
    else
    {
      v16 = heapData; /*0x6f7899*/
      if ( !heapData ) /*0x6f789b*/
        goto LABEL_31; /*0x6f789b*/
    }
    v17 = heapData; /*0x6f78a0*/
    if ( capacity < 0x10 ) /*0x6f78a2*/
      v17 = &v41.storage; /*0x6f78a4*/
    if ( v17 > v16 ) /*0x6f78aa*/
      goto LABEL_31; /*0x6f78aa*/
    v18 = heapData; /*0x6f78af*/
    if ( capacity < 0x10 ) /*0x6f78b1*/
      v18 = &v41.storage; /*0x6f78b3*/
    if ( v16 > (OB_stStringStorage16_010201A0 *)&v18->inlineData[size] ) /*0x6f78bb*/
    {
LABEL_31:
      _invalid_parameter_noinfo(); /*0x6f78bd*/
      capacity = v41.capacity; /*0x6f78c2*/
      size = v41.size; /*0x6f78c6*/
      heapData = (OB_stStringStorage16_010201A0 *)v41.storage.heapData; /*0x6f78ca*/
    }
    if ( v34 != (rsize_t *)0xFFFFFFCA ) /*0x6f78d5*/
    {
      if ( capacity < 0x10 ) /*0x6f78da*/
        heapData = &v41.storage; /*0x6f78dc*/
      if ( v16 >= (OB_stStringStorage16_010201A0 *)&heapData->inlineData[size] ) /*0x6f78e4*/
        _invalid_parameter_noinfo(); /*0x6f78e6*/
    }
    a2 = v37; /*0x6f78eb*/
    v19 = (*(int (__thiscall **)(_DWORD, int, OB_stStringStorage16_010201A0 *, char *, int *, unsigned __int8 *, int *, unsigned __int8 **))(**(_DWORD **)(v37 + 0x3C) + 0x10))( /*0x6f7913*/
            *(_DWORD *)(v37 + 0x3C),
            v37 + 0x44,
            v16,
            &p_storage->inlineData[v15],
            &v36,
            &Dst,
            &v36,
            &v38);
    if ( v19 < 0 ) /*0x6f7917*/
      goto LABEL_61; /*0x6f7917*/
    if ( v19 <= 1 ) /*0x6f7920*/
      break; /*0x6f7920*/
    if ( v19 != 3 ) /*0x6f7925*/
      goto LABEL_61; /*0x6f7925*/
    if ( v41.size ) /*0x6f7930*/
    {
      v20 = sub_6F75E0(&v41.allocatorState, &v40); /*0x6f7941*/
      HIDWORD(v33) = std::_String_const_iterator<char,std::char_traits<char>,std::allocator<char>>::operator*(v20); /*0x6f794d*/
      LODWORD(v33) = 1; /*0x6f7952*/
      memcpy_s(&Dst, v33, (const void *)1, v34[0]); /*0x6f7955*/
      v21 = Dst; /*0x6f795a*/
      OB_stString28_Dtor_010201A0(&v41); /*0x6f7966*/
      return v21; /*0x6f796d*/
    }
LABEL_60:
    v7 = fgetc(*(FILE **)(a2 + 0x4C)); /*0x6f7a0d*/
    if ( v7 == 0xFFFFFFFF ) /*0x6f7a1c*/
      goto LABEL_61; /*0x6f7a1c*/
  }
  if ( v38 == &Dst ) /*0x6f798c*/
  {
    v22 = v41.capacity; /*0x6f7992*/
    v23 = (OB_stStringStorage16_010201A0 *)v41.storage.heapData; /*0x6f7999*/
    if ( v41.capacity >= 0x10 ) /*0x6f799d*/
    {
      v24 = (OB_stStringStorage16_010201A0 *)v41.storage.heapData; /*0x6f79a5*/
      if ( v41.storage.heapData ) /*0x6f79a7*/
        goto LABEL_47; /*0x6f79a7*/
      goto LABEL_53; /*0x6f79a7*/
    }
    v24 = &v41.storage; /*0x6f7a4d*/
LABEL_47:
    v25 = (OB_stStringStorage16_010201A0 *)v41.storage.heapData; /*0x6f79a9*/
    if ( v41.capacity < 0x10 ) /*0x6f79ae*/
      v25 = &v41.storage; /*0x6f79b0*/
    if ( v25 > v24 ) /*0x6f79b6*/
      goto LABEL_53; /*0x6f79b6*/
    v26 = (OB_stStringStorage16_010201A0 *)v41.storage.heapData; /*0x6f79bb*/
    if ( v41.capacity < 0x10 ) /*0x6f79bd*/
      v26 = &v41.storage; /*0x6f79bf*/
    if ( v24 > (OB_stStringStorage16_010201A0 *)&v26->inlineData[v41.size] ) /*0x6f79cb*/
    {
LABEL_53:
      _invalid_parameter_noinfo(); /*0x6f79cd*/
      v22 = v41.capacity; /*0x6f79d2*/
      v23 = (OB_stStringStorage16_010201A0 *)v41.storage.heapData; /*0x6f79d6*/
    }
    if ( v34 != (rsize_t *)0xFFFFFFCA ) /*0x6f79e1*/
    {
      if ( v22 < 0x10 ) /*0x6f79e6*/
        v23 = &v41.storage; /*0x6f79e8*/
      if ( v24 >= (OB_stStringStorage16_010201A0 *)&v23->inlineData[v41.size] ) /*0x6f79f4*/
        _invalid_parameter_noinfo(); /*0x6f79f6*/
    }
    sub_4134E0(&v41, v15, 0, v36 - (_DWORD)v24); /*0x6f7a08*/
    goto LABEL_60; /*0x6f7a08*/
  }
  v27 = v41.size; /*0x6f7a56*/
  v28 = sub_6F75E0(&v41.allocatorState, &v39); /*0x6f7a63*/
  v29 = std::_String_const_iterator<char,std::char_traits<char>,std::allocator<char>>::operator*(v28); /*0x6f7a6a*/
  for ( i = v27 - v36 + v29; i > 0; --i ) /*0x6f7a75*/
  {
    v31 = *(char *)(i + v36 - 1); /*0x6f7a86*/
    ungetc(v31, *(FILE **)(v37 + 0x4C)); /*0x6f7a90*/
  }
  v32 = Dst; /*0x6f7a9c*/
  OB_stString28_Dtor_010201A0(&v41); /*0x6f7aa5*/
  return v32; /*0x6f7a2e*/
}
