void __thiscall NiTPointerListBase<DFALL<NiTriShape *>,NiTriShape *>::NiTPointerListBase<DFALL<NiTriShape *>,NiTriShape *>(
        NiTPointerListBase<DFALL<NiTriShape *>,NiTriShape *> *this,
        int arg0,
        int a3)
{
  int v3; // ecx
  _DWORD *v4; // eax
  _DWORD *v6; // ebp
  int v7; // esi
  int v8; // edi
  _DWORD *Singleton; // eax
  NiAVObject *v10; // eax
  float z; // edx
  double v12; // st7
  float y; // ecx
  float v14; // edx
  _DWORD *v15; // eax
  _DWORD *v16; // ecx
  int v17; // eax
  int v18; // edx
  int v19; // eax
  _DWORD *v20; // ebp
  int v21; // ebx
  int *v22; // esi
  int v23; // edi
  int v24; // ecx
  double v25; // st7
  int v26; // eax
  NiAVObject *v27; // edx
  NiAVObject *v28; // eax
  int v29; // eax
  double v30; // st7
  NiAVObject *v31; // esi
  _DWORD *v32; // eax
  unsigned int i; // ebp
  NiAVObject *v34; // esi
  _DWORD *v35; // eax
  _DWORD *v36; // ecx
  NiAVObject *v37; // esi
  _DWORD *v38; // esi
  _DWORD *v39; // eax
  const char *v40; // [esp-10h] [ebp-B0h]
  BSStringT v41; // [esp-8h] [ebp-A8h] BYREF
  float v42; // [esp+0h] [ebp-A0h]
  float v43; // [esp+4h] [ebp-9Ch]
  NiAVObject *v44; // [esp+8h] [ebp-98h]
  volatile LONG *a2; // [esp+Ch] [ebp-94h]
  int *v46; // [esp+10h] [ebp-90h]
  _DWORD *v47; // [esp+28h] [ebp-78h]
  NiTPointerListBase<DFALL<NiTriShape *>,NiTriShape *> *v48; // [esp+2Ch] [ebp-74h]
  int v49; // [esp+30h] [ebp-70h]
  __int64 v50; // [esp+34h] [ebp-6Ch]
  float v51; // [esp+3Ch] [ebp-64h]
  __int64 v52; // [esp+40h] [ebp-60h] BYREF
  int v53; // [esp+48h] [ebp-58h]
  float v54[4]; // [esp+4Ch] [ebp-54h] BYREF
  void **v55; // [esp+5Ch] [ebp-44h] BYREF
  _DWORD *v56; // [esp+60h] [ebp-40h]
  _DWORD *v57; // [esp+64h] [ebp-3Ch]
  int v58; // [esp+68h] [ebp-38h]
  NiAVObject *v59[10]; // [esp+6Ch] [ebp-34h] BYREF
  int v60; // [esp+9Ch] [ebp-4h]

  v48 = this; /*0x576adc*/
  v3 = *((_DWORD *)this + 6); /*0x576ae0*/
  v4 = *((_DWORD **)v48 + 1); /*0x576ae3*/
  if ( v4 ) /*0x576aea*/
  {
    while ( v3-- ) /*0x576af0*/
    {
      v4 = (_DWORD *)*v4; /*0x576af9*/
      if ( !v4 ) /*0x576afd*/
        return; /*0x576afd*/
    }
    v6 = (_DWORD *)v4[2]; /*0x576b0c*/
    v7 = 0; /*0x576b0f*/
    memset(v59, 0, 0x14); /*0x576b13*/
    do /*0x576b97*/
    {
      v46 = (int *)v7; /*0x576b27*/
      v59[v7 + 5] = 0; /*0x576b2a*/
      v8 = sub_574FB0(v6, (int)v46); /*0x576b33*/
      if ( v8 > 0 ) /*0x576b37*/
      {
        v54[0] = flt_A68A84; /*0x576b3f*/
        v54[1] = flt_A68A80; /*0x576b49*/
        v54[2] = flt_A68A7C; /*0x576b53*/
        v54[3] = 1.0; /*0x576b59*/
        Singleton = FontManager_GetSingleton(); /*0x576b5d*/
        v10 = sub_574200((_DWORD *)Singleton[v7], v8, v54); /*0x576b6d*/
        v10->members.m_localTransform.pos.x = g_zeroNiPoint3.x; /*0x576b78*/
        v10->members.m_localTransform.pos.y = g_zeroNiPoint3.y; /*0x576b81*/
        z = g_zeroNiPoint3.z; /*0x576b84*/
        v59[v7 + 5] = v10; /*0x576b8a*/
        v10->members.m_localTransform.pos.z = z; /*0x576b8e*/
      }
      ++v7; /*0x576b91*/
    }
    while ( v7 < 5 ); /*0x576b97*/
    v58 = 0; /*0x576b99*/
    v56 = 0; /*0x576b9d*/
    v57 = 0; /*0x576ba1*/
    v55 = &NiTList<NiTriShape *>::`vftable'; /*0x576ba5*/
    v60 = 0; /*0x576baf*/
    if ( v6 ) /*0x576bb6*/
    {
      v12 = 0.0; /*0x576bc1*/
      y = g_zeroNiPoint3.y; /*0x576bc3*/
      v14 = g_zeroNiPoint3.z; /*0x576bc9*/
      *(float *)&v50 = g_zeroNiPoint3.x; /*0x576bcf*/
      v15 = (_DWORD *)v6[1]; /*0x576bd3*/
      *((float *)&v50 + 1) = y; /*0x576bd8*/
      v51 = v14; /*0x576bdc*/
      if ( v15 ) /*0x576be0*/
      {
        while ( *(int *)(a3 + 0x28) > 0 ) /*0x576bf3*/
        {
          *(float *)&v50 = v12; /*0x576bff*/
          v16 = (_DWORD *)v15[2]; /*0x576c05*/
          v47 = (_DWORD *)*v15; /*0x576c07*/
          v17 = 0; /*0x576c0b*/
          if ( *(_BYTE *)(a3 + 0x34) ) /*0x576c0d*/
            v17 = *((_DWORD *)v48 + 4); /*0x576c16*/
          v18 = v16[9]; /*0x576c19*/
          if ( v18 == 4 ) /*0x576c1f*/
          {
            v49 = v17 - v16[4]; /*0x576c26*/
            *(float *)&v50 = (float)v49; /*0x576c2e*/
          }
          if ( v18 == 2 ) /*0x576c35*/
          {
            v49 = (v17 - v16[4]) / 2; /*0x576c3f*/
            *(float *)&v50 = (float)v49; /*0x576c47*/
          }
          v19 = v16[8]; /*0x576c4b*/
          *((float *)&v50 + 1) = v12; /*0x576c4e*/
          v20 = (_DWORD *)v16[1]; /*0x576c59*/
          v49 = v16[6] + v19; /*0x576c5e*/
          v51 = v51 - (double)v49; /*0x576c66*/
          if ( v20 ) /*0x576c6a*/
          {
            v21 = LODWORD(v51); /*0x576c70*/
            do /*0x576da2*/
            {
              v22 = (int *)v20[2]; /*0x576c76*/
              v23 = *v22; /*0x576c79*/
              v20 = (_DWORD *)*v20; /*0x576c7e*/
              v24 = FontManager_GetSingleton()[v23]; /*0x576c8a*/
              if ( v22[7] && *(_BYTE *)v22[7] ) /*0x576c92*/
              {
                v30 = (double)v22[0xD]; /*0x576cfc*/
                LODWORD(v54[0]) = v50; /*0x576d03*/
                v46 = (int *)(v22[0xA] + v22[0xB]); /*0x576d13*/
                v54[0] = v30 + *(float *)&v50; /*0x576d14*/
                a2 = (volatile LONG *)v22[9]; /*0x576d1f*/
                v42 = v54[0]; /*0x576d28*/
                v43 = *((float *)&v50 + 1); /*0x576d2a*/
                v49 = (int)&v41; /*0x576d31*/
                v41.m_data = 0; /*0x576d35*/
                v41.m_dataLen = 0; /*0x576d37*/
                v41.m_bufLen = 0; /*0x576d3b*/
                v40 = (const char *)v22[7]; /*0x576d43*/
                v44 = (NiAVObject *)v21; /*0x576d44*/
                BSStringT_Set(&v41, v40, 0); /*0x576d47*/
                LOBYTE(v60) = 1; /*0x576d4c*/
                FontManager_GetSingleton(); /*0x576d54*/
                LOBYTE(v60) = 0; /*0x576d5b*/
                v31 = sub_575000(v41.m_data, *(float *)&v41.m_dataLen, v42, v43, *(float *)&v44, a2, *(float *)&v46); /*0x576d68*/
                if ( v31 ) /*0x576d6c*/
                {
                  v32 = (_DWORD *)((int (__thiscall *)(void ***))v55[1])(&v55); /*0x576d79*/
                  v32[2] = v31; /*0x576d7b*/
                  *v32 = 0; /*0x576d7e*/
                  v32[1] = v57; /*0x576d84*/
                  if ( v57 ) /*0x576d8d*/
                    *v57 = v32; /*0x576d8f*/
                  else
                    v56 = v32; /*0x576d93*/
                  ++v58; /*0x576d97*/
                  v57 = v32; /*0x576d9c*/
                }
              }
              else
              {
                v25 = (double)v22[0xD]; /*0x576c9b*/
                v52 = v50; /*0x576ca2*/
                v26 = *v22; /*0x576cae*/
                *(float *)&v52 = v25 + *(float *)&v50; /*0x576cb4*/
                v27 = v59[v26]; /*0x576cb8*/
                v59[v26] = (NiAVObject *)((char *)&v27->vtbl + 1); /*0x576cbf*/
                v28 = v59[v26 + 5]; /*0x576cc3*/
                v46 = v22 + 2; /*0x576cca*/
                a2 = (volatile LONG *)&v52; /*0x576ccf*/
                v44 = v28; /*0x576cd0*/
                v29 = *((unsigned __int8 *)v22 + 4); /*0x576cd1*/
                v43 = *(float *)&v27; /*0x576cd5*/
                LODWORD(v42) = *(_DWORD *)(v24 + 0x38) + 0x38 * v29 + 0x128; /*0x576ce9*/
                v53 = v21; /*0x576cea*/
                sub_573F10((float *)LODWORD(v42), (int)v27, (int)v44, (float *)&v52, v22 + 2); /*0x576cee*/
              }
            }
            while ( v20 ); /*0x576da2*/
            v12 = 0.0; /*0x576da8*/
          }
          if ( !v47 ) /*0x576db0*/
            break; /*0x576db0*/
          v15 = v47; /*0x576be8*/
        }
      }
      for ( i = 0; i < 5; ++i ) /*0x576dbf*/
      {
        v34 = v59[i + 5]; /*0x576dc1*/
        if ( v34 ) /*0x576dc7*/
        {
          NiSphere_ComputeFromVertices( /*0x576dde*/
            (NiSphere *)(v34[1].members.super.m_pcName + 0xC),
            *((unsigned __int16 *)v34[1].members.super.m_pcName + 4),
            *((const NiPoint3 **)v34[1].members.super.m_pcName + 7));
          v34->members.m_localTransform.pos.x = g_zeroNiPoint3.x; /*0x576de8*/
          v34->members.m_localTransform.pos.y = g_zeroNiPoint3.y; /*0x576df1*/
          v34->members.m_localTransform.pos.z = g_zeroNiPoint3.z; /*0x576dfc*/
          NiAVObject_InitializePropertyState(v34); /*0x576dff*/
          NiNode_UpdateDynamicEffectState((NiNode *)v34); /*0x576e06*/
          NiAVObject_UpdateNiAVObject(v34, 0.0, 1); /*0x576e15*/
          (*(void (__thiscall **)(int, NiAVObject *, int))(*(_DWORD *)arg0 + 0x84))(arg0, v34, 1); /*0x576e27*/
        }
      }
      while ( v58 ) /*0x576e35*/
      {
        v35 = v56; /*0x576e40*/
        v36 = (_DWORD *)*v56; /*0x576e44*/
        v56 = (_DWORD *)*v56; /*0x576e48*/
        if ( v56 ) /*0x576e4c*/
          v36[1] = 0; /*0x576e4e*/
        else
          v57 = 0; /*0x576e53*/
        v37 = (NiAVObject *)v35[2]; /*0x576e57*/
        ((void (__thiscall *)(void ***, _DWORD *))v55[2])(&v55, v35); /*0x576e66*/
        --v58; /*0x576e68*/
        NiSphere_ComputeFromVertices( /*0x576e82*/
          (NiSphere *)(v37[1].members.super.m_pcName + 0xC),
          *((unsigned __int16 *)v37[1].members.super.m_pcName + 4),
          *((const NiPoint3 **)v37[1].members.super.m_pcName + 7));
        v37->members.m_localTransform.pos.x = g_zeroNiPoint3.x; /*0x576e8d*/
        v37->members.m_localTransform.pos.y = g_zeroNiPoint3.y; /*0x576e95*/
        v37->members.m_localTransform.pos.z = g_zeroNiPoint3.z; /*0x576e9e*/
        NiAVObject_InitializePropertyState(v37); /*0x576ea3*/
        NiNode_UpdateDynamicEffectState((NiNode *)v37); /*0x576eaa*/
        NiAVObject_UpdateNiAVObject(v37, 0.0, 1); /*0x576eb9*/
        (*(void (__thiscall **)(int, NiAVObject *, int))(*(_DWORD *)arg0 + 0x84))(arg0, v37, 1); /*0x576ecb*/
      }
    }
    v55 = &NiTPointerListBase<DFALL<NiTriShape *>,NiTriShape *>::`vftable'; /*0x576ed7*/
    v38 = v56; /*0x576edf*/
    v60 = 2; /*0x576ee5*/
    while ( v38 ) /*0x576ef0*/
    {
      v39 = v38; /*0x576ef6*/
      v38 = (_DWORD *)*v38; /*0x576ef8*/
      ((void (__thiscall *)(void ***, _DWORD *))v55[2])(&v55, v39); /*0x576f02*/
    }
  }
}
