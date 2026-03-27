int __thiscall sub_780940(_BYTE *this, int a2)
{
  int result; // eax

  if ( *(this + 4) )
  {
    *(this + 4) = 0;
    return (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)a2 + 0xC4))(a2, *(_DWORD *)this);
  }
  return result;
}
