int __thiscall sub_75E040(float *this)
{
  int v2; // ecx
  int v3; // edi

  v2 = *((_DWORD *)this + 3);
  if ( v2 )
  {
    if ( !byte_B3F944 )
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v2 + 0x9C))(*(this + 4));
      v3 = *((_DWORD *)this + 3);
      if ( v3 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
          (**(void (__thiscall ***)(int, int))v3)(v3, 1);
        *(this + 3) = 0.0;
      }
    }
  }
  return (*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x54))(this);
}
