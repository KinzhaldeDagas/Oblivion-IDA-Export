char __thiscall sub_6E9220(NiTriBasedGeomData *this, int a2)
{
  _DWORD *v2; // edi
  NiTriBasedGeomData *v3; // ebx
  UInt16 serial; // cx
  unsigned int v6; // eax
  _DWORD *v7; // esi
  _DWORD *v8; // ebp
  int v9; // ecx
  unsigned int v10; // edi
  unsigned int v11; // ecx
  _DWORD *v12; // ebp
  _DWORD *v13; // eax
  int v14; // edx
  int v15; // esi
  _DWORD *v16; // edi
  _DWORD *v17; // ebx
  int v18; // esi
  int v19; // ecx
  unsigned int v20; // [esp+Ch] [ebp-Ch]
  unsigned int i; // [esp+Ch] [ebp-Ch]
  _DWORD *v22; // [esp+10h] [ebp-8h]

  v2 = (_DWORD *)a2; /*0x6e9225*/
  v3 = this; /*0x6e9229*/
  if ( !NiTimeController_IsEqual(this, a2) ) /*0x6e9230*/
    return 0; /*0x6e9230*/
  if ( *(_DWORD *)&v3->members.super.m_bVertexStreamLocked != *(_DWORD *)(a2 + 0x3C) ) /*0x6e9249*/
    return 0; /*0x6e9249*/
  if ( *(_DWORD *)&v3->members.m_usTriangles != *(_DWORD *)(a2 + 0x40) ) /*0x6e9251*/
    return 0; /*0x6e9251*/
  serial = v3[1].members.super.serial; /*0x6e9253*/
  if ( serial != *(_WORD *)(a2 + 0x4E) /*0x6e926d*/
    || HIWORD(v3[1].members.super.m_kBound.Radius) != *(_WORD *)(a2 + 0x5E)
    || v3[1].members.super.m_pkTexture != *(void **)(a2 + 0x6C) )
  {
    return 0; /*0x6e9240*/
  }
  v6 = 0; /*0x6e926f*/
  v20 = 0; /*0x6e9276*/
  if ( serial ) /*0x6e927a*/
  {
    do /*0x6e92ec*/
    {
      v7 = *(_DWORD **)(v3[1].members.super.super.m_uiRefCount + 4 * v6); /*0x6e9283*/
      v8 = *(_DWORD **)(v2[0x12] + 4 * v6); /*0x6e928b*/
      if ( v7 ) /*0x6e928e*/
      {
        if ( !v8 ) /*0x6e9296*/
          return 0; /*0x6e9296*/
        v9 = v7[2]; /*0x6e929c*/
        if ( v9 != v8[2] ) /*0x6e92a2*/
          return 0; /*0x6e92a2*/
        v10 = 0; /*0x6e92a8*/
        if ( v9 ) /*0x6e92ac*/
        {
          do /*0x6e92d5*/
          {
            if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(4 * v10 + *v7) + 0x2C))( /*0x6e92cd*/
                    *(_DWORD *)(4 * v10 + *v7),
                    *(_DWORD *)(4 * v10 + *v8)) )
              return 0; /*0x6e92cd*/
            ++v10; /*0x6e92cf*/
          }
          while ( v10 < v7[2] ); /*0x6e92d5*/
          v6 = v20; /*0x6e92d7*/
        }
        v2 = (_DWORD *)a2; /*0x6e92db*/
      }
      else if ( v8 ) /*0x6e932a*/
      {
        return 0; /*0x6e932a*/
      }
      v20 = ++v6; /*0x6e92e8*/
    }
    while ( v6 < v3[1].members.super.serial ); /*0x6e92ec*/
  }
  v11 = 0; /*0x6e92ee*/
  for ( i = 0; v11 < HIWORD(v3[1].members.super.m_kBound.Radius); i = ++v11 ) /*0x6e92f0*/
  {
    v12 = *(_DWORD **)(LODWORD(v3[1].members.super.m_kBound.Center.z) + 4 * v11); /*0x6e9306*/
    v13 = *(_DWORD **)(v2[0x16] + 4 * v11); /*0x6e930b*/
    v22 = v13; /*0x6e930e*/
    if ( v12 ) /*0x6e9312*/
    {
      if ( !v13 ) /*0x6e9316*/
        return 0; /*0x6e9316*/
      v14 = v12[2]; /*0x6e9318*/
      if ( v14 != v13[2] ) /*0x6e931e*/
        return 0; /*0x6e931e*/
      v15 = 0; /*0x6e9320*/
      if ( v14 ) /*0x6e9324*/
      {
        while ( 1 ) /*0x6e9349*/
        {
          v16 = *(_DWORD **)(*v12 + 4 * v15); /*0x6e9349*/
          v17 = *(_DWORD **)(*v13 + 4 * v15); /*0x6e934c*/
          if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*v16 + 0x2C))(*v16, *v17) /*0x6e936b*/
            || !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v16[1] + 0x2C))(v16[1], v17[1]) )
          {
            return 0; /*0x6e9335*/
          }
          if ( (unsigned int)++v15 >= v12[2] ) /*0x6e9377*/
          {
            v11 = i; /*0x6e9379*/
            v3 = this; /*0x6e937d*/
            v2 = (_DWORD *)a2; /*0x6e9381*/
            break; /*0x6e9381*/
          }
          v13 = v22; /*0x6e9340*/
        }
      }
    }
    else if ( v13 ) /*0x6e933a*/
    {
      return 0; /*0x6e933a*/
    }
  }
  v18 = 0; /*0x6e9398*/
  if ( v3[1].members.super.m_pkTexture ) /*0x6e939a*/
  {
    while ( 1 ) /*0x6e93aa*/
    {
      v19 = *((_DWORD *)&v3[1].members.super.m_pkNormal->x + v18); /*0x6e93aa*/
      if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v19 + 0x2C))( /*0x6e93ba*/
              v19,
              *(_DWORD *)(4 * v18 + v2[0x19])) )
        break; /*0x6e93ba*/
      if ( (void *)++v18 >= v3[1].members.super.m_pkTexture ) /*0x6e93ca*/
        return 1; /*0x6e93ca*/
    }
    return 0; /*0x6e93be*/
  }
  return 1; /*0x6e9239*/
}
