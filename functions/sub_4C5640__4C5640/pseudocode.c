void __thiscall sub_4C5640(int this)
{
  TESObjectCELL *v2; // ecx
  int i; // esi
  TESObjectCELL *v4; // ecx
  int v5; // eax
  _DWORD *v6; // edx
  int v7; // eax
  char v8; // cl
  _DWORD *v9; // eax
  BSShaderProperty *v10; // edx
  NiAVObject *v11; // eax
  _DWORD *v12; // edx
  NiAVObject *v13; // ebp
  void (__thiscall ***v14)(_DWORD, int); // ebx
  unsigned __int16 *v15; // esi
  int j; // ebp
  int v17; // eax
  int v18; // eax
  UInt32 *v19; // esi
  NiDX9Renderer *v20; // ebx
  _DWORD *v21; // ecx
  int v22; // eax
  int v23; // ecx
  int k; // eax
  int v25; // [esp+38h] [ebp-18h]
  int v26; // [esp+3Ch] [ebp-14h] BYREF
  _DWORD v27[4]; // [esp+40h] [ebp-10h] BYREF

  v2 = *(TESObjectCELL **)(this + 0x20); /*0x4c5646*/
  if ( v2 ) /*0x4c564b*/
  {
    if ( GetObjectPointerAt_054(v2) ) /*0x4c5651*/
    {
      if ( !**(_DWORD **)(this + 0x24) ) /*0x4c5661*/
      {
        **(_DWORD **)(this + 0x24) = FormHeapAlloc(0x10u); /*0x4c5677*/
        v25 = 0; /*0x4c567e*/
        memset(v27, 0, sizeof(v27)); /*0x4c5686*/
        for ( i = 0; i < 4; ++i ) /*0x4c5696*/
        {
          v4 = *(TESObjectCELL **)(this + 0x20); /*0x4c5698*/
          v5 = 0; /*0x4c569b*/
          if ( v4 ) /*0x4c569f*/
            v5 = sub_441800(v4, i, 0); /*0x4c56a8*/
          *(_DWORD *)(**(_DWORD **)(this + 0x24) + 4 * i) = v5; /*0x4c56b2*/
          v6 = *(_DWORD **)(this + 0x24); /*0x4c56b5*/
          if ( *(_DWORD *)(*v6 + 4 * i) ) /*0x4c56ba*/
          {
            v7 = *(_DWORD *)(*v6 + 4 * i); /*0x4c56c8*/
            v8 = *(_BYTE *)(v7 + 0x18); /*0x4c56cb*/
            *(_WORD *)(v7 + 0x18) |= 1u; /*0x4c56ce*/
            v9 = *(_DWORD **)(this + 0x24); /*0x4c56d3*/
            v10 = (BSShaderProperty *)unk_B35BEC; /*0x4c56d6*/
            *((_BYTE *)&v25 + i) = v8 & 1; /*0x4c56df*/
            sub_405680(*(NiNode **)(*v9 + 4 * i), v10); /*0x4c56e9*/
            v11 = sub_4BFF00((TESObjectCELL **)this, i); /*0x4c56f1*/
            v12 = *(_DWORD **)(this + 0x24); /*0x4c56f6*/
            v13 = v11; /*0x4c56f9*/
            v27[i] = v11; /*0x4c56fb*/
            (*(void (__thiscall **)(_DWORD, int *, _DWORD, NiAVObject *))(**(_DWORD **)(*v12 + 4 * i) + 0x90))( /*0x4c5714*/
              *(_DWORD *)(*v12 + 4 * i),
              &v26,
              0,
              v11);
            if ( v26 ) /*0x4c571c*/
            {
              v14 = (void (__thiscall ***)(_DWORD, int))v26; /*0x4c571e*/
              if ( !InterlockedDecrement((volatile LONG *)(v26 + 4)) ) /*0x4c5724*/
                (**v14)(v14, 1); /*0x4c573a*/
            }
            NiSphere_ComputeFromVertices( /*0x4c574e*/
              (float *)v13[1].members.super.m_pcName + 3,
              *((unsigned __int16 *)v13[1].members.super.m_pcName + 4),
              *((float **)v13[1].members.super.m_pcName + 7));
            *((_WORD *)v13[1].members.super.m_pcName + 0x17) |= 0xFu; /*0x4c5759*/
          }
        }
        v15 = (unsigned __int16 *)sub_41F950((ExtraDataList *)(*(_DWORD *)(this + 0x20) + 0x28)); /*0x4c5775*/
        sub_533400(v15); /*0x4c5779*/
        sub_5334F0(v15, (int)v27, 4u); /*0x4c5787*/
        sub_4C0640((_DWORD *)this); /*0x4c578e*/
        sub_4BF5C0((_DWORD *)this); /*0x4c5795*/
        sub_4C2630(this); /*0x4c579c*/
        for ( j = 0; j < 4; ++j ) /*0x4c57a1*/
        {
          v17 = v27[j]; /*0x4c57a3*/
          if ( v17 ) /*0x4c57a9*/
          {
            v18 = *(_DWORD *)(v17 + 0xB4); /*0x4c57ab*/
            *(_WORD *)(v18 + 0x2E) = *(_WORD *)(v18 + 0x2E) & 0xFFF | 0x4000; /*0x4c57bf*/
            *(_BYTE *)(v18 + 0x31) = 0x1F; /*0x4c57c3*/
            *(_BYTE *)(v18 + 0x30) = 0x17; /*0x4c57c7*/
            v19 = *(UInt32 **)(v27[j] + 0xBC); /*0x4c57cf*/
            if ( v19 ) /*0x4c57d7*/
            {
              if ( (*(int (__thiscall **)(UInt32 *))(*v19 + 0x1C))(v19) >= 1 /*0x4c57f3*/
                && (*(int (__thiscall **)(UInt32 *))(*v19 + 0x1C))(v19) <= 5 )
              {
                v20 = renderer; /*0x4c57fb*/
                renderer->__vftable->super.NiRenderer::PrecacheGeometryData( /*0x4c5815*/
                  (NiRenderer *)renderer,
                  v27[j],
                  0,
                  0,
                  v19[0x22]);
                sub_769030(v20); /*0x4c5819*/
              }
            }
          }
          v21 = *(_DWORD **)(this + 0x24); /*0x4c581e*/
          if ( *(_DWORD *)(*v21 + 4 * j) ) /*0x4c5823*/
          {
            v22 = *(_DWORD *)(*v21 + 4 * j); /*0x4c5831*/
            if ( *((_BYTE *)&v25 + j) ) /*0x4c582c*/
              *(_WORD *)(v22 + 0x18) |= 1u; /*0x4c5835*/
            else
              *(_WORD *)(v22 + 0x18) &= ~1u; /*0x4c583c*/
            NiAVObject_UpdateNiAVObject(*(NiAVObject **)(**(_DWORD **)(this + 0x24) + 4 * j), 0.0, 0); /*0x4c5852*/
            NiNode_UpdateDynamicEffectState(*(NiNode **)(**(_DWORD **)(this + 0x24) + 4 * j)); /*0x4c585f*/
            NiAVObject_InitializePropertyState(*(NiAVObject **)(**(_DWORD **)(this + 0x24) + 4 * j)); /*0x4c586c*/
          }
        }
      }
      if ( **(_DWORD **)(this + 0x24) ) /*0x4c5883*/
      {
        if ( (*(_DWORD *)(this + 0x1C) & 0x400) != 0 ) /*0x4c588f*/
        {
          v23 = *(_DWORD *)(this + 0x20); /*0x4c5891*/
          if ( v23 ) /*0x4c5896*/
          {
            if ( !*(_DWORD *)(v23 + 0x4C) && !*(_DWORD *)(v23 + 0x48) || sub_4C9890((_BYTE *)v23) ) /*0x4c58a4*/
            {
              for ( k = 0; k < 0x10; k += 4 ) /*0x4c58ad*/
                *(_WORD *)(*(_DWORD *)(k + **(_DWORD **)(this + 0x24)) + 0x18) |= 1u; /*0x4c58b8*/
            }
          }
        }
      }
    }
  }
}
