int __thiscall sub_726190(int this, unsigned int a2, _DWORD *a3)
{
  _DWORD *v4; // esi

  *a3 = 0; /*0x726199*/
  if ( a2 >= *(unsigned __int16 *)(this + 0x26) ) /*0x7261a5*/
    return 0; /*0x7261a5*/
  v4 = *(_DWORD **)(*(_DWORD *)(this + 0x20) + 4 * a2); /*0x7261b0*/
  if ( !v4 ) /*0x7261b5*/
    return 0; /*0x7261a7*/
  *a3 = v4[1]; /*0x7261ba*/
  (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v4 + 4))(v4, 0, 0); /*0x7261c7*/
  return v4[2]; /*0x7261a9*/
}
