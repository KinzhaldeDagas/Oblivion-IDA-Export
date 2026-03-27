void __thiscall sub_4AFA80(char *this, BSSimpleList_VoidPtr *a2)
{
  _DWORD *v2; // ebp
  BSSimpleList_VoidPtr *next; // ebx
  bool v4; // zf
  _DWORD *data; // esi
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  __int64 v8; // rax
  _DWORD *v9; // eax
  _DWORD *v10; // edi
  _DWORD *v11; // eax
  int v12; // ecx
  char *v13; // ebx
  int v14; // esi
  _DWORD *v15; // eax
  _DWORD *v16; // edi
  __int64 v17; // rax
  _DWORD *v18; // eax
  int v19; // ebp
  void *v20; // esi
  BSSimpleList_VoidPtr::NodeVoid *v21; // eax
  _DWORD *v22; // edi
  _DWORD *v23; // esi
  BSSimpleList_VoidPtr::NodeVoid *v24; // eax
  unsigned int v25; // esi
  int v26; // [esp+8h] [ebp-1Ch]
  BSSimpleList_VoidPtr *v27; // [esp+Ch] [ebp-18h]
  int v28; // [esp+10h] [ebp-14h]
  int v29; // [esp+14h] [ebp-10h]
  _DWORD *v31; // [esp+1Ch] [ebp-8h] BYREF
  _DWORD *v32; // [esp+20h] [ebp-4h]
  int v33; // [esp+28h] [ebp+4h]

  v2 = 0;
  next = a2 + 1;
  v4 = &a2[1] == 0;
  v31 = 0;
  v32 = 0;
  v27 = a2 + 1;
  v28 = 0;
  v29 = 0;
  v33 = 0;
  v26 = 0;
  if ( !v4 )
  {
    do
    {
      if ( !next->firstNode.next && !next->firstNode.data )
        break;
      data = next->firstNode.data;
      v6 = OblivionDynamicCast(
             *((void **)next->firstNode.data + 1),
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
             &TESActorBase `RTTI Type Descriptor',
             0);
      v7 = v6;
      if ( v6 )
      {
        ++v28;
        v29 += *data;
        if ( !OblivionDynamicCast(
                v6,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESActorBase `RTTI Type Descriptor',
                &TESNPC `RTTI Type Descriptor',
                0) )
        {
          v8 = ((__int64 (__thiscall *)(_DWORD *))*(_DWORD *)(v7[0x2B] + 0x14))(v7 + 0x2B);
          if ( ModelLoader_IsModelLoaded__(ModelLoaderPtr, SHIDWORD(v8), v8) )
          {
            ++v33;
            v26 += *data;
            v9 = (_DWORD *)FormHeapAlloc(8u);
            if ( v9 )
            {
              *v9 = 1;
              v9[1] = 0;
              v10 = v9;
            }
            else
            {
              v10 = 0;
            }
            *v10 = *data;
            v10[1] = data[1];
            if ( v2 )
            {
              v11 = (_DWORD *)FormHeapAlloc(8u);
              if ( v11 )
              {
                *v11 = v2;
                v11[1] = 0;
              }
              else
              {
                v11 = 0;
              }
              v11[1] = v32;
              v32 = v11;
            }
            v2 = v10;
          }
        }
      }
      next = (BSSimpleList_VoidPtr *)next->firstNode.next;
    }
    while ( next );
    v31 = v2;
    if ( v28 )
    {
      v12 = v33;
      if ( v33 )
        goto LABEL_31;
      v13 = this + 0x28;
      if ( this != (char *)0xFFFFFFD8 )
      {
        do
        {
          if ( !*((_DWORD *)v13 + 1) && !*(_DWORD *)v13 )
            break;
          v14 = *(_DWORD *)v13;
          v15 = OblivionDynamicCast(
                  *(void **)(*(_DWORD *)v13 + 4),
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  &TESActorBase `RTTI Type Descriptor',
                  0);
          v16 = v15;
          if ( v15 )
          {
            if ( !OblivionDynamicCast(
                    v15,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESActorBase `RTTI Type Descriptor',
                    &TESNPC `RTTI Type Descriptor',
                    0) )
            {
              v17 = ((__int64 (__thiscall *)(_DWORD *))*(_DWORD *)(v16[0x2B] + 0x14))(v16 + 0x2B);
              if ( ModelLoader_IsModelLoaded__(ModelLoaderPtr, SHIDWORD(v17), v17) )
              {
                ++v33;
                v26 += *(unsigned __int16 *)(v14 + 8);
                v18 = (_DWORD *)FormHeapAlloc(8u);
                if ( v18 )
                {
                  *v18 = 1;
                  v18[1] = 0;
                }
                else
                {
                  v18 = 0;
                }
                *v18 = *(unsigned __int16 *)(v14 + 8);
                v18[1] = v16;
                BSSimpleList_PushFront(&v31, (int)v18);
              }
            }
          }
          v13 = *((char **)v13 + 1);
        }
        while ( v13 );
        v12 = v33;
        if ( v33 )
        {
LABEL_31:
          v19 = (v26 - v29) / v12;
          if ( v27 )
          {
            while ( !BSSimpleList_IsEmpty(v27) )
            {
              v20 = v27->firstNode.data;
              if ( v27->firstNode.data )
              {
                TESTexture::ClearComponentReferences(v20);
                FormHeapFree((unsigned int)v20);
              }
              v21 = v27->firstNode.next;
              if ( v21 )
              {
                v27->firstNode.next = v21->next;
                v27->firstNode.data = v21->data;
                FormHeapFree((unsigned int)v21);
              }
              else
              {
                v27->firstNode.data = 0;
              }
            }
          }
          v22 = &v31;
          do
          {
            if ( !v22[1] && !*v22 )
              break;
            v23 = (_DWORD *)*v22;
            *(_DWORD *)*v22 += v19;
            if ( v27->firstNode.data )
            {
              v24 = (BSSimpleList_VoidPtr::NodeVoid *)FormHeapAlloc(8u);
              if ( v24 )
              {
                v24->data = v27->firstNode.data;
                v24->next = 0;
              }
              else
              {
                v24 = 0;
              }
              v24->next = v27->firstNode.next;
              v27->firstNode.next = v24;
            }
            v27->firstNode.data = v23;
            v22 = (_DWORD *)v22[1];
          }
          while ( v22 );
        }
      }
    }
    if ( v32 )
    {
      do
      {
        v25 = v32[1];
        FormHeapFree((unsigned int)v32);
        v32 = (_DWORD *)v25;
      }
      while ( v25 );
    }
  }
}
