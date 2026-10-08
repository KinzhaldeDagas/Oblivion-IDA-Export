int *__thiscall sub_70A500(_DWORD *this, int *arg0, Ni2DBuffer *a2, char a4)
{
  Ni2DBuffer *v4; // edi
  Ni2DBuffer *v5; // esi
  char v6; // bl
  _DWORD *height; // ebp
  unsigned int *v8; // ecx
  Ni2DBuffer *v9; // edi
  NiDX92DBufferData *data; // ebp
  unsigned int *m_uiRefCount; // ecx
  Ni2DBuffer *v12; // edi
  #9279 *vftable; // ebp
  unsigned int *v14; // ecx
  Ni2DBuffer *v15; // edi
  unsigned int *v16; // edi
  Ni2DBuffer *v17; // eax
  Ni2DBuffer *v18; // eax
  _DWORD *v19; // ebp
  int *v20; // edi
  _DWORD *v21; // eax
  _DWORD *v22; // edi
  _DWORD *v23; // eax
  bool v24; // zf
  Ni2DBuffer *v26; // [esp-4h] [ebp-34h]
  Ni2DBuffer *v27; // [esp-4h] [ebp-34h]
  UInt32 v28; // [esp+14h] [ebp-1Ch] BYREF
  _DWORD *v29; // [esp+18h] [ebp-18h]
  unsigned int *width; // [esp+1Ch] [ebp-14h]
  int v31; // [esp+20h] [ebp-10h]
  int v32; // [esp+2Ch] [ebp-4h]

  v29 = this; /*0x70a527*/
  v4 = a2; /*0x70a52b*/
  v5 = a2; /*0x70a531*/
  v31 = 0; /*0x70a533*/
  v28 = (UInt32)a2; /*0x70a53b*/
  if ( a2 ) /*0x70a53f*/
    InterlockedIncrement((volatile LONG *)&a2->members); /*0x70a545*/
  v6 = 0; /*0x70a54b*/
  v32 = 1; /*0x70a54f*/
  if ( a2 ) /*0x70a557*/
  {
    height = (_DWORD *)a2->members.height; /*0x70a55d*/
    while ( height ) /*0x70a562*/
    {
      v8 = (unsigned int *)height[1]; /*0x70a564*/
      height = (_DWORD *)*height; /*0x70a569*/
      width = v8; /*0x70a56c*/
      if ( v8 ) /*0x70a570*/
      {
        if ( sub_708CE0(v8, (int)v29) ) /*0x70a577*/
        {
          if ( !v6 ) /*0x70a582*/
          {
            v9 = (Ni2DBuffer *)sub_731B60(v4); /*0x70a58b*/
            if ( v5 != v9 ) /*0x70a58f*/
            {
              if ( v5 ) /*0x70a593*/
              {
                if ( !InterlockedDecrement((volatile LONG *)&v5->members) ) /*0x70a599*/
                  (*(void (__thiscall **)(Ni2DBuffer *, int))v5->__vftable)(v5, 1); /*0x70a5ab*/
              }
              v5 = v9; /*0x70a5af*/
              v28 = (UInt32)v9; /*0x70a5b1*/
              if ( v9 ) /*0x70a5b5*/
                InterlockedIncrement((volatile LONG *)&v9->members); /*0x70a5bb*/
            }
            v4 = a2; /*0x70a5c1*/
            v6 = 1; /*0x70a5c5*/
          }
          sub_731D80((unsigned int **)v5, width); /*0x70a5ce*/
        }
      }
    }
    data = v4->members.data; /*0x70a5d7*/
    while ( data ) /*0x70a5dc*/
    {
      m_uiRefCount = (unsigned int *)data->member.super.m_uiRefCount; /*0x70a5e0*/
      data = (NiDX92DBufferData *)data->__vftable; /*0x70a5e5*/
      width = m_uiRefCount; /*0x70a5e8*/
      if ( m_uiRefCount ) /*0x70a5ec*/
      {
        if ( sub_708CE0(m_uiRefCount, (int)v29) ) /*0x70a5f3*/
        {
          if ( !v6 ) /*0x70a5fe*/
          {
            v12 = (Ni2DBuffer *)sub_731B60(v4); /*0x70a607*/
            if ( v5 != v12 ) /*0x70a60b*/
            {
              if ( v5 ) /*0x70a60f*/
              {
                if ( !InterlockedDecrement((volatile LONG *)&v5->members) ) /*0x70a615*/
                  (*(void (__thiscall **)(Ni2DBuffer *, int))v5->__vftable)(v5, 1); /*0x70a627*/
              }
              v5 = v12; /*0x70a62b*/
              v28 = (UInt32)v12; /*0x70a62d*/
              if ( v12 ) /*0x70a631*/
                InterlockedIncrement((volatile LONG *)&v12->members); /*0x70a637*/
            }
            v4 = a2; /*0x70a63d*/
            v6 = 1; /*0x70a641*/
          }
          sub_731D80((unsigned int **)v5, width); /*0x70a64a*/
        }
      }
    }
    vftable = v4[1].__vftable; /*0x70a653*/
    while ( vftable ) /*0x70a658*/
    {
      v14 = *((unsigned int **)vftable + 1); /*0x70a660*/
      vftable = *(#9279 **)vftable; /*0x70a665*/
      width = v14; /*0x70a668*/
      if ( v14 ) /*0x70a66c*/
      {
        if ( sub_708CE0(v14, (int)v29) ) /*0x70a673*/
        {
          if ( !v6 ) /*0x70a67e*/
          {
            v15 = (Ni2DBuffer *)sub_731B60(v4); /*0x70a687*/
            if ( v5 != v15 ) /*0x70a68b*/
            {
              if ( v5 ) /*0x70a68f*/
              {
                if ( !InterlockedDecrement((volatile LONG *)&v5->members) ) /*0x70a695*/
                  (*(void (__thiscall **)(Ni2DBuffer *, int))v5->__vftable)(v5, 1); /*0x70a6a7*/
              }
              v5 = v15; /*0x70a6ab*/
              v28 = (UInt32)v15; /*0x70a6ad*/
              if ( v15 ) /*0x70a6b1*/
                InterlockedIncrement((volatile LONG *)&v15->members); /*0x70a6b7*/
            }
            v4 = a2; /*0x70a6bd*/
            v6 = 1; /*0x70a6c1*/
          }
          sub_731D80((unsigned int **)v5, width); /*0x70a6ca*/
        }
      }
    }
    v16 = (unsigned int *)v4[1].members.super.m_uiRefCount; /*0x70a6d7*/
    width = (unsigned int *)a2[1].members.width; /*0x70a6df*/
    if ( v16 ) /*0x70a6e3*/
    {
      if ( sub_708CE0(v16, (int)v29) ) /*0x70a6ec*/
      {
        if ( !v6 ) /*0x70a6f7*/
        {
          v17 = (Ni2DBuffer *)sub_731B60(a2); /*0x70a6fb*/
          NiSmartPointer_Set__((Ni2DBuffer **)&v28, v17); /*0x70a705*/
          v5 = (Ni2DBuffer *)v28; /*0x70a70a*/
          v6 = 1; /*0x70a70e*/
        }
        sub_731D80((unsigned int **)v5, v16); /*0x70a713*/
      }
    }
    if ( width ) /*0x70a71e*/
    {
      if ( sub_708CE0(width, (int)v29) ) /*0x70a725*/
      {
        if ( !v6 ) /*0x70a730*/
        {
          v18 = (Ni2DBuffer *)sub_731B60(a2); /*0x70a734*/
          NiSmartPointer_Set__((Ni2DBuffer **)&v28, v18); /*0x70a73e*/
          v5 = (Ni2DBuffer *)v28; /*0x70a743*/
          v6 = 1; /*0x70a747*/
        }
        sub_731D80((unsigned int **)v5, width); /*0x70a750*/
      }
    }
    v4 = a2; /*0x70a755*/
  }
  v19 = v29; /*0x70a757*/
  if ( !v29[0x32] ) /*0x70a75b*/
  {
    v20 = arg0; /*0x70a766*/
    *arg0 = (int)v5; /*0x70a76a*/
    if ( v5 ) /*0x70a76c*/
      InterlockedIncrement((volatile LONG *)&v5->members); /*0x70a772*/
    goto LABEL_72; /*0x70a772*/
  }
  if ( v4 ) /*0x70a77f*/
  {
    if ( a4 ) /*0x70a7a3*/
    {
      if ( v6 ) /*0x70a7a7*/
        goto LABEL_68; /*0x70a7a7*/
      v27 = (Ni2DBuffer *)sub_731B60(v4); /*0x70a7b0*/
      NiSmartPointer_Set__((Ni2DBuffer **)&v28, v27); /*0x70a7b1*/
    }
    else
    {
      if ( v6 ) /*0x70a7b5*/
        goto LABEL_68; /*0x70a7b5*/
      NiSmartPointer_Set__((Ni2DBuffer **)&v28, v4); /*0x70a7bc*/
    }
  }
  else
  {
    v21 = (_DWORD *)FormHeapAlloc(0x20u); /*0x70a783*/
    if ( v21 ) /*0x70a78d*/
    {
      v26 = (Ni2DBuffer *)sub_709E60(v21); /*0x70a796*/
      NiSmartPointer_Set__((Ni2DBuffer **)&v28, v26); /*0x70a797*/
    }
    else
    {
      NiSmartPointer_Set__((Ni2DBuffer **)&v28, 0); /*0x70a79c*/
    }
  }
  v5 = (Ni2DBuffer *)v28; /*0x70a7c1*/
LABEL_68:
  v22 = (_DWORD *)v19[0x30]; /*0x70a7c5*/
  while ( v22 ) /*0x70a7cd*/
  {
    v23 = (_DWORD *)v22[2]; /*0x70a7d3*/
    v22 = (_DWORD *)*v22; /*0x70a7d5*/
    sub_731CE0(v5, v23); /*0x70a7da*/
  }
  v24 = v5 == 0; /*0x70a7e3*/
  v20 = arg0; /*0x70a7e5*/
  *arg0 = (int)v5; /*0x70a7e9*/
  if ( v5 ) /*0x70a7eb*/
  {
    InterlockedIncrement((volatile LONG *)&v5->members); /*0x70a7f1*/
LABEL_72:
    v24 = v5 == 0; /*0x70a7f7*/
  }
  LOBYTE(v32) = 0; /*0x70a7f9*/
  v31 = 1; /*0x70a7fe*/
  if ( !v24 && !InterlockedDecrement((volatile LONG *)&v5->members) ) /*0x70a80c*/
    (*(void (__thiscall **)(Ni2DBuffer *, int))v5->__vftable)(v5, 1); /*0x70a81e*/
  return v20; /*0x70a822*/
}
