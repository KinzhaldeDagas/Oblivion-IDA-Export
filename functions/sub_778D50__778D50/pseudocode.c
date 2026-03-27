char __thiscall sub_778D50(unsigned int *this, int a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // eax
  _DWORD *v5; // edx

  if ( !a2 || !(*(unsigned __int8 (__thiscall **)(unsigned int *, int))(*this + 0xC))(this, a2) )
    return 0;
  v3 = *(this + 3);
  v4 = 0;
  if ( v3 )
  {
    v5 = (_DWORD *)*(this + 1);
    while ( *v5 != a2 )
    {
      ++v4;
      ++v5;
      if ( v4 >= v3 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v4 = 0xFFFFFFFF;
  }
  --*(this + 3);
  *(_DWORD *)(*(this + 1) + 4 * v4) = *(_DWORD *)(*(this + 1) + 4 * *(this + 3));
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 0x24))(a2, 1);
  return 1;
}
