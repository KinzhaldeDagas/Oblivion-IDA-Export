int __thiscall sub_7C5340(_WORD *this, int a2, int a3)
{
  int result; // eax
  int v5; // edi

  result = sub_7E2490(this, a2, a3);
  v5 = *(_DWORD *)(a2 + 0x7C);
  if ( v5 != *((_DWORD *)this + 0x1F) )
  {
    if ( v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
    result = *((_DWORD *)this + 0x1F);
    *(_DWORD *)(a2 + 0x7C) = result;
    if ( result )
      result = InterlockedIncrement((volatile LONG *)(result + 4));
  }
  *(float *)(a2 + 0x80) = *((float *)this + 0x20);
  *(_DWORD *)(a2 + 0x88) = *((_DWORD *)this + 0x22);
  return result;
}
