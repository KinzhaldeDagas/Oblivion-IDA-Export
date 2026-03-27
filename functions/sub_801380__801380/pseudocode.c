char __thiscall sub_801380(BSShader *this)
{
  UInt32 *v2; // edi
  NiD3DPass *Unk070; // ecx
  bool v4; // zf
  UInt32 v5; // eax
  NiD3DPass *v6; // eax
  NiD3DPass *v8; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v9; // [esp+18h] [ebp-4h]

  v2 = (UInt32 *)sub_7606A0(&v8);
  Unk070 = (NiD3DPass *)this->member.Unk070;
  v4 = Unk070 == (NiD3DPass *)*v2;
  v9 = 0;
  if ( !v4 )
  {
    if ( Unk070 )
    {
      v4 = Unk070->RefCount-- == 1;
      if ( v4 )
        sub_7604D0(Unk070);
    }
    v5 = *v2;
    v4 = *v2 == 0;
    this->member.Unk070 = *v2;
    if ( !v4 )
      ++*(_DWORD *)(v5 + 0x60);
  }
  v6 = v8;
  v9 = 0xFFFFFFFF;
  if ( v8 )
  {
    --v8->RefCount;
    if ( !v6->RefCount )
      sub_7604D0(v6);
  }
  return 1;
}
