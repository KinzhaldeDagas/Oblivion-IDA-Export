void __thiscall sub_8A27B0(void *this, int a2, _DWORD *triangleCount, char *Src)
{
  unsigned int v5; // ebx
  _DWORD *v6; // eax
  float *p_x; // edi
  int v8; // esi
  UInt16 v9; // si
  int v10; // edx
  _WORD *v11; // ecx
  _DWORD *v12; // ebx
  int v13; // eax
  int v14; // esi
  int v15; // edi
  int v16; // eax
  NiAVObject *v17; // eax
  NiAVObject *v18; // esi
  unsigned int v19; // [esp+14h] [ebp-20h]
  UInt16 *triangleIndices; // [esp+18h] [ebp-1Ch]
  NiPoint3 *vertices; // [esp+1Ch] [ebp-18h]
  __int16 v22; // [esp+20h] [ebp-14h]
  _DWORD *triangleCounta; // [esp+3Ch] [ebp+8h]

  if ( triangleCount )
  {
    v5 = triangleCount[1]; /*0x8a27e7*/
    v6 = (_DWORD *)triangleCount[4]; /*0x8a27ec*/
    v22 = v5; /*0x8a27ef*/
    triangleCounta = v6; /*0x8a27f3*/
    if ( v5 )
    {
      if ( v6 )
      {
        vertices = (NiPoint3 *)FormHeapAlloc((0xC * (unsigned __int64)v5) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v5);
        triangleIndices = (UInt16 *)FormHeapAlloc(
                                      (unsigned __int64)(unsigned int)(3 * (_DWORD)triangleCounta) >> 0x1F != 0
                                    ? 0xFFFFFFFF
                                    : 6 * (_DWORD)triangleCounta);
        p_x = &vertices->x; /*0x8a2849*/
        v8 = 0; /*0x8a284d*/
        v19 = v5; /*0x8a284f*/
        do /*0x8a286d*/
        {
          HavokVector_ToWorldVector(p_x, (__m128 *)(v8 + *triangleCount)); /*0x8a285a*/
          v8 += 0x10; /*0x8a2862*/
          p_x += 3; /*0x8a2865*/
          --v19; /*0x8a2868*/
        }
        while ( v19 ); /*0x8a286d*/
        v9 = (unsigned __int16)triangleCounta; /*0x8a286f*/
        if ( triangleCounta ) /*0x8a2875*/
        {
          v10 = 0; /*0x8a287b*/
          v11 = triangleIndices + 2; /*0x8a287d*/
          v12 = triangleCounta; /*0x8a2880*/
          do /*0x8a28a5*/
          {
            v13 = triangleCount[3]; /*0x8a2882*/
            v14 = *(_DWORD *)(v13 + v10); /*0x8a2885*/
            v15 = *(_DWORD *)(v13 + v10 + 4); /*0x8a2888*/
            v16 = *(_DWORD *)(v10 + v13 + 8); /*0x8a288e*/
            v11[0xFFFFFFFE] = v14; /*0x8a2891*/
            v11[0xFFFFFFFF] = v15; /*0x8a2895*/
            *v11 = v16; /*0x8a2899*/
            v10 += 0xC; /*0x8a289c*/
            v11 += 3; /*0x8a289f*/
            v12 = (_DWORD *)((char *)v12 + 0xFFFFFFFF); /*0x8a28a2*/
          }
          while ( v12 ); /*0x8a28a5*/
          LOWORD(v5) = v22; /*0x8a28a7*/
          v9 = (unsigned __int16)triangleCounta; /*0x8a28ab*/
        }
        v17 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x8a28b4*/
        if ( v17 ) /*0x8a28ca*/
          v18 = NiTriShape_ctorWithGeometryData(v17, v5, vertices, 0, 0, 0, 0, 0, v9, triangleIndices); /*0x8a28e9*/
        else
          v18 = 0; /*0x8a28ed*/
        if ( Src ) /*0x8a28fd*/
          NiObjectNET_SetName((NiObjectNET *)v18, Src); /*0x8a2902*/
        NiGeometryData_AllocateAndClearNormals((NiGeometryData *)v18[1].members.super.m_pcName, 1); /*0x8a290f*/
        (*(void (__thiscall **)(void *, NiAVObject *))(*(_DWORD *)this + 0x98))(this, v18); /*0x8a2921*/
        (*(void (__thiscall **)(int, NiAVObject *, _DWORD))(*(_DWORD *)a2 + 0x84))(a2, v18, 0); /*0x8a2932*/
      }
    }
  }
}
