int __thiscall sub_7ACF40(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  NiNode *v5; // esi
  unsigned int v6; // ebx
  int *v7; // ecx
  int v8; // eax
  bool v9; // zf
  NiProperty *NiPropertyByID; // eax
  NiTPointerList_Node_void *v11; // eax
  unsigned __int16 *data; // ebp
  _DWORD **v13; // esi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int result; // eax
  _DWORD *v18; // esi
  int *v19; // ecx
  int v20; // eax
  int *v21; // ecx
  int v22; // eax
  NiNode *v23; // [esp+Ch] [ebp-Ch]
  NiTPointerList_Node_void *v24; // [esp+10h] [ebp-8h] BYREF
  NiDX9Renderer *v25; // [esp+14h] [ebp-4h]

  v25 = g_Renderer;
  v2 = *(this + 8);
  *(this + 0xC) = v2;
  if ( v2 )
  {
    v3 = *(this + 0xA);
    v4 = v2 - 1;
    *(this + 0xC) = v4;
    v5 = *(NiNode **)(v3 + 4 * v4);
    v23 = v5;
  }
  else
  {
    v23 = 0;
    v5 = 0;
  }
  if ( *(this + 0x16) )
    v6 = *(_DWORD *)(*(this + 0x14) + 8);
  else
    v6 = 0;
  byte_B42CDD = 1;
  if ( v5 )
  {
    while ( 1 )
    {
      if ( v6 && *(float *)(*(this + 0xB) + 4 * *(this + 0xC)) < (double)*(float *)(v6 + 0x14) )
      {
        sub_7ABAC0((_DWORD *)v6, 1);
        *(_DWORD *)v6 = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable';
        FormHeapFree(v6);
        v7 = (int *)*(this + 0x14);
        v8 = *v7;
        v9 = *v7 == 0;
        *(this + 0x14) = *v7;
        if ( v9 )
          *(this + 0x15) = 0;
        else
          *(_DWORD *)(v8 + 4) = 0;
        (*(void (__thiscall **)(_DWORD *, int *))(*(this + 0x13) + 8))(this + 0x13, v7);
        --*(this + 0x16);
        v5 = v23;
        if ( !*(this + 0x16) )
        {
          v6 = 0;
          goto LABEL_16;
        }
        v6 = *(_DWORD *)(*(this + 0x14) + 8);
      }
      else
      {
LABEL_16:
        NiPropertyByID = NiNode_GetNiPropertyByID(v5, 4);
        if ( !NiPropertyByID )
        {
          if ( *((_BYTE *)this + 0x21E3) )
            ((void (__thiscall *)(NiNode *, NiDX9Renderer *))v5->vtbl->AddObject)(v5, v25);
          goto LABEL_35;
        }
        if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) != 0xFFFFFFFF )
        {
          v24 = (NiTPointerList_Node_void *)*(this + 0x871);
          v11 = v24;
          if ( v24 )
          {
            while ( 2 )
            {
              data = (unsigned __int16 *)v11->data;
              v11 = v11->next;
              if ( !data || *(NiNode **)data != v23 )
                goto LABEL_31;
              v13 = *(_DWORD ***)(*(_DWORD *)data + 0xBC);
              if ( v13 )
              {
                if ( ((int (__thiscall *)(_DWORD))(*v13)[7])(*(_DWORD *)(*(_DWORD *)data + 0xBC)) >= 1
                  && ((int (__thiscall *)(_DWORD **))(*v13)[7])(v13) <= 5 )
                {
                  sub_7D1320((int *)data[2]);
                  goto LABEL_29;
                }
                if ( ((int (__thiscall *)(_DWORD **))(*v13)[7])(v13) == 0x1B )
                {
                  sub_7FD260(data[2]);
LABEL_29:
                  (*(void (__thiscall **)(_DWORD *))(*v13[0xC] + 0x48))(v13[0xC]);
                  (*(void (__thiscall **)(_DWORD *))(*v13[0xB] + 0x48))(v13[0xB]);
                }
              }
              sub_7A9820(data, data[2]);
              sub_7AA860((BSTextureManager *)this + 0x78, &v24);
              v11 = 0;
LABEL_31:
              v24 = v11;
              if ( !v11 )
                break;
              continue;
            }
          }
LABEL_35:
          v14 = *(this + 0xC);
          if ( !v14 )
            break;
          v15 = *(this + 0xA);
          v16 = v14 - 1;
          *(this + 0xC) = v16;
          v23 = *(NiNode **)(v15 + 4 * v16);
          v5 = v23;
          goto LABEL_37;
        }
        if ( LOWORD(dword_B42EAC) != 6 )
          ((void (__thiscall *)(NiNode *, NiDX9Renderer *))v5->vtbl->AddObject)(v5, v25);
LABEL_37:
        if ( !v5 )
          break;
      }
    }
  }
  result = *(this + 7);
  if ( result )
  {
    for ( ; *(_DWORD *)(result + 0xC); result = *(this + 7) )
    {
      v18 = (_DWORD *)*(this + 7);
      v19 = (int *)v18[1];
      v20 = *v19;
      v9 = *v19 == 0;
      v18[1] = *v19;
      if ( v9 )
        v18[2] = 0;
      else
        *(_DWORD *)(v20 + 4) = 0;
      (*(void (__thiscall **)(_DWORD *, int *))(*v18 + 8))(v18, v19);
      --v18[3];
    }
  }
  else
  {
    for ( ; *(this + 6); --*(this + 6) )
    {
      v21 = (int *)*(this + 4);
      v22 = *v21;
      v9 = *v21 == 0;
      *(this + 4) = *v21;
      if ( v9 )
        *(this + 5) = 0;
      else
        *(_DWORD *)(v22 + 4) = 0;
      result = (*(int (__thiscall **)(_DWORD *, int *))(*(this + 3) + 8))(this + 3, v21);
    }
  }
  return result;
}
