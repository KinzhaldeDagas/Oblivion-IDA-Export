void __thiscall sub_663740(int *this)
{
  int *v1; // ebp
  int *v2; // ebx
  int *v3; // edi
  _DWORD *v4; // esi
  NiObjectNET *v5; // eax

  v1 = this + 0x1E0; /*0x663748*/
  if ( *(this + 0x1E1) || *v1 ) /*0x663750*/
  {
    v2 = this + 0x1E0; /*0x663757*/
    v3 = this + 0x1E0; /*0x66375c*/
    if ( this != (int *)0xFFFFF880 ) /*0x66375e*/
    {
      do /*0x6637b8*/
      {
        if ( !v3[1] && !*v3 ) /*0x663767*/
          break; /*0x66376a*/
        v4 = (_DWORD *)*v3; /*0x66376c*/
        if ( *v3 && (*(int (__thiscall **)(int))(*v4 + 0x154))(*v3) ) /*0x66377c*/
        {
          v5 = (NiObjectNET *)(*(int (__thiscall **)(_DWORD *))(*v4 + 0x154))(v4); /*0x663792*/
          sub_88CF90(v5, 1u, 1, 0); /*0x663795*/
          BSSimpleList_Remove(v1, (int)v4); /*0x6637a0*/
          v4[2] &= ~0x400000u; /*0x6637a5*/
          v3 = (int *)v2[1]; /*0x6637ac*/
        }
        else
        {
          v2 = v3; /*0x6637b1*/
          v3 = (int *)v3[1]; /*0x6637b3*/
        }
      }
      while ( v3 ); /*0x6637b8*/
    }
  }
}
