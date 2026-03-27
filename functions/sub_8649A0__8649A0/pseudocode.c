char __thiscall sub_8649A0(void *this)
{
  unsigned int i; // edi
  NiD3DPass **v2; // esi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  NiD3DPass *v8; // [esp+10h] [ebp-14h] BYREF
  void *v9; // [esp+14h] [ebp-10h]
  unsigned int v10; // [esp+20h] [ebp-4h]

  v9 = this;
  for ( i = 0; i < 0x3C; ++i )
  {
    v2 = sub_7606A0(&v8);
    v3 = (NiD3DPass *)dword_B47620[i];
    v4 = v3 == *v2;
    v10 = 0;
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
      dword_B47620[i] = (int)*v2;
      if ( !v4 )
        ++v5->RefCount;
    }
    v6 = v8;
    v10 = 0xFFFFFFFF;
    if ( v8 )
    {
      --v8->RefCount;
      if ( !v6->RefCount )
        sub_7604D0(v6);
    }
  }
  (*(void (__thiscall **)(void *))(*(_DWORD *)v9 + 0xC0))(v9);
  return 1;
}
