void __thiscall BSShaderAccumulator::~BSShaderAccumulator(BSShaderAccumulator *this)
{
  _DWORD *v2; // edi
  int v3; // ebp
  int *v4; // eax
  int v5; // ecx
  bool v6; // zf
  _DWORD *v7; // edi
  int *v8; // eax
  int v9; // ecx
  _DWORD *v10; // edi
  int *v11; // ecx
  int v12; // eax
  int *v13; // ecx
  int v14; // eax
  int *v15; // eax
  int v16; // ecx
  _DWORD *v17; // edi
  _DWORD *v18; // edi
  _DWORD *v19; // eax
  _DWORD *v20; // ebp
  unsigned int v21; // eax
  _DWORD *v22; // edi
  void (__thiscall ***v23)(_DWORD, int); // ecx
  _DWORD *v24; // edi
  _DWORD *v25; // eax
  unsigned int v26; // ebp
  int v27; // eax
  int *v28; // ecx
  int v29; // eax
  int v30; // edi
  _DWORD *v31; // edi
  int v32; // ebp
  unsigned int v33; // edi
  char *v34; // edi
  _DWORD *v35; // ebp
  _DWORD *v36; // eax
  char *v37; // edi
  _DWORD *v38; // ebp
  _DWORD *v39; // eax
  char *v40; // edi
  _DWORD *v41; // ebp
  _DWORD *v42; // eax
  int v43; // edi
  char *v44; // edi
  _DWORD *v45; // ebp
  _DWORD *v46; // eax
  char *v47; // edi
  _DWORD *v48; // ebp
  _DWORD *v49; // eax
  char *v50; // edi
  _DWORD *v51; // ebp
  _DWORD *v52; // eax
  char *v53; // edi
  _DWORD *v54; // ebp
  _DWORD *v55; // eax
  char *v56; // edi
  _DWORD *v57; // ebp
  _DWORD *v58; // eax
  unsigned int v59; // [esp+34h] [ebp-2Ch]
  unsigned int v60; // [esp+4Ch] [ebp-14h]

  *(_DWORD *)this = &BSShaderAccumulator::`vftable';
  v2 = (_DWORD *)((char *)this + 0x108);
  v3 = 0x1A3;
  do
  {
    sub_7A9C30((int)(v2 + 0xFFFFFFFF));
    v2[2] = *v2;
    *v2 = 0;
    v2[1] = 0;
    v2[3] = 0;
    v2 += 5;
    --v3;
  }
  while ( v3 );
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
  while ( *((_DWORD *)this + 0x12) )
  {
    v4 = *((int **)this + 0x10);
    v5 = *v4;
    v6 = *v4 == 0;
    *((_DWORD *)this + 0x10) = *v4;
    if ( v6 )
      *((_DWORD *)this + 0x11) = 0;
    else
      *(_DWORD *)(v5 + 4) = 0;
    v7 = (_DWORD *)v4[2];
    (*(void (__thiscall **)(char *, int *))(*((_DWORD *)this + 0xF) + 8))((char *)this + 0x3C, v4);
    --*((_DWORD *)this + 0x12);
    if ( v7 )
    {
      sub_7A9C30((int)v7);
      v7[3] = v7[1];
      v7[1] = 0;
      v7[2] = 0;
      v7[4] = 0;
      *v7 = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable';
      FormHeapFree((unsigned int)v7);
    }
  }
  *((_DWORD *)this + 0x17) = 0;
  *((_DWORD *)this + 0x18) = 0;
  while ( *((_DWORD *)this + 0x16) )
  {
    v8 = *((int **)this + 0x14);
    v9 = *v8;
    v6 = *v8 == 0;
    *((_DWORD *)this + 0x14) = *v8;
    if ( v6 )
      *((_DWORD *)this + 0x15) = 0;
    else
      *(_DWORD *)(v9 + 4) = 0;
    v10 = (_DWORD *)v8[2];
    (*(void (__thiscall **)(char *, int *))(*((_DWORD *)this + 0x13) + 8))((char *)this + 0x4C, v8);
    --*((_DWORD *)this + 0x16);
    if ( v10 )
    {
      sub_7A9C30((int)v10);
      v10[3] = v10[1];
      v10[1] = 0;
      v10[2] = 0;
      v10[4] = 0;
      *v10 = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable';
      FormHeapFree((unsigned int)v10);
    }
  }
  for ( ; *((_DWORD *)this + 0x898); --*((_DWORD *)this + 0x898) )
  {
    v11 = *((int **)this + 0x896);
    v12 = *v11;
    v6 = *v11 == 0;
    *((_DWORD *)this + 0x896) = *v11;
    if ( v6 )
      *((_DWORD *)this + 0x897) = 0;
    else
      *(_DWORD *)(v12 + 4) = 0;
    (*(void (__thiscall **)(char *, int *))(*((_DWORD *)this + 0x895) + 8))((char *)this + 0x2254, v11);
  }
  for ( ; *((_DWORD *)this + 0x894); --*((_DWORD *)this + 0x894) )
  {
    v13 = *((int **)this + 0x892);
    v14 = *v13;
    v6 = *v13 == 0;
    *((_DWORD *)this + 0x892) = *v13;
    if ( v6 )
      *((_DWORD *)this + 0x893) = 0;
    else
      *(_DWORD *)(v14 + 4) = 0;
    (*(void (__thiscall **)(char *, int *))(*((_DWORD *)this + 0x891) + 8))((char *)this + 0x2244, v13);
  }
  *((_DWORD *)this + 0x1D) = 0;
  while ( *((_DWORD *)this + 0x1C) )
  {
    v15 = *((int **)this + 0x1A);
    v16 = *v15;
    v6 = *v15 == 0;
    *((_DWORD *)this + 0x1A) = *v15;
    if ( v6 )
      *((_DWORD *)this + 0x1B) = 0;
    else
      *(_DWORD *)(v16 + 4) = 0;
    v17 = (_DWORD *)v15[2];
    (*(void (__thiscall **)(char *, int *))(*((_DWORD *)this + 0x19) + 8))((char *)this + 0x64, v15);
    --*((_DWORD *)this + 0x1C);
    if ( v17 )
    {
      sub_7A9C30((int)v17);
      v17[3] = v17[1];
      v17[1] = 0;
      v17[2] = 0;
      v17[4] = 0;
      sub_7A9C30((int)(v17 + 5));
      v17[8] = v17[6];
      v17[6] = 0;
      v17[7] = 0;
      v17[9] = 0;
      v17[5] = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable';
      *v17 = &BSTPersistentList<NiTPointerAllocator<unsigned int>,NiGeometry *>::`vftable';
      FormHeapFree((unsigned int)v17);
    }
  }
  v18 = *((_DWORD **)this + 0x1E);
  if ( v18 )
  {
    sub_7A9C30(*((_DWORD *)this + 0x1E));
    v18[3] = v18[1];
    v18[1] = 0;
    v18[2] = 0;
    v18[4] = 0;
    v19 = *((_DWORD **)this + 0x1E);
    if ( v19 )
    {
      v59 = *((_DWORD *)this + 0x1E);
      *v19 = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable';
      FormHeapFree(v59);
    }
  }
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
  sub_7A9C30((int)this + 0xA4);
  *((_DWORD *)this + 0x2C) = *((_DWORD *)this + 0x2A);
  *((_DWORD *)this + 0x2A) = 0;
  *((_DWORD *)this + 0x2B) = 0;
  *((_DWORD *)this + 0x2D) = 0;
  v20 = *((_DWORD **)this + 0x875);
  while ( v20 )
  {
    v21 = v20[2];
    v20 = (_DWORD *)*v20;
    v60 = v21;
    if ( v21 )
    {
      v22 = *(_DWORD **)(v21 + 4);
      if ( v22 )
      {
        sub_7A9C30(*(_DWORD *)(v21 + 4));
        v22[3] = v22[1];
        v22[1] = 0;
        v22[2] = 0;
        v22[4] = 0;
        v23 = *(void (__thiscall ****)(_DWORD, int))(v60 + 4);
        if ( v23 )
          (**v23)(v23, 1);
        v21 = v60;
      }
      FormHeapFree(v21);
    }
  }
  v24 = *((_DWORD **)this + 0x875);
  while ( v24 )
  {
    v25 = v24;
    v24 = (_DWORD *)*v24;
    (*(void (__thiscall **)(char *, _DWORD *))(*((_DWORD *)this + 0x874) + 8))((char *)this + 0x21D0, v25);
  }
  *((_DWORD *)this + 0x877) = 0;
  *((_DWORD *)this + 0x875) = 0;
  *((_DWORD *)this + 0x876) = 0;
  FormHeapFree(*((_DWORD *)this + 0x87A));
  for ( ; *((_DWORD *)this + 0x88E); --*((_DWORD *)this + 0x88E) )
  {
    v26 = *(_DWORD *)(*((_DWORD *)this + 0x88C) + 8);
    if ( v26 )
    {
      v27 = *(_DWORD *)(v26 + 0x14);
      if ( v27 )
      {
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v27 + 8))(*(_DWORD *)(v26 + 0x14));
        *(_DWORD *)(v26 + 0x14) = 0;
      }
      FormHeapFree(v26);
    }
    v28 = *((int **)this + 0x88C);
    v29 = *v28;
    v6 = *v28 == 0;
    *((_DWORD *)this + 0x88C) = *v28;
    if ( v6 )
      *((_DWORD *)this + 0x88D) = 0;
    else
      *(_DWORD *)(v29 + 4) = 0;
    (*(void (__thiscall **)(char *, int *))(*((_DWORD *)this + 0x88B) + 8))((char *)this + 0x222C, v28);
  }
  v30 = *((_DWORD *)this + 0x88A);
  if ( v30 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v30 + 4)) )
      (**(void (__thiscall ***)(int, int))v30)(v30, 1);
    *((_DWORD *)this + 0x88A) = 0;
  }
  v31 = (_DWORD *)((char *)this + 0xC8);
  v32 = 3;
  do
  {
    if ( *v31 )
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v31 + 8))(*v31);
      *v31 = 0;
    }
    v31 += 5;
    --v32;
  }
  while ( v32 );
  v33 = *((_DWORD *)this + 0x899);
  if ( v33 )
  {
    sub_6C4090(*((unsigned int **)this + 0x899));
    FormHeapFree(v33);
    *((_DWORD *)this + 0x899) = 0;
  }
  v34 = (char *)this + 0x2254;
  *((_DWORD *)this + 0x895) = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiGeometry *>::`vftable';
  v35 = *((_DWORD **)this + 0x896);
  while ( v35 )
  {
    v36 = v35;
    v35 = (_DWORD *)*v35;
    (*(void (__thiscall **)(char *, _DWORD *))(*(_DWORD *)v34 + 8))((char *)this + 0x2254, v36);
  }
  *((_DWORD *)this + 0x898) = 0;
  *((_DWORD *)this + 0x896) = 0;
  *((_DWORD *)this + 0x897) = 0;
  *(_DWORD *)v34 = &NiTListBase<NiTPointerAllocator<unsigned int>,NiGeometry *>::`vftable';
  v37 = (char *)this + 0x2244;
  *((_DWORD *)this + 0x891) = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiGeometry *>::`vftable';
  v38 = *((_DWORD **)this + 0x892);
  while ( v38 )
  {
    v39 = v38;
    v38 = (_DWORD *)*v38;
    (*(void (__thiscall **)(char *, _DWORD *))(*(_DWORD *)v37 + 8))((char *)this + 0x2244, v39);
  }
  *((_DWORD *)this + 0x894) = 0;
  *((_DWORD *)this + 0x892) = 0;
  *((_DWORD *)this + 0x893) = 0;
  *(_DWORD *)v37 = &NiTListBase<NiTPointerAllocator<unsigned int>,NiGeometry *>::`vftable';
  v40 = (char *)this + 0x222C;
  *((_DWORD *)this + 0x88B) = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,ReferenceVolume *>::`vftable';
  v41 = *((_DWORD **)this + 0x88C);
  while ( v41 )
  {
    v42 = v41;
    v41 = (_DWORD *)*v41;
    (*(void (__thiscall **)(char *, _DWORD *))(*(_DWORD *)v40 + 8))((char *)this + 0x222C, v42);
  }
  *((_DWORD *)this + 0x88E) = 0;
  *((_DWORD *)this + 0x88C) = 0;
  *((_DWORD *)this + 0x88D) = 0;
  *(_DWORD *)v40 = &NiTListBase<NiTPointerAllocator<unsigned int>,ReferenceVolume *>::`vftable';
  v43 = *((_DWORD *)this + 0x88A);
  if ( v43 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v43 + 4)) )
      (**(void (__thiscall ***)(int, int))v43)(v43, 1);
  }
  v44 = (char *)this + 0x21D0;
  *((_DWORD *)this + 0x885) = &BSTPersistentList<NiTPointerAllocator<unsigned int>,NiGeometry *>::`vftable';
  *((_DWORD *)this + 0x880) = &BSTPersistentList<NiTPointerAllocator<unsigned int>,NiGeometry *>::`vftable';
  *((_DWORD *)this + 0x87B) = &BSTPersistentList<NiTPointerAllocator<unsigned int>,NiGeometry *>::`vftable';
  *((_DWORD *)this + 0x874) = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::ShadowVolumeRPList *>::`vftable';
  v45 = *((_DWORD **)this + 0x875);
  while ( v45 )
  {
    v46 = v45;
    v45 = (_DWORD *)*v45;
    (*(void (__thiscall **)(char *, _DWORD *))(*(_DWORD *)v44 + 8))((char *)this + 0x21D0, v46);
  }
  *((_DWORD *)this + 0x877) = 0;
  *((_DWORD *)this + 0x875) = 0;
  *((_DWORD *)this + 0x876) = 0;
  *(_DWORD *)v44 = &NiTListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::ShadowVolumeRPList *>::`vftable';
  v47 = (char *)this + 0x21C0;
  *((_DWORD *)this + 0x870) = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable';
  v48 = *((_DWORD **)this + 0x871);
  while ( v48 )
  {
    v49 = v48;
    v48 = (_DWORD *)*v48;
    (*(void (__thiscall **)(char *, _DWORD *))(*(_DWORD *)v47 + 8))((char *)this + 0x21C0, v49);
  }
  *((_DWORD *)this + 0x873) = 0;
  *((_DWORD *)this + 0x871) = 0;
  *((_DWORD *)this + 0x872) = 0;
  *(_DWORD *)v47 = &NiTListBase<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable';
  _LN21((char *)this + 0x104, 0x14u, 0x1A3, (void (__thiscall *)(void *))sub_7A9AE0);
  v50 = (char *)this + 0x64;
  *((_DWORD *)this + 0x29) = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable';
  *((_DWORD *)this + 0x24) = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable';
  *((_DWORD *)this + 0x1F) = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable';
  *((_DWORD *)this + 0x19) = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::ImmediateGeometryGroup *>::`vftable';
  v51 = *((_DWORD **)this + 0x1A);
  while ( v51 )
  {
    v52 = v51;
    v51 = (_DWORD *)*v51;
    (*(void (__thiscall **)(char *, _DWORD *))(*(_DWORD *)v50 + 8))((char *)this + 0x64, v52);
  }
  *((_DWORD *)this + 0x1C) = 0;
  *((_DWORD *)this + 0x1A) = 0;
  *((_DWORD *)this + 0x1B) = 0;
  *(_DWORD *)v50 = &NiTListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::ImmediateGeometryGroup *>::`vftable';
  v53 = (char *)this + 0x4C;
  *((_DWORD *)this + 0x13) = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::GeometryGroup *>::`vftable';
  v54 = *((_DWORD **)this + 0x14);
  while ( v54 )
  {
    v55 = v54;
    v54 = (_DWORD *)*v54;
    (*(void (__thiscall **)(char *, _DWORD *))(*(_DWORD *)v53 + 8))((char *)this + 0x4C, v55);
  }
  *((_DWORD *)this + 0x16) = 0;
  *((_DWORD *)this + 0x14) = 0;
  *((_DWORD *)this + 0x15) = 0;
  *(_DWORD *)v53 = &NiTListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::GeometryGroup *>::`vftable';
  v56 = (char *)this + 0x3C;
  *((_DWORD *)this + 0xF) = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::GeometryGroup *>::`vftable';
  v57 = *((_DWORD **)this + 0x10);
  while ( v57 )
  {
    v58 = v57;
    v57 = (_DWORD *)*v57;
    (*(void (__thiscall **)(char *, _DWORD *))(*(_DWORD *)v56 + 8))((char *)this + 0x3C, v58);
  }
  *((_DWORD *)this + 0x12) = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x11) = 0;
  *(_DWORD *)v56 = &NiTListBase<NiTPointerAllocator<unsigned int>,BSShaderAccumulator::GeometryGroup *>::`vftable';
  sub_71A910(this);
}
