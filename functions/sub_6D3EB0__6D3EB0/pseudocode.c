void __cdecl sub_6D3EB0(Ni2DBuffer *a1)
{
  Ni2DBuffer *v1; // ebp
  UInt32 width; // ebx
  _DWORD *v3; // edi
  int v4; // eax
  Ni2DBuffer **v5; // esi
  int v6; // eax
  int m_uiRefCount; // ebx
  float *v8; // eax
  float *v9; // eax
  int v10; // [esp+28h] [ebp-18h] BYREF
  UInt32 v11; // [esp+2Ch] [ebp-14h]
  float *v12; // [esp+30h] [ebp-10h]
  unsigned int v13; // [esp+3Ch] [ebp-4h]

  v1 = a1;
  width = a1[2].members.width;
  v3 = *(_DWORD **)(width + 0xC);
  v11 = width;
  if ( v3 )
  {
    while ( 1 )
    {
      v4 = (*(int (__thiscall **)(_DWORD *))(*v3 + 4))(v3);
      if ( v4 )
      {
        while ( (char *)v4 != dword_B3CA58 )
        {
          v4 = *(_DWORD *)(v4 + 4);
          if ( !v4 )
            goto LABEL_10;
        }
        v5 = (Ni2DBuffer **)(*(int (__thiscall **)(_DWORD *, _DWORD))(*v3 + 0x80))(v3, 0);
        if ( v5 )
        {
          v6 = ((int (__thiscall *)(Ni2DBuffer **))(*v5)->members.super.m_uiRefCount)(v5);
          if ( v6 )
            break;
        }
      }
LABEL_10:
      v3 = (_DWORD *)v3[0xD];
      if ( !v3 )
        goto LABEL_16;
    }
    while ( (char *)v6 != dword_B3DF08 )
    {
      v6 = *(_DWORD *)(v6 + 4);
      if ( !v6 )
        goto LABEL_10;
    }
    m_uiRefCount = v1[3].members.super.m_uiRefCount;
    v8 = (float *)FormHeapAlloc(0x18u);
    v12 = v8;
    v13 = 0;
    if ( v8 )
      v9 = sub_6D2990(v8, m_uiRefCount);
    else
      v9 = 0;
    v13 = 0xFFFFFFFF;
    sub_6D3940(v5, (Ni2DBuffer *)v9);
    sub_6D3B40((int)v1, (int)v3);
    ((void (__thiscall *)(Ni2DBuffer **, int *, Ni2DBuffer **))(*v5)[6].members.width)(v5, &v10, &a1);
    ((void (__thiscall *)(Ni2DBuffer **, int, Ni2DBuffer *))(*v5)[6].members.height)(v5, v10, a1);
    (*(void (__thiscall **)(_DWORD *))(*v3 + 0x88))(v3);
    ((void (__thiscall *)(Ni2DBuffer **))(*v5)[6].members.super.m_uiRefCount)(v5);
    width = v11;
  }
LABEL_16:
  sub_6FFE90((Ni2DBuffer **)width, v1);
}
