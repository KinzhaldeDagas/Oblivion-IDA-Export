int __thiscall sub_6D5FE0(_DWORD *this, int a2, int a3)
{
  int result; // eax
  void *v5; // ecx
  int v6; // esi
  int v7; // edi
  bool v8; // zf

  result = sub_6EBA60(this, a2, a3);
  v5 = (void *)*(this + 0xB);
  v6 = result;
  if ( v5 )
  {
    sub_6E1FC0(v5, (int)&a3, *(float *)&a2, *(float *)&a3);
    sub_6D5AD0((_DWORD *)v6, a3);
    v7 = a3;
    v8 = a3 == 0;
    *(_WORD *)(v6 + 0x30) = 0;
    *(_WORD *)(v6 + 0x32) = 0;
    *(_WORD *)(v6 + 0x34) = 0;
    if ( !v8 && !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
    {
      if ( v7 )
        (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    }
    return v6;
  }
  return result;
}
