char __thiscall sub_883190(void *this)
{
  unsigned int i; // edi
  NiD3DPass **v2; // esi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  void *v7; // esi
  NiD3DPass *v9; // [esp+10h] [ebp-14h] BYREF
  void *v10; // [esp+14h] [ebp-10h]
  unsigned int v11; // [esp+20h] [ebp-4h]

  v10 = this;
  for ( i = 0; i < 0x1C; ++i )
  {
    v2 = sub_7606A0(&v9);
    v3 = (NiD3DPass *)dword_B47790[i];
    v4 = v3 == *v2;
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
      dword_B47790[i] = (int)*v2;
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
  }
  v7 = v10;
  (*(void (__thiscall **)(void *))(*(_DWORD *)v10 + 0xC4))(v10);
  if ( ShaderPackage >= 2 )
    (*(void (__thiscall **)(void *))(*(_DWORD *)v7 + 0xC8))(v7);
  return 1;
}
