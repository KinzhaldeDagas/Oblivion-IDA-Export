void sub_572170()
{
  float *v4; // esi
  int v5; // ebx
  double v6; // st6
  InterfaceManager *Singleton; // eax
  NiTPointerList_Node_void *v8; // edi
  NiAVObject *v9; // edi
  double v10; // st7
  _DWORD *v11; // ebx
  float *v12; // esi
  int v13; // edx
  NiTPointerList_Node_void *v14; // eax
  BSTextureManager *v15; // ecx
  bool v16; // zf
  NiTPointerList_Node_void *v17; // edi
  double v18; // st6
  float v19; // edi
  int v20; // edi
  NiTPointerList_Node_void *v21; // eax
  NiTPointerList_Node_void *v22; // edi
  float *v23; // [esp+10h] [ebp-Ch]
  float v24; // [esp+14h] [ebp-8h] BYREF
  float v25; // [esp+18h] [ebp-4h] BYREF

  if ( !InterfaceManager_IsMenuMode() )
  {
    v23 = sub_571F90(1);
    v4 = v23 + 3;
    v5 = 0xC8;
    do
    {
      if ( v4[3] > 0.0 )
      {
        v24 = v4[3] - flt_B33E9C;
        v6 = v24;
        v4[3] = v24;
        if ( v6 <= 0.0 )
        {
          if ( *(_DWORD *)v4 )
          {
            Singleton = InterfaceManager_GetSingleton(0, 1);
            Singleton->unk070->vtbl->RemoveObject(Singleton->unk070, (NiAVObject **)&v25, *(NiAVObject **)v4);
            if ( v25 != 0.0 )
            {
              v8 = (NiTPointerList_Node_void *)LODWORD(v25);
              if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v25) + 4)) )
                ((void (__thiscall *)(NiTPointerList_Node_void *, int))v8->next->next)(v8, 1);
            }
            v9 = *(NiAVObject **)v4;
            if ( *(_DWORD *)v4 )
            {
              if ( !InterlockedDecrement((volatile LONG *)&v9->members) )
              {
                if ( v9 )
                  v9->vtbl->super.super.Destructor((NiRefObject *)v9, 1);
              }
              *v4 = 0.0;
            }
            v4[0xFFFFFFFF] = 0.0;
            v4[0xFFFFFFFD] = 0.0;
            v4[0xFFFFFFFE] = 0.0;
            FormHeapFree(*((_DWORD *)v4 + 1));
            v10 = flt_A30634;
            v4[1] = 0.0;
            *((_WORD *)v4 + 5) = 0;
            *((_WORD *)v4 + 4) = 0;
            v4[3] = v10;
          }
        }
      }
      v4 += 7;
      --v5;
    }
    while ( v5 );
    v11 = *((_DWORD **)v23 + 0x579);
    if ( v11 )
    {
      while ( 1 )
      {
        v12 = (float *)v11[2];
        v13 = *((_DWORD *)v12 + 3);
        v11 = (_DWORD *)*v11;
        if ( *(_DWORD *)(v13 + 4) < 2u )
          break;
        if ( v12[6] <= 0.0 )
          goto LABEL_41;
        v25 = v12[6] - flt_B33E9C;
        v18 = v25;
        v12[6] = v25;
        if ( v18 >= 0.0 )
          goto LABEL_41;
        (*(void (__thiscall **)(_DWORD, float *, int))(**(_DWORD **)(v13 + 0x1C) + 0x88))(
          *(_DWORD *)(v13 + 0x1C),
          &v24,
          v13);
        if ( v24 != 0.0 )
        {
          v19 = v24;
          if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v24) + 4)) )
            (**(void (__thiscall ***)(float, int))LODWORD(v19))(COERCE_FLOAT(LODWORD(v19)), 1);
        }
        v20 = *((_DWORD *)v12 + 3);
        if ( v20 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) )
            (**(void (__thiscall ***)(int, int))v20)(v20, 1);
          v12[3] = 0.0;
        }
        v21 = *((NiTPointerList_Node_void **)v23 + 0x579);
        v15 = (BSTextureManager *)(v23 + 0x578);
        if ( v21 )
        {
          while ( 1 )
          {
            v16 = v12 == v21->data;
            v22 = v21;
            v21 = v21->next;
            if ( v16 )
              break;
            if ( !v21 )
              goto LABEL_38;
          }
        }
        else
        {
LABEL_38:
          *(float *)&v22 = 0.0;
        }
        v25 = *(float *)&v22;
        if ( *(float *)&v22 != 0.0 )
          goto LABEL_23;
LABEL_24:
        if ( v12 )
        {
          sub_571DF0(v12);
          FormHeapFree((unsigned int)v12);
        }
LABEL_41:
        if ( !v11 )
          return;
      }
      v14 = *((NiTPointerList_Node_void **)v23 + 0x579);
      v15 = (BSTextureManager *)(v23 + 0x578);
      if ( v14 )
      {
        while ( 1 )
        {
          v16 = v12 == v14->data;
          v17 = v14;
          v14 = v14->next;
          if ( v16 )
            break;
          if ( !v14 )
            goto LABEL_21;
        }
      }
      else
      {
LABEL_21:
        *(float *)&v17 = 0.0;
      }
      v25 = *(float *)&v17;
      if ( *(float *)&v17 == 0.0 )
        goto LABEL_24;
LABEL_23:
      v12 = (float *)sub_7AA860(v15, (NiTPointerList_Node_void **)&v25);
      goto LABEL_24;
    }
  }
}
