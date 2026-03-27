int __thiscall sub_7AB6F0(_DWORD *this)
{
  _DWORD *v1; // ebp
  _DWORD *v2; // esi
  int v3; // edi
  int *v4; // eax
  int v5; // ecx
  bool v6; // zf
  _DWORD *v7; // esi
  int *v8; // eax
  int v9; // ecx
  _DWORD *v10; // esi
  _DWORD *v11; // ebp
  int *v12; // eax
  int v13; // ecx
  _DWORD *v14; // esi
  _DWORD *v15; // esi
  int result; // eax
  _DWORD *v17; // ebp
  _DWORD *v18; // esi
  unsigned int v19; // edi
  _DWORD *i; // esi
  _DWORD *v21; // eax

  v1 = this;
  v2 = this + 0x42;
  v3 = 0x1A3;
  do
  {
    sub_7A9C30((int)(v2 + 0xFFFFFFFF));
    v2[2] = *v2;
    *v2 = 0;
    v2[1] = 0;
    v2[3] = 0;
    v2 += 5;
    --v3;
  }
  while ( v3 );
  while ( v1[0x12] )
  {
    v4 = (int *)v1[0x10];
    v5 = *v4;
    v6 = *v4 == 0;
    v1[0x10] = *v4;
    if ( v6 )
      v1[0x11] = 0;
    else
      *(_DWORD *)(v5 + 4) = 0;
    v7 = (_DWORD *)v4[2];
    (*(void (__thiscall **)(_DWORD *, int *))(v1[0xF] + 8))(v1 + 0xF, v4);
    --v1[0x12];
    if ( v7 )
    {
      sub_7A9C30((int)v7);
      v7[3] = v7[1];
      v7[1] = 0;
      v7[2] = 0;
      v7[4] = 0;
      *v7 = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable';
      FormHeapFree((unsigned int)v7);
    }
  }
  v1[0x17] = 0;
  v1[0x18] = 0;
  while ( v1[0x16] )
  {
    v8 = (int *)v1[0x14];
    v9 = *v8;
    v6 = *v8 == 0;
    v1[0x14] = *v8;
    if ( v6 )
      v1[0x15] = 0;
    else
      *(_DWORD *)(v9 + 4) = 0;
    v10 = (_DWORD *)v8[2];
    (*(void (__thiscall **)(_DWORD *, int *))(v1[0x13] + 8))(v1 + 0x13, v8);
    --v1[0x16];
    if ( v10 )
    {
      sub_7A9C30((int)v10);
      v10[3] = v10[1];
      v10[1] = 0;
      v10[2] = 0;
      v10[4] = 0;
      *v10 = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable';
      FormHeapFree((unsigned int)v10);
    }
  }
  v1[0x1D] = 0;
  if ( v1[0x1C] )
  {
    v11 = v1 + 0x19;
    do
    {
      v12 = (int *)v11[1];
      v13 = *v12;
      v6 = *v12 == 0;
      v11[1] = *v12;
      if ( v6 )
        v11[2] = 0;
      else
        *(_DWORD *)(v13 + 4) = 0;
      v14 = (_DWORD *)v12[2];
      (*(void (__thiscall **)(_DWORD *, int *))(*v11 + 8))(v11, v12);
      --v11[3];
      if ( v14 )
      {
        sub_7A9C30((int)v14);
        v14[3] = v14[1];
        v14[1] = 0;
        v14[2] = 0;
        v14[4] = 0;
        sub_7A9C30((int)(v14 + 5));
        v14[8] = v14[6];
        v14[6] = 0;
        v14[7] = 0;
        v14[9] = 0;
        v14[5] = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable';
        *v14 = &BSTPersistentList<NiTPointerAllocator<unsigned int>,NiGeometry *>::`vftable';
        FormHeapFree((unsigned int)v14);
      }
    }
    while ( *(this + 0x1C) );
    v1 = this;
  }
  v15 = (_DWORD *)v1[0x1E];
  if ( v15 )
  {
    sub_7A9C30(v1[0x1E]);
    v15[3] = v15[1];
    v15[1] = 0;
    v15[2] = 0;
    v15[4] = 0;
  }
  sub_7A9C30((int)(v1 + 0x24));
  v1[0x27] = v1[0x25];
  v1[0x25] = 0;
  v1[0x26] = 0;
  v1[0x28] = 0;
  sub_7A9C30((int)(v1 + 0x1F));
  result = v1[0x20];
  v1[0x22] = result;
  v1[0x20] = 0;
  v1[0x21] = 0;
  v1[0x23] = 0;
  if ( v1[0x877] )
  {
    v17 = *(_DWORD **)(*(_DWORD *)(v1[0x875] + 8) + 4);
    if ( v17[4] )
    {
      v18 = (_DWORD *)v17[1];
      while ( v18 )
      {
        v19 = v18[2];
        v18 = (_DWORD *)*v18;
        if ( v19 )
        {
          sub_7E2400(v19);
          FormHeapFree(v19);
        }
      }
      sub_7A9C30((int)v17);
      result = v17[1];
      v17[3] = result;
      v17[1] = 0;
      v17[2] = 0;
      v17[4] = 0;
    }
    v1 = this;
  }
  for ( i = (_DWORD *)v1[0x871]; i; result = (*(int (__thiscall **)(_DWORD *, _DWORD *))(v1[0x870] + 8))(
                                               v1 + 0x870,
                                               v21) )
  {
    v21 = i;
    i = (_DWORD *)*i;
  }
  v1[0x873] = 0;
  v1[0x871] = 0;
  v1[0x872] = 0;
  byte_B42CDB = 0;
  return result;
}
