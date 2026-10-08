NiAVObject *__cdecl sub_6FD1D0(float a1)
{
  NiPoint3 *v1; // edi
  NiColorAlpha *v2; // eax
  NiColorAlpha *v3; // esi
  _BYTE *v4; // ebp
  NiAVObject *v5; // eax
  NiAVObject *v6; // ebp
  NiObjectNET *v7; // eax
  BSShaderProperty *v8; // esi

  v1 = (NiPoint3 *)FormHeapAlloc(0x48u); /*0x6fd200*/
  v1->x = 0.0; /*0x6fd222*/
  v1->y = 0.0; /*0x6fd22e*/
  v1->z = 0.0; /*0x6fd23d*/
  v1[1].x = a1; /*0x6fd248*/
  v1[1].y = 0.0; /*0x6fd257*/
  v1[1].z = 0.0; /*0x6fd25e*/
  v1[2].x = 0.0; /*0x6fd269*/
  v1[2].y = 0.0; /*0x6fd278*/
  v1[2].z = 0.0; /*0x6fd283*/
  v1[3].x = 0.0; /*0x6fd292*/
  v1[3].y = a1; /*0x6fd29d*/
  v1[3].z = 0.0; /*0x6fd2a8*/
  v1[4].x = 0.0; /*0x6fd2b3*/
  v1[4].y = 0.0; /*0x6fd2ba*/
  v1[4].z = 0.0; /*0x6fd2c1*/
  v1[5].x = 0.0; /*0x6fd2c8*/
  v1[5].y = 0.0; /*0x6fd2cb*/
  v1[5].z = a1; /*0x6fd2d0*/
  v2 = (NiColorAlpha *)FormHeapAlloc(0x60u); /*0x6fd2d3*/
  v3 = v2; /*0x6fd2d8*/
  if ( v2 ) /*0x6fd2e9*/
    sub_401080(v2, 0x10, 6, (void *(__thiscall *)(void *))sub_47EA50); /*0x6fd2f5*/
  else
    v3 = 0; /*0x6fd2fc*/
  *(_DWORD *)v3 = dword_B25550; /*0x6fd303*/
  *((_DWORD *)v3 + 1) = dword_B25554; /*0x6fd30b*/
  *((_DWORD *)v3 + 2) = dword_B25558; /*0x6fd314*/
  *((_DWORD *)v3 + 3) = dword_B2555C; /*0x6fd31c*/
  *((_DWORD *)v3 + 4) = dword_B25550; /*0x6fd325*/
  *((_DWORD *)v3 + 5) = dword_B25554; /*0x6fd32e*/
  *((_DWORD *)v3 + 6) = dword_B25558; /*0x6fd336*/
  *((_DWORD *)v3 + 7) = dword_B2555C; /*0x6fd33f*/
  *((_DWORD *)v3 + 8) = dword_B25560; /*0x6fd348*/
  *((_DWORD *)v3 + 9) = dword_B25564; /*0x6fd350*/
  *((_DWORD *)v3 + 0xA) = dword_B25568; /*0x6fd359*/
  *((_DWORD *)v3 + 0xB) = dword_B2556C; /*0x6fd362*/
  *((_DWORD *)v3 + 0xC) = dword_B25560; /*0x6fd36a*/
  *((_DWORD *)v3 + 0xD) = dword_B25564; /*0x6fd373*/
  *((_DWORD *)v3 + 0xE) = dword_B25568; /*0x6fd37c*/
  *((_DWORD *)v3 + 0xF) = dword_B2556C; /*0x6fd384*/
  *((_DWORD *)v3 + 0x10) = dword_B25570; /*0x6fd38d*/
  *((_DWORD *)v3 + 0x11) = dword_B25574; /*0x6fd396*/
  *((_DWORD *)v3 + 0x12) = dword_B25578; /*0x6fd39e*/
  *((_DWORD *)v3 + 0x13) = dword_B2557C; /*0x6fd3a7*/
  *((_DWORD *)v3 + 0x14) = dword_B25570; /*0x6fd3b0*/
  *((_DWORD *)v3 + 0x15) = dword_B25574; /*0x6fd3b8*/
  *((_DWORD *)v3 + 0x16) = dword_B25578; /*0x6fd3c1*/
  *((_DWORD *)v3 + 0x17) = dword_B2557C; /*0x6fd3d4*/
  v4 = (_BYTE *)FormHeapAlloc(6u); /*0x6fd3dc*/
  *v4 = 1; /*0x6fd3e3*/
  v4[1] = 0; /*0x6fd3e7*/
  v4[2] = 1; /*0x6fd3ea*/
  v4[3] = 0; /*0x6fd3ee*/
  v4[4] = 1; /*0x6fd3f1*/
  v4[5] = 0; /*0x6fd3f5*/
  v5 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x6fd3f8*/
  if ( v5 ) /*0x6fd40e*/
    v6 = NiLines_ctorWithGeometryData(v5, 6u, v1, v3, 0, 0, 0, (int)v4); /*0x6fd41f*/
  else
    v6 = 0; /*0x6fd423*/
  v6->members.m_localTransform.pos.x = g_zeroNiPoint3.x; /*0x6fd42a*/
  v6->members.m_localTransform.pos.y = g_zeroNiPoint3.y; /*0x6fd433*/
  v6->members.m_localTransform.pos.z = g_zeroNiPoint3.z; /*0x6fd43c*/
  qmemcpy(&v6->members.m_localTransform, &stru_B26AF0[0xA].unk2C, 0x24u); /*0x6fd44c*/
  NiObjectNET_SetName((NiObjectNET *)v6, "BSTestObjects Coordinate Jack"); /*0x6fd45d*/
  v7 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x6fd464*/
  v8 = (BSShaderProperty *)v7; /*0x6fd469*/
  if ( v7 ) /*0x6fd47c*/
  {
    NiObjectNET::NiObjectNET(v7); /*0x6fd480*/
    v8->vtbl = &NiVertexColorProperty::`vftable'; /*0x6fd485*/
    v8->member.super.flags = 8; /*0x6fd48b*/
  }
  else
  {
    v8 = 0; /*0x6fd493*/
  }
  if ( v8 ) /*0x6fd49b*/
    InterlockedIncrement((volatile LONG *)&v8->member); /*0x6fd4a1*/
  v8->member.super.flags = v8->member.super.flags & 0xFFCF | 0x10; /*0x6fd4b4*/
  v8->member.super.flags &= ~8u; /*0x6fd4b8*/
  sub_405680((NiNode *)v6, v8); /*0x6fd4c9*/
  if ( !InterlockedDecrement((volatile LONG *)&v8->member) ) /*0x6fd4da*/
    (*(void (__thiscall **)(BSShaderProperty *, int))v8->vtbl)(v8, 1); /*0x6fd4ec*/
  return v6; /*0x6fd4f0*/
}
