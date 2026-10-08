void __cdecl sub_6D3EB0(Ni2DBuffer *a1)
{
  Ni2DBuffer *v1; // ebp
  UInt32 width; // ebx
  _DWORD *v3; // edi
  int v4; // eax
  Ni2DBuffer **v5; // esi
  NiRTTI *v6; // eax
  int m_uiRefCount; // ebx
  NiObject *v8; // eax
  Ni2DBuffer *v9; // eax
  int v10; // [esp+28h] [ebp-18h] BYREF
  UInt32 v11; // [esp+2Ch] [ebp-14h]
  NiObject *v12; // [esp+30h] [ebp-10h]
  unsigned int v13; // [esp+3Ch] [ebp-4h]

  v1 = a1; /*0x6d3ed7*/
  width = a1[2].members.width; /*0x6d3edb*/
  v3 = *(_DWORD **)(width + 0xC); /*0x6d3ede*/
  v11 = width; /*0x6d3ee3*/
  if ( v3 ) /*0x6d3ee7*/
  {
    while ( 1 ) /*0x6d3ef4*/
    {
      v4 = (*(int (__thiscall **)(_DWORD *))(*v3 + 4))(v3); /*0x6d3ef4*/
      if ( v4 ) /*0x6d3ef8*/
      {
        while ( (char *)v4 != unk_B3CA58 ) /*0x6d3f05*/
        {
          v4 = *(_DWORD *)(v4 + 4); /*0x6d3f07*/
          if ( !v4 ) /*0x6d3f0c*/
            goto LABEL_10; /*0x6d3f0c*/
        }
        v5 = (Ni2DBuffer **)(*(int (__thiscall **)(_DWORD *, _DWORD))(*v3 + 0x80))(v3, 0); /*0x6d3f1e*/
        if ( v5 ) /*0x6d3f22*/
        {
          v6 = (NiRTTI *)((int (__thiscall *)(Ni2DBuffer **))(*v5)->members.super.m_uiRefCount)(v5); /*0x6d3f2b*/
          if ( v6 ) /*0x6d3f2f*/
            break; /*0x6d3f2f*/
        }
      }
LABEL_10:
      v3 = (_DWORD *)v3[0xD]; /*0x6d3f3f*/
      if ( !v3 ) /*0x6d3f44*/
        goto LABEL_16; /*0x6d3f44*/
    }
    while ( v6 != &stru_B3DF08 ) /*0x6d3f36*/
    {
      v6 = v6->parent; /*0x6d3f38*/
      if ( !v6 ) /*0x6d3f3d*/
        goto LABEL_10; /*0x6d3f3d*/
    }
    m_uiRefCount = v1[3].members.super.m_uiRefCount; /*0x6d3f4b*/
    v8 = (NiObject *)FormHeapAlloc(0x18u); /*0x6d3f50*/
    v12 = v8; /*0x6d3f58*/
    v13 = 0; /*0x6d3f5e*/
    if ( v8 ) /*0x6d3f66*/
      v9 = (Ni2DBuffer *)sub_6D2990(v8, m_uiRefCount); /*0x6d3f6b*/
    else
      v9 = 0; /*0x6d3f72*/
    v13 = 0xFFFFFFFF; /*0x6d3f77*/
    sub_6D3940(v5, v9); /*0x6d3f7f*/
    sub_6D3B40((int)v1, (int)v3); /*0x6d3f86*/
    ((void (__thiscall *)(Ni2DBuffer **, int *, Ni2DBuffer **))(*v5)[6].members.width)(v5, &v10, &a1); /*0x6d3fa2*/
    ((void (__thiscall *)(Ni2DBuffer **, int, Ni2DBuffer *))(*v5)[6].members.height)(v5, v10, a1); /*0x6d3fc0*/
    (*(void (__thiscall **)(_DWORD *))(*v3 + 0x88))(v3); /*0x6d3fcc*/
    ((void (__thiscall *)(Ni2DBuffer **))(*v5)[6].members.super.m_uiRefCount)(v5); /*0x6d3fd5*/
    width = v11; /*0x6d3fd7*/
  }
LABEL_16:
  NiObjectNET_RemoveController((Ni2DBuffer **)width, v1); /*0x6d3fdb*/
}
