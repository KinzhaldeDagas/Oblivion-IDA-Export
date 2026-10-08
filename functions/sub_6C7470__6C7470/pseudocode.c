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

  v2 = arg0; /*0x6c7474*/
  sub_700750((NiTriBasedGeomData *)this, (int)arg0); /*0x6c747e*/
  NiTMap_GetAt((_DWORD *)*arg0, (int)this, &a2); /*0x6c748b*/
  v4 = a2; /*0x6c7490*/
  v5 = 0; /*0x6c7494*/
  v6 = *(this + 3) == 0; /*0x6c7496*/
  v24 = a2; /*0x6c7499*/
  v25 = 0; /*0x6c749d*/
  if ( !v6 ) /*0x6c74a1*/
  {
    do /*0x6c74b7*/
    {
      v7 = (int *)(*(this + 5) + v5); /*0x6c74b7*/
      if ( *v7 ) /*0x6c74b3*/
      {
        if ( *(this + 0x10) ) /*0x6c74c0*/
        {
          v9 = *v7; /*0x6c74f0*/
          if ( *(this + 0x11) ) /*0x6c74ec*/
          {
            v10 = NiTMap_GetAt((_DWORD *)*v2, v9, &a2); /*0x6c7508*/
            v11 = (Ni2DBuffer **)((char *)v4[1].__vftable + v5); /*0x6c7510*/
            if ( v10 ) /*0x6c7514*/
              NiSmartPointer_Set__(v11, a2); /*0x6c751b*/
            else
              OB_NiSmartPointer_Assign_010201A0((int *)v11, (int *)(v5 + *(this + 5))); /*0x6c7528*/
          }
          else
          {
            (*(void (__thiscall **)(int, int *))(*(_DWORD *)v9 + 0x38))(v9, v2); /*0x6c74fc*/
          }
          if ( NiTMap_GetAt((_DWORD *)*v2, *(_DWORD *)(*(this + 5) + v5 + 4), &a2) ) /*0x6c753c*/
          {
            vftable = v4[1].__vftable; /*0x6c7545*/
            v13 = *(Ni2DBuffer **)((char *)vftable + v5 + 4); /*0x6c7548*/
            v14 = (Ni2DBuffer **)((char *)vftable + v5 + 4); /*0x6c754c*/
            v15 = a2; /*0x6c7550*/
            if ( v13 != a2 ) /*0x6c7556*/
            {
              if ( v13 ) /*0x6c755e*/
              {
                if ( !InterlockedDecrement((volatile LONG *)&v13->members) ) /*0x6c7564*/
                  JUMPOUT(0x6C756E); /*0x6c756e*/
                v15 = a2; /*0x6c757c*/
              }
              *v14 = v15; /*0x6c7580*/
              goto LABEL_23; /*0x6c7583*/
            }
          }
          else
          {
            v16 = v24[1].__vftable; /*0x6c7589*/
            v17 = *(this + 5); /*0x6c758c*/
            v18 = *(_DWORD *)((char *)v16 + v5 + 4); /*0x6c758f*/
            v6 = v18 == *(_DWORD *)(v17 + v5 + 4); /*0x6c7593*/
            v19 = (Ni2DBuffer **)(v17 + v5 + 4); /*0x6c759b*/
            v26 = (Ni2DBuffer **)((char *)v16 + v5 + 4); /*0x6c759f*/
            if ( !v6 ) /*0x6c75a3*/
            {
              if ( v18 ) /*0x6c75a7*/
              {
                if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x6c75ad*/
                  (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x6c75c3*/
              }
              v15 = *v19; /*0x6c75c5*/
              *v26 = *v19; /*0x6c75cc*/
LABEL_23:
              if ( v15 ) /*0x6c75d0*/
                InterlockedIncrement((volatile LONG *)&v15->members); /*0x6c75d6*/
            }
          }
          v2 = arg0; /*0x6c75f6*/
          if ( NiTMap_GetAt((_DWORD *)*arg0, *(_DWORD *)(*(this + 5) + v5 + 8), &a2) ) /*0x6c75ef*/
          {
            v20 = v24; /*0x6c75fc*/
            *(_DWORD *)((char *)v24[1].__vftable + v5 + 8) = a2; /*0x6c7607*/
            v4 = v20; /*0x6c760b*/
          }
          else
          {
            v21 = v24; /*0x6c7612*/
            *(_DWORD *)((char *)v24[1].__vftable + v5 + 8) = *(_DWORD *)(*(this + 5) + v5 + 8); /*0x6c761d*/
            v4 = v21; /*0x6c7621*/
          }
          goto LABEL_28; /*0x6c760d*/
        }
        (*(void (__thiscall **)(int, int *))(*(_DWORD *)*v7 + 0x38))(*v7, v2); /*0x6c74ce*/
        v8 = *(_DWORD *)(*(this + 5) + v5 + 4); /*0x6c74d3*/
        if ( v8 ) /*0x6c74d9*/
          (*(void (__thiscall **)(int, int *))(*(_DWORD *)v8 + 0x38))(v8, v2); /*0x6c74e5*/
      }
LABEL_28:
      v5 += 0x10; /*0x6c7623*/
    }
    while ( (unsigned int)++v25 < *(this + 3) ); /*0x6c74b7*/
  }
  if ( NiTMap_GetAt((_DWORD *)*v2, *(this + 0x10), &a2) ) /*0x6c7645*/
    v4[3].members.super.m_uiRefCount = (UInt32)a2; /*0x6c7652*/
  else
    v4[3].members.super.m_uiRefCount = *(this + 0x10); /*0x6c765a*/
  if ( NiTMap_GetAt((_DWORD *)*v2, *(this + 0x16), &a2) ) /*0x6c7668*/
    v4[4].members.width = (UInt32)a2; /*0x6c7675*/
  else
    v4[4].members.width = *(this + 0x16); /*0x6c767d*/
  if ( NiTMap_GetAt((_DWORD *)*v2, *(this + 0x18), &a2) ) /*0x6c768b*/
    v4[4].members.data = (NiDX92DBufferData *)a2; /*0x6c769a*/
  else
    v4[4].members.data = (NiDX92DBufferData *)*(this + 0x18); /*0x6c76aa*/
}
