char __cdecl sub_511C10(int a1, int a2, int a3)
{
  float *v3; // edi
  float *v4; // eax
  float *v5; // esi
  _BYTE *v6; // ebp
  NiAVObject *v7; // eax
  NiAVObject *v8; // esi
  BSShaderProperty *v9; // eax
  float *v10; // eax
  double v11; // st7
  float v13; // [esp+0h] [ebp-38h]
  float v14; // [esp+14h] [ebp-24h]
  float v15; // [esp+18h] [ebp-20h]
  float v16; // [esp+18h] [ebp-20h]

  if ( a3 )
  {
    v14 = flt_A31C80;
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x154))(a3) )
    {
      v15 = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x154))(a3) + 0x2C) * dbl_A2FAA0;
      if ( v15 < (double)flt_A31C80 )
        v14 = v15;
    }
    v3 = (float *)FormHeapAlloc(0x48u);
    v4 = (float *)FormHeapAlloc(0x60u);
    v5 = v4;
    if ( v4 )
      sub_401080(v4, 0x10, 6, (void *(__thiscall *)(void *))sub_47EA50);
    else
      v5 = 0;
    v6 = (_BYTE *)FormHeapAlloc(6u);
    *v6 = 1;
    v6[1] = 0;
    v6[2] = 1;
    v6[3] = 0;
    v6[4] = 1;
    v6[5] = 0;
    *v5 = 1.0;
    v5[1] = 1.0;
    v5[4] = 1.0;
    v5[2] = 0.0;
    v5[3] = 1.0;
    v5[5] = 1.0;
    v5[6] = 0.0;
    v5[8] = 1.0;
    v5[7] = 1.0;
    v5[9] = 1.0;
    v5[0xA] = 0.0;
    v5[0xC] = 1.0;
    v5[0xB] = 1.0;
    v5[0xD] = 1.0;
    v5[0xE] = 0.0;
    v5[0x10] = 1.0;
    v5[0xF] = 1.0;
    v5[0x11] = 1.0;
    v5[0x12] = 0.0;
    v5[0x13] = 1.0;
    v5[0x14] = 1.0;
    v5[0x15] = 1.0;
    v5[0x16] = 0.0;
    v5[0x17] = 1.0;
    v16 = -v14;
    *v3 = v16;
    v3[1] = 0.0;
    v3[2] = 0.0;
    v3[3] = v14;
    v3[4] = 0.0;
    v3[5] = 0.0;
    v3[6] = 0.0;
    v3[7] = v16;
    v3[8] = 0.0;
    v3[9] = 0.0;
    v3[0xA] = v14;
    v3[0xB] = 0.0;
    v3[0xC] = 0.0;
    v3[0xD] = 0.0;
    v3[0xE] = v16;
    v3[0xF] = 0.0;
    v3[0x10] = 0.0;
    v3[0x11] = v14;
    v7 = (NiAVObject *)FormHeapAlloc(0xC0u);
    if ( v7 )
      v8 = sub_7177E0(v7, 6u, (int)v3, (int)v5, 0, 1, 0, (int)v6);
    else
      v8 = 0;
    v9 = (BSShaderProperty *)sub_4E70B0();
    sub_405680((NiNode *)v8, v9);
    v10 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x174))(a3);
    v11 = flt_A417B4;
    v8->members.m_localTransform.pos.x = *v10;
    v8->members.m_localTransform.pos.y = v10[1];
    v13 = v11;
    v8->members.m_localTransform.pos.z = v10[2];
    sub_440E60(TES, (int)v8, v13);
  }
  return 1;
}
