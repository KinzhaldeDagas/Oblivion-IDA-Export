void __thiscall sub_89EA70(_DWORD *this)
{
  _DWORD *v2; // esi
  int v3; // edi
  NiTransform v4; // [esp+8h] [ebp-44h] BYREF
  float v5[4]; // [esp+3Ch] [ebp-10h] BYREF

  v2 = (_DWORD *)*(this + 4);
  if ( v2 )
  {
    v3 = v2[2];
    if ( v3 )
    {
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v3 + 0x50) + 8))(*(_DWORD *)(v3 + 0x50)) != 7
        || !*(_DWORD *)(v3 + 8) )
      {
        sub_4D6950(v2, (float *)&v4);
        sub_47C600(&v4, (NiTransform *)&v4.rot.data[1][1]);
        sub_4D6900(v2, v5);
        (*(void (__thiscall **)(_DWORD *, float *))(*this + 0x78))(this, &v4.rot.data[1][1]);
      }
    }
  }
}
