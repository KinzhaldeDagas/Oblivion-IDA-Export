int __thiscall sub_4CA2A0(void *this, int a2)
{
  int result; // eax

  if ( *(_DWORD *)(a2 + 8) )
  {
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 8))(this, a2);
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 4))(this, a2);
  }
  return result;
}
