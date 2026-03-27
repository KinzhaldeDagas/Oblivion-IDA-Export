void __thiscall sub_7AB960(_DWORD *this, float *a2)
{
  _DWORD *v3; // eax
  int v4; // ebp
  float *v5; // eax
  double v6; // st7
  bool v7; // zf
  double v8; // st7
  double v10; // st7
  _DWORD *v11; // esi
  char v12; // cl
  _DWORD *v13; // eax
  _DWORD *v14; // ecx
  int v15; // [esp+8h] [ebp-10h] BYREF
  float v16; // [esp+Ch] [ebp-Ch]
  float v17; // [esp+10h] [ebp-8h]
  float v18; // [esp+14h] [ebp-4h]
  float v19; // [esp+1Ch] [ebp+4h]

  if ( !*(this + 0x17) && *(this + 2) )
  {
    v3 = (_DWORD *)FormHeapAlloc(0x18u);
    if ( v3 )
    {
      *v3 = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable';
      v3[1] = 0;
      v3[2] = 0;
      v3[3] = 0;
      v4 = (int)v3;
    }
    else
    {
      v4 = 0;
    }
    v15 = v4;
    sub_7A9C30(v4);
    *(_DWORD *)(v4 + 0xC) = *(_DWORD *)(v4 + 4);
    *(_DWORD *)(v4 + 4) = 0;
    *(_DWORD *)(v4 + 8) = 0;
    *(_DWORD *)(v4 + 0x10) = 0;
    v5 = (float *)*(this + 2);
    v6 = v5[0x19];
    v5 += 0x19;
    v7 = *((_BYTE *)this + 0x35) == 0;
    v16 = v6;
    v17 = v5[3];
    v8 = v5[6];
    v18 = v8;
    v10 = a2[1] * v17 + *a2 * v16 + a2[2] * v18;
    if ( !v7 )
    {
      v19 = v10;
      v10 = v19 - a2[3];
    }
    *(float *)(v4 + 0x14) = v10;
    v11 = (_DWORD *)*(this + 0x14);
    v12 = 0;
    while ( v11 )
    {
      if ( *(float *)(v4 + 0x14) > (double)*(float *)(v11[2] + 0x14) )
      {
        v13 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*(this + 0x13) + 4))(this + 0x13);
        v13[2] = v4;
        *v13 = v11;
        v13[1] = v11[1];
        v14 = (_DWORD *)v11[1];
        if ( v14 )
          *v14 = v13;
        else
          *(this + 0x14) = v13;
        v11[1] = v13;
        ++*(this + 0x16);
        v12 = 1;
      }
      v11 = (_DWORD *)*v11;
      if ( v12 )
      {
        ++*(this + 0x17);
        *(this + 0x18) = v4;
        return;
      }
    }
    sub_5B1E20((BSTextureManager *)(this + 0x13), (void **)&v15);
    *(this + 0x18) = v4;
  }
  ++*(this + 0x17);
}
