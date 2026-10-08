void __thiscall sub_5263B0(_DWORD *this, NiTexture *texture)
{
  _DWORD *v2; // esi
  NiNode *v3; // ebp
  unsigned int v4; // ebx
  NiNode *v5; // edi
  int v6; // eax
  int v7; // eax
  const char **v8; // ebp
  NiNode *v9; // esi
  NiNode *v10; // esi
  const char *nextTex; // eax
  NiTexture *v12; // eax
  NiPropertyState *v13; // edi
  NiPropertyState *v14; // esi
  NiPropertyState *v15; // ebp
  volatile LONG *v16; // esi
  int v17; // esi
  int v18; // eax
  int v19; // eax
  int v20; // esi
  int v21; // edi
  BOOL v22; // eax
  int v23; // eax
  int v24; // esi
  volatile LONG *v25; // eax
  NiTexturingProperty *v26; // esi
  volatile LONG *v27; // edi
  volatile LONG *v28; // edi
  NiTexture *v29; // esi
  NiAVObject *v30; // eax
  NiAVObject *v31; // eax
  NiNode *v32; // [esp+20h] [ebp-28h] BYREF
  NiNode *v33; // [esp+24h] [ebp-24h] BYREF
  _DWORD *v34; // [esp+28h] [ebp-20h]
  NiPropertyState *output; // [esp+2Ch] [ebp-1Ch] BYREF
  volatile LONG *v36; // [esp+30h] [ebp-18h] BYREF
  BSStringT ArgList; // [esp+34h] [ebp-14h] BYREF
  unsigned int v38; // [esp+44h] [ebp-4h]

  v2 = this; /*0x5263d7*/
  v34 = this; /*0x5263d9*/
  v3 = 0; /*0x5263dd*/
  v4 = 0; /*0x5263df*/
  v32 = 0; /*0x5263e1*/
  v5 = 0; /*0x5263e5*/
  v38 = 0; /*0x5263e7*/
  v33 = 0; /*0x5263eb*/
  v6 = *(this + 0x75); /*0x5263ef*/
  LOBYTE(v38) = 1; /*0x5263f7*/
  if ( v6 )
  {
    output = (NiPropertyState *)*(unsigned __int16 *)(v6 + 0xB6); /*0x52640b*/
    if ( output )
    {
      while ( 1 )
      {
        v7 = v2[0x75]; /*0x526424*/
        v8 = *(unsigned __int16 *)(v7 + 0xB6) > v4 ? *(const char ***)(*(_DWORD *)(v7 + 0xB0) + 4 * v4) : 0;
        if ( !strcmp(v8[2], "FaceGenEyeLeft") ) /*0x526451*/
        {
          v9 = (NiNode *)(*((int (__thiscall **)(const char **))*v8 + 4))(v8); /*0x52645f*/
          if ( v32 != v9 ) /*0x526467*/
          {
            if ( v32 ) /*0x52646b*/
            {
              if ( !InterlockedDecrement((volatile LONG *)&v32->members) ) /*0x526471*/
                v32->vtbl->super.super.super.Destructor((NiRefObject *)v32, 1); /*0x526485*/
            }
            v32 = v9; /*0x526489*/
            if ( v9 ) /*0x52648d*/
              InterlockedIncrement((volatile LONG *)&v9->members); /*0x526493*/
          }
        }
        if ( !strcmp(v8[2], "FaceGenEyeRight") ) /*0x5264a8*/
        {
          v10 = (NiNode *)(*((int (__thiscall **)(const char **))*v8 + 4))(v8); /*0x5264ba*/
          if ( v33 != v10 ) /*0x5264be*/
          {
            if ( v33 ) /*0x5264c2*/
            {
              if ( !InterlockedDecrement((volatile LONG *)&v33->members) ) /*0x5264c8*/
                v33->vtbl->super.super.super.Destructor((NiRefObject *)v33, 1); /*0x5264da*/
            }
            v33 = v10; /*0x5264de*/
            if ( v10 ) /*0x5264e2*/
              InterlockedIncrement((volatile LONG *)&v10->members); /*0x5264e8*/
          }
        }
        if ( ++v4 >= (unsigned int)output ) /*0x5264f5*/
          break; /*0x5264f5*/
        v2 = v34; /*0x526420*/
      }
      if ( v32 && v33 )
      {
        ArgList.m_data = 0; /*0x526513*/
        ArgList.m_dataLen = 0; /*0x526517*/
        ArgList.m_bufLen = 0; /*0x52651c*/
        LOBYTE(v38) = 2; /*0x526527*/
        if ( texture ) /*0x52652c*/
        {
          nextTex = (const char *)texture->members.nextTex; /*0x52652e*/
          if ( !nextTex ) /*0x526533*/
            nextTex = EmptyString; /*0x526535*/
          BSStringT_Static_Format(&ArgList, "Data\\Textures\\%s", nextTex); /*0x526545*/
        }
        else
        {
          BSStringT_Static_Format(&ArgList, "Data\\Textures\\Characters\\Eyes\\EyeDefault.dds"); /*0x526559*/
        }
        OB_TES_LoadOrFindSourceTexture_010201A0((NiSourceTexture **)&texture, ArgList.m_data, 0, 0); /*0x526573*/
        v12 = texture; /*0x526578*/
        LOBYTE(v38) = 3; /*0x52657e*/
        if ( texture )
        {
          v13 = *NiGeometry_GetPropertyState((NiGeometry *)v32, &output); /*0x526599*/
          if ( output ) /*0x5265a1*/
          {
            v14 = output; /*0x5265a3*/
            if ( !InterlockedDecrement((volatile LONG *)output + 1) ) /*0x5265a9*/
              (**(void (__thiscall ***)(NiPropertyState *, int))v14)(v14, 1); /*0x5265bf*/
          }
          v15 = *NiGeometry_GetPropertyState((NiGeometry *)v33, (NiPropertyState **)&v36); /*0x5265cf*/
          if ( v36 ) /*0x5265d7*/
          {
            v16 = v36; /*0x5265d9*/
            if ( !InterlockedDecrement(v36 + 1) ) /*0x5265df*/
              (**(void (__thiscall ***)(volatile LONG *, int))v16)(v16, 1); /*0x5265f5*/
          }
          if ( v13 )
          {
            if ( v15 )
            {
              v17 = *((_DWORD *)v13 + 6); /*0x526607*/
              if ( !v17 ) /*0x52660c*/
                goto LABEL_45; /*0x52660c*/
              if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v17 + 0x54))(*((_DWORD *)v13 + 6)) >= 5 ) /*0x52661a*/
                (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 0x54))(v17); /*0x526623*/
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x54))(v17) >= 5 /*0x52663f*/
                && (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x54))(v17) <= 0xA )
              {
                v18 = 1; /*0x526641*/
              }
              else
              {
LABEL_45:
                v18 = 0; /*0x526648*/
              }
              v19 = v18 != 0 ? v17 : 0;
              v20 = *((_DWORD *)v15 + 6); /*0x526650*/
              v21 = v19; /*0x526655*/
              v22 = v20 /*0x526675*/
                 && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v20 + 0x54))(*((_DWORD *)v15 + 6)) >= 5
                 && (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 0x54))(v20) <= 0xA;
              v23 = v22 ? v20 : 0;
              v24 = v23; /*0x526686*/
              if ( v21 ) /*0x526688*/
              {
                if ( v23 ) /*0x52668c*/
                {
                  (*(void (__thiscall **)(int, _DWORD, NiTexture *))(*(_DWORD *)v21 + 0x80))(v21, 0, texture); /*0x52669f*/
                  (*(void (__thiscall **)(int, _DWORD, NiTexture *))(*(_DWORD *)v24 + 0x80))(v24, 0, texture); /*0x5266b2*/
                  LOBYTE(v38) = 2; /*0x5266b8*/
                  NiPointerSlot_Release((void **)&texture); /*0x5266bd*/
                  LOBYTE(v38) = 1; /*0x5266c6*/
                  BSStringT_Clear((unsigned int *)&ArgList); /*0x5266cb*/
                  LOBYTE(v38) = 0; /*0x5266d4*/
                  NiPointerSlot_Release((void **)&v33); /*0x5266d9*/
                  v38 = 0xFFFFFFFF; /*0x5266e2*/
                  NiPointerSlot_Release((void **)&v32); /*0x5266ea*/
                  return; /*0x5266ef*/
                }
              }
            }
          }
          v25 = (volatile LONG *)FormHeapAlloc(0x30u); /*0x5266f6*/
          v36 = v25; /*0x5266fe*/
          LOBYTE(v38) = 4; /*0x526704*/
          if ( v25 ) /*0x526709*/
            v26 = NiTexturingProperty::NiTexturingProperty((NiTexturingProperty *)v25); /*0x526712*/
          else
            v26 = 0; /*0x526716*/
          LOBYTE(v38) = 3; /*0x52671f*/
          OB_NiTexturingProperty_SetBaseTexture_010201A0(v26, texture); /*0x526724*/
          OB_NiTexturingProperty_SetClampMode_010201A0(v26, 3); /*0x52672d*/
          NiTexturingProperty_SetBaseMapFilterMode(v26, 2); /*0x526736*/
          if ( NiNode_GetNiPropertyByID(v32, 6) ) /*0x52673f*/
          {
            sub_708560((int ***)v32, &v36, 6); /*0x526751*/
            if ( v36 ) /*0x52675c*/
            {
              v27 = v36; /*0x52675e*/
              if ( !InterlockedDecrement(v36 + 1) ) /*0x526764*/
                (**(void (__thiscall ***)(volatile LONG *, int))v27)(v27, 1); /*0x52677a*/
            }
          }
          sub_405680(v32, (BSShaderProperty *)v26); /*0x52677f*/
          if ( NiNode_GetNiPropertyByID(v33, 6) ) /*0x52678c*/
          {
            sub_708560((int ***)v33, &v36, 6); /*0x52679e*/
            if ( v36 ) /*0x5267a9*/
            {
              v28 = v36; /*0x5267ab*/
              if ( !InterlockedDecrement(v36 + 1) ) /*0x5267b1*/
                (**(void (__thiscall ***)(volatile LONG *, int))v28)(v28, 1); /*0x5267c7*/
            }
          }
          sub_405680(v33, (BSShaderProperty *)v26); /*0x5267cc*/
          v12 = texture; /*0x5267d1*/
        }
        LOBYTE(v38) = 2; /*0x5267d9*/
        if ( v12 ) /*0x5267de*/
        {
          v29 = v12; /*0x5267e0*/
          if ( !InterlockedDecrement((volatile LONG *)&v12->members) ) /*0x5267e6*/
            v29->__vftable->super.super.Destructor((NiRefObject *)v29, 1); /*0x5267fc*/
        }
        LOBYTE(v38) = 1; /*0x526803*/
        FormHeapFree((unsigned int)ArgList.m_data); /*0x526808*/
      }
      v5 = v33; /*0x526810*/
      v2 = v34; /*0x526814*/
      v3 = v32; /*0x526818*/
    }
    v30 = (NiAVObject *)(*(int (__thiscall **)(_DWORD, const char *))(*(_DWORD *)v2[0x75] + 0x58))( /*0x52682c*/
                          v2[0x75],
                          "FaceGenEyeLeft");
    if ( v30 ) /*0x526830*/
      BSShaderManager_AssignShadersRecursive(v30, 1u, 1, 1); /*0x526839*/
    v31 = (NiAVObject *)(*(int (__thiscall **)(_DWORD, const char *))(*(_DWORD *)v2[0x75] + 0x58))( /*0x526851*/
                          v2[0x75],
                          "FaceGenEyeRight");
    if ( v31 ) /*0x526855*/
      BSShaderManager_AssignShadersRecursive(v31, 1u, 1, 1); /*0x52685e*/
  }
  LOBYTE(v38) = 0; /*0x526868*/
  if ( v5 ) /*0x52686d*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&v5->members) ) /*0x526873*/
      v5->vtbl->super.super.super.Destructor((NiRefObject *)v5, 1); /*0x526885*/
  }
  v38 = 0xFFFFFFFF; /*0x526889*/
  if ( v3 ) /*0x526891*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&v3->members) ) /*0x526897*/
      v3->vtbl->super.super.super.Destructor((NiRefObject *)v3, 1); /*0x5268aa*/
  }
}
