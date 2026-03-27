int __userpurge sub_7E3E00@<eax>(
        char *this@<ecx>,
        int a2@<ebp>,
        float *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v10; // ebx
  BOOL v11; // esi
  int v12; // esi
  char *v13; // ebx
  _DWORD *v14; // ebp
  double v15; // st7
  int v16; // eax
  int v17; // ebp
  int v18; // ebp
  int v19; // ebp
  int v20; // ebp
  int v21; // esi
  size_t v23; // [esp-8h] [ebp-14h]
  int v24; // [esp+1Ch] [ebp+10h]
  int v25; // [esp+1Ch] [ebp+10h]
  int v26; // [esp+1Ch] [ebp+10h]

  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 0x80))(this);
  v10 = *(_DWORD *)(a6 + 0x18);
  if ( v10 )
    v11 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v10 + 0x54))(*(_DWORD *)(a6 + 0x18)) == 0xE;
  else
    v11 = 0;
  v12 = v11 ? v10 : 0;
  if ( v12 )
  {
    v13 = this + 0x84;
    HIDWORD(v23) = a2;
    v14 = **(_DWORD ***)(*((_DWORD *)this + 0x21) + 0x24);
    sub_76C910(v14, *(NiRenderedTexture **)(v12 + 0x10C));
    sub_7715E0((_DWORD **)v14, 3);
    *((float *)this + 0x2D) = *(float *)(v12 + 0xF8);
    *((float *)this + 0x2E) = *(float *)(v12 + 0x84);
    *((float *)this + 0x2F) = *(float *)(v12 + 0x8C);
    *((float *)this + 0x30) = *(float *)(v12 + 0x90);
    *((_DWORD *)this + 0x3D) = *(_DWORD *)(v12 + 0x94);
    *((_DWORD *)this + 0x3E) = *(_DWORD *)(v12 + 0x98);
    *((_DWORD *)this + 0x3F) = *(_DWORD *)(v12 + 0x9C);
    *((_DWORD *)this + 0x40) = *(_DWORD *)(v12 + 0xA0);
    *((_DWORD *)this + 0x41) = *(_DWORD *)(v12 + 0xA4);
    *((_DWORD *)this + 0x42) = *(_DWORD *)(v12 + 0xA8);
    *((_DWORD *)this + 0x46) = *(_DWORD *)(v12 + 0xB8);
    *((_DWORD *)this + 0x47) = *(_DWORD *)(v12 + 0xBC);
    *((_DWORD *)this + 0x48) = *(_DWORD *)(v12 + 0xC0);
    *((_DWORD *)this + 0x49) = *(_DWORD *)(v12 + 0xC4);
    *((_DWORD *)this + 0x4A) = *(_DWORD *)(v12 + 0xC8);
    *((_DWORD *)this + 0x4B) = *(_DWORD *)(v12 + 0xCC);
    *((_DWORD *)this + 0x4C) = *(_DWORD *)(v12 + 0xD0);
    *((_DWORD *)this + 0x4D) = *(_DWORD *)(v12 + 0xD4);
    *((_DWORD *)this + 0x4E) = *(_DWORD *)(v12 + 0xD8);
    *((_DWORD *)this + 0x4F) = *(_DWORD *)(v12 + 0xDC);
    *((_DWORD *)this + 0x50) = *(_DWORD *)(v12 + 0xE0);
    *((_DWORD *)this + 0x51) = *(_DWORD *)(v12 + 0xE4);
    *((float *)this + 0x31) = *(float *)(v12 + 0xAC);
    *((float *)this + 0x32) = *(float *)(v12 + 0xB0);
    *((float *)this + 0x33) = *(float *)(v12 + 0xB4);
    *((float *)this + 0x34) = flt_B2D80C;
    *((float *)this + 0x35) = *(float *)(v12 + 0xE8);
    *((float *)this + 0x36) = *(float *)(v12 + 0xEC);
    *((float *)this + 0x37) = *(float *)(v12 + 0xF0);
    *((float *)this + 0x38) = *(float *)(v12 + 0xF4);
    if ( *(_BYTE *)(v12 + 0x78) )
    {
      *((float *)this + 0x39) = a3[0x22];
      *((float *)this + 0x3A) = a3[0x23];
      v15 = a3[0x24];
    }
    else
    {
      v15 = 0.0;
      *((float *)this + 0x39) = 0.0;
      *((float *)this + 0x3A) = 0.0;
    }
    *((float *)this + 0x3B) = v15;
    *((float *)this + 0x3C) = *(float *)(v12 + 0x124);
    v16 = dword_B4600C;
    if ( !dword_B4600C )
    {
      v16 = ShaderPackage < 2 ? 0x28 : 0x78;
      dword_B4600C = v16;
    }
    LODWORD(v23) = 0x20 * v16;
    memcpy(*((void **)this + 0x20), *(const void **)(v12 + 0x6C), v23);
    v17 = *(_DWORD *)v13;
    v24 = *(_DWORD *)(v12 + 0xFC);
    if ( !*(_DWORD *)(*(_DWORD *)v13 + 0x30) )
      *(_DWORD *)(v17 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v17 + 0x30), 0x13, v24, 0);
    v18 = *(_DWORD *)v13;
    v25 = *(_DWORD *)(v12 + 0x100);
    if ( !*(_DWORD *)(*(_DWORD *)v13 + 0x30) )
      *(_DWORD *)(v18 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v18 + 0x30), 0x14, v25, 0);
    v19 = *(_DWORD *)v13;
    v26 = *(_DWORD *)(v12 + 0x104);
    if ( !*(_DWORD *)(*(_DWORD *)v13 + 0x30) )
      *(_DWORD *)(v19 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v19 + 0x30), 0xAB, v26, 1u);
    v20 = *(_DWORD *)v13;
    v21 = *(_DWORD *)(v12 + 0x108);
    if ( !*(_DWORD *)(*(_DWORD *)v13 + 0x30) )
      *(_DWORD *)(v20 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v20 + 0x30), 0x17, v21, 0);
    sub_76CE40((NiTArray_NiD3DPass *)this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)this + 0x21);
    ++*((_DWORD *)this + 0xE);
  }
  return 0;
}
