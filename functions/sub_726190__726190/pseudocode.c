int __thiscall sub_726190(int this, unsigned int a2, _DWORD *a3)
{
  _DWORD *v4; // esi

  *a3 = 0;
  if ( a2 >= *(unsigned __int16 *)(this + 0x26) )
    return 0;
  v4 = *(_DWORD **)(*(_DWORD *)(this + 0x20) + 4 * a2);
  if ( !v4 )
    return 0;
  *a3 = v4[1];
  (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v4 + 4))(v4, 0, 0);
  return v4[2];
}
