char __cdecl sub_511C10(int a1, int a2, int a3)
{
  NiPoint3 *v3; // edi
  float *v4; // eax
  float *v5; // esi
  _BYTE *v6; // ebp
  NiAVObject *v7; // eax
  NiAVObject *v8; // esi
  BSShaderProperty *VertexColorProperty; // eax
  float *v10; // eax
  double v11; // st7
  float v13; // [esp+0h] [ebp-38h]
  float v14; // [esp+14h] [ebp-24h]
  float v15; // [esp+18h] [ebp-20h]
  float v16; // [esp+18h] [ebp-20h]

  if ( a3 ) /*0x511c3c*/
  {
    v14 = flt_A31C80; /*0x511c50*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x154))(a3) ) /*0x511c56*/
    {
      v15 = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x154))(a3) + 0x2C) * dbl_A2FAA0; /*0x511c79*/
      if ( v15 < (double)flt_A31C80 ) /*0x511c90*/
        v14 = v15; /*0x511c92*/
    }
    v3 = (NiPoint3 *)FormHeapAlloc(0x48u); /*0x511ca3*/
    v4 = (float *)FormHeapAlloc(0x60u); /*0x511ca5*/
    v5 = v4; /*0x511caa*/
    if ( v4 ) /*0x511cbd*/
      sub_401080(v4, 0x10, 6, (void *(__thiscall *)(void *))sub_47EA50); /*0x511cc9*/
    else
      v5 = 0; /*0x511cd0*/
    v6 = (_BYTE *)FormHeapAlloc(6u); /*0x511ce7*/
    *v6 = 1; /*0x511cf7*/
    v6[1] = 0; /*0x511cff*/
    v6[2] = 1; /*0x511d0d*/
    v6[3] = 0; /*0x511d15*/
    v6[4] = 1; /*0x511d1d*/
    v6[5] = 0; /*0x511d21*/
    *v5 = 1.0; /*0x511d25*/
    v5[1] = 1.0; /*0x511d2f*/
    v5[4] = 1.0; /*0x511d3c*/
    v5[2] = 0.0; /*0x511d49*/
    v5[3] = 1.0; /*0x511d58*/
    v5[5] = 1.0; /*0x511d65*/
    v5[6] = 0.0; /*0x511d72*/
    v5[8] = 1.0; /*0x511d7d*/
    v5[7] = 1.0; /*0x511d88*/
    v5[9] = 1.0; /*0x511d95*/
    v5[0xA] = 0.0; /*0x511da2*/
    v5[0xC] = 1.0; /*0x511dad*/
    v5[0xB] = 1.0; /*0x511db8*/
    v5[0xD] = 1.0; /*0x511dc5*/
    v5[0xE] = 0.0; /*0x511dce*/
    v5[0x10] = 1.0; /*0x511dd5*/
    v5[0xF] = 1.0; /*0x511ddc*/
    v5[0x11] = 1.0; /*0x511de3*/
    v5[0x12] = 0.0; /*0x511de6*/
    v5[0x13] = 1.0; /*0x511de9*/
    v5[0x14] = 1.0; /*0x511e00*/
    v5[0x15] = 1.0; /*0x511e13*/
    v5[0x16] = 0.0; /*0x511e18*/
    v5[0x17] = 1.0; /*0x511e1d*/
    v16 = -v14; /*0x511e20*/
    v3->x = v16; /*0x511e37*/
    v3->y = 0.0; /*0x511e4b*/
    v3->z = 0.0; /*0x511e58*/
    v3[1].x = v14; /*0x511e6f*/
    v3[1].y = 0.0; /*0x511e7a*/
    v3[1].z = 0.0; /*0x511e87*/
    v3[2].x = 0.0; /*0x511e98*/
    v3[2].y = v16; /*0x511ea5*/
    v3[2].z = 0.0; /*0x511eb2*/
    v3[3].x = 0.0; /*0x511ebd*/
    v3[3].y = v14; /*0x511eca*/
    v3[3].z = 0.0; /*0x511edb*/
    v3[4].x = 0.0; /*0x511ee2*/
    v3[4].y = 0.0; /*0x511eed*/
    v3[4].z = v16; /*0x511ef4*/
    v3[5].x = 0.0; /*0x511efb*/
    v3[5].y = 0.0; /*0x511efe*/
    v3[5].z = v14; /*0x511f01*/
    v7 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x511f04*/
    if ( v7 ) /*0x511f1a*/
      v8 = NiLines_ctorWithGeometryData(v7, 6u, v3, (NiColorAlpha *)v5, 0, 1, 0, (int)v6); /*0x511f2e*/
    else
      v8 = 0; /*0x511f32*/
    VertexColorProperty = (BSShaderProperty *)DebugRender_GetOrCreateVertexColorProperty(); /*0x511f3c*/
    sub_405680((NiNode *)v8, VertexColorProperty); /*0x511f44*/
    v10 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x174))(a3); /*0x511f55*/
    v11 = flt_A417B4; /*0x511f57*/
    v8->members.m_localTransform.pos.x = *v10; /*0x511f5f*/
    v8->members.m_localTransform.pos.y = v10[1]; /*0x511f65*/
    v13 = v11; /*0x511f6c*/
    v8->members.m_localTransform.pos.z = v10[2]; /*0x511f6f*/
    sub_440E60(MEMORY[0xB333A0], (int)v8, v13); /*0x511f79*/
  }
  return 1; /*0x511f80*/
}
