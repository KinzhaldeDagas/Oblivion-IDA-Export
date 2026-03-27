NiAVObject *__cdecl sub_6FD1D0(float a1)
{
  float *v1; // edi
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  _BYTE *v4; // ebp
  NiAVObject *v5; // eax
  NiAVObject *v6; // ebp
  NiObjectNET *v7; // eax
  BSShaderProperty *v8; // esi

  v1 = (float *)FormHeapAlloc(0x48u);
  *v1 = 0.0;
  v1[1] = 0.0;
  v1[2] = 0.0;
  v1[3] = a1;
  v1[4] = 0.0;
  v1[5] = 0.0;
  v1[6] = 0.0;
  v1[7] = 0.0;
  v1[8] = 0.0;
  v1[9] = 0.0;
  v1[0xA] = a1;
  v1[0xB] = 0.0;
  v1[0xC] = 0.0;
  v1[0xD] = 0.0;
  v1[0xE] = 0.0;
  v1[0xF] = 0.0;
  v1[0x10] = 0.0;
  v1[0x11] = a1;
  v2 = (_DWORD *)FormHeapAlloc(0x60u);
  v3 = v2;
  if ( v2 )
    sub_401080(v2, 0x10, 6, (void *(__thiscall *)(void *))sub_47EA50);
  else
    v3 = 0;
  *v3 = dword_B25550;
  v3[1] = dword_B25554;
  v3[2] = dword_B25558;
  v3[3] = dword_B2555C;
  v3[4] = dword_B25550;
  v3[5] = dword_B25554;
  v3[6] = dword_B25558;
  v3[7] = dword_B2555C;
  v3[8] = dword_B25560;
  v3[9] = dword_B25564;
  v3[0xA] = dword_B25568;
  v3[0xB] = dword_B2556C;
  v3[0xC] = dword_B25560;
  v3[0xD] = dword_B25564;
  v3[0xE] = dword_B25568;
  v3[0xF] = dword_B2556C;
  v3[0x10] = dword_B25570;
  v3[0x11] = dword_B25574;
  v3[0x12] = dword_B25578;
  v3[0x13] = dword_B2557C;
  v3[0x14] = dword_B25570;
  v3[0x15] = dword_B25574;
  v3[0x16] = dword_B25578;
  v3[0x17] = dword_B2557C;
  v4 = (_BYTE *)FormHeapAlloc(6u);
  *v4 = 1;
  v4[1] = 0;
  v4[2] = 1;
  v4[3] = 0;
  v4[4] = 1;
  v4[5] = 0;
  v5 = (NiAVObject *)FormHeapAlloc(0xC0u);
  if ( v5 )
    v6 = sub_7177E0(v5, 6u, (int)v1, (int)v3, 0, 0, 0, (int)v4);
  else
    v6 = 0;
  v6->members.m_localTransform.pos.x = Vector3_InitValue_;
  v6->members.m_localTransform.pos.y = *(&Vector3_InitValue_ + 1);
  v6->members.m_localTransform.pos.z = dword_B3F9B0;
  qmemcpy(&v6->members.m_localTransform, &stru_B26AF0[0xA].unk2C, 0x24u);
  NiObjectNET_SetName((NiObjectNET *)v6, "BSTestObjects Coordinate Jack");
  v7 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
  v8 = (BSShaderProperty *)v7;
  if ( v7 )
  {
    NiObjectNET::NiObjectNET(v7);
    v8->vtbl = &NiVertexColorProperty::`vftable';
    v8->member.super.flags = 8;
  }
  else
  {
    v8 = 0;
  }
  if ( v8 )
    InterlockedIncrement((volatile LONG *)&v8->member);
  v8->member.super.flags = v8->member.super.flags & 0xFFCF | 0x10;
  v8->member.super.flags &= ~8u;
  sub_405680((NiNode *)v6, v8);
  if ( !InterlockedDecrement((volatile LONG *)&v8->member) )
    (*(void (__thiscall **)(BSShaderProperty *, int))v8->vtbl)(v8, 1);
  return v6;
}
