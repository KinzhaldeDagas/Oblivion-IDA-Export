void __cdecl sub_6818D0(MobileObject *a1, int a2, int a3)
{
  bhkCharacterProxy *CharProxy; // eax
  int v4; // eax
  int v5; // ebx
  Actor *v6; // ecx
  __m128 **v7; // esi
  __int32 v8; // edi
  NiNode *v9; // eax
  NiNode *v10; // ebx
  void (__thiscall *v11)(__int32, NiNode *); // edx
  float v12; // eax
  float v13; // ecx
  int v14; // [esp+28h] [ebp-50h]
  float v15[3]; // [esp+30h] [ebp-48h] BYREF
  float v16[12]; // [esp+3Ch] [ebp-3Ch] BYREF
  unsigned int v17; // [esp+74h] [ebp-4h]
  Actor *i; // [esp+7Ch] [ebp+4h]

  if ( a1 )
  {
    CharProxy = MobileObject_GetCharProxy(a1);
    if ( CharProxy )
    {
      v4 = *((_DWORD *)CharProxy + 0xDA);
      if ( v4 )
      {
        v5 = *(_DWORD *)(v4 + 8);
        v14 = v5;
        if ( v5 )
        {
          if ( a3 )
          {
            sub_680F60(a1, v16);
            v6 = 0;
            for ( i = 0; (int)v6 < *(_DWORD *)(v5 + 0xA4); i = v6 )
            {
              v7 = *(__m128 ***)(*(_DWORD *)(v5 + 0x90) + 4 * (_DWORD)v6);
              if ( *v7 )
                v8 = (*v7)->m128_i32[2];
              else
                v8 = 0;
              if ( v8 )
              {
                v9 = (NiNode *)FormHeapAlloc(0xDCu);
                v10 = 0;
                v17 = 0;
                if ( v9 )
                  v10 = NiNode::NiNode(v9, 0);
                v11 = *(void (__thiscall **)(__int32, NiNode *))(*(_DWORD *)v8 + 0x90);
                v17 = 0xFFFFFFFF;
                v11(v8, v10);
                sub_43F3E0(v15, v7[2] + 3);
                v12 = v15[1];
                v13 = v15[2];
                v10->members.super.m_localTransform.pos.x = v15[0];
                v10->members.super.m_localTransform.pos.y = v12;
                v10->members.super.m_localTransform.pos.z = v13;
                sub_607740((int)v16, v7[2]);
                qmemcpy(&v10->members.super.m_localTransform, v16, 0x24u);
                (*(void (__thiscall **)(int, NiNode *, int))(*(_DWORD *)a3 + 0x84))(a3, v10, 1);
                NiAVObject_InitializePropertyState((NiAVObject *)v10);
                NiNode_UpdateDynamicEffectState(v10);
                NiAVObject_UpdateNiAVObject((NiAVObject *)v10, 0.0, 0);
                v5 = v14;
                v6 = i;
              }
              v6 = (Actor *)((char *)v6 + 1);
            }
          }
        }
      }
    }
  }
}
