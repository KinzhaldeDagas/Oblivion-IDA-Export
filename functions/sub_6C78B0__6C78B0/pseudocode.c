NiObject *__thiscall sub_6C78B0(_DWORD *this)
{
  _DWORD *v1; // edi
  NiObject *result; // eax
  NiObject *v3; // ebx
  _WORD *v4; // eax
  unsigned __int16 v5; // cx
  const char *v6; // edx
  unsigned __int16 v7; // cx
  const char *v8; // edi
  unsigned __int16 v9; // cx
  const char *v10; // esi
  unsigned __int16 v11; // cx
  const char *v12; // ebp
  unsigned __int16 v13; // cx
  const char *v14; // ebx
  unsigned __int16 v15; // bp
  unsigned __int16 v16; // bx
  const char ***v17; // edi
  const char **v18; // eax
  const char **v19; // esi
  _WORD *v20; // eax
  bool v21; // cf
  NiObject *v22; // esi
  const char **v23; // [esp+8h] [ebp-20h]
  int v24; // [esp+Ch] [ebp-1Ch]
  unsigned __int16 v26; // [esp+14h] [ebp-14h]
  unsigned __int16 v27; // [esp+18h] [ebp-10h]
  unsigned __int16 v28; // [esp+1Ch] [ebp-Ch]
  int v29; // [esp+20h] [ebp-8h]
  NiObject *v30; // [esp+24h] [ebp-4h]

  v1 = this; /*0x6c78b5*/
  result = sub_6C6400(); /*0x6c78bb*/
  v3 = result; /*0x6c78c0*/
  v30 = result; /*0x6c78c5*/
  if ( (NiObject *)v1[0x19] != result ) /*0x6c78c9*/
  {
    result = 0; /*0x6c78cf*/
    v29 = 0; /*0x6c78d5*/
    if ( v1[3] ) /*0x6c78d1*/
    {
      v24 = 0; /*0x6c78e0*/
      do /*0x6c7a79*/
      {
        v23 = (const char **)sub_6C6400(); /*0x6c78ef*/
        v4 = (_WORD *)(v24 + v1[6]); /*0x6c78f6*/
        v5 = v4[2]; /*0x6c78f8*/
        if ( v5 == 0xFFFF ) /*0x6c7901*/
          v6 = 0; /*0x6c790d*/
        else
          v6 = (const char *)(*(_DWORD *)(*(_DWORD *)v4 + 8) + v5); /*0x6c7908*/
        v7 = v4[3]; /*0x6c790f*/
        if ( v7 == 0xFFFF ) /*0x6c7918*/
          v8 = 0; /*0x6c7924*/
        else
          v8 = (const char *)(*(_DWORD *)(*(_DWORD *)v4 + 8) + v7); /*0x6c791f*/
        v9 = v4[4]; /*0x6c7926*/
        if ( v9 == 0xFFFF ) /*0x6c792f*/
          v10 = 0; /*0x6c793b*/
        else
          v10 = (const char *)(*(_DWORD *)(*(_DWORD *)v4 + 8) + v9); /*0x6c7936*/
        v11 = v4[5]; /*0x6c793d*/
        if ( v11 == 0xFFFF ) /*0x6c7946*/
          v12 = 0; /*0x6c7952*/
        else
          v12 = (const char *)(*(_DWORD *)(*(_DWORD *)v4 + 8) + v11); /*0x6c794d*/
        v13 = v4[6]; /*0x6c7954*/
        if ( v13 == 0xFFFF ) /*0x6c795d*/
          v14 = 0; /*0x6c7969*/
        else
          v14 = (const char *)(*(_DWORD *)(*(_DWORD *)v4 + 8) + v13); /*0x6c7964*/
        if ( v6 ) /*0x6c796d*/
          v26 = (unsigned __int16)sub_6C6270(v23, v6); /*0x6c7979*/
        else
          v26 = 0xFFFF; /*0x6c797f*/
        if ( v8 ) /*0x6c7989*/
          v27 = (unsigned __int16)sub_6C6270(v23, v8); /*0x6c7995*/
        else
          v27 = 0xFFFF; /*0x6c799b*/
        if ( v10 ) /*0x6c79a5*/
          v28 = (unsigned __int16)sub_6C6270(v23, v10); /*0x6c79b1*/
        else
          v28 = 0xFFFF; /*0x6c79b7*/
        if ( v12 ) /*0x6c79c1*/
          v15 = (unsigned __int16)sub_6C6270(v23, v12); /*0x6c79cd*/
        else
          v15 = 0xFFFF; /*0x6c79d1*/
        if ( v14 ) /*0x6c79d6*/
          v16 = (unsigned __int16)sub_6C6270(v23, v14); /*0x6c79e2*/
        else
          v16 = 0xFFFF; /*0x6c79e6*/
        v17 = (const char ***)(v24 + *(this + 6)); /*0x6c79f0*/
        v18 = v23; /*0x6c79f4*/
        v19 = *v17; /*0x6c79f8*/
        if ( *v17 != v23 ) /*0x6c79fc*/
        {
          if ( v19 ) /*0x6c7a00*/
          {
            if ( !InterlockedDecrement((volatile LONG *)v19 + 1) ) /*0x6c7a06*/
              (*(void (__thiscall **)(const char **, int))*v19)(v19, 1); /*0x6c7a1c*/
            v18 = v23; /*0x6c7a1e*/
          }
          *v17 = v18; /*0x6c7a24*/
          if ( v18 ) /*0x6c7a26*/
            InterlockedIncrement((volatile LONG *)v18 + 1); /*0x6c7a2c*/
        }
        v20 = (_WORD *)(v24 + *(this + 6)); /*0x6c7a42*/
        v20[2] = v26; /*0x6c7a44*/
        v20[3] = v27; /*0x6c7a4d*/
        v20[4] = v28; /*0x6c7a56*/
        v20[5] = v15; /*0x6c7a5a*/
        v20[6] = v16; /*0x6c7a5e*/
        result = (NiObject *)(v29 + 1); /*0x6c7a66*/
        v21 = (unsigned int)++v29 < *(this + 3); /*0x6c7a6c*/
        v24 += 0x10; /*0x6c7a73*/
        v1 = this; /*0x6c7a77*/
      }
      while ( v21 ); /*0x6c7a79*/
      v3 = v30; /*0x6c7a7f*/
    }
    v22 = (NiObject *)v1[0x19]; /*0x6c7a84*/
    if ( v22 != v3 ) /*0x6c7a89*/
    {
      if ( v22 ) /*0x6c7a8d*/
      {
        result = (NiObject *)InterlockedDecrement((volatile LONG *)&v22->members); /*0x6c7a93*/
        if ( !result ) /*0x6c7a9b*/
          result = (NiObject *)((int (__thiscall *)(NiObject *, int))v22->__vftable->super.Destructor)(v22, 1); /*0x6c7aa9*/
      }
      v1[0x19] = v3; /*0x6c7aad*/
      if ( v3 ) /*0x6c7ab0*/
        return (NiObject *)InterlockedIncrement((volatile LONG *)&v3->members); /*0x6c7ab6*/
    }
  }
  return result; /*0x6c7abd*/
}
