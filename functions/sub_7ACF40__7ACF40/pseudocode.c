// MoonSugarEffect decode: drains immediate geometry groups/nodes during accumulator flush, interleaving queued RenderPass lists by depth and using sub_7A9820 for property-owned shader IDs.
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

  v25 = renderer; /*0x7acf4d*/
  v2 = *(this + 8); /*0x7acf51*/
  *(this + 0xC) = v2; /*0x7acf58*/
  if ( v2 ) /*0x7acf5b*/
  {
    v3 = *(this + 0xA); /*0x7acf5d*/
    v4 = v2 - 1; /*0x7acf60*/
    *(this + 0xC) = v4; /*0x7acf63*/
    v5 = *(NiNode **)(v3 + 4 * v4); /*0x7acf66*/
    v23 = v5; /*0x7acf69*/
  }
  else
  {
    v23 = 0; /*0x7acf6f*/
    v5 = 0; /*0x7acf73*/
  }
  if ( *(this + 0x16) ) /*0x7acf75*/
    v6 = *(_DWORD *)(*(this + 0x14) + 8); /*0x7acf7e*/
  else
    v6 = 0; /*0x7acf83*/
  unk_B42CDD = 1; /*0x7acf87*/
  if ( v5 ) /*0x7acf8e*/
  {
    while ( 1 ) /*0x7acf94*/
    {
      if ( v6 && *(float *)(*(this + 0xB) + 4 * *(this + 0xC)) < (double)*(float *)(v6 + 0x14) ) /*0x7acfab*/
      {
        BSShaderAccumulator_DrainRenderPassList((_DWORD *)v6, 1);// Pass249 runtime correction: decoded native RenderPassListDrain call, but do not patch this callsite. The seven-callsite rendered-reference transaction repeatedly caused the identical world-load StackHash access violation. Preserve the native call. /*0x7acfb2*/
        *(_DWORD *)v6 = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable'; /*0x7acfb8*/
        FormHeapFree(v6); /*0x7acfbe*/
        v7 = (int *)*(this + 0x14); /*0x7acfc3*/
        v8 = *v7; /*0x7acfc6*/
        v9 = *v7 == 0; /*0x7acfce*/
        *(this + 0x14) = *v7; /*0x7acfd0*/
        if ( v9 ) /*0x7acfd3*/
          *(this + 0x15) = 0; /*0x7acfda*/
        else
          *(_DWORD *)(v8 + 4) = 0; /*0x7acfd5*/
        (*(void (__thiscall **)(_DWORD *, int *))(*(this + 0x13) + 8))(this + 0x13, v7); /*0x7acfe5*/
        --*(this + 0x16); /*0x7acfe7*/
        v5 = v23; /*0x7acfee*/
        if ( !*(this + 0x16) ) /*0x7acff2*/
        {
          v6 = 0; /*0x7acffc*/
          goto LABEL_16; /*0x7acffc*/
        }
        v6 = *(_DWORD *)(*(this + 0x14) + 8); /*0x7acff7*/
      }
      else
      {
LABEL_16:
        NiPropertyByID = NiNode_GetNiPropertyByID(v5, 4); /*0x7acffe*/
        if ( !NiPropertyByID ) /*0x7ad009*/
        {
          if ( *((_BYTE *)this + 0x21E3) ) /*0x7ad104*/
            ((void (__thiscall *)(NiNode *, NiDX9Renderer *))v5->vtbl->AddObject)(v5, v25); /*0x7ad11c*/
          goto LABEL_35; /*0x7ad11c*/
        }
        if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) != 0xFFFFFFFF ) /*0x7ad01b*/
        {
          v24 = (NiTPointerList_Node_void *)*(this + 0x871); /*0x7ad049*/
          v11 = v24; /*0x7ad041*/
          if ( v24 ) /*0x7ad04d*/
          {
            while ( 2 ) /*0x7ad053*/
            {
              data = (unsigned __int16 *)v11->data; /*0x7ad053*/
              v11 = v11->next; /*0x7ad05b*/
              if ( !data || *(NiNode **)data != v23 ) /*0x7ad06a*/
                goto LABEL_31; /*0x7ad06a*/
              v13 = *(_DWORD ***)(*(_DWORD *)data + 0xBC); /*0x7ad070*/
              if ( v13 ) /*0x7ad078*/
              {
                if ( ((int (__thiscall *)(_DWORD))(*v13)[7])(*(_DWORD *)(*(_DWORD *)data + 0xBC)) >= 1 /*0x7ad094*/
                  && ((int (__thiscall *)(_DWORD **))(*v13)[7])(v13) <= 5 )
                {
                  sub_7D1320((int *)data[2]); /*0x7ad09d*/
                  goto LABEL_29; /*0x7ad0a2*/
                }
                if ( ((int (__thiscall *)(_DWORD **))(*v13)[7])(v13) == 0x1B ) /*0x7ad0b0*/
                {
                  Lighting30Shader_SelectRenderPass(data[2]); /*0x7ad0b9*/
LABEL_29:
                  (*(void (__thiscall **)(_DWORD *))(*v13[0xC] + 0x48))(v13[0xC]); /*0x7ad0be*/
                  (*(void (__thiscall **)(_DWORD *))(*v13[0xB] + 0x48))(v13[0xB]); /*0x7ad0d3*/
                }
              }
              BSShaderAccumulator_DrawRenderPass(data, data[2]); /*0x7ad0dd*/
              NiTPointerList_RemoveNode((BSTextureManager *)this + 0x78, &v24); /*0x7ad0ed*/
              v11 = 0; /*0x7ad0f2*/
LABEL_31:
              v24 = v11; /*0x7ad0f4*/
              if ( !v11 ) /*0x7ad0fa*/
                break; /*0x7ad0fa*/
              continue; /*0x7ad0fa*/
            }
          }
LABEL_35:
          v14 = *(this + 0xC); /*0x7ad11e*/
          if ( !v14 ) /*0x7ad123*/
            break; /*0x7ad123*/
          v15 = *(this + 0xA); /*0x7ad125*/
          v16 = v14 - 1; /*0x7ad128*/
          *(this + 0xC) = v16; /*0x7ad12b*/
          v23 = *(NiNode **)(v15 + 4 * v16); /*0x7ad131*/
          v5 = v23; /*0x7ad135*/
          goto LABEL_37; /*0x7ad135*/
        }
        if ( *(_WORD *)&OB_RendererGlobalState_010201A0[0x13] != 6 ) /*0x7ad025*/
          ((void (__thiscall *)(NiNode *, NiDX9Renderer *))v5->vtbl->AddObject)(v5, v25); /*0x7ad03a*/
LABEL_37:
        if ( !v5 ) /*0x7ad139*/
          break; /*0x7ad139*/
      }
    }
  }
  result = *(this + 7); /*0x7ad13f*/
  if ( result ) /*0x7ad145*/
  {
    for ( ; *(_DWORD *)(result + 0xC); result = *(this + 7) ) /*0x7ad147*/
    {
      v18 = (_DWORD *)*(this + 7); /*0x7ad150*/
      v19 = (int *)v18[1]; /*0x7ad153*/
      v20 = *v19; /*0x7ad156*/
      v9 = *v19 == 0; /*0x7ad158*/
      v18[1] = *v19; /*0x7ad15a*/
      if ( v9 ) /*0x7ad15d*/
        v18[2] = 0; /*0x7ad164*/
      else
        *(_DWORD *)(v20 + 4) = 0; /*0x7ad15f*/
      (*(void (__thiscall **)(_DWORD *, int *))(*v18 + 8))(v18, v19); /*0x7ad16f*/
      --v18[3]; /*0x7ad171*/
    }
  }
  else
  {
    for ( ; *(this + 6); --*(this + 6) ) /*0x7ad184*/
    {
      v21 = (int *)*(this + 4); /*0x7ad190*/
      v22 = *v21; /*0x7ad193*/
      v9 = *v21 == 0; /*0x7ad195*/
      *(this + 4) = *v21; /*0x7ad197*/
      if ( v9 ) /*0x7ad19a*/
        *(this + 5) = 0; /*0x7ad1a1*/
      else
        *(_DWORD *)(v22 + 4) = 0; /*0x7ad19c*/
      result = (*(int (__thiscall **)(_DWORD *, int *))(*(this + 3) + 8))(this + 3, v21); /*0x7ad1ac*/
    }
  }
  return result; /*0x7ad17d*/
}
