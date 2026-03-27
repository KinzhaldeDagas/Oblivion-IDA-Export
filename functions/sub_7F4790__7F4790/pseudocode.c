int __thiscall sub_7F4790(BoltShader *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // ebx
  BOOL v10; // edi
  int v11; // edi
  int v12; // ebp
  int v13; // ebx
  double v14; // st7
  int v15; // eax
  size_t v17; // [esp-4h] [ebp-10h]
  UInt32 v18; // [esp+1Ch] [ebp+10h]

  this->super.__vftable->super.RemoveShaderPassesMaybe((NiD3DShader *)this);
  v9 = *(_DWORD *)(a5 + 0x18);
  if ( v9 )
    v10 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v9 + 0x54))(*(_DWORD *)(a5 + 0x18)) == 0xD;
  else
    v10 = 0;
  v11 = v10 ? v9 : 0;
  if ( v11 )
  {
    v12 = **(_DWORD **)(this->Unk00[0x3F] + 0x24);
    v13 = *(_DWORD *)(v12 + 4);
    if ( v13 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) )
        (**(void (__thiscall ***)(int, int))v13)(v13, 1);
      *(_DWORD *)(v12 + 4) = 0;
    }
    sub_7715E0((_DWORD **)v12, 3);
    this->Unk00[0x2F] = *(UInt32 *)(v11 + 0x7C);
    *(float *)&this->Unk00[0x30] = (double)*(int *)(v11 + 0x134) * (double)*(int *)(v11 + 0x14C);
    *(float *)&this->Unk00[0x31] = (float)*(int *)(v11 + 0x14C);
    this->Unk00[0x32] = *(UInt32 *)(v11 + 0x154);
    *(float *)&this->Unk00[0x33] = (float)*(int *)(v11 + 0x84);
    *(float *)&this->Unk00[0x34] = (float)*(int *)(v11 + 0x88);
    this->Unk00[0x35] = *(UInt32 *)(v11 + 0x144);
    this->Unk00[0x36] = *(UInt32 *)(v11 + 0x148);
    if ( *(_BYTE *)(v11 + 0x180) )
      v14 = flt_A30634;
    else
      v14 = 1.0;
    *(float *)&v18 = v14;
    this->Unk00[0x37] = v18;
    this->Unk00[0x38] = *(UInt32 *)(v11 + 0x198);
    this->Unk00[0x39] = *(UInt32 *)(v11 + 0x18C);
    this->Unk00[0x3A] = *(UInt32 *)(v11 + 0x90);
    this->Unk00[0x40] = *(_DWORD *)(v11 + 0x160);
    this->Unk00[0x41] = *(_DWORD *)(v11 + 0x164);
    this->Unk00[0x42] = *(_DWORD *)(v11 + 0x168);
    this->Unk00[0x43] = *(_DWORD *)(v11 + 0x16C);
    this->Unk00[0x44] = *(_DWORD *)(v11 + 0x170);
    this->Unk00[0x45] = *(_DWORD *)(v11 + 0x174);
    this->Unk00[0x46] = *(_DWORD *)(v11 + 0x178);
    this->Unk00[0x47] = *(_DWORD *)(v11 + 0x17C);
    v15 = dword_B468FC;
    if ( !dword_B468FC )
    {
      v15 = ShaderPackage < 2 ? 0x4B : 0xEB;
      dword_B468FC = v15;
    }
    LODWORD(v17) = 0x10 * v15;
    memcpy((void *)this->Unk00[1], *(const void **)(v11 + 0x6C), v17);
    sub_76CE40(
      &this->super.member.super.Passes,
      (NiD3DPass *)this->super.member.super.PassCount,
      (NiD3DPass **)&this->Unk00[0x3F]);
    ++this->super.member.super.PassCount;
  }
  return 0;
}
