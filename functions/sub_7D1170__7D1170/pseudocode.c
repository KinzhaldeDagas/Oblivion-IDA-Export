char __thiscall sub_7D1170(NiD3DPass *this)
{
  unsigned int i; // ebx
  NiD3DPass **v2; // esi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  int v7; // esi
  int v8; // edi
  int *v9; // esi
  int v10; // ebp
  NiD3DPass *v12[2]; // [esp+14h] [ebp-14h] BYREF
  unsigned int v13; // [esp+24h] [ebp-4h]

  v12[1] = this;
  for ( i = 0; i < 0x1A3; ++i )
  {
    v2 = sub_7606A0(v12);
    v3 = (NiD3DPass *)dword_B455A0[i];
    v4 = v3 == *v2;
    v13 = 0;
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
      dword_B455A0[i] = (int)*v2;
      if ( !v4 )
        ++v5->RefCount;
    }
    v6 = v12[0];
    v13 = 0xFFFFFFFF;
    if ( v12[0] )
    {
      --v12[0]->RefCount;
      if ( !v6->RefCount )
        sub_7604D0(v6);
    }
    v7 = dword_B455A0[i];
    v8 = *(_DWORD *)(v7 + 0x58);
    v9 = (int *)(v7 + 0x58);
    v10 = dword_B45290[0];
    if ( v8 != dword_B45290[0] )
    {
      if ( v8 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
          (**(void (__thiscall ***)(int, int))v8)(v8, 1);
      }
      *v9 = v10;
      if ( v10 )
        InterlockedIncrement((volatile LONG *)(v10 + 4));
    }
  }
  sub_820910();
  sub_814430();
  sub_815DB0();
  sub_81AA00();
  sub_81B120();
  sub_81BCE0();
  sub_81D090();
  sub_81DC40();
  sub_81EA70();
  sub_8203D0();
  if ( ShaderPackage < 2 )
  {
    sub_81F330();
  }
  else
  {
    sub_82D990();
    sub_820C00();
    sub_828280();
    sub_831910();
    sub_832740();
    sub_8357B0();
    sub_836230();
    sub_836810();
    sub_839F90();
    sub_83A7E0();
    sub_839A50();
  }
  return 1;
}
