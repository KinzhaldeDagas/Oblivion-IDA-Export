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

  if ( a1 ) /*0x6818fd*/
  {
    CharProxy = MobileObject_GetCharProxy(a1); /*0x681905*/
    if ( CharProxy ) /*0x68190c*/
    {
      v4 = *((_DWORD *)CharProxy + 0xDA); /*0x681912*/
      if ( v4 ) /*0x68191a*/
      {
        v5 = *(_DWORD *)(v4 + 8); /*0x681920*/
        v14 = v5; /*0x681925*/
        if ( v5 ) /*0x681929*/
        {
          if ( a3 ) /*0x681935*/
          {
            sub_680F60(a1, v16); /*0x681941*/
            v6 = 0; /*0x681946*/
            for ( i = 0; (int)v6 < *(_DWORD *)(v5 + 0xA4); i = v6 ) /*0x681955*/
            {
              v7 = *(__m128 ***)(*(_DWORD *)(v5 + 0x90) + 4 * (_DWORD)v6); /*0x681961*/
              if ( *v7 ) /*0x681964*/
                v8 = (*v7)->m128_i32[2]; /*0x68196a*/
              else
                v8 = 0; /*0x68196f*/
              if ( v8 ) /*0x681973*/
              {
                v9 = (NiNode *)FormHeapAlloc(0xDCu); /*0x68197e*/
                v10 = 0; /*0x68198a*/
                v17 = 0; /*0x68198e*/
                if ( v9 ) /*0x681992*/
                  v10 = NiNode::NiNode(v9, 0); /*0x68199c*/
                v11 = *(void (__thiscall **)(__int32, NiNode *))(*(_DWORD *)v8 + 0x90); /*0x6819a0*/
                v17 = 0xFFFFFFFF; /*0x6819a9*/
                v11(v8, v10); /*0x6819b1*/
                HavokVector_ToWorldVector(v15, v7[2] + 3); /*0x6819bf*/
                v12 = v15[1]; /*0x6819c8*/
                v13 = v15[2]; /*0x6819cc*/
                v10->members.super.m_localTransform.pos.x = v15[0]; /*0x6819d0*/
                v10->members.super.m_localTransform.pos.y = v12; /*0x6819d3*/
                v10->members.super.m_localTransform.pos.z = v13; /*0x6819d6*/
                sub_607740((int)v16, v7[2]); /*0x6819e2*/
                qmemcpy(&v10->members.super.m_localTransform, v16, 0x24u); /*0x6819f6*/
                (*(void (__thiscall **)(int, NiNode *, int))(*(_DWORD *)a3 + 0x84))(a3, v10, 1); /*0x681a06*/
                NiAVObject_InitializePropertyState((NiAVObject *)v10); /*0x681a0a*/
                NiNode_UpdateDynamicEffectState(v10); /*0x681a11*/
                NiAVObject_UpdateNiAVObject((NiAVObject *)v10, 0.0, 0); /*0x681a20*/
                v5 = v14; /*0x681a25*/
                v6 = i; /*0x681a29*/
              }
              v6 = (Actor *)((char *)v6 + 1); /*0x681a2d*/
            }
          }
        }
      }
    }
  }
}
