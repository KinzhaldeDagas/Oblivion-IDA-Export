char __thiscall sub_7F46E0(BoltShader *this)
{
  NiD3DPass **v2; // esi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  NiD3DPass *v8; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v9; // [esp+18h] [ebp-4h]

  if ( !this->Unk00[0x3F] )
  {
    v2 = sub_7606A0(&v8);
    v3 = (NiD3DPass *)this->Unk00[0x3F];
    v4 = v3 == *v2;
    v9 = 0;
    if ( !v4 )
    {
      if ( v3 )
      {
        v4 = v3->RefCount-- == 1;
        if ( v4 )
          sub_7604D0(v3);
      }
      v5 = *v2;
      v4 = *v2 == 0;
      this->Unk00[0x3F] = (UInt32)*v2;
      if ( !v4 )
        ++v5->RefCount;
    }
    v6 = v8;
    v9 = 0xFFFFFFFF;
    if ( v8 )
    {
      --v8->RefCount;
      if ( !v6->RefCount )
        sub_7604D0(v6);
    }
  }
  sub_7F4190(this);
  return 1;
}
