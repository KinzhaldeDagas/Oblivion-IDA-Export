int __thiscall sub_75A3F0(float *this, int a2)
{
  int v3; // edi
  int result; // eax
  int v5; // ecx
  unsigned __int8 v6; // dl

  v3 = *((_DWORD *)this + 6);
  if ( v3 != a2 )
  {
    if ( v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    }
    *((_DWORD *)this + 6) = a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)(a2 + 4));
  }
  result = *((_DWORD *)this + 6);
  *(this + 7) = 0.0;
  *(this + 8) = 0.0;
  if ( result )
  {
    v5 = *(_DWORD *)(result + 8);
    v6 = *(_BYTE *)(result + 0x14);
    result = *(_DWORD *)(result + 0xC);
    if ( v5 )
    {
      *(this + 7) = *(float *)result;
      *(this + 8) = *(float *)(v6 * (v5 - 1) + result);
    }
  }
  return result;
}
