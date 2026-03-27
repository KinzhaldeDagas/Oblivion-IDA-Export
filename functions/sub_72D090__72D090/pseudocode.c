unsigned int __thiscall sub_72D090(unsigned __int16 *this, _DWORD *a2, int a3, int a4)
{
  unsigned int result; // eax
  unsigned int v6; // edi
  bool v7; // zf
  _WORD *v8; // eax
  int v9; // [esp+10h] [ebp-14h]
  unsigned __int16 v10; // [esp+18h] [ebp-Ch] BYREF
  unsigned __int16 v11; // [esp+1Ah] [ebp-Ah] BYREF
  unsigned __int16 v12[2]; // [esp+1Ch] [ebp-8h] BYREF

  result = FormHeapAlloc((unsigned __int64)(3 * (unsigned int)*(this + 0xF)) >> 0x1F != 0 ? 0xFFFFFFFF : 6 * *(this + 0xF));
  v6 = 0;
  v7 = *(this + 0xF) == 0;
  *((_DWORD *)this + 5) = result;
  if ( !v7 )
  {
    v9 = 0;
    do
    {
      (*(void (__thiscall **)(int, _DWORD, unsigned __int16 *, unsigned __int16 *, unsigned __int16 *))(*(_DWORD *)a3 + 0x60))(
        a3,
        *(unsigned __int16 *)(*a2 + 2 * v6),
        &v10,
        &v11,
        v12);
      v8 = (_WORD *)(v9 + *((_DWORD *)this + 5));
      *v8 = *(_WORD *)(a4 + 2 * v10);
      v8[1] = *(_WORD *)(a4 + 2 * v11);
      v8[2] = *(_WORD *)(a4 + 2 * v12[0]);
      result = *(this + 0xF);
      ++v6;
      v9 += 6;
    }
    while ( v6 < result );
  }
  return result;
}
