char *__thiscall sub_42A540(char *this, int a2, int a3)
{
  _DWORD *v4; // eax

  *(this + 4) = 0x3E; /*0x42a56b*/
  *((_DWORD *)this + 2) = 0; /*0x42a56f*/
  *(_DWORD *)this = &ExtraOblivionEntry::`vftable'; /*0x42a57c*/
  if ( a2 && a3 ) /*0x42a58a*/
  {
    v4 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x174))(a2); /*0x42a594*/
    *((_DWORD *)this + 3) = *v4; /*0x42a598*/
    *((_DWORD *)this + 4) = v4[1]; /*0x42a59e*/
    *((_DWORD *)this + 5) = v4[2]; /*0x42a5a4*/
    *((_DWORD *)this + 6) = a3; /*0x42a5a7*/
  }
  else
  {
    *((NiPoint3 *)this + 1) = g_zeroNiPoint3; /*0x42a5b2*/
    *((_DWORD *)this + 6) = 0; /*0x42a5c7*/
  }
  return this; /*0x42a5cc*/
}
