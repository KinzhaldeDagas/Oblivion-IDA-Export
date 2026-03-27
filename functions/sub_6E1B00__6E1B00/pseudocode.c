void __thiscall sub_6E1B00(int this, float a2, float a3)
{
  unsigned __int16 v4; // ax
  int v5; // ecx
  int v6; // eax
  unsigned __int16 v7; // ax
  int v8; // edx
  int v9; // ecx
  unsigned __int16 v10; // ax
  int v11; // edx
  int v12; // eax
  int v13; // edx
  int v14; // [esp+Ch] [ebp-8h] BYREF
  int v15; // [esp+10h] [ebp-4h] BYREF

  v4 = *(_WORD *)(this + 8);
  if ( v4 )
  {
    v5 = *(_DWORD *)(this + 0x20);
    v14 = v4;
    v15 = v5;
    sub_6D3540(2, *(_DWORD *)(this + 0x10), (float **)&v15, &v14, a2, a3);
    v6 = v15;
    *(_WORD *)(this + 8) = v14;
    *(_DWORD *)(this + 0x20) = v6;
  }
  v7 = *(_WORD *)(this + 0xA);
  if ( v7 )
  {
    v8 = *(_DWORD *)(this + 0x24);
    v14 = v7;
    v15 = v8;
    sub_6D3540(1, *(_DWORD *)(this + 0x14), (float **)&v15, &v14, a2, a3);
    v9 = v15;
    *(_WORD *)(this + 0xA) = v14;
    *(_DWORD *)(this + 0x24) = v9;
  }
  v10 = *(_WORD *)(this + 0xC);
  if ( v10 )
  {
    v11 = v10;
    v12 = *(_DWORD *)(this + 0x28);
    v14 = v11;
    v15 = v12;
    sub_6D3540(0, *(_DWORD *)(this + 0x18), (float **)&v15, &v14, a2, a3);
    v13 = v15;
    *(_WORD *)(this + 0xC) = v14;
    *(_DWORD *)(this + 0x28) = v13;
  }
}
