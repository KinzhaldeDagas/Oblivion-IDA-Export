void __thiscall sub_4C5640(int this)
{
  TESObjectCELL *v2; // ecx
  int a2; // esi
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
  int i; // ebp
  int v17; // eax
  int v18; // eax
  UInt32 *v19; // esi
  NiDX9Renderer *v20; // ebx
  _DWORD *v21; // ecx
  int v22; // eax
  int v23; // ecx
  int j; // eax
  int v25; // [esp+38h] [ebp-18h]
  int v26; // [esp+3Ch] [ebp-14h] BYREF
  _DWORD v27[4]; // [esp+40h] [ebp-10h] BYREF

  v2 = *(TESObjectCELL **)(this + 0x20);
  if ( v2 )
  {
    if ( TESObjectCELL_GetNiNode_(v2) )
    {
      if ( !**(_DWORD **)(this + 0x24) )
      {
        **(_DWORD **)(this + 0x24) = FormHeapAlloc(0x10u);
        v25 = 0;
        memset(v27, 0, sizeof(v27));
        for ( a2 = 0; a2 < 4; ++a2 )
        {
          v4 = *(TESObjectCELL **)(this + 0x20);
          v5 = 0;
          if ( v4 )
            v5 = sub_441800(v4, a2, 0);
          *(_DWORD *)(**(_DWORD **)(this + 0x24) + 4 * a2) = v5;
          v6 = *(_DWORD **)(this + 0x24);
          if ( *(_DWORD *)(*v6 + 4 * a2) )
          {
            v7 = *(_DWORD *)(*v6 + 4 * a2);
            v8 = *(_BYTE *)(v7 + 0x18);
            *(_WORD *)(v7 + 0x18) |= 1u;
            v9 = *(_DWORD **)(this + 0x24);
            v10 = (BSShaderProperty *)dword_B35BEC;
            *((_BYTE *)&v25 + a2) = v8 & 1;
            sub_405680(*(NiNode **)(*v9 + 4 * a2), v10);
            v11 = sub_4BFF00((TESObjectCELL **)this, a2);
            v12 = *(_DWORD **)(this + 0x24);
            v13 = v11;
            v27[a2] = v11;
            (*(void (__thiscall **)(_DWORD, int *, _DWORD, NiAVObject *))(**(_DWORD **)(*v12 + 4 * a2) + 0x90))(
              *(_DWORD *)(*v12 + 4 * a2),
              &v26,
              0,
              v11);
            if ( v26 )
            {
              v14 = (void (__thiscall ***)(_DWORD, int))v26;
              if ( !InterlockedDecrement((volatile LONG *)(v26 + 4)) )
                (**v14)(v14, 1);
            }
            sub_72A0F0(
              (float *)v13[1].members.super.m_pcName + 3,
              *((unsigned __int16 *)v13[1].members.super.m_pcName + 4),
              *((float **)v13[1].members.super.m_pcName + 7));
            *((_WORD *)v13[1].members.super.m_pcName + 0x17) |= 0xFu;
          }
        }
        v15 = (unsigned __int16 *)sub_41F950((ExtraDataList *)(*(_DWORD *)(this + 0x20) + 0x28));
        sub_533400(v15);
        sub_5334F0(v15, (int)v27, 4u);
        sub_4C0640((_DWORD *)this);
        sub_4BF5C0((_DWORD *)this);
        sub_4C2630(this);
        for ( i = 0; i < 4; ++i )
        {
          v17 = v27[i];
          if ( v17 )
          {
            v18 = *(_DWORD *)(v17 + 0xB4);
            *(_WORD *)(v18 + 0x2E) = *(_WORD *)(v18 + 0x2E) & 0xFFF | 0x4000;
            *(_BYTE *)(v18 + 0x31) = 0x1F;
            *(_BYTE *)(v18 + 0x30) = 0x17;
            v19 = *(UInt32 **)(v27[i] + 0xBC);
            if ( v19 )
            {
              if ( (*(int (__thiscall **)(UInt32 *))(*v19 + 0x1C))(v19) >= 1
                && (*(int (__thiscall **)(UInt32 *))(*v19 + 0x1C))(v19) <= 5 )
              {
                v20 = g_Renderer;
                g_Renderer->__vftable->super.NiRenderer::PrecacheGeometryData(
                  (NiRenderer *)g_Renderer,
                  v27[i],
                  0,
                  0,
                  v19[0x22]);
                sub_769030(v20);
              }
            }
          }
          v21 = *(_DWORD **)(this + 0x24);
          if ( *(_DWORD *)(*v21 + 4 * i) )
          {
            v22 = *(_DWORD *)(*v21 + 4 * i);
            if ( *((_BYTE *)&v25 + i) )
              *(_WORD *)(v22 + 0x18) |= 1u;
            else
              *(_WORD *)(v22 + 0x18) &= ~1u;
            NiAVObject_UpdateNiAVObject(*(NiAVObject **)(**(_DWORD **)(this + 0x24) + 4 * i), 0.0, 0);
            NiNode_UpdateDynamicEffectState(*(NiNode **)(**(_DWORD **)(this + 0x24) + 4 * i));
            NiAVObject_InitializePropertyState(*(NiAVObject **)(**(_DWORD **)(this + 0x24) + 4 * i));
          }
        }
      }
      if ( **(_DWORD **)(this + 0x24) )
      {
        if ( (*(_DWORD *)(this + 0x1C) & 0x400) != 0 )
        {
          v23 = *(_DWORD *)(this + 0x20);
          if ( v23 )
          {
            if ( !*(_DWORD *)(v23 + 0x4C) && !*(_DWORD *)(v23 + 0x48) || sub_4C9890((_BYTE *)v23) )
            {
              for ( j = 0; j < 0x10; j += 4 )
                *(_WORD *)(*(_DWORD *)(j + **(_DWORD **)(this + 0x24)) + 0x18) |= 1u;
            }
          }
        }
      }
    }
  }
}
