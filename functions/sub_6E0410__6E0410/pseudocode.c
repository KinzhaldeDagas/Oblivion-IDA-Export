bool __thiscall sub_6E0410(float *this, int a2)
{
  int v4; // eax

  if ( !sub_715820(this, a2) )
    return 0;
  v4 = *((_DWORD *)this + 0x10);
  if ( v4 )
    return *(_DWORD *)(a2 + 0x40)
        && (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 0x2C))(*(_DWORD *)(a2 + 0x40));
  return !*(_DWORD *)(a2 + 0x40);
}
