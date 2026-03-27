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
  float v11; // edx
  double v12; // st7
  int v13; // ecx
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
  char *a2; // [esp+Ch] [ebp-94h]
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

  v48 = this;
  v3 = *((_DWORD *)this + 6);
  v4 = *((_DWORD **)v48 + 1);
  if ( v4 )
  {
    while ( v3-- )
    {
      v4 = (_DWORD *)*v4;
      if ( !v4 )
        return;
    }
    v6 = (_DWORD *)v4[2];
    v7 = 0;
    memset(v59, 0, 0x14);
    do
    {
      v46 = (int *)v7;
      v59[v7 + 5] = 0;
      v8 = sub_574FB0(v6, (int)v46);
      if ( v8 > 0 )
      {
        v54[0] = flt_A68A84;
        v54[1] = flt_A68A80;
        v54[2] = flt_A68A7C;
        v54[3] = 1.0;
        Singleton = FontManager_GetSingleton();
        v10 = sub_574200((_DWORD *)Singleton[v7], v8, v54);
        v10->members.m_localTransform.pos.x = Vector3_InitValue_;
        v10->members.m_localTransform.pos.y = *(&Vector3_InitValue_ + 1);
        v11 = dword_B3F9B0;
        v59[v7 + 5] = v10;
        v10->members.m_localTransform.pos.z = v11;
      }
      ++v7;
    }
    while ( v7 < 5 );
    v58 = 0;
    v56 = 0;
    v57 = 0;
    v55 = &NiTList<NiTriShape *>::`vftable';
    v60 = 0;
    if ( v6 )
    {
      v12 = 0.0;
      v13 = *((_DWORD *)&Vector3_InitValue_ + 1);
      v14 = dword_B3F9B0;
      *(float *)&v50 = Vector3_InitValue_;
      v15 = (_DWORD *)v6[1];
      HIDWORD(v50) = v13;
      v51 = v14;
      if ( v15 )
      {
        while ( *(int *)(a3 + 0x28) > 0 )
        {
          *(float *)&v50 = v12;
          v16 = (_DWORD *)v15[2];
          v47 = (_DWORD *)*v15;
          v17 = 0;
          if ( *(_BYTE *)(a3 + 0x34) )
            v17 = *((_DWORD *)v48 + 4);
          v18 = v16[9];
          if ( v18 == 4 )
          {
            v49 = v17 - v16[4];
            *(float *)&v50 = (float)v49;
          }
          if ( v18 == 2 )
          {
            v49 = (v17 - v16[4]) / 2;
            *(float *)&v50 = (float)v49;
          }
          v19 = v16[8];
          *((float *)&v50 + 1) = v12;
          v20 = (_DWORD *)v16[1];
          v49 = v16[6] + v19;
          v51 = v51 - (double)v49;
          if ( v20 )
          {
            v21 = LODWORD(v51);
            do
            {
              v22 = (int *)v20[2];
              v23 = *v22;
              v20 = (_DWORD *)*v20;
              v24 = FontManager_GetSingleton()[v23];
              if ( v22[7] && *(_BYTE *)v22[7] )
              {
                v30 = (double)v22[0xD];
                LODWORD(v54[0]) = v50;
                v46 = (int *)(v22[0xA] + v22[0xB]);
                v54[0] = v30 + *(float *)&v50;
                a2 = (char *)v22[9];
                v42 = v54[0];
                v43 = *((float *)&v50 + 1);
                v49 = (int)&v41;
                v41.m_data = 0;
                v41.m_dataLen = 0;
                v41.m_bufLen = 0;
                v40 = (const char *)v22[7];
                v44 = (NiAVObject *)v21;
                BSStringT_Set(&v41, v40, 0);
                LOBYTE(v60) = 1;
                FontManager_GetSingleton();
                LOBYTE(v60) = 0;
                v31 = sub_575000(v41.m_data, *(float *)&v41.m_dataLen, v42, v43, *(float *)&v44, a2, *(float *)&v46);
                if ( v31 )
                {
                  v32 = (_DWORD *)((int (__thiscall *)(void ***))v55[1])(&v55);
                  v32[2] = v31;
                  *v32 = 0;
                  v32[1] = v57;
                  if ( v57 )
                    *v57 = v32;
                  else
                    v56 = v32;
                  ++v58;
                  v57 = v32;
                }
              }
              else
              {
                v25 = (double)v22[0xD];
                v52 = v50;
                v26 = *v22;
                *(float *)&v52 = v25 + *(float *)&v50;
                v27 = v59[v26];
                v59[v26] = (NiAVObject *)((char *)&v27->vtbl + 1);
                v28 = v59[v26 + 5];
                v46 = v22 + 2;
                a2 = (char *)&v52;
                v44 = v28;
                v29 = *((unsigned __int8 *)v22 + 4);
                v43 = *(float *)&v27;
                LODWORD(v42) = *(_DWORD *)(v24 + 0x38) + 0x38 * v29 + 0x128;
                v53 = v21;
                sub_573F10((float *)LODWORD(v42), (int)v27, (int)v44, (float *)&v52, v22 + 2);
              }
            }
            while ( v20 );
            v12 = 0.0;
          }
          if ( !v47 )
            break;
          v15 = v47;
        }
      }
      for ( i = 0; i < 5; ++i )
      {
        v34 = v59[i + 5];
        if ( v34 )
        {
          sub_72A0F0(
            (float *)v34[1].members.super.m_pcName + 3,
            *((unsigned __int16 *)v34[1].members.super.m_pcName + 4),
            *((float **)v34[1].members.super.m_pcName + 7));
          v34->members.m_localTransform.pos.x = Vector3_InitValue_;
          v34->members.m_localTransform.pos.y = *(&Vector3_InitValue_ + 1);
          v34->members.m_localTransform.pos.z = dword_B3F9B0;
          NiAVObject_InitializePropertyState(v34);
          NiNode_UpdateDynamicEffectState((NiNode *)v34);
          NiAVObject_UpdateNiAVObject(v34, 0.0, 1);
          (*(void (__thiscall **)(int, NiAVObject *, int))(*(_DWORD *)arg0 + 0x84))(arg0, v34, 1);
        }
      }
      while ( v58 )
      {
        v35 = v56;
        v36 = (_DWORD *)*v56;
        v56 = (_DWORD *)*v56;
        if ( v56 )
          v36[1] = 0;
        else
          v57 = 0;
        v37 = (NiAVObject *)v35[2];
        ((void (__thiscall *)(void ***, _DWORD *))v55[2])(&v55, v35);
        --v58;
        sub_72A0F0(
          (float *)v37[1].members.super.m_pcName + 3,
          *((unsigned __int16 *)v37[1].members.super.m_pcName + 4),
          *((float **)v37[1].members.super.m_pcName + 7));
        v37->members.m_localTransform.pos.x = Vector3_InitValue_;
        v37->members.m_localTransform.pos.y = *(&Vector3_InitValue_ + 1);
        v37->members.m_localTransform.pos.z = dword_B3F9B0;
        NiAVObject_InitializePropertyState(v37);
        NiNode_UpdateDynamicEffectState((NiNode *)v37);
        NiAVObject_UpdateNiAVObject(v37, 0.0, 1);
        (*(void (__thiscall **)(int, NiAVObject *, int))(*(_DWORD *)arg0 + 0x84))(arg0, v37, 1);
      }
    }
    v55 = &NiTPointerListBase<DFALL<NiTriShape *>,NiTriShape *>::`vftable';
    v38 = v56;
    v60 = 2;
    while ( v38 )
    {
      v39 = v38;
      v38 = (_DWORD *)*v38;
      ((void (__thiscall *)(void ***, _DWORD *))v55[2])(&v55, v39);
    }
  }
}
