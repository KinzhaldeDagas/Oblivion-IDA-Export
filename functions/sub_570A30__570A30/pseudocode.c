void __stdcall sub_570A30(NiObject *a1)
{
  unsigned int i; // ebx
  int v2; // esi
  unsigned int v3; // [esp+14h] [ebp-68h] BYREF
  NiTArray_NiTexturingPropertyMap v4; // [esp+18h] [ebp-64h] BYREF
  float v5[9]; // [esp+28h] [ebp-54h] BYREF
  float v6[12]; // [esp+4Ch] [ebp-30h] BYREF

  v4.capacity = 0xA;
  v4._vtbl = &NiTArray<NiAVObject *>::`vftable';
  v4.growSize = 1;
  v4.end = 0;
  v4.numObjs = 0;
  v4.data = (NiTexturingProperty_Map *)FormHeapAlloc(0x28u);
  v6[0xB] = 0.0;
  v3 = 0;
  sub_5708F0(a1, &v4, &v3);
  for ( i = 0; i < v4.end; ++i )
  {
    v2 = *((_DWORD *)&v4.data->vtbl + i);
    if ( v2 )
    {
      sub_7103C0((float *)(*(_DWORD *)(v2 + 0x1C) + 0x64), v5);
      qmemcpy((void *)(v2 + 0x30), NiMAtrix33_Multiply(v5, v6, (float *)(v2 + 0x30)), 0x24u);
    }
  }
  v4._vtbl = &NiTArray<NiAVObject *>::`vftable';
  FormHeapFree((unsigned int)v4.data);
}
