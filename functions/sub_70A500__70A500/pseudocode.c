int *__thiscall sub_70A500(_DWORD *this, int *arg0, Ni2DBuffer *a2, char a4)
{
  Ni2DBuffer *v4; // edi
  Ni2DBuffer *v5; // esi
  char v6; // bl
  _DWORD *height; // ebp
  _DWORD *v8; // ecx
  Ni2DBuffer *v9; // edi
  NiDX92DBufferData *data; // ebp
  _DWORD *m_uiRefCount; // ecx
  Ni2DBuffer *v12; // edi
  #9279 *vftable; // ebp
  _DWORD *v14; // ecx
  Ni2DBuffer *v15; // edi
  _DWORD *v16; // edi
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
  _DWORD *width; // [esp+1Ch] [ebp-14h]
  int v31; // [esp+20h] [ebp-10h]
  int v32; // [esp+2Ch] [ebp-4h]

  v29 = this;
  v4 = a2;
  v5 = a2;
  v31 = 0;
  v28 = (UInt32)a2;
  if ( a2 )
    InterlockedIncrement((volatile LONG *)&a2->members);
  v6 = 0;
  v32 = 1;
  if ( a2 )
  {
    height = (_DWORD *)a2->members.height;
    while ( height )
    {
      v8 = (_DWORD *)height[1];
      height = (_DWORD *)*height;
      width = v8;
      if ( v8 )
      {
        if ( sub_708CE0(v8, (int)v29) )
        {
          if ( !v6 )
          {
            v9 = (Ni2DBuffer *)sub_731B60(v4);
            if ( v5 != v9 )
            {
              if ( v5 )
              {
                if ( !InterlockedDecrement((volatile LONG *)&v5->members) )
                  (*(void (__thiscall **)(Ni2DBuffer *, int))v5->__vftable)(v5, 1);
              }
              v5 = v9;
              v28 = (UInt32)v9;
              if ( v9 )
                InterlockedIncrement((volatile LONG *)&v9->members);
            }
            v4 = a2;
            v6 = 1;
          }
          sub_731D80((unsigned int *)v5, width);
        }
      }
    }
    data = v4->members.data;
    while ( data )
    {
      m_uiRefCount = (_DWORD *)data->member.super.m_uiRefCount;
      data = (NiDX92DBufferData *)data->__vftable;
      width = m_uiRefCount;
      if ( m_uiRefCount )
      {
        if ( sub_708CE0(m_uiRefCount, (int)v29) )
        {
          if ( !v6 )
          {
            v12 = (Ni2DBuffer *)sub_731B60(v4);
            if ( v5 != v12 )
            {
              if ( v5 )
              {
                if ( !InterlockedDecrement((volatile LONG *)&v5->members) )
                  (*(void (__thiscall **)(Ni2DBuffer *, int))v5->__vftable)(v5, 1);
              }
              v5 = v12;
              v28 = (UInt32)v12;
              if ( v12 )
                InterlockedIncrement((volatile LONG *)&v12->members);
            }
            v4 = a2;
            v6 = 1;
          }
          sub_731D80((unsigned int *)v5, width);
        }
      }
    }
    vftable = v4[1].__vftable;
    while ( vftable )
    {
      v14 = *((_DWORD **)vftable + 1);
      vftable = *(#9279 **)vftable;
      width = v14;
      if ( v14 )
      {
        if ( sub_708CE0(v14, (int)v29) )
        {
          if ( !v6 )
          {
            v15 = (Ni2DBuffer *)sub_731B60(v4);
            if ( v5 != v15 )
            {
              if ( v5 )
              {
                if ( !InterlockedDecrement((volatile LONG *)&v5->members) )
                  (*(void (__thiscall **)(Ni2DBuffer *, int))v5->__vftable)(v5, 1);
              }
              v5 = v15;
              v28 = (UInt32)v15;
              if ( v15 )
                InterlockedIncrement((volatile LONG *)&v15->members);
            }
            v4 = a2;
            v6 = 1;
          }
          sub_731D80((unsigned int *)v5, width);
        }
      }
    }
    v16 = (_DWORD *)v4[1].members.super.m_uiRefCount;
    width = (_DWORD *)a2[1].members.width;
    if ( v16 )
    {
      if ( sub_708CE0(v16, (int)v29) )
      {
        if ( !v6 )
        {
          v17 = (Ni2DBuffer *)sub_731B60(a2);
          NiSmartPointer_Set__((Ni2DBuffer **)&v28, v17);
          v5 = (Ni2DBuffer *)v28;
          v6 = 1;
        }
        sub_731D80((unsigned int *)v5, v16);
      }
    }
    if ( width )
    {
      if ( sub_708CE0(width, (int)v29) )
      {
        if ( !v6 )
        {
          v18 = (Ni2DBuffer *)sub_731B60(a2);
          NiSmartPointer_Set__((Ni2DBuffer **)&v28, v18);
          v5 = (Ni2DBuffer *)v28;
          v6 = 1;
        }
        sub_731D80((unsigned int *)v5, width);
      }
    }
    v4 = a2;
  }
  v19 = v29;
  if ( !v29[0x32] )
  {
    v20 = arg0;
    *arg0 = (int)v5;
    if ( v5 )
      InterlockedIncrement((volatile LONG *)&v5->members);
    goto LABEL_72;
  }
  if ( v4 )
  {
    if ( a4 )
    {
      if ( v6 )
        goto LABEL_68;
      v27 = (Ni2DBuffer *)sub_731B60(v4);
      NiSmartPointer_Set__((Ni2DBuffer **)&v28, v27);
    }
    else
    {
      if ( v6 )
        goto LABEL_68;
      NiSmartPointer_Set__((Ni2DBuffer **)&v28, v4);
    }
  }
  else
  {
    v21 = (_DWORD *)FormHeapAlloc(0x20u);
    if ( v21 )
    {
      v26 = (Ni2DBuffer *)sub_709E60(v21);
      NiSmartPointer_Set__((Ni2DBuffer **)&v28, v26);
    }
    else
    {
      NiSmartPointer_Set__((Ni2DBuffer **)&v28, 0);
    }
  }
  v5 = (Ni2DBuffer *)v28;
LABEL_68:
  v22 = (_DWORD *)v19[0x30];
  while ( v22 )
  {
    v23 = (_DWORD *)v22[2];
    v22 = (_DWORD *)*v22;
    sub_731CE0(v5, v23);
  }
  v24 = v5 == 0;
  v20 = arg0;
  *arg0 = (int)v5;
  if ( v5 )
  {
    InterlockedIncrement((volatile LONG *)&v5->members);
LABEL_72:
    v24 = v5 == 0;
  }
  LOBYTE(v32) = 0;
  v31 = 1;
  if ( !v24 && !InterlockedDecrement((volatile LONG *)&v5->members) )
    (*(void (__thiscall **)(Ni2DBuffer *, int))v5->__vftable)(v5, 1);
  return v20;
}
