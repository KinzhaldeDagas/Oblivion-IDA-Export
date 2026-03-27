BSShaderAccumulator *__thiscall BSShaderAccumulator::BSShaderAccumulator(BSShaderAccumulator *this)
{
  bool v2; // zf
  _DWORD *v3; // eax
  int i; // eax
  _DWORD *v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  _DWORD *v9; // edi
  _DWORD *v10; // eax
  float *v11; // eax
  int v12; // ecx
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  _DWORD *v16; // [esp+14h] [ebp-18h]
  int v17; // [esp+18h] [ebp-14h]
  _DWORD *v18; // [esp+18h] [ebp-14h]

  NiAlphaAccumulator_Constructor(this);
  *(_DWORD *)this = &BSShaderAccumulator::`vftable';
  *((_DWORD *)this + 0x12) = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x11) = 0;
  *((_DWORD *)this + 0xF) = &NiTPointerList<BSShaderAccumulator::GeometryGroup *>::`vftable';
  *((_DWORD *)this + 0x16) = 0;
  *((_DWORD *)this + 0x14) = 0;
  *((_DWORD *)this + 0x15) = 0;
  *((_DWORD *)this + 0x13) = &NiTPointerList<BSShaderAccumulator::GeometryGroup *>::`vftable';
  *((_DWORD *)this + 0x1C) = 0;
  *((_DWORD *)this + 0x1A) = 0;
  *((_DWORD *)this + 0x1B) = 0;
  *((_DWORD *)this + 0x19) = &NiTPointerList<BSShaderAccumulator::ImmediateGeometryGroup *>::`vftable';
  *((_DWORD *)this + 0x1F) = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable';
  *((_DWORD *)this + 0x20) = 0;
  *((_DWORD *)this + 0x21) = 0;
  *((_DWORD *)this + 0x22) = 0;
  *((_DWORD *)this + 0x24) = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable';
  *((_DWORD *)this + 0x25) = 0;
  *((_DWORD *)this + 0x26) = 0;
  *((_DWORD *)this + 0x27) = 0;
  *((_DWORD *)this + 0x29) = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable';
  *((_DWORD *)this + 0x2A) = 0;
  *((_DWORD *)this + 0x2B) = 0;
  *((_DWORD *)this + 0x2C) = 0;
  *((float *)this + 0x34) = 0.0;
  *((float *)this + 0x39) = 0.0;
  *((float *)this + 0x3E) = 0.0;
  *((_DWORD *)this + 0x32) = 0;
  *((_BYTE *)this + 0xCC) = 0;
  *((_DWORD *)this + 0x35) = 0;
  *((_DWORD *)this + 0x36) = 0;
  *((_DWORD *)this + 0x37) = 0;
  *((_BYTE *)this + 0xE0) = 0;
  *((_DWORD *)this + 0x3A) = 0;
  *((_DWORD *)this + 0x3B) = 0;
  *((_DWORD *)this + 0x3C) = 0;
  *((_BYTE *)this + 0xF4) = 0;
  *((_DWORD *)this + 0x3F) = 0;
  *((_DWORD *)this + 0x40) = 0;
  ArrayConstructor((char *)this + 0x104, 0x14u, 0x1A3, (int)sub_7A9AC0, (void (__thiscall *)(void *))sub_7A9AE0);
  *((_DWORD *)this + 0x873) = 0;
  *((_DWORD *)this + 0x871) = 0;
  *((_DWORD *)this + 0x872) = 0;
  *((_DWORD *)this + 0x870) = &NiTPointerList<BSShaderProperty::RenderPass *>::`vftable';
  *((_DWORD *)this + 0x877) = 0;
  *((_DWORD *)this + 0x875) = 0;
  *((_DWORD *)this + 0x876) = 0;
  *((_DWORD *)this + 0x874) = &NiTPointerList<BSShaderAccumulator::ShadowVolumeRPList *>::`vftable';
  *((_DWORD *)this + 0x87B) = &BSTPersistentList<NiTPointerAllocator<unsigned int>,NiGeometry *>::`vftable';
  *((_DWORD *)this + 0x87C) = 0;
  *((_DWORD *)this + 0x87D) = 0;
  *((_DWORD *)this + 0x87E) = 0;
  *((_DWORD *)this + 0x880) = &BSTPersistentList<NiTPointerAllocator<unsigned int>,NiGeometry *>::`vftable';
  *((_DWORD *)this + 0x881) = 0;
  *((_DWORD *)this + 0x882) = 0;
  *((_DWORD *)this + 0x883) = 0;
  *((_DWORD *)this + 0x885) = &BSTPersistentList<NiTPointerAllocator<unsigned int>,NiGeometry *>::`vftable';
  *((_DWORD *)this + 0x886) = 0;
  *((_DWORD *)this + 0x887) = 0;
  *((_DWORD *)this + 0x888) = 0;
  *((_DWORD *)this + 0x88A) = 0;
  *((_DWORD *)this + 0x88E) = 0;
  *((_DWORD *)this + 0x88C) = 0;
  *((_DWORD *)this + 0x88D) = 0;
  *((_DWORD *)this + 0x88B) = &NiTPointerList<ReferenceVolume *>::`vftable';
  *((_DWORD *)this + 0x894) = 0;
  *((_DWORD *)this + 0x892) = 0;
  *((_DWORD *)this + 0x893) = 0;
  *((_DWORD *)this + 0x891) = &NiTPointerList<NiGeometry *>::`vftable';
  *((_DWORD *)this + 0x898) = 0;
  *((_DWORD *)this + 0x896) = 0;
  *((_DWORD *)this + 0x897) = 0;
  *((_DWORD *)this + 0x895) = &NiTPointerList<NiGeometry *>::`vftable';
  *((_BYTE *)this + 0x21E0) = 1;
  *((_BYTE *)this + 0x21E1) = 0;
  *((_BYTE *)this + 0x21E2) = 0;
  *((_BYTE *)this + 0x21E3) = 1;
  byte_B42CDD = 0;
  v16 = (_DWORD *)((char *)this + 0x108);
  v17 = 0x1A3;
  do
  {
    sub_7A9C30((int)(v16 + 0xFFFFFFFF));
    v16[2] = *v16;
    *v16 = 0;
    v16[1] = 0;
    v16[3] = 0;
    v2 = v17-- == 1;
    v16 += 5;
  }
  while ( !v2 );
  v3 = *((_DWORD **)this + 0x875);
  if ( v3 )
  {
    while ( 1 )
    {
      v18 = (_DWORD *)*v3;
      (*(void (__thiscall **)(char *, _DWORD *))(*((_DWORD *)this + 0x874) + 8))((char *)this + 0x21D0, v3);
      if ( !v18 )
        break;
      v3 = v18;
    }
  }
  *((_DWORD *)this + 0x877) = 0;
  *((_DWORD *)this + 0x875) = 0;
  *((_DWORD *)this + 0x876) = 0;
  *((_DWORD *)this + 0x87A) = FormHeapAlloc(0xC8u);
  *((_WORD *)this + 0x10F2) = 0;
  *((_WORD *)this + 0x10F3) = 0x32;
  for ( i = 0; i < 0xC8; i += 4 )
    *(_DWORD *)(i + *((_DWORD *)this + 0x87A)) = 0;
  sub_7A9C30((int)this + 0x21EC);
  *((_DWORD *)this + 0x87E) = *((_DWORD *)this + 0x87C);
  *((_DWORD *)this + 0x87C) = 0;
  *((_DWORD *)this + 0x87D) = 0;
  *((_DWORD *)this + 0x87F) = 0;
  sub_7A9C30((int)this + 0x2200);
  *((_DWORD *)this + 0x883) = *((_DWORD *)this + 0x881);
  *((_DWORD *)this + 0x881) = 0;
  *((_DWORD *)this + 0x882) = 0;
  *((_DWORD *)this + 0x884) = 0;
  sub_7A9C30((int)this + 0x2214);
  *((_DWORD *)this + 0x888) = *((_DWORD *)this + 0x886);
  *((_DWORD *)this + 0x886) = 0;
  *((_DWORD *)this + 0x887) = 0;
  *((_DWORD *)this + 0x889) = 0;
  v5 = *((_DWORD **)this + 0x10);
  while ( v5 )
  {
    v6 = v5;
    v5 = (_DWORD *)*v5;
    (*(void (__thiscall **)(char *, _DWORD *))(*((_DWORD *)this + 0xF) + 8))((char *)this + 0x3C, v6);
  }
  *((_DWORD *)this + 0x12) = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x11) = 0;
  *((_DWORD *)this + 0x1E) = 0;
  sub_7A9C30((int)this + 0x90);
  *((_DWORD *)this + 0x27) = *((_DWORD *)this + 0x25);
  *((_DWORD *)this + 0x25) = 0;
  *((_DWORD *)this + 0x26) = 0;
  *((_DWORD *)this + 0x28) = 0;
  sub_7A9C30((int)this + 0x7C);
  *((_DWORD *)this + 0x22) = *((_DWORD *)this + 0x20);
  *((_DWORD *)this + 0x20) = 0;
  *((_DWORD *)this + 0x21) = 0;
  *((_DWORD *)this + 0x23) = 0;
  v7 = *((_DWORD **)this + 0x14);
  while ( v7 )
  {
    v8 = v7;
    v7 = (_DWORD *)*v7;
    (*(void (__thiscall **)(char *, _DWORD *))(*((_DWORD *)this + 0x13) + 8))((char *)this + 0x4C, v8);
  }
  *((_DWORD *)this + 0x16) = 0;
  *((_DWORD *)this + 0x14) = 0;
  *((_DWORD *)this + 0x15) = 0;
  *((_DWORD *)this + 0x17) = 0;
  *((_DWORD *)this + 0x18) = 0;
  v9 = *((_DWORD **)this + 0x1A);
  while ( v9 )
  {
    v10 = v9;
    v9 = (_DWORD *)*v9;
    (*(void (__thiscall **)(char *, _DWORD *))(*((_DWORD *)this + 0x19) + 8))((char *)this + 0x64, v10);
  }
  *((_DWORD *)this + 0x1C) = 0;
  *((_DWORD *)this + 0x1A) = 0;
  *((_DWORD *)this + 0x1B) = 0;
  *((_DWORD *)this + 0x1D) = 0;
  *((float *)this + 0x31) = 1.0;
  *((_BYTE *)this + 0xC0) = 0;
  *((_DWORD *)this + 0x2F) = 0;
  v11 = (float *)((char *)this + 0xCC);
  v12 = 3;
  do
  {
    v11[1] = 0.0;
    v11[0xFFFFFFFF] = 0.0;
    *(_BYTE *)v11 = 0;
    v11[2] = 0.0;
    v11[3] = 0.0;
    v11 += 5;
    --v12;
  }
  while ( v12 );
  *((_DWORD *)this + 0x88F) = 0;
  *((_BYTE *)this + 0x2240) = 0;
  v13 = (_DWORD *)FormHeapAlloc(4u);
  if ( v13 )
    v14 = sub_7F5B50(v13);
  else
    v14 = 0;
  *((_DWORD *)this + 0x899) = v14;
  *((_BYTE *)this + 0x2268) = 0;
  return this;
}
