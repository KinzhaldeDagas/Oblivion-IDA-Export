char __thiscall sub_6F7AB0(_DWORD *this)
{
  _DWORD *v1; // ebx
  bool v2; // zf
  OB_stStringStorage16_010201A0 *heapData; // eax
  unsigned int capacity; // edx
  OB_stStringStorage16_010201A0 *p_storage; // ebp
  OB_stStringStorage16_010201A0 *v6; // ecx
  OB_stStringStorage16_010201A0 *v7; // ecx
  OB_stStringStorage16_010201A0 *v8; // ecx
  unsigned int size; // edi
  OB_stStringStorage16_010201A0 *v10; // esi
  OB_stStringStorage16_010201A0 *v11; // ecx
  OB_stStringStorage16_010201A0 *v12; // ecx
  int v13; // eax
  int v14; // eax
  OB_stStringStorage16_010201A0 *v15; // esi
  OB_stStringStorage16_010201A0 *v16; // ecx
  OB_stStringStorage16_010201A0 *v17; // ecx
  OB_stStringStorage16_010201A0 *v18; // ecx
  char *v19; // edi
  OB_stStringStorage16_010201A0 *v20; // esi
  OB_stStringStorage16_010201A0 *v21; // ecx
  OB_stStringStorage16_010201A0 *v22; // ecx
  size_t v24; // [esp-Ch] [ebp-54h]
  size_t v25; // [esp-4h] [ebp-4Ch] BYREF
  FILE *v26; // [esp+4h] [ebp-44h]
  _DWORD *v27; // [esp+14h] [ebp-34h]
  void **v28; // [esp+18h] [ebp-30h] BYREF
  OB_stString28_010201A0 v29; // [esp+1Ch] [ebp-2Ch] BYREF
  int v30; // [esp+44h] [ebp-4h]

  v1 = this; /*0x6f7ae2*/
  v2 = *(this + 0xF) == 0; /*0x6f7ae4*/
  v27 = this; /*0x6f7ae8*/
  if ( v2 || !*((_BYTE *)this + 0x41) ) /*0x6f7af2*/
    return 1; /*0x6f7af6*/
  if ( (*(int (__thiscall **)(_DWORD *, unsigned int))(*this + 4))(this, 0xFFFFFFFF) == 0xFFFFFFFF ) /*0x6f7b08*/
    return 0; /*0x6f7da1*/
  v29.capacity = 0xF; /*0x6f7b1d*/
  memset(&v29.storage, 0, 9); /*0x6f7b21*/
  v29.size = 8; /*0x6f7b29*/
  v30 = 0; /*0x6f7b3b*/
LABEL_5:
  heapData = (OB_stStringStorage16_010201A0 *)v29.storage.heapData; /*0x6f7b43*/
  capacity = v29.capacity; /*0x6f7b47*/
  while ( 1 ) /*0x6f7b53*/
  {
    if ( capacity < 0x10 ) /*0x6f7b53*/
    {
      p_storage = &v29.storage; /*0x6f7c57*/
    }
    else
    {
      p_storage = heapData; /*0x6f7b5b*/
      if ( !heapData ) /*0x6f7b5d*/
        goto LABEL_14; /*0x6f7b5d*/
    }
    v6 = heapData; /*0x6f7b62*/
    if ( capacity < 0x10 ) /*0x6f7b64*/
      v6 = &v29.storage; /*0x6f7b66*/
    if ( v6 > p_storage ) /*0x6f7b6c*/
      goto LABEL_14; /*0x6f7b6c*/
    v7 = heapData; /*0x6f7b71*/
    if ( capacity < 0x10 ) /*0x6f7b73*/
      v7 = &v29.storage; /*0x6f7b75*/
    if ( p_storage > (OB_stStringStorage16_010201A0 *)&v7->inlineData[v29.size] ) /*0x6f7b81*/
    {
LABEL_14:
      _invalid_parameter_noinfo(); /*0x6f7b83*/
      capacity = v29.capacity; /*0x6f7b88*/
      heapData = (OB_stStringStorage16_010201A0 *)v29.storage.heapData; /*0x6f7b8c*/
    }
    if ( (size_t *)((char *)&v25 + 4) != (size_t *)0xFFFFFFE2 ) /*0x6f7b97*/
    {
      v8 = heapData; /*0x6f7b9c*/
      if ( capacity < 0x10 ) /*0x6f7b9e*/
        v8 = &v29.storage; /*0x6f7ba0*/
      if ( p_storage >= (OB_stStringStorage16_010201A0 *)&v8->inlineData[v29.size] ) /*0x6f7bac*/
      {
        _invalid_parameter_noinfo(); /*0x6f7bae*/
        capacity = v29.capacity; /*0x6f7bb3*/
        heapData = (OB_stStringStorage16_010201A0 *)v29.storage.heapData; /*0x6f7bb7*/
      }
    }
    size = v29.size; /*0x6f7bbe*/
    if ( capacity < 0x10 ) /*0x6f7bc2*/
    {
      v10 = &v29.storage; /*0x6f7c60*/
    }
    else
    {
      v10 = heapData; /*0x6f7bca*/
      if ( !heapData ) /*0x6f7bcc*/
        goto LABEL_28; /*0x6f7bcc*/
    }
    v11 = heapData; /*0x6f7bd1*/
    if ( capacity < 0x10 ) /*0x6f7bd3*/
      v11 = &v29.storage; /*0x6f7bd5*/
    if ( v11 > v10 ) /*0x6f7bdb*/
      goto LABEL_28; /*0x6f7bdb*/
    v12 = heapData; /*0x6f7be0*/
    if ( capacity < 0x10 ) /*0x6f7be2*/
      v12 = &v29.storage; /*0x6f7be4*/
    v1 = v27; /*0x6f7bf0*/
    if ( v10 > (OB_stStringStorage16_010201A0 *)&v12->inlineData[v29.size] ) /*0x6f7bf4*/
    {
LABEL_28:
      _invalid_parameter_noinfo(); /*0x6f7bf6*/
      capacity = v29.capacity; /*0x6f7bfb*/
      heapData = (OB_stStringStorage16_010201A0 *)v29.storage.heapData; /*0x6f7bff*/
    }
    if ( (size_t *)((char *)&v25 + 4) != (size_t *)0xFFFFFFE2 ) /*0x6f7c0a*/
    {
      if ( capacity < 0x10 ) /*0x6f7c0f*/
        heapData = &v29.storage; /*0x6f7c11*/
      if ( v10 >= (OB_stStringStorage16_010201A0 *)&heapData->inlineData[v29.size] ) /*0x6f7c1d*/
        _invalid_parameter_noinfo(); /*0x6f7c1f*/
    }
    v13 = (*(int (__thiscall **)(_DWORD, _DWORD *, OB_stStringStorage16_010201A0 *, char *, void ***))(*(_DWORD *)v1[0xF] + 0x18))( /*0x6f7c39*/
            v1[0xF],
            v1 + 0x11,
            v10,
            &p_storage->inlineData[size],
            &v28);
    if ( v13 ) /*0x6f7c3e*/
      break; /*0x6f7c3e*/
    *((_BYTE *)v1 + 0x41) = 0; /*0x6f7c69*/
LABEL_41:
    capacity = v29.capacity; /*0x6f7c6d*/
    heapData = (OB_stStringStorage16_010201A0 *)v29.storage.heapData; /*0x6f7c74*/
    if ( v29.capacity < 0x10 ) /*0x6f7c78*/
    {
      v15 = &v29.storage; /*0x6f7d84*/
    }
    else
    {
      v15 = (OB_stStringStorage16_010201A0 *)v29.storage.heapData; /*0x6f7c80*/
      if ( !v29.storage.heapData ) /*0x6f7c82*/
        goto LABEL_49; /*0x6f7c82*/
    }
    v16 = (OB_stStringStorage16_010201A0 *)v29.storage.heapData; /*0x6f7c87*/
    if ( v29.capacity < 0x10 ) /*0x6f7c89*/
      v16 = &v29.storage; /*0x6f7c8b*/
    if ( v16 > v15 ) /*0x6f7c91*/
      goto LABEL_49; /*0x6f7c91*/
    v17 = (OB_stStringStorage16_010201A0 *)v29.storage.heapData; /*0x6f7c96*/
    if ( v29.capacity < 0x10 ) /*0x6f7c98*/
      v17 = &v29.storage; /*0x6f7c9a*/
    if ( v15 > (OB_stStringStorage16_010201A0 *)&v17->inlineData[v29.size] ) /*0x6f7ca6*/
    {
LABEL_49:
      _invalid_parameter_noinfo(); /*0x6f7ca8*/
      capacity = v29.capacity; /*0x6f7cad*/
      heapData = (OB_stStringStorage16_010201A0 *)v29.storage.heapData; /*0x6f7cb1*/
    }
    if ( (size_t *)((char *)&v25 + 4) != (size_t *)0xFFFFFFE2 ) /*0x6f7cbc*/
    {
      v18 = heapData; /*0x6f7cc1*/
      if ( capacity < 0x10 ) /*0x6f7cc3*/
        v18 = &v29.storage; /*0x6f7cc5*/
      if ( v15 >= (OB_stStringStorage16_010201A0 *)&v18->inlineData[v29.size] ) /*0x6f7cd1*/
      {
        _invalid_parameter_noinfo(); /*0x6f7cd3*/
        capacity = v29.capacity; /*0x6f7cd8*/
        heapData = (OB_stStringStorage16_010201A0 *)v29.storage.heapData; /*0x6f7cdc*/
      }
    }
    v19 = (char *)((char *)v28 - (char *)v15); /*0x6f7ce4*/
    if ( v28 == (void **)v15 ) /*0x6f7ce6*/
      goto LABEL_72; /*0x6f7ce6*/
    if ( capacity < 0x10 ) /*0x6f7ceb*/
    {
      v20 = &v29.storage; /*0x6f7d8d*/
LABEL_58:
      v21 = heapData; /*0x6f7cf7*/
      if ( capacity < 0x10 ) /*0x6f7cfc*/
        v21 = &v29.storage; /*0x6f7cfe*/
      if ( v21 <= v20 ) /*0x6f7d04*/
      {
        v22 = heapData; /*0x6f7d09*/
        if ( capacity < 0x10 ) /*0x6f7d0b*/
          v22 = &v29.storage; /*0x6f7d0d*/
        if ( v20 <= (OB_stStringStorage16_010201A0 *)&v22->inlineData[v29.size] ) /*0x6f7d19*/
          goto LABEL_65; /*0x6f7d19*/
      }
      goto LABEL_64; /*0x6f7d19*/
    }
    v20 = heapData; /*0x6f7cf3*/
    if ( heapData ) /*0x6f7cf5*/
      goto LABEL_58; /*0x6f7cf5*/
LABEL_64:
    _invalid_parameter_noinfo(); /*0x6f7d1b*/
    capacity = v29.capacity; /*0x6f7d20*/
    heapData = (OB_stStringStorage16_010201A0 *)v29.storage.heapData; /*0x6f7d24*/
LABEL_65:
    if ( (size_t *)((char *)&v25 + 4) != (size_t *)0xFFFFFFE2 ) /*0x6f7d2f*/
    {
      if ( capacity < 0x10 ) /*0x6f7d34*/
        heapData = &v29.storage; /*0x6f7d36*/
      if ( v20 >= (OB_stStringStorage16_010201A0 *)&heapData->inlineData[v29.size] ) /*0x6f7d42*/
        _invalid_parameter_noinfo(); /*0x6f7d44*/
    }
    LODWORD(v25) = v1[0x13]; /*0x6f7d4c*/
    HIDWORD(v24) = v19; /*0x6f7d4d*/
    LODWORD(v24) = 1; /*0x6f7d4e*/
    if ( v19 != (char *)fwrite(v20, v24, v25, v26) ) /*0x6f7d5b*/
      goto LABEL_77; /*0x6f7d5b*/
    capacity = v29.capacity; /*0x6f7d5d*/
    heapData = (OB_stStringStorage16_010201A0 *)v29.storage.heapData; /*0x6f7d61*/
LABEL_72:
    if ( !*((_BYTE *)v1 + 0x41) ) /*0x6f7d69*/
      goto LABEL_79; /*0x6f7d69*/
    if ( !v19 ) /*0x6f7d6d*/
    {
      sub_6EDAA0(&v29, 0, 8u, 0); /*0x6f7d7a*/
      goto LABEL_5; /*0x6f7d7f*/
    }
  }
  v14 = v13 - 1; /*0x6f7c40*/
  if ( !v14 ) /*0x6f7c43*/
    goto LABEL_41; /*0x6f7c43*/
  if ( v14 != 2 ) /*0x6f7c4c*/
  {
LABEL_77:
    OB_stString28_Dtor_010201A0(&v29); /*0x6f7d9a*/
    return 0; /*0x6f7d9a*/
  }
LABEL_79:
  OB_stString28_Dtor_010201A0(&v29); /*0x6f7da7*/
  return 1; /*0x6f7dae*/
}
