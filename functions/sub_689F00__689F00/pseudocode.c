NiNode *__thiscall sub_689F00(float ***this, int a2)
{
  NiNode *result; // eax
  float ***v3; // ebx
  NiNode *v4; // eax
  NiNode *v5; // esi
  int (__thiscall *v6)(int); // edx
  int v7; // eax
  float v8; // ecx
  float v9; // edx
  float v10; // eax
  double v11; // st7
  NiAVObject *v12; // eax
  char *v13; // ebp
  float *v14; // eax
  float v15; // ecx
  float v16; // edx
  float v17; // eax
  double v18; // st7
  NiAVObject *v19; // edi
  float v20; // [esp+8h] [ebp-70h]
  float v21; // [esp+8h] [ebp-70h]
  NiPoint3 v22; // [esp+24h] [ebp-54h] BYREF
  NiPoint3 v23; // [esp+30h] [ebp-48h] BYREF
  int v24; // [esp+3Ch] [ebp-3Ch] BYREF
  float v25; // [esp+40h] [ebp-38h]
  float v26; // [esp+44h] [ebp-34h]
  float v27; // [esp+48h] [ebp-30h]
  float v28[4]; // [esp+4Ch] [ebp-2Ch] BYREF
  float v29[4]; // [esp+5Ch] [ebp-1Ch] BYREF
  unsigned int v30; // [esp+74h] [ebp-4h]
  NiAVObject *v31; // [esp+7Ch] [ebp+4h]

  result = 0; /*0x689f2b*/
  if ( a2 ) /*0x689f2f*/
  {
    v3 = this + 1; /*0x689f38*/
    if ( *(this + 2) || *v3 ) /*0x689f3d*/
    {
      v4 = (NiNode *)FormHeapAlloc(0xDCu); /*0x689f4a*/
      v30 = 0; /*0x689f58*/
      if ( v4 ) /*0x689f60*/
        v5 = NiNode::NiNode(v4, 0); /*0x689f6b*/
      else
        v5 = 0; /*0x689f6f*/
      v6 = *(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x174); /*0x689f73*/
      v30 = 0xFFFFFFFF; /*0x689f7b*/
      v7 = v6(a2); /*0x689f83*/
      v8 = *(float *)v7; /*0x689f87*/
      *(float *)&v24 = 1.0; /*0x689f89*/
      v23.x = v8; /*0x689f8f*/
      v9 = *(float *)(v7 + 4); /*0x689f93*/
      v25 = 0.0; /*0x689f96*/
      v23.y = v9; /*0x689f9f*/
      v10 = *(float *)(v7 + 8); /*0x689fa3*/
      v26 = 1.0; /*0x689fa6*/
      v27 = 1.0; /*0x689faa*/
      v11 = flt_A468FC; /*0x689faf*/
      v23.z = v10; /*0x689fb5*/
      v20 = v11; /*0x689fb9*/
      v12 = sub_47FD30(v20, (NiD3DPassVtbl **)&v24); /*0x689fbc*/
      v12->members.m_localTransform.pos = v23; /*0x689fc5*/
      ((void (__thiscall *)(NiNode *, NiAVObject *, int))v5->vtbl->AddObject)(v5, v12, 1); /*0x689fe6*/
      for ( ; v3; v3 = (float ***)v3[1] ) /*0x689fea*/
      {
        if ( !v3[1] && !*v3 ) /*0x689ff6*/
          break; /*0x689ff9*/
        v13 = (char *)*v3; /*0x689fff*/
        sub_68B110(*v3); /*0x68a003*/
        v15 = *v14; /*0x68a00a*/
        *(float *)&v24 = 1.0; /*0x68a00c*/
        v22.x = v15; /*0x68a012*/
        v16 = v14[1]; /*0x68a016*/
        v25 = 0.0; /*0x68a019*/
        v22.y = v16; /*0x68a022*/
        v17 = v14[2]; /*0x68a026*/
        v26 = 1.0; /*0x68a029*/
        v27 = 1.0; /*0x68a02d*/
        v18 = flt_A468FC; /*0x68a032*/
        v22.z = v17; /*0x68a038*/
        v21 = v18; /*0x68a03c*/
        v19 = sub_47FD30(v21, (NiD3DPassVtbl **)&v24); /*0x68a04a*/
        v28[0] = 1.0; /*0x68a04c*/
        v19->members.m_localTransform.pos.x = v22.x; /*0x68a052*/
        v28[1] = 0.0; /*0x68a059*/
        v29[1] = 0.0; /*0x68a05d*/
        v19->members.m_localTransform.pos.y = v22.y; /*0x68a061*/
        v28[2] = 1.0; /*0x68a071*/
        v19->members.m_localTransform.pos.z = v22.z; /*0x68a075*/
        v28[3] = 1.0; /*0x68a078*/
        v29[0] = 1.0; /*0x68a07d*/
        v29[2] = 1.0; /*0x68a085*/
        v29[3] = 1.0; /*0x68a08a*/
        v31 = sub_47F070(&v23, v29, &v22, v28); /*0x68a09b*/
        ((void (__thiscall *)(NiNode *, NiAVObject *, int))v5->vtbl->AddObject)(v5, v19, 1); /*0x68a0ac*/
        ((void (__thiscall *)(NiNode *, NiAVObject *, int))v5->vtbl->AddObject)(v5, v31, 1); /*0x68a0bf*/
        if ( !DName::status(v13) ) /*0x68a0c3*/
          break; /*0x68a0ca*/
        v23 = v22; /*0x68a0d8*/
      }
      return v5; /*0x68a0ef*/
    }
  }
  return result; /*0x68a0f1*/
}
