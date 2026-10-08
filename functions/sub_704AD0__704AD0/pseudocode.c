UInt32 *__thiscall sub_704AD0(NiRenderer *this, int a2)
{
  NiRenderer *v2; // edi
  unsigned int *v3; // ebp
  unsigned int v4; // eax
  void (__cdecl *v5)(unsigned int, unsigned int *, int, int *, int); // eax
  __int16 v6; // cx
  void (__cdecl *v7)(unsigned int, UInt32 *, int, int *, int); // edx
  void (__cdecl *v8)(unsigned int, unsigned int *, int, int *, int); // eax
  NiTArray_NiTexturingPropertyMap *v9; // esi
  int v10; // ebx
  bool v11; // cf
  unsigned int v12; // edi
  unsigned int v13; // eax
  void (__cdecl *v14)(unsigned int, int *, int, int *, int); // eax
  int v15; // eax
  __int16 v16; // cx
  int v17; // eax
  __int16 v18; // dx
  double v19; // st6
  int v20; // eax
  void (__cdecl *v21)(unsigned int, unsigned int *, int, int *, int); // eax
  int v22; // eax
  unsigned int v23; // edi
  void (__cdecl *v24)(unsigned int, char *, int, _DWORD *, int); // edx
  int v25; // eax
  __int16 v26; // dx
  UInt32 v27; // esi
  unsigned int v28; // edx
  unsigned int v29; // ecx
  _DWORD *v30; // eax
  UInt32 *result; // eax
  unsigned int v32; // [esp-18h] [ebp-58h]
  unsigned int v33; // [esp-18h] [ebp-58h]
  unsigned int v34; // [esp-18h] [ebp-58h]
  unsigned int v35; // [esp-18h] [ebp-58h]
  unsigned int v36; // [esp-18h] [ebp-58h]
  int v37; // [esp+14h] [ebp-2Ch] BYREF
  unsigned int v38; // [esp+18h] [ebp-28h] BYREF
  int v39; // [esp+1Ch] [ebp-24h] BYREF
  unsigned int v40; // [esp+20h] [ebp-20h] BYREF
  NiRenderer *v41; // [esp+24h] [ebp-1Ch]
  UInt32 *v42; // [esp+28h] [ebp-18h]
  int v43; // [esp+2Ch] [ebp-14h] BYREF
  _DWORD v44[4]; // [esp+30h] [ebp-10h] BYREF

  v2 = this; /*0x704af7*/
  v41 = this; /*0x704af9*/
  v3 = (unsigned int *)a2; /*0x704afd*/
  sub_700AC0(this, (unsigned int *)a2); /*0x704b02*/
  v4 = v3[0x87]; /*0x704b18*/
  if ( v3[0x36] >= 0x14010002 ) /*0x704b1f*/
  {
    v7 = *(void (__cdecl **)(unsigned int, UInt32 *, int, int *, int))(v4 + 4); /*0x704b57*/
    a2 = 2; /*0x704b61*/
    v42 = &v2->members.pad014[1]; /*0x704b69*/
    v7(v4, &v2->members.pad014[1], 2, &a2, 1); /*0x704b6d*/
    LOWORD(v2->members.pad014[1]) &= 0xF00Fu; /*0x704b72*/
  }
  else
  {
    v32 = v3[0x87]; /*0x704b28*/
    v5 = *(void (__cdecl **)(unsigned int, unsigned int *, int, int *, int))(v4 + 4); /*0x704b29*/
    a2 = 4; /*0x704b2c*/
    v5(v32, &v40, 4, &a2, 1); /*0x704b34*/
    v6 = (2 * v40) | v2->members.pad014[1] & 0xFFF1; /*0x704b4b*/
    v42 = &v2->members.pad014[1]; /*0x704b4e*/
    LOWORD(v2->members.pad014[1]) = v6; /*0x704b52*/
  }
  v33 = v3[0x87]; /*0x704b8b*/
  v8 = *(void (__cdecl **)(unsigned int, unsigned int *, int, int *, int))(v33 + 4); /*0x704b8c*/
  a2 = 4; /*0x704b8f*/
  v8(v33, &v38, 4, &a2, 1); /*0x704b97*/
  v9 = (NiTArray_NiTexturingPropertyMap *)&v2->members.pad014[2]; /*0x704ba0*/
  NiTArray_SetSize((unsigned __int16 *)&v2->members.pad014[2], v38); /*0x704ba6*/
  if ( v3[0x36] >= 0x303000D ) /*0x704bb8*/
    sub_712BC0(v3, v38); /*0x704bc9*/
  else
    sub_712BC0(v3, v38 + 1); /*0x704bc2*/
  v10 = 0; /*0x704bce*/
  v40 = 0; /*0x704bd4*/
  if ( v38 ) /*0x704bd8*/
  {
    while ( 1 ) /*0x704bde*/
    {
      v11 = v3[0x36] < 0x4010000; /*0x704bde*/
      v12 = v40; /*0x704be8*/
      v13 = v3[0x87]; /*0x704bec*/
      v39 = 0; /*0x704bf8*/
      v34 = v13; /*0x704c06*/
      v14 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v13 + 4); /*0x704c07*/
      if ( v11 ) /*0x704bfd*/
      {
        v43 = 4; /*0x704c0a*/
        v14(v34, &v39, 4, &v43, 1); /*0x704c12*/
        LOBYTE(a2) = v39 != 0; /*0x704c1b*/
      }
      else
      {
        v43 = 1; /*0x704c2d*/
        v14(v34, &a2, 1, &v43, 1); /*0x704c35*/
      }
      if ( v3[0x36] >= 0x303000D ) /*0x704c44*/
      {
        if ( v40 == 5 ) /*0x704cb1*/
        {
          sub_712BC0(v3, (unsigned __int8)a2); /*0x704cbb*/
          if ( (_BYTE)a2 ) /*0x704cc4*/
          {
            v17 = FormHeapAlloc(0x28u); /*0x704cc8*/
            if ( v17 ) /*0x704cd2*/
            {
              *(_WORD *)(v17 + 4) = 0; /*0x704cd6*/
              *(_DWORD *)(v17 + 8) = 0; /*0x704cda*/
              *(float *)(v17 + 0x10) = 1.0; /*0x704cdd*/
              v18 = *(_WORD *)(v17 + 4); /*0x704ce2*/
              *(float *)(v17 + 0x14) = 0.0; /*0x704ce6*/
              v19 = kHeadBodyNormalMatchRadius; /*0x704cee*/
              *(float *)(v17 + 0x18) = kHeadBodyNormalMatchRadius; /*0x704cf9*/
              *(_DWORD *)(v17 + 0xC) = 0; /*0x704cfc*/
              *(float *)(v17 + 0x24) = v19; /*0x704cff*/
              *(_WORD *)(v17 + 4) = v18 & 0xC000 | 0x3100; /*0x704d02*/
              *(_DWORD *)v17 = &NiTexturingProperty::BumpMap::`vftable'; /*0x704d06*/
              *(float *)(v17 + 0x1C) = 0.0; /*0x704d0c*/
              *(float *)(v17 + 0x20) = 0.0; /*0x704d0f*/
            }
            else
            {
              v17 = 0; /*0x704d14*/
            }
            v39 = v17; /*0x704d16*/
            (*(void (__thiscall **)(int, unsigned int *))(*(_DWORD *)v17 + 4))(v17, v3); /*0x704d22*/
          }
          if ( v9->capacity <= 5u ) /*0x704d29*/
            NiTArray_SetSize((unsigned __int16 *)v9, v9->growSize + 5); /*0x704d35*/
          NiTArray_SetAt(v9, 5u, &v39); /*0x704d43*/
          goto LABEL_39; /*0x704d48*/
        }
      }
      else if ( v40 >= 5 ) /*0x704c4b*/
      {
        sub_712BC0(v3, 0); /*0x704c50*/
        v12 = v40 + 1; /*0x704c59*/
      }
      sub_712BC0(v3, (unsigned __int8)a2); /*0x704c64*/
      if ( (_BYTE)a2 ) /*0x704c6d*/
      {
        v15 = FormHeapAlloc(0x10u); /*0x704c75*/
        if ( v15 ) /*0x704c7f*/
        {
          *(_WORD *)(v15 + 4) = 0; /*0x704c85*/
          *(_DWORD *)v15 = &NiTexturingProperty::Map::`vftable'; /*0x704c89*/
          *(_DWORD *)(v15 + 8) = 0; /*0x704c8f*/
          v16 = *(_WORD *)(v15 + 4) & 0xC000 | 0x3100; /*0x704c9b*/
          *(_DWORD *)(v15 + 0xC) = 0; /*0x704ca0*/
          *(_WORD *)(v15 + 4) = v16; /*0x704ca3*/
        }
        else
        {
          v15 = 0; /*0x704d4a*/
        }
        v39 = v15; /*0x704d4c*/
        (*(void (__thiscall **)(int, unsigned int *))(*(_DWORD *)v15 + 4))(v15, v3); /*0x704d58*/
      }
      if ( v12 >= v9->capacity ) /*0x704d60*/
        NiTArray_SetSize((unsigned __int16 *)v9, v12 + v9->growSize); /*0x704d6b*/
      v20 = v39; /*0x704d76*/
      if ( v12 < v9->end ) /*0x704d7a*/
      {
        if ( v39 ) /*0x704d90*/
        {
          if ( !*((_DWORD *)&v9->data->vtbl + v12) ) /*0x704d95*/
            ++v9->numObjs; /*0x704d9a*/
        }
        else if ( *((_DWORD *)&v9->data->vtbl + v12) ) /*0x704da4*/
        {
          --v9->numObjs; /*0x704da9*/
        }
      }
      else
      {
        v9->end = v12 + 1; /*0x704d81*/
        if ( v20 ) /*0x704d85*/
          ++v9->numObjs; /*0x704d87*/
      }
      *((_DWORD *)&v9->data->vtbl + v12) = v20; /*0x704db2*/
LABEL_39:
      if ( ++v40 >= v38 ) /*0x704dc4*/
      {
        v2 = v41; /*0x704dca*/
        break; /*0x704dca*/
      }
    }
  }
  if ( v3[0x36] >= 0x5000011 ) /*0x704dd8*/
  {
    v35 = v3[0x87]; /*0x704df2*/
    v21 = *(void (__cdecl **)(unsigned int, unsigned int *, int, int *, int))(v35 + 4); /*0x704df3*/
    a2 = 4; /*0x704df6*/
    v21(v35, &v38, 4, &a2, 1); /*0x704dfe*/
    sub_712BC0(v3, v38); /*0x704e0a*/
    if ( v38 ) /*0x704e13*/
    {
      v22 = FormHeapAlloc(0x10u); /*0x704e1b*/
      if ( v22 ) /*0x704e25*/
      {
        *(_DWORD *)v22 = &NiTArray<NiTexturingProperty::ShaderMap *>::`vftable'; /*0x704e27*/
        *(_WORD *)(v22 + 8) = 0; /*0x704e2d*/
        *(_WORD *)(v22 + 0xE) = 1; /*0x704e31*/
        *(_WORD *)(v22 + 0xA) = 0; /*0x704e37*/
        *(_WORD *)(v22 + 0xC) = 0; /*0x704e3b*/
        *(_DWORD *)(v22 + 4) = 0; /*0x704e3f*/
      }
      else
      {
        v22 = 0; /*0x704e44*/
      }
      v2->members.pad014[6] = v22; /*0x704e46*/
      v23 = 0; /*0x704e49*/
      for ( v44[3] = 0xFFFFFFFF; v23 < v38; v10 = 0 ) /*0x704e57*/
      {
        v24 = *(void (__cdecl **)(unsigned int, char *, int, _DWORD *, int))(v3[0x87] + 4); /*0x704e6d*/
        v36 = v3[0x87]; /*0x704e77*/
        v44[0] = 1; /*0x704e78*/
        v24(v36, (char *)&v37 + 3, 1, v44, 1); /*0x704e80*/
        sub_712BC0(v3, HIBYTE(v37)); /*0x704e8d*/
        if ( HIBYTE(v37) ) /*0x704e97*/
        {
          v25 = FormHeapAlloc(0x14u); /*0x704e9b*/
          if ( v25 ) /*0x704ea7*/
          {
            *(_WORD *)(v25 + 4) = 0; /*0x704ea9*/
            *(_DWORD *)(v25 + 8) = 0; /*0x704ead*/
            v26 = *(_WORD *)(v25 + 4) & 0xC000 | 0x3100; /*0x704eb9*/
            *(_DWORD *)(v25 + 0xC) = 0; /*0x704ebe*/
            *(_WORD *)(v25 + 4) = v26; /*0x704ec1*/
            *(_DWORD *)v25 = &NiTexturingProperty::ShaderMap::`vftable'; /*0x704ec5*/
            *(_DWORD *)(v25 + 0x10) = 0; /*0x704ecb*/
          }
          else
          {
            v25 = 0; /*0x704ed0*/
          }
          v10 = v25; /*0x704ed4*/
          (*(void (__thiscall **)(int, unsigned int *))(*(_DWORD *)v25 + 4))(v25, v3); /*0x704edc*/
        }
        v27 = v41->members.pad014[6]; /*0x704ee2*/
        if ( v23 >= *(unsigned __int16 *)(v27 + 8) ) /*0x704eeb*/
          NiTArray_SetSize((unsigned __int16 *)v27, v23 + *(unsigned __int16 *)(v27 + 0xE)); /*0x704ef6*/
        if ( v23 < *(unsigned __int16 *)(v27 + 0xA) ) /*0x704f01*/
        {
          if ( v10 ) /*0x704f17*/
          {
            if ( !*(_DWORD *)(*(_DWORD *)(v27 + 4) + 4 * v23) ) /*0x704f1c*/
              ++*(_WORD *)(v27 + 0xC); /*0x704f22*/
          }
          else if ( *(_DWORD *)(*(_DWORD *)(v27 + 4) + 4 * v23) ) /*0x704f2c*/
          {
            --*(_WORD *)(v27 + 0xC); /*0x704f32*/
          }
        }
        else
        {
          *(_WORD *)(v27 + 0xA) = v23 + 1; /*0x704f08*/
          if ( v10 ) /*0x704f0c*/
            ++*(_WORD *)(v27 + 0xC); /*0x704f0e*/
        }
        *(_DWORD *)(*(_DWORD *)(v27 + 4) + 4 * v23++) = v10; /*0x704f3b*/
      }
      v2 = v41; /*0x704f4d*/
    }
  }
  v28 = HIWORD(v2->members.pad014[4]); /*0x704f51*/
  v29 = 1; /*0x704f55*/
  if ( v28 <= 1 ) /*0x704f5c*/
  {
LABEL_68:
    result = v42; /*0x704f72*/
    *(_WORD *)v42 &= ~1u; /*0x704f76*/
  }
  else
  {
    v30 = (_DWORD *)(v2->members.pad014[3] + 4); /*0x704f61*/
    while ( !*v30 ) /*0x704f66*/
    {
      ++v29; /*0x704f68*/
      ++v30; /*0x704f6b*/
      if ( v29 >= v28 ) /*0x704f70*/
        goto LABEL_68; /*0x704f70*/
    }
    result = v42; /*0x704f91*/
    *(_WORD *)v42 |= 1u; /*0x704f95*/
  }
  return result; /*0x704f87*/
}
