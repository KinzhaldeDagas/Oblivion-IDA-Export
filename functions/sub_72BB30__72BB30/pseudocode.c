int __thiscall sub_72BB30(int this, float *a2)
{
  int v3; // ebx
  unsigned int v4; // ebp
  unsigned int v5; // esi
  NiPoint3 *v6; // ebx
  float v8[4]; // [esp+10h] [ebp-BCh] BYREF
  float v9[4]; // [esp+20h] [ebp-ACh] BYREF
  NiTransform v10; // [esp+30h] [ebp-9Ch] BYREF
  NiTransform v11; // [esp+64h] [ebp-68h] BYREF
  NiTransform v12; // [esp+98h] [ebp-34h] BYREF

  v3 = *(_DWORD *)(*(_DWORD *)(this + 8) + 0x44);
  sub_72A820(v8, (NiPoint3 *)(v3 + 0x34), (NiTransform *)(**(_DWORD **)(this + 0x14) + 0x64));
  v4 = *(_DWORD *)(*(_DWORD *)(this + 8) + 0x40);
  v5 = 1;
  if ( v4 > 1 )
  {
    v6 = (NiPoint3 *)(v3 + 0x80);
    do
    {
      sub_72A820(v9, v6, (NiTransform *)(*(_DWORD *)(*(_DWORD *)(this + 0x14) + 4 * v5) + 0x64));
      sub_72A6B0(v8, v9);
      ++v5;
      v6 = (NiPoint3 *)((char *)v6 + 0x4C);
    }
    while ( v5 < v4 );
  }
  sub_718A80((float *)(*(_DWORD *)(this + 0x10) + 0x64), &v10);
  qmemcpy(&v11, sub_53D7A0((NiTransform *)(*(_DWORD *)(this + 8) + 0xC), &v12, &v10), sizeof(v11));
  return sub_72A820(a2, (NiPoint3 *)v8, &v11);
}
