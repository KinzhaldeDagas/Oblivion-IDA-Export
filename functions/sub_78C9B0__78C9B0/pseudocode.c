void __usercall sub_78C9B0(void (__stdcall ****a1)(signed int)@<ecx>, void (__stdcall *****a2)(signed int)@<edi>)
{
  int v3; // ebp
  void (__stdcall *****v4)(signed int); // ecx
  int v5; // ebp
  int v6; // eax
  void (__stdcall ***v7)(signed int); // eax
  void (__stdcall *****v8)(signed int); // ebp
  void (__stdcall ***v9)(signed int); // eax
  void (__stdcall *****v10)(signed int); // edi
  void (__stdcall *****i)(signed int); // ecx
  int v12; // eax
  void (__stdcall ***v13)(signed int); // ecx
  void (__stdcall ***v14)(signed int); // edi
  void (__stdcall ***v15)(signed int); // edi
  unsigned int *v16; // edi
  unsigned int *v17; // edi
  void (__stdcall ***v18)(signed int); // edi
  void (__stdcall ***v19)(signed int); // edi
  void (__stdcall ***v20)(signed int); // edi
  unsigned int *v21; // edi
  rsize_t v23; // [esp-Ch] [ebp-24h]
  rsize_t v24; // [esp-Ch] [ebp-24h]
  _BYTE v25[12]; // [esp-4h] [ebp-1Ch]

  if ( !a1[0xD] )
  {
    v3 = dword_B4298C;
    v4 = (void (__stdcall *****)(signed int))dword_B42988;
    if ( (unsigned int)dword_B42988 > dword_B4298C )
    {
      _invalid_parameter_noinfo();
      v4 = (void (__stdcall *****)(signed int))dword_B42988;
    }
    a2 = v4;
    if ( (unsigned int)v4 > dword_B4298C )
    {
      _invalid_parameter_noinfo();
      v4 = (void (__stdcall *****)(signed int))dword_B42988;
    }
    for ( ; a2 != (void (__stdcall *****)(signed int))v3; ++a2 )
    {
      if ( *a2 == a1 )
        break;
    }
    v5 = dword_B4298C;
    if ( (unsigned int)v4 > dword_B4298C )
      _invalid_parameter_noinfo();
    if ( !&unk_B42984 )
      _invalid_parameter_noinfo();
    if ( a2 != (void (__stdcall *****)(signed int))v5 )
    {
      v6 = (dword_B4298C - (int)(a2 + 1)) >> 2;
      if ( v6 > 0 )
      {
        HIDWORD(v23) = a2 + 1;
        LODWORD(v23) = 4 * v6;
        memmove_s(a2, v23, (const void *)v23, *(rsize_t *)&v25[4]);
      }
      dword_B4298C -= 4;
    }
  }
  *a1[0xC] = (void (__stdcall **)(signed int))((char *)*a1[0xC] + 0xFFFFFFFF);
  if ( a1[0xD] )
  {
    v7 = a1[0xE];
    v8 = (void (__stdcall *****)(signed int))v7[2];
    if ( v7[1] > (void (__stdcall **)(signed int))v8 )
      _invalid_parameter_noinfo();
    v9 = a1[0xE];
    v10 = (void (__stdcall *****)(signed int))v9[1];
    if ( v10 > (void (__stdcall *****)(signed int))v9[2] )
      _invalid_parameter_noinfo();
    for ( i = v10; i != v8; ++i )
    {
      if ( *i == a1 )
        break;
    }
    a2 = (void (__stdcall *****)(signed int))a1[0xE];
    v12 = ((char *)a2[2] - (char *)(i + 1)) >> 2;
    if ( v12 > 0 )
    {
      HIDWORD(v24) = i + 1;
      LODWORD(v24) = 4 * v12;
      memmove_s(i, v24, (const void *)v24, *(rsize_t *)&v25[4]);
    }
    a2[2] += 0xFFFFFFFF;
    FormHeapFree((unsigned int)a1[0xD]);
    a1[0xD] = 0;
  }
  v13 = a1[0xC];
  if ( !*v13 )
  {
    if ( *((_BYTE *)*a1 + 0x21) )
    {
      sub_7A2620((int)*a1);
    }
    else
    {
      *(_DWORD *)v25 = 0x3A;
      sub_414500(&dword_B2B614, (int)a2, "DeleteTransientData() called with no intact transient data", *(rsize_t *)v25);
    }
    v14 = a1[1];
    if ( v14 )
    {
      sub_797270(a1[1]);
      FormHeapFree((unsigned int)v14);
    }
    FormHeapFree((unsigned int)a1[3]);
    FormHeapFree((unsigned int)a1[4]);
    v15 = a1[2];
    if ( v15 )
    {
      sub_798940(a1[2]);
      FormHeapFree((unsigned int)v15);
    }
    FormHeapFree((unsigned int)a1[5]);
    if ( *a1 )
      ((void (__thiscall *)(_DWORD, int))***a1)(*a1, 1);
    FormHeapFree((unsigned int)a1[0xC]);
    v16 = (unsigned int *)a1[0xE];
    if ( v16 )
    {
      if ( v16[1] )
        FormHeapFree(v16[1]);
      v16[1] = 0;
      v16[2] = 0;
      v16[3] = 0;
      FormHeapFree((unsigned int)v16);
    }
    FormHeapFree((unsigned int)a1[0x10]);
    v17 = (unsigned int *)a1[0x16];
    if ( v17 )
    {
      if ( v17[1] )
        FormHeapFree(v17[1]);
      v17[1] = 0;
      v17[2] = 0;
      v17[3] = 0;
      FormHeapFree((unsigned int)v17);
    }
    v18 = a1[0x13];
    if ( v18 )
    {
      sub_788B90(a1[0x13]);
      FormHeapFree((unsigned int)v18);
    }
    v19 = a1[0x17];
    if ( v19 )
    {
      sub_7A14E0(a1[0x17]);
      FormHeapFree((unsigned int)v19);
    }
    v20 = a1[0x18];
    if ( v20 )
    {
      sub_797270(a1[0x18]);
      FormHeapFree((unsigned int)v20);
    }
    FormHeapFree((unsigned int)a1[0xB]);
    v21 = (unsigned int *)a1[0x14];
    if ( v21 )
    {
      if ( v21[0xF] >= 0x10 )
        FormHeapFree(v21[0xA]);
      v21[0xF] = 0xF;
      v21[0xE] = 0;
      *((_BYTE *)v21 + 0x28) = 0;
      FormHeapFree((unsigned int)v21);
    }
    FormHeapFree((unsigned int)a1[0x1A]);
  }
  a1[1] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[2] = 0;
  a1[5] = 0;
  *a1 = 0;
  a1[0xC] = 0;
  a1[0x10] = 0;
  a1[0xE] = 0;
  a1[0x16] = 0;
  a1[0x13] = 0;
  a1[0x17] = 0;
  a1[0x18] = 0;
  a1[0xB] = 0;
  a1[0x14] = 0;
  a1[0x1A] = 0;
  if ( dword_B42980-- == 1 )
    sub_785D30(v13);
}
