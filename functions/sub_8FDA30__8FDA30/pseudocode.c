int __thiscall sub_8FDA30(unsigned __int16 *this)
{
  int v2; // edi
  unsigned __int16 *v3; // ebx

  v2 = 0;
  if ( *((_BYTE *)this + 0x31) )
  {
    v3 = this + 9;
    do
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 2) + 0x10))(*((_DWORD *)this + 2), *v3);
      ++v2;
      v3 += 2;
    }
    while ( v2 < *((unsigned __int8 *)this + 0x31) );
  }
  return (**(int (__thiscall ***)(unsigned __int16 *, int))this)(this, 1);
}
