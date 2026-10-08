unsigned int __thiscall sub_6F7E40(_DWORD **this, unsigned int a2)
{
  unsigned int v4; // ecx
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _BYTE *v7; // ecx
  OB_stStringStorage16_010201A0 *heapData; // eax
  unsigned int size; // ebx
  unsigned int capacity; // edx
  OB_stStringStorage16_010201A0 *p_storage; // ebp
  OB_stStringStorage16_010201A0 *v12; // ecx
  OB_stStringStorage16_010201A0 *v13; // ecx
  OB_stStringStorage16_010201A0 *v14; // ecx
  unsigned int v15; // edi
  OB_stStringStorage16_010201A0 *v16; // esi
  OB_stStringStorage16_010201A0 *v17; // ecx
  OB_stStringStorage16_010201A0 *v18; // ecx
  _DWORD **v19; // ebx
  int v20; // eax
  OB_stStringStorage16_010201A0 *v21; // esi
  OB_stStringStorage16_010201A0 *v22; // ecx
  OB_stStringStorage16_010201A0 *v23; // ecx
  OB_stStringStorage16_010201A0 *v24; // ecx
  int v25; // edi
  OB_stStringStorage16_010201A0 *v26; // esi
  OB_stStringStorage16_010201A0 *v27; // ecx
  OB_stStringStorage16_010201A0 *v28; // ecx
  size_t v29; // [esp-4h] [ebp-5Ch]
  size_t v30; // [esp+4h] [ebp-54h] BYREF
  FILE *v31; // [esp+Ch] [ebp-4Ch]
  char v32; // [esp+1Ch] [ebp-3Ch] BYREF
  char v33[3]; // [esp+1Dh] [ebp-3Bh] BYREF
  _DWORD **v34; // [esp+20h] [ebp-38h]
  OB_stStringStorage16_010201A0 *v35; // [esp+24h] [ebp-34h] BYREF
  char *v36; // [esp+28h] [ebp-30h] BYREF
  OB_stString28_010201A0 v37; // [esp+2Ch] [ebp-2Ch] BYREF
  int v38; // [esp+54h] [ebp-4h]

  v34 = this; /*0x6f7e7b*/
  if ( a2 == 0xFFFFFFFF ) /*0x6f7e7f*/
    return 0; /*0x6f7e83*/
  v4 = **(this + 9); /*0x6f7e8b*/
  if ( v4 ) /*0x6f7e8f*/
  {
    v5 = *(this + 0xD); /*0x6f7e91*/
    if ( v4 < v4 + *v5 ) /*0x6f7e9a*/
    {
      --*v5; /*0x6f7e9c*/
      v6 = *(this + 9); /*0x6f7e9f*/
      v7 = (_BYTE *)(*v6)++; /*0x6f7ea2*/
      *v7 = a2; /*0x6f7ea9*/
      return a2; /*0x6f7ead*/
    }
  }
  if ( !*(this + 0x13) ) /*0x6f7eb7*/
    return 0xFFFFFFFF; /*0x6f81e2*/
  if ( !*(this + 0xF) ) /*0x6f7ebd*/
  {
    if ( putc((char)a2, (FILE *)*(this + 0x13)) != 0xFFFFFFFF ) /*0x6f7ed3*/
      return a2; /*0x6f7edb*/
    return 0xFFFFFFFF; /*0x6f7ed3*/
  }
  v32 = a2; /*0x6f7eef*/
  v37.capacity = 0xF; /*0x6f7ef3*/
  memset(&v37.storage, 0, 9); /*0x6f7ef7*/
  v37.size = 8; /*0x6f7eff*/
  v38 = 0; /*0x6f7f11*/
LABEL_11:
  heapData = (OB_stStringStorage16_010201A0 *)v37.storage.heapData; /*0x6f7f19*/
  size = v37.size; /*0x6f7f1d*/
  capacity = v37.capacity; /*0x6f7f21*/
  while ( 1 ) /*0x6f7f28*/
  {
    if ( capacity < 0x10 ) /*0x6f7f28*/
    {
      p_storage = &v37.storage; /*0x6f816b*/
    }
    else
    {
      p_storage = heapData; /*0x6f7f30*/
      if ( !heapData ) /*0x6f7f32*/
        goto LABEL_20; /*0x6f7f32*/
    }
    v12 = heapData; /*0x6f7f37*/
    if ( capacity < 0x10 ) /*0x6f7f39*/
      v12 = &v37.storage; /*0x6f7f3b*/
    if ( v12 > p_storage ) /*0x6f7f41*/
      goto LABEL_20; /*0x6f7f41*/
    v13 = heapData; /*0x6f7f46*/
    if ( capacity < 0x10 ) /*0x6f7f48*/
      v13 = &v37.storage; /*0x6f7f4a*/
    if ( p_storage > (OB_stStringStorage16_010201A0 *)&v13->inlineData[size] ) /*0x6f7f52*/
    {
LABEL_20:
      _invalid_parameter_noinfo(); /*0x6f7f54*/
      capacity = v37.capacity; /*0x6f7f59*/
      size = v37.size; /*0x6f7f5d*/
      heapData = (OB_stStringStorage16_010201A0 *)v37.storage.heapData; /*0x6f7f61*/
    }
    if ( (size_t *)((char *)&v30 + 4) != (size_t *)0xFFFFFFDA ) /*0x6f7f6c*/
    {
      v14 = heapData; /*0x6f7f71*/
      if ( capacity < 0x10 ) /*0x6f7f73*/
        v14 = &v37.storage; /*0x6f7f75*/
      if ( p_storage >= (OB_stStringStorage16_010201A0 *)&v14->inlineData[size] ) /*0x6f7f7d*/
      {
        _invalid_parameter_noinfo(); /*0x6f7f7f*/
        capacity = v37.capacity; /*0x6f7f84*/
        size = v37.size; /*0x6f7f88*/
        heapData = (OB_stStringStorage16_010201A0 *)v37.storage.heapData; /*0x6f7f8c*/
      }
    }
    v15 = size; /*0x6f7f93*/
    if ( capacity < 0x10 ) /*0x6f7f95*/
    {
      v16 = &v37.storage; /*0x6f8174*/
    }
    else
    {
      v16 = heapData; /*0x6f7f9d*/
      if ( !heapData ) /*0x6f7f9f*/
        goto LABEL_34; /*0x6f7f9f*/
    }
    v17 = heapData; /*0x6f7fa4*/
    if ( capacity < 0x10 ) /*0x6f7fa6*/
      v17 = &v37.storage; /*0x6f7fa8*/
    if ( v17 > v16 ) /*0x6f7fae*/
      goto LABEL_34; /*0x6f7fae*/
    v18 = heapData; /*0x6f7fb3*/
    if ( capacity < 0x10 ) /*0x6f7fb5*/
      v18 = &v37.storage; /*0x6f7fb7*/
    if ( v16 > (OB_stStringStorage16_010201A0 *)&v18->inlineData[size] ) /*0x6f7fbf*/
    {
LABEL_34:
      _invalid_parameter_noinfo(); /*0x6f7fc1*/
      capacity = v37.capacity; /*0x6f7fc6*/
      size = v37.size; /*0x6f7fca*/
      heapData = (OB_stStringStorage16_010201A0 *)v37.storage.heapData; /*0x6f7fce*/
    }
    if ( (size_t *)((char *)&v30 + 4) != (size_t *)0xFFFFFFDA ) /*0x6f7fd9*/
    {
      if ( capacity < 0x10 ) /*0x6f7fde*/
        heapData = &v37.storage; /*0x6f7fe0*/
      if ( v16 >= (OB_stStringStorage16_010201A0 *)&heapData->inlineData[size] ) /*0x6f7fe8*/
        _invalid_parameter_noinfo(); /*0x6f7fea*/
    }
    v19 = v34; /*0x6f7fef*/
    v20 = (*(int (__thiscall **)(_DWORD *, _DWORD **, char *, char *, char **, OB_stStringStorage16_010201A0 *, char *, OB_stStringStorage16_010201A0 **))(*v34[0xF] + 0x14))( /*0x6f8017*/
            v34[0xF],
            v34 + 0x11,
            &v32,
            v33,
            &v36,
            v16,
            &p_storage->inlineData[v15],
            &v35);
    if ( v20 < 0 ) /*0x6f801b*/
      goto LABEL_86; /*0x6f801b*/
    if ( v20 > 1 ) /*0x6f8024*/
      break; /*0x6f8024*/
    capacity = v37.capacity; /*0x6f802a*/
    heapData = (OB_stStringStorage16_010201A0 *)v37.storage.heapData; /*0x6f8031*/
    if ( v37.capacity < 0x10 ) /*0x6f8035*/
    {
      v21 = &v37.storage; /*0x6f817d*/
    }
    else
    {
      v21 = (OB_stStringStorage16_010201A0 *)v37.storage.heapData; /*0x6f803d*/
      if ( !v37.storage.heapData ) /*0x6f803f*/
        goto LABEL_50; /*0x6f803f*/
    }
    v22 = (OB_stStringStorage16_010201A0 *)v37.storage.heapData; /*0x6f8044*/
    if ( v37.capacity < 0x10 ) /*0x6f8046*/
      v22 = &v37.storage; /*0x6f8048*/
    if ( v22 > v21 ) /*0x6f804e*/
      goto LABEL_50; /*0x6f804e*/
    v23 = (OB_stStringStorage16_010201A0 *)v37.storage.heapData; /*0x6f8053*/
    if ( v37.capacity < 0x10 ) /*0x6f8055*/
      v23 = &v37.storage; /*0x6f8057*/
    size = v37.size; /*0x6f805b*/
    if ( v21 > (OB_stStringStorage16_010201A0 *)&v23->inlineData[v37.size] ) /*0x6f8063*/
    {
LABEL_50:
      _invalid_parameter_noinfo(); /*0x6f8065*/
      capacity = v37.capacity; /*0x6f806a*/
      size = v37.size; /*0x6f806e*/
      heapData = (OB_stStringStorage16_010201A0 *)v37.storage.heapData; /*0x6f8072*/
    }
    if ( (size_t *)((char *)&v30 + 4) != (size_t *)0xFFFFFFDA ) /*0x6f807d*/
    {
      v24 = heapData; /*0x6f8082*/
      if ( capacity < 0x10 ) /*0x6f8084*/
        v24 = &v37.storage; /*0x6f8086*/
      if ( v21 >= (OB_stStringStorage16_010201A0 *)&v24->inlineData[size] ) /*0x6f808e*/
      {
        _invalid_parameter_noinfo(); /*0x6f8090*/
        capacity = v37.capacity; /*0x6f8095*/
        size = v37.size; /*0x6f8099*/
        heapData = (OB_stStringStorage16_010201A0 *)v37.storage.heapData; /*0x6f809d*/
      }
    }
    v25 = (char *)v35 - (char *)v21; /*0x6f80a5*/
    if ( v35 != v21 ) /*0x6f80a7*/
    {
      if ( capacity < 0x10 ) /*0x6f80b0*/
      {
        v26 = &v37.storage; /*0x6f8186*/
      }
      else
      {
        v26 = heapData; /*0x6f80b8*/
        if ( !heapData ) /*0x6f80ba*/
        {
LABEL_65:
          _invalid_parameter_noinfo(); /*0x6f80dc*/
          capacity = v37.capacity; /*0x6f80e1*/
          size = v37.size; /*0x6f80e5*/
          heapData = (OB_stStringStorage16_010201A0 *)v37.storage.heapData; /*0x6f80e9*/
LABEL_66:
          if ( (size_t *)((char *)&v30 + 4) != (size_t *)0xFFFFFFDA ) /*0x6f80f4*/
          {
            if ( capacity < 0x10 ) /*0x6f80f9*/
              heapData = &v37.storage; /*0x6f80fb*/
            if ( v26 >= (OB_stStringStorage16_010201A0 *)&heapData->inlineData[size] ) /*0x6f8103*/
              _invalid_parameter_noinfo(); /*0x6f8105*/
          }
          LODWORD(v30) = v34[0x13]; /*0x6f8111*/
          HIDWORD(v29) = v25; /*0x6f8112*/
          LODWORD(v29) = 1; /*0x6f8113*/
          if ( v25 != (unsigned int)fwrite(v26, v29, v30, v31) ) /*0x6f8120*/
            goto LABEL_86; /*0x6f8120*/
          capacity = v37.capacity; /*0x6f8126*/
          size = v37.size; /*0x6f812a*/
          heapData = (OB_stStringStorage16_010201A0 *)v37.storage.heapData; /*0x6f812e*/
          goto LABEL_73; /*0x6f812e*/
        }
      }
      v27 = heapData; /*0x6f80bf*/
      if ( capacity < 0x10 ) /*0x6f80c1*/
        v27 = &v37.storage; /*0x6f80c3*/
      if ( v27 <= v26 ) /*0x6f80c9*/
      {
        v28 = heapData; /*0x6f80ce*/
        if ( capacity < 0x10 ) /*0x6f80d0*/
          v28 = &v37.storage; /*0x6f80d2*/
        if ( v26 <= (OB_stStringStorage16_010201A0 *)&v28->inlineData[size] ) /*0x6f80da*/
          goto LABEL_66; /*0x6f80da*/
      }
      goto LABEL_65; /*0x6f80da*/
    }
LABEL_73:
    *((_BYTE *)v34 + 0x41) = 1; /*0x6f8132*/
    if ( v36 != &v32 ) /*0x6f8142*/
      goto LABEL_83; /*0x6f8142*/
    if ( !v25 ) /*0x6f814a*/
    {
      if ( size < 0x20 ) /*0x6f8157*/
      {
        sub_6EDAA0(&v37, 0, 8u, 0); /*0x6f8161*/
        goto LABEL_11; /*0x6f8166*/
      }
      goto LABEL_86; /*0x6f8157*/
    }
  }
  if ( v20 != 3 ) /*0x6f8192*/
  {
LABEL_86:
    OB_stString28_Dtor_010201A0(&v37); /*0x6f81dd*/
    return 0xFFFFFFFF; /*0x6f81dd*/
  }
  if ( sub_6F7440(v32, (FILE *)v19[0x13]) ) /*0x6f819d*/
  {
LABEL_83:
    OB_stString28_Dtor_010201A0(&v37); /*0x6f81a9*/
    return a2; /*0x6f81b8*/
  }
  OB_stString28_Dtor_010201A0(&v37); /*0x6f81c1*/
  return 0xFFFFFFFF; /*0x6f81e5*/
}
