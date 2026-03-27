void __thiscall sub_76D0A0(unsigned __int16 *this, int a2, int a3, char a4, char a5)
{
  NiD3DPass **v6; // esi
  NiD3DPass **v7; // eax
  NiD3DPass *v8; // ecx
  NiD3DPass **v9; // edi
  bool v10; // zf
  NiD3DPass *v11; // eax
  NiD3DPass *v12; // eax
  NiD3DPass *v13; // edi
  NiD3DPass *v14; // ebx
  NiD3DPass *v15; // edi
  NiD3DPass *v16; // edi
  NiD3DPass *v17; // esi
  NiD3DPass *v18; // [esp+8h] [ebp-4h] BYREF

  v6 = (NiD3DPass **)(this + 0x1E);
  if ( !*((_DWORD *)this + 0xF) )
  {
    v7 = sub_7606A0(&v18);
    v8 = *v6;
    v9 = v7;
    if ( *v6 != *v7 )
    {
      if ( v8 )
      {
        v10 = v8->RefCount-- == 1;
        if ( v10 )
          sub_7604D0(v8);
      }
      v11 = *v9;
      v10 = *v9 == 0;
      *v6 = *v9;
      if ( !v10 )
        ++v11->RefCount;
    }
    v12 = v18;
    if ( v18 )
    {
      --v18->RefCount;
      if ( !v12->RefCount )
        sub_7604D0(v12);
    }
    v13 = *v6;
    if ( !(*v6)->RenderStateGroup )
      v13->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
    sub_772CD0((_DWORD *)v13->RenderStateGroup, 0xA8, 7, 1);
    v14 = *((NiD3DPass **)this + 0xE);
    if ( (unsigned int)v14 >= *(this + 0x24) )
      sub_76CCA0(this + 0x20, (unsigned int)v14 + *(this + 0x27));
    sub_76CE40((NiTArray_NiD3DPass *)this + 4, v14, v6);
    if ( *((_DWORD *)this + 0xE) )
    {
      if ( a2 == 2 && a3 == 1 )
      {
        sub_76C730(*v6, 0x1B, 0, 1);
      }
      else
      {
        v15 = *v6;
        if ( !(*v6)->RenderStateGroup )
          v15->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
        sub_772CD0((_DWORD *)v15->RenderStateGroup, 0x13, a2, 0);
        v16 = *v6;
        if ( !(*v6)->RenderStateGroup )
          v16->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
        sub_772CD0((_DWORD *)v16->RenderStateGroup, 0x14, a3, 0);
        v17 = *v6;
        if ( !v17->RenderStateGroup )
          v17->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
        sub_772CD0((_DWORD *)v17->RenderStateGroup, 0x1B, 1, 1);
      }
    }
    *((_BYTE *)this + 0x50) = a4;
    *((_BYTE *)this + 0x51) = a5;
    *((_DWORD *)this + 0x16) = dword_B28CB0;
    *((_DWORD *)this + 0x17) = dword_B28CB4;
    if ( a4 )
    {
      --*((_DWORD *)this + 0x16);
      --*((_DWORD *)this + 0x17);
    }
  }
}
