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

  v2 = 0; /*0x4afa89*/
  next = a2 + 1; /*0x4afa8b*/
  v4 = &a2[1] == 0; /*0x4afa8e*/
  v31 = 0; /*0x4afa94*/
  v32 = 0; /*0x4afa98*/
  v27 = a2 + 1; /*0x4afa9c*/
  v28 = 0; /*0x4afaa0*/
  v29 = 0; /*0x4afaa4*/
  v33 = 0; /*0x4afaa8*/
  v26 = 0; /*0x4afaac*/
  if ( !v4 ) /*0x4afab0*/
  {
    do /*0x4afb9f*/
    {
      if ( !next->firstNode.next && !next->firstNode.data ) /*0x4afabe*/
        break; /*0x4afac1*/
      data = next->firstNode.data; /*0x4afac7*/
      v6 = OblivionDynamicCast( /*0x4afadb*/
             *((void **)next->firstNode.data + 1),
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
             &TESActorBase `RTTI Type Descriptor',
             0);
      v7 = v6; /*0x4afae0*/
      if ( v6 ) /*0x4afae7*/
      {
        ++v28; /*0x4afaef*/
        v29 += *data; /*0x4afaf4*/
        if ( !OblivionDynamicCast( /*0x4afb07*/
                v6,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESActorBase `RTTI Type Descriptor',
                &TESNPC `RTTI Type Descriptor',
                0) )
        {
          v8 = ((__int64 (__thiscall *)(_DWORD *))*(_DWORD *)(v7[0x2B] + 0x14))(v7 + 0x2B); /*0x4afb26*/
          if ( ModelLoader_IsModelLoaded__(MEMORY[0xB33A1C], SHIDWORD(v8), v8) ) /*0x4afb2f*/
          {
            ++v33; /*0x4afb3a*/
            v26 += *data; /*0x4afb3f*/
            v9 = (_DWORD *)FormHeapAlloc(8u); /*0x4afb45*/
            if ( v9 ) /*0x4afb4f*/
            {
              *v9 = 1; /*0x4afb51*/
              v9[1] = 0; /*0x4afb57*/
              v10 = v9; /*0x4afb5e*/
            }
            else
            {
              v10 = 0; /*0x4afb62*/
            }
            *v10 = *data; /*0x4afb68*/
            v10[1] = data[1]; /*0x4afb6d*/
            if ( v2 ) /*0x4afb70*/
            {
              v11 = (_DWORD *)FormHeapAlloc(8u); /*0x4afb74*/
              if ( v11 ) /*0x4afb7e*/
              {
                *v11 = v2; /*0x4afb80*/
                v11[1] = 0; /*0x4afb82*/
              }
              else
              {
                v11 = 0; /*0x4afb8b*/
              }
              v11[1] = v32; /*0x4afb91*/
              v32 = v11; /*0x4afb94*/
            }
            v2 = v10; /*0x4afb98*/
          }
        }
      }
      next = (BSSimpleList_VoidPtr *)next->firstNode.next; /*0x4afb9a*/
    }
    while ( next ); /*0x4afb9f*/
    v31 = v2; /*0x4afbaa*/
    if ( v28 ) /*0x4afbae*/
    {
      v12 = v33; /*0x4afbb4*/
      if ( v33 ) /*0x4afbba*/
        goto LABEL_31; /*0x4afbba*/
      v13 = this + 0x28; /*0x4afbc4*/
      if ( this != (char *)0xFFFFFFD8 ) /*0x4afbc7*/
      {
        do /*0x4afc81*/
        {
          if ( !*((_DWORD *)v13 + 1) && !*(_DWORD *)v13 ) /*0x4afbd6*/
            break; /*0x4afbd9*/
          v14 = *(_DWORD *)v13; /*0x4afbdf*/
          v15 = OblivionDynamicCast( /*0x4afbf3*/
                  *(void **)(*(_DWORD *)v13 + 4),
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  &TESActorBase `RTTI Type Descriptor',
                  0);
          v16 = v15; /*0x4afbf8*/
          if ( v15 ) /*0x4afbff*/
          {
            if ( !OblivionDynamicCast( /*0x4afc10*/
                    v15,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESActorBase `RTTI Type Descriptor',
                    &TESNPC `RTTI Type Descriptor',
                    0) )
            {
              v17 = ((__int64 (__thiscall *)(_DWORD *))*(_DWORD *)(v16[0x2B] + 0x14))(v16 + 0x2B); /*0x4afc2b*/
              if ( ModelLoader_IsModelLoaded__(MEMORY[0xB33A1C], SHIDWORD(v17), v17) ) /*0x4afc34*/
              {
                ++v33; /*0x4afc41*/
                v26 += *(unsigned __int16 *)(v14 + 8); /*0x4afc46*/
                v18 = (_DWORD *)FormHeapAlloc(8u); /*0x4afc4c*/
                if ( v18 ) /*0x4afc56*/
                {
                  *v18 = 1; /*0x4afc58*/
                  v18[1] = 0; /*0x4afc5e*/
                }
                else
                {
                  v18 = 0; /*0x4afc67*/
                }
                *v18 = *(unsigned __int16 *)(v14 + 8); /*0x4afc6d*/
                v18[1] = v16; /*0x4afc74*/
                BSSimpleList_PushFront(&v31, (int)v18); /*0x4afc77*/
              }
            }
          }
          v13 = *((char **)v13 + 1); /*0x4afc7c*/
        }
        while ( v13 ); /*0x4afc81*/
        v12 = v33; /*0x4afc87*/
        if ( v33 ) /*0x4afc8d*/
        {
LABEL_31:
          v19 = (v26 - v29) / v12; /*0x4afca3*/
          if ( v27 ) /*0x4afca5*/
          {
            while ( !BSSimpleList_IsEmpty(v27) ) /*0x4afcbd*/
            {
              v20 = v27->firstNode.data; /*0x4afcbf*/
              if ( v27->firstNode.data ) /*0x4afcbf*/
              {
                Shared_NoOpVirtual_60D0A0(v20); /*0x4afcc7*/
                FormHeapFree((unsigned int)v20); /*0x4afccd*/
              }
              v21 = v27->firstNode.next; /*0x4afcd9*/
              if ( v21 ) /*0x4afcde*/
              {
                v27->firstNode.next = v21->next; /*0x4afce3*/
                v27->firstNode.data = v21->data; /*0x4afce9*/
                FormHeapFree((unsigned int)v21); /*0x4afceb*/
              }
              else
              {
                v27->firstNode.data = 0; /*0x4afcf5*/
              }
            }
          }
          v22 = &v31; /*0x4afcfd*/
          do /*0x4afd46*/
          {
            if ( !v22[1] && !*v22 ) /*0x4afd07*/
              break; /*0x4afd0a*/
            v23 = (_DWORD *)*v22; /*0x4afd0c*/
            *(_DWORD *)*v22 += v19; /*0x4afd12*/
            if ( v27->firstNode.data ) /*0x4afd14*/
            {
              v24 = (BSSimpleList_VoidPtr::NodeVoid *)FormHeapAlloc(8u); /*0x4afd1b*/
              if ( v24 ) /*0x4afd25*/
              {
                v24->data = v27->firstNode.data; /*0x4afd29*/
                v24->next = 0; /*0x4afd2b*/
              }
              else
              {
                v24 = 0; /*0x4afd34*/
              }
              v24->next = v27->firstNode.next; /*0x4afd39*/
              v27->firstNode.next = v24; /*0x4afd3c*/
            }
            v27->firstNode.data = v23; /*0x4afd3f*/
            v22 = (_DWORD *)v22[1]; /*0x4afd41*/
          }
          while ( v22 ); /*0x4afd46*/
        }
      }
    }
    if ( v32 ) /*0x4afd4d*/
    {
      do /*0x4afd66*/
      {
        v25 = v32[1]; /*0x4afd54*/
        FormHeapFree((unsigned int)v32); /*0x4afd58*/
        v32 = (_DWORD *)v25; /*0x4afd62*/
      }
      while ( v25 ); /*0x4afd66*/
    }
  }
}
