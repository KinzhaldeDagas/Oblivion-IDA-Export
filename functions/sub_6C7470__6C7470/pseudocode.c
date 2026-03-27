void __thiscall sub_6C7470(_DWORD *this, int *arg0)
{
  int *v2; // ebx
  Ni2DBuffer *v4; // ebp
  int v5; // esi
  bool v6; // zf
  int *v7; // eax
  int v8; // ecx
  int v9; // eax
  char v10; // al
  Ni2DBuffer **v11; // ecx
  #9279 *vftable; // eax
  Ni2DBuffer *v13; // ebx
  Ni2DBuffer **v14; // ebp
  Ni2DBuffer *v15; // eax
  #9279 *v16; // eax
  int v17; // ecx
  int v18; // ebx
  Ni2DBuffer **v19; // ebp
  Ni2DBuffer *v20; // eax
  Ni2DBuffer *v21; // ecx
  Ni2DBuffer *a2; // [esp+10h] [ebp-10h] BYREF
  Ni2DBuffer *v24; // [esp+14h] [ebp-Ch]
  int v25; // [esp+18h] [ebp-8h]
  Ni2DBuffer **v26; // [esp+1Ch] [ebp-4h]

  v2 = arg0;
  sub_700750((NiTriBasedGeomData *)this, (int)arg0);
  NiTMap_GetAt((_DWORD *)*arg0, (int)this, &a2);
  v4 = a2;
  v5 = 0;
  v6 = *(this + 3) == 0;
  v24 = a2;
  v25 = 0;
  if ( !v6 )
  {
    do
    {
      v7 = (int *)(*(this + 5) + v5);
      if ( *v7 )
      {
        if ( *(this + 0x10) )
        {
          v9 = *v7;
          if ( *(this + 0x11) )
          {
            v10 = NiTMap_GetAt((_DWORD *)*v2, v9, &a2);
            v11 = (Ni2DBuffer **)((char *)v4[1].__vftable + v5);
            if ( v10 )
              NiSmartPointer_Set__(v11, a2);
            else
              sub_55E2A0((int *)v11, (int *)(v5 + *(this + 5)));
          }
          else
          {
            (*(void (__thiscall **)(int, int *))(*(_DWORD *)v9 + 0x38))(v9, v2);
          }
          if ( NiTMap_GetAt((_DWORD *)*v2, *(_DWORD *)(*(this + 5) + v5 + 4), &a2) )
          {
            vftable = v4[1].__vftable;
            v13 = *(Ni2DBuffer **)((char *)vftable + v5 + 4);
            v14 = (Ni2DBuffer **)((char *)vftable + v5 + 4);
            v15 = a2;
            if ( v13 != a2 )
            {
              if ( v13 )
              {
                if ( !InterlockedDecrement((volatile LONG *)&v13->members) )
                  JUMPOUT(0x6C756E);
                v15 = a2;
              }
              *v14 = v15;
              goto LABEL_23;
            }
          }
          else
          {
            v16 = v24[1].__vftable;
            v17 = *(this + 5);
            v18 = *(_DWORD *)((char *)v16 + v5 + 4);
            v6 = v18 == *(_DWORD *)(v17 + v5 + 4);
            v19 = (Ni2DBuffer **)(v17 + v5 + 4);
            v26 = (Ni2DBuffer **)((char *)v16 + v5 + 4);
            if ( !v6 )
            {
              if ( v18 )
              {
                if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) )
                  (**(void (__thiscall ***)(int, int))v18)(v18, 1);
              }
              v15 = *v19;
              *v26 = *v19;
LABEL_23:
              if ( v15 )
                InterlockedIncrement((volatile LONG *)&v15->members);
            }
          }
          v2 = arg0;
          if ( NiTMap_GetAt((_DWORD *)*arg0, *(_DWORD *)(*(this + 5) + v5 + 8), &a2) )
          {
            v20 = v24;
            *(_DWORD *)((char *)v24[1].__vftable + v5 + 8) = a2;
            v4 = v20;
          }
          else
          {
            v21 = v24;
            *(_DWORD *)((char *)v24[1].__vftable + v5 + 8) = *(_DWORD *)(*(this + 5) + v5 + 8);
            v4 = v21;
          }
          goto LABEL_28;
        }
        (*(void (__thiscall **)(int, int *))(*(_DWORD *)*v7 + 0x38))(*v7, v2);
        v8 = *(_DWORD *)(*(this + 5) + v5 + 4);
        if ( v8 )
          (*(void (__thiscall **)(int, int *))(*(_DWORD *)v8 + 0x38))(v8, v2);
      }
LABEL_28:
      v5 += 0x10;
    }
    while ( (unsigned int)++v25 < *(this + 3) );
  }
  if ( NiTMap_GetAt((_DWORD *)*v2, *(this + 0x10), &a2) )
    v4[3].members.super.m_uiRefCount = (UInt32)a2;
  else
    v4[3].members.super.m_uiRefCount = *(this + 0x10);
  if ( NiTMap_GetAt((_DWORD *)*v2, *(this + 0x16), &a2) )
    v4[4].members.width = (UInt32)a2;
  else
    v4[4].members.width = *(this + 0x16);
  if ( NiTMap_GetAt((_DWORD *)*v2, *(this + 0x18), &a2) )
    v4[4].members.data = (NiDX92DBufferData *)a2;
  else
    v4[4].members.data = (NiDX92DBufferData *)*(this + 0x18);
}
