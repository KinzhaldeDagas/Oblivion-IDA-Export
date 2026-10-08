void __thiscall sub_626DE0(char *this)
{
  char *v1; // ebx
  char *v2; // esi
  int v3; // edi
  _DWORD *v4; // eax

  v1 = this + 0x54; /*0x626de1*/
  v2 = this + 0x54; /*0x626de5*/
  if ( this != (char *)0xFFFFFFAC ) /*0x626de9*/
  {
    do /*0x626e57*/
    {
      v3 = *(_DWORD *)v2; /*0x626df0*/
      if ( !*(_DWORD *)v2 ) /*0x626df0*/
        break; /*0x626df4*/
      if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 0x198))(v3, 0) /*0x626e2a*/
        || !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x334))(v3, 1)
        && (PlayerCharacter *)v3 != reference
        || (*(_DWORD *)(v3 + 8) & 0x20) != 0 )
      {
        v4 = *((_DWORD **)v2 + 1); /*0x626e31*/
        if ( v4 ) /*0x626e36*/
        {
          *((_DWORD *)v2 + 1) = v4[1]; /*0x626e3b*/
          *(_DWORD *)v2 = *v4; /*0x626e41*/
          FormHeapFree((unsigned int)v4); /*0x626e43*/
        }
        else
        {
          *(_DWORD *)v2 = 0; /*0x626e4d*/
        }
        v2 = v1; /*0x626e53*/
      }
      else
      {
        v2 = *((char **)v2 + 1); /*0x626e2c*/
      }
    }
    while ( v2 ); /*0x626e57*/
  }
}
