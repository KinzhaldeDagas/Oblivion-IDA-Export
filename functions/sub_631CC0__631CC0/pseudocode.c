double __thiscall sub_631CC0(_DWORD *this, void *a2, int a3)
{
  int v4; // edi
  float v6; // [esp+4h] [ebp-4h]

  v6 = flt_A3D8F0;
  if ( !sub_5E32D0(a2) )
  {
    if ( !a3 )
      return v6;
LABEL_8:
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 0x190))(a3) )
      return (float)(*(int (__thiscall **)(void *, int))(*(_DWORD *)a2 + 0x224))(a2, a3);
    return v6;
  }
  if ( a3 )
    goto LABEL_8;
  if ( *(this + 0xB) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0xB) + 0x190))(*(this + 0xB)) )
    {
      v4 = *(this + 0xB);
      if ( (*(_DWORD *)(v4 + 8) & 0x800) == 0 )
        return (float)(*(int (__thiscall **)(void *, int))(*(_DWORD *)a2 + 0x224))(a2, v4);
    }
  }
  return v6;
}
