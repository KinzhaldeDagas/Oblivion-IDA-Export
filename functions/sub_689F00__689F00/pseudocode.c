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
  float **v13; // ebp
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

  result = 0;
  if ( a2 )
  {
    v3 = this + 1;
    if ( *(this + 2) || *v3 )
    {
      v4 = (NiNode *)FormHeapAlloc(0xDCu);
      v30 = 0;
      if ( v4 )
        v5 = NiNode::NiNode(v4, 0);
      else
        v5 = 0;
      v6 = *(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x174);
      v30 = 0xFFFFFFFF;
      v7 = v6(a2);
      v8 = *(float *)v7;
      *(float *)&v24 = 1.0;
      v23.x = v8;
      v9 = *(float *)(v7 + 4);
      v25 = 0.0;
      v23.y = v9;
      v10 = *(float *)(v7 + 8);
      v26 = 1.0;
      v27 = 1.0;
      v11 = flt_A468FC;
      v23.z = v10;
      v20 = v11;
      v12 = sub_47FD30(v20, (NiD3DPassVtbl **)&v24);
      v12->members.m_localTransform.pos = v23;
      ((void (__thiscall *)(NiNode *, NiAVObject *, int))v5->vtbl->AddObject)(v5, v12, 1);
      for ( ; v3; v3 = (float ***)v3[1] )
      {
        if ( !v3[1] && !*v3 )
          break;
        v13 = *v3;
        sub_68B110(*v3);
        v15 = *v14;
        *(float *)&v24 = 1.0;
        v22.x = v15;
        v16 = v14[1];
        v25 = 0.0;
        v22.y = v16;
        v17 = v14[2];
        v26 = 1.0;
        v27 = 1.0;
        v18 = flt_A468FC;
        v22.z = v17;
        v21 = v18;
        v19 = sub_47FD30(v21, (NiD3DPassVtbl **)&v24);
        v28[0] = 1.0;
        v19->members.m_localTransform.pos.x = v22.x;
        v28[1] = 0.0;
        v29[1] = 0.0;
        v19->members.m_localTransform.pos.y = v22.y;
        v28[2] = 1.0;
        v19->members.m_localTransform.pos.z = v22.z;
        v28[3] = 1.0;
        v29[0] = 1.0;
        v29[2] = 1.0;
        v29[3] = 1.0;
        v31 = sub_47F070(&v23, v29, &v22, v28);
        ((void (__thiscall *)(NiNode *, NiAVObject *, int))v5->vtbl->AddObject)(v5, v19, 1);
        ((void (__thiscall *)(NiNode *, NiAVObject *, int))v5->vtbl->AddObject)(v5, v31, 1);
        if ( !DName::status(v13) )
          break;
        v23 = v22;
      }
      return v5;
    }
  }
  return result;
}
