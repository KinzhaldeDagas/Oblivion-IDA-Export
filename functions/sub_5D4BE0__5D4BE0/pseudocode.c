void __thiscall sub_5D4BE0(char *this)
{
  char *v4; // edi
  int v5; // eax
  _DWORD *v6; // esi
  void (__thiscall ***v7)(_DWORD); // ecx
  void (__thiscall *v8)(_DWORD); // edx
  int v9; // eax
  int v10; // ebp
  char *v11; // edx
  unsigned int v12; // esi
  _DWORD *v13; // eax
  unsigned int v14; // ecx
  int *v15; // eax
  int *v16; // edi
  TileMenu *tile; // eax
  int v18; // edx
  int v19; // ecx
  Tile *v20; // eax
  Tile *v21; // esi
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // ecx
  const char *v26; // eax
  Tile *v27; // ecx
  int v28; // [esp+4h] [ebp-174h] BYREF
  char *v29; // [esp+8h] [ebp-170h]
  BSStringT v30; // [esp+Ch] [ebp-16Ch]
  int v31; // [esp+14h] [ebp-164h]
  int v32; // [esp+18h] [ebp-160h]
  int v33; // [esp+1Ch] [ebp-15Ch]
  _DWORD *a2; // [esp+20h] [ebp-158h]
  _DWORD *v35; // [esp+24h] [ebp-154h]
  _DWORD *v36; // [esp+28h] [ebp-150h]
  float value; // [esp+2Ch] [ebp-14Ch]
  int v38; // [esp+30h] [ebp-148h]
  unsigned int v39; // [esp+34h] [ebp-144h]
  _DWORD *v40; // [esp+38h] [ebp-140h]
  int a3; // [esp+3Ch] [ebp-13Ch]
  Menu *v42; // [esp+40h] [ebp-138h]
  BSStringT v43; // [esp+44h] [ebp-134h] BYREF
  int v44[2]; // [esp+4Ch] [ebp-12Ch] BYREF
  int v45; // [esp+54h] [ebp-124h]
  Tile *parent; // [esp+58h] [ebp-120h]
  int v47; // [esp+5Ch] [ebp-11Ch]
  char *v48; // [esp+60h] [ebp-118h]
  int v49; // [esp+64h] [ebp-114h]
  int v50; // [esp+68h] [ebp-110h]
  int v51[59]; // [esp+6Ch] [ebp-10Ch] BYREF
  char v52; // [esp+158h] [ebp-20h]
  int v53; // [esp+170h] [ebp-8h]

  v4 = this; /*0x5d4c1b*/
  v5 = *((_DWORD *)this + 0xF); /*0x5d4c1d*/
  v6 = *(_DWORD **)(v5 + 0x34); /*0x5d4c20*/
  v43.m_data = this; /*0x5d4c27*/
  v47 = v5; /*0x5d4c2b*/
  while ( v6 ) /*0x5d4c2f*/
  {
    v7 = (void (__thiscall ***)(_DWORD))v6[2]; /*0x5d4c31*/
    v6 = (_DWORD *)*v6; /*0x5d4c39*/
    if ( v7 ) /*0x5d4c3b*/
    {
      v8 = **v7; /*0x5d4c3f*/
      v35 = (_DWORD *)1; /*0x5d4c41*/
      v8(v7); /*0x5d4c43*/
    }
  }
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(*((_DWORD *)v4 + 0xF) + 0x30)); /*0x5d4c4f*/
  v43.m_data = 0; /*0x5d4c5e*/
  v43.m_dataLen = 0; /*0x5d4c62*/
  v43.m_bufLen = 0; /*0x5d4c67*/
  BSStringT_Set(&v43, "added_effect_template", 0); /*0x5d4c6c*/
  v9 = *((_DWORD *)v4 + 0xA); /*0x5d4c71*/
  v53 = 0; /*0x5d4c76*/
  if ( v9 ) /*0x5d4c7d*/
  {
    v10 = 0; /*0x5d4c83*/
    v11 = (char *)(v9 + 0x78); /*0x5d4c85*/
    v12 = 0; /*0x5d4c88*/
    v45 = v9 + 0x78; /*0x5d4c8a*/
    *(float *)&v40 = 0.0; /*0x5d4c8e*/
    a3 = 0; /*0x5d4c92*/
    while ( 1 ) /*0x5d4c96*/
    {
      v13 = v11 + 4; /*0x5d4c96*/
      v14 = 0; /*0x5d4c99*/
      if ( v11 == (char *)0xFFFFFFFC ) /*0x5d4c9d*/
        break; /*0x5d4c9d*/
      do /*0x5d4caf*/
      {
        if ( *v13 ) /*0x5d4ca3*/
          ++v14; /*0x5d4ca7*/
        v13 = (_DWORD *)v13[1]; /*0x5d4caa*/
      }
      while ( v13 ); /*0x5d4caf*/
      if ( v12 >= v14 ) /*0x5d4cb3*/
        break; /*0x5d4cb3*/
      EffectItemList_GetItemByIndex2(v11, v12); /*0x5d4cbc*/
      v16 = v15; /*0x5d4cc5*/
      tile = v42[1].members.tile; /*0x5d4cc7*/
      if ( tile ) /*0x5d4ccc*/
      {
        v18 = v16[4]; /*0x5d4cd2*/
        if ( !v18 && ((v19 = *((_DWORD *)tile + 2), *(_BYTE *)(v19 + 4) == 0x16) || *(_BYTE *)(v19 + 4) == 0x14) /*0x5d4cf8*/
          || v18 == 1 && *(_BYTE *)(*((_DWORD *)tile + 2) + 4) == 0x21 )
        {
          v20 = Menu::RenderTemplate(v42, parent, v43.m_data, 0); /*0x5d4d0b*/
          v21 = v20; /*0x5d4d10*/
          if ( v20 ) /*0x5d4d14*/
          {
            *(float *)&v40 = (float)(int)v40; /*0x5d4d21*/
            Tile_SetFloat(v20, 0xFAAu, *(float *)&v40); /*0x5d4d31*/
            Tile_SetFloat(v21, 0xFAEu, *(float *)&v40); /*0x5d4d45*/
            v40 = (_DWORD *)(v10 + 0xBB8); /*0x5d4d50*/
            *(float *)&a2 = (float)(v10 + 0xBB8); /*0x5d4d5b*/
            Tile_SetFloat(v21, 0xFA8u, *(float *)&a2); /*0x5d4d63*/
            v22 = v16[4]; /*0x5d4d6a*/
            ++v10; /*0x5d4d6d*/
            LOBYTE(v23) = v22 == 1; /*0x5d4d73*/
            LOBYTE(v24) = v22 == 0; /*0x5d4d78*/
            v29 = *(char **)EffectItem_BuildDisplayString( /*0x5d4d96*/
                              (int)v44,
                              6,
                              COERCE_INT(1.0),
                              v24,
                              0,
                              v23,
                              (int)v35,
                              (int)v36,
                              SLODWORD(value),
                              v38,
                              v39,
                              v10,
                              a3,
                              (int)v42,
                              (int)v43.m_data,
                              *(int *)&v43.m_dataLen,
                              v44[0],
                              v44[1],
                              v45,
                              (int)parent,
                              v47,
                              (int)v48,
                              v49,
                              v50,
                              v51[0],
                              v51[1],
                              v51[2],
                              v51[3],
                              v51[4],
                              v51[5],
                              v51[6],
                              v51[7],
                              v51[8],
                              v51[9],
                              v51[0xA],
                              v51[0xB],
                              v51[0xC],
                              v51[0xD],
                              v51[0xE]);
            v52 = 1; /*0x5d4d9e*/
            Tile_SetString(v21, (_DWORD *)0xFB0, v29); /*0x5d4da6*/
            v52 = 0; /*0x5d4db0*/
            FormHeapFree(v39); /*0x5d4db7*/
            v43.m_data = (char *)&v28; /*0x5d4dbf*/
            v39 = 0; /*0x5d4dc6*/
            *(float *)&v40 = 0.0; /*0x5d4dcf*/
            EffectItem_GetName(v16, (int)&v28, v25, (int)v29, v30, v31, v32, v33, (int)a2, (BSStringT *)v35); /*0x5d4dd4*/
            sub_58A020((BSStringT *)v21, (char *)v36, SLODWORD(value)); /*0x5d4ddb*/
            v26 = *(const char **)(v16[7] + 0x48); /*0x5d4de6*/
            if ( !v26 ) /*0x5d4deb*/
              v26 = EmptyString; /*0x5d4ded*/
            _sprintf((char *)v51, "%s\\%s", "Icons", v26); /*0x5d4e02*/
            Tile_SetString(v21, (_DWORD *)0xFAF, (char *)v51); /*0x5d4e16*/
            value = (float)*v16; /*0x5d4e20*/
            Tile_SetFloat(v21, 0xFB2u, value); /*0x5d4e28*/
            Tile_SetFloat(v21, 0xFB4u, flt_A6BC94); /*0x5d4e3e*/
            value = Tile_GetFloat((_DWORD *)*(_DWORD *)(v44[0] + 0x4C), 0xFB5); /*0x5d4e55*/
            Tile_SetFloat(v21, 0xFB6u, value); /*0x5d4e5f*/
          }
        }
      }
      ++*(_DWORD *)&v43.m_dataLen; /*0x5d4e64*/
      v4 = (char *)v44[0]; /*0x5d4e69*/
      v12 = *(_DWORD *)&v43.m_dataLen; /*0x5d4e6d*/
      v11 = v48; /*0x5d4e71*/
    }
  }
  v27 = *((Tile **)v4 + 0x14); /*0x5d4e7a*/
  if ( v27 ) /*0x5d4e7f*/
  {
    Tile_SetFloat(v27, 0xFB7u, flt_A6BC04); /*0x5d4e90*/
    Tile_SetFloat(*((Tile **)v4 + 0x14), 0xFB7u, 0.0); /*0x5d4ea3*/
  }
  FormHeapFree((unsigned int)v43.m_data); /*0x5d4ead*/
}
