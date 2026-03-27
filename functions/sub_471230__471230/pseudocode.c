int __thiscall sub_471230(int this, float a2, _DWORD *a3, int a4)
{
  int v5; // eax
  _DWORD *v6; // eax
  int result; // eax
  float *v8; // esi

  v5 = *(_DWORD *)(this + 8);
  if ( v5 )
  {
    v6 = (_DWORD *)(v5 + 0x54);
    *v6 = *(_DWORD *)(this + 0x18);
    v6[1] = *(_DWORD *)(this + 0x1C);
    v6[2] = *(_DWORD *)(this + 0x20);
  }
  sub_47C990(*(_DWORD **)(this + 4), a2, *(_DWORD **)(this + 8));
  result = *(_DWORD *)(this + 8);
  if ( result )
  {
    if ( a3 )
    {
      *a3 = *(_DWORD *)(result + 0x54);
      a3[1] = *(_DWORD *)(result + 0x58);
      a3[2] = *(_DWORD *)(result + 0x5C);
    }
    v8 = (float *)(*(_DWORD *)(this + 8) + 0x54);
    *v8 = Vector3_InitValue_;
    v8[1] = *(&Vector3_InitValue_ + 1);
    result = LODWORD(dword_B3F9B0);
    v8[2] = dword_B3F9B0;
  }
  return result;
}
