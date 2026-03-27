char __thiscall sub_805670(_DWORD *this)
{
  NiD3DPass **v1; // edi
  NiD3DPass **v2; // esi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  int v8; // [esp+10h] [ebp-18h]
  NiD3DPass *v9; // [esp+14h] [ebp-14h] BYREF
  _DWORD *v10; // [esp+18h] [ebp-10h]
  unsigned int v11; // [esp+24h] [ebp-4h]

  v10 = this;
  v1 = (NiD3DPass **)(this + 0x1F);
  v8 = 2;
  do
  {
    v2 = sub_7606A0(&v9);
    v3 = *v1;
    v4 = *v1 == *v2;
    v11 = 0;
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
      *v1 = *v2;
      if ( !v4 )
        ++v5->RefCount;
    }
    v6 = v9;
    v11 = 0xFFFFFFFF;
    if ( v9 )
    {
      --v9->RefCount;
      if ( !v6->RefCount )
        sub_7604D0(v6);
    }
    ++v1;
    --v8;
  }
  while ( v8 );
  (*(void (__thiscall **)(_DWORD *))(*v10 + 0xA8))(v10);
  return 1;
}
