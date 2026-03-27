int __thiscall NiRenderer_GetRenderedSurface(
        BSTextureManager *this,
        NiTPointerList_Node_void *a2,
        int a3,
        int a4,
        unsigned int a5,
        int a6,
        int a7)
{
  NiTPointerList_Node_void *v7; // ebp
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  NiTPointerList_Node_void *v13; // edi
  _DWORD *data; // esi
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int *v23; // eax
  int *v24; // esi
  int v25; // eax
  int v26; // ecx
  bool v27; // cc
  int *v28; // edi
  Ni2DBuffer *v29; // eax
  NiTPointerList_Node_void *v30; // eax
  NiTPointerList_Node_void *end; // ecx
  _DWORD *v33; // [esp+10h] [ebp-10h]
  int v35; // [esp+18h] [ebp-8h]
  int v36; // [esp+1Ch] [ebp-4h]

  v7 = a2;
  v33 = 0;
  v9 = ((int (__thiscall *)(NiTPointerList_Node_void *))a2->next[0xA].prev)(a2);
  v36 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 0x4C))(v9, 0);
  v10 = ((int (__thiscall *)(NiTPointerList_Node_void *))v7->next[0xA].prev)(v7);
  v11 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v10 + 0x50))(v10, 0);
  v12 = a6;
  v35 = v11;
  if ( a6 )
  {
    if ( (a5 & 8) == 0 )
    {
      switch ( a6 )
      {
        case 0x14:
          if ( !byte_B42E98[5] )
            goto NiRenderer_GetRenderedSurface___def_7C1BC5;
          break;
        case 0x15:
          if ( !byte_B42E98[6] )
            goto NiRenderer_GetRenderedSurface___def_7C1BC5;
          break;
        case 0x16:
          if ( !byte_B42E98[7] )
            goto NiRenderer_GetRenderedSurface___def_7C1BC5;
          break;
        case 0x17:
          if ( !byte_B42E98[0] )
            goto NiRenderer_GetRenderedSurface___def_7C1BC5;
          break;
        case 0x18:
          if ( !byte_B42E98[1] )
            goto NiRenderer_GetRenderedSurface___def_7C1BC5;
          break;
        case 0x19:
          if ( !byte_B42E98[2] )
            goto NiRenderer_GetRenderedSurface___def_7C1BC5;
          break;
        case 0x1A:
          if ( !byte_B42E98[3] )
            goto NiRenderer_GetRenderedSurface___def_7C1BC5;
          break;
        case 0x24:
          if ( !byte_B42E98[0xA] )
            goto NiRenderer_GetRenderedSurface___def_7C1BC5;
          break;
        case 0x32:
          if ( !byte_B42E98[0xC] )
            goto NiRenderer_GetRenderedSurface___def_7C1BC5;
          break;
        case 0x51:
          if ( !byte_B42E98[4] )
            goto NiRenderer_GetRenderedSurface___def_7C1BC5;
          break;
        case 0x71:
          if ( !byte_B42E98[9] )
            goto NiRenderer_GetRenderedSurface___def_7C1BC5;
          break;
        case 0x72:
          if ( !byte_B42E98[8] )
            goto NiRenderer_GetRenderedSurface___def_7C1BC5;
          break;
        case 0x74:
          if ( !byte_B42E98[0xB] )
            goto NiRenderer_GetRenderedSurface___def_7C1BC5;
          break;
        default:
NiRenderer_GetRenderedSurface___def_7C1BC5:
          if ( a6 == 0x24 )
          {
            a6 = 0x71;
            v12 = 0x71;
          }
          break;
      }
    }
  }
  a2 = this->unk00.start;
  v13 = a2;
  if ( a2 )
  {
    do
    {
      if ( v33 )
      {
        a2 = v13;
        goto LABEL_67;
      }
      data = v13->data;
      v15 = *(_DWORD *)(*data + 0x20);
      if ( v15 )
        v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 0x4C))(v15);
      else
        v16 = 0;
      if ( (v16 == a3
         || !a3
         && ((v17 = *(_DWORD *)(*data + 0x20)) == 0
           ? (v18 = 0)
           : (v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x4C))(v17)),
             v18 == v36))
        && ((v19 = *(_DWORD *)(*data + 0x20)) == 0
          ? (v20 = 0)
          : (v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 0x50))(v19)),
            (v20 == a4
          || !a4
          && ((v21 = *(_DWORD *)(*data + 0x20)) == 0
            ? (v22 = 0)
            : (v22 = (*(int (__thiscall **)(int))(*(_DWORD *)v21 + 0x50))(v21)),
              v22 == v35))
         && data[1] == v12
         && data[2] == a7
         && (data[3] | 0x22) == (a5 | 0x22)) )
      {
        v33 = data;
      }
      else
      {
        v13 = v13->next;
      }
    }
    while ( v13 );
    a2 = 0;
    if ( !v33 )
      goto LABEL_58;
LABEL_67:
    sub_7AA860(this, &a2);
    *((_BYTE *)v33 + 0x10) = 1;
    v28 = v33;
  }
  else
  {
LABEL_58:
    v23 = (int *)FormHeapAlloc(0x14u);
    if ( v23 )
    {
      *v23 = 0;
      v24 = v23;
    }
    else
    {
      v24 = 0;
    }
    v25 = a7;
    v24[3] = a5;
    v26 = a3;
    v27 = a3 <= 0;
    v24[1] = v12;
    v28 = v24;
    v24[2] = v25;
    *((_BYTE *)v24 + 0x10) = 1;
    if ( v27 || a4 <= 0 )
      v29 = (Ni2DBuffer *)sub_7C1430(this, (int)v7, v36, v35, a6, v25, a5);
    else
      v29 = (Ni2DBuffer *)sub_7C1430(this, (int)v7, v26, a4, a6, v25, a5);
    NiSmartPointer_Set__((Ni2DBuffer **)v24, v29);
  }
  v30 = (NiTPointerList_Node_void *)(*((int (__thiscall **)(NiTPointerList_void *))this->unk10.__vftable + 1))(&this->unk10);
  v30->data = v28;
  v30->next = 0;
  v30->prev = this->unk10.end;
  end = this->unk10.end;
  if ( end )
  {
    end->next = v30;
    ++this->unk10.numItems;
  }
  else
  {
    ++this->unk10.numItems;
    this->unk10.start = v30;
  }
  this->unk10.end = v30;
  return *v28;
}
