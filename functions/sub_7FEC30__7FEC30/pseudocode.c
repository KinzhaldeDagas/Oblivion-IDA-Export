char __thiscall sub_7FEC30(NiD3DPass *this)
{
  unsigned int i; // edi
  NiD3DPass **v2; // esi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  NiD3DPass *v8[2]; // [esp+10h] [ebp-14h] BYREF
  unsigned int v9; // [esp+20h] [ebp-4h]

  v8[1] = this;
  for ( i = 0; i < 0x36; ++i )
  {
    v2 = sub_7606A0(v8);
    v3 = (NiD3DPass *)dword_B473D0[i];
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
      dword_B473D0[i] = (int)*v2;
      if ( !v4 )
        ++v5->RefCount;
    }
    v6 = v8[0];
    v9 = 0xFFFFFFFF;
    if ( v8[0] )
    {
      --v8[0]->RefCount;
      if ( !v6->RefCount )
        sub_7604D0(v6);
    }
  }
  sub_85E660();
  return 1;
}
