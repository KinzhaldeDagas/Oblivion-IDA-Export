int __thiscall sub_8DEFA0(int **this)
{
  _DWORD *v2; // ecx
  int **v3; // esi
  int v4; // ebx
  int result; // eax

  v2 = *(this + 4); /*0x8defa3*/
  if ( v2 ) /*0x8defa8*/
  {
    v3 = this + 5; /*0x8defaf*/
    sub_89D080(v2, (int)(this + 5), 6); /*0x8defb3*/
    v4 = 6; /*0x8defbb*/
    do /*0x8defd9*/
    {
      sub_8DE6C0(*v3, (int)(this + 3)); /*0x8defc3*/
      sub_8BC730((int (__stdcall ***)(signed int))*v3); /*0x8defca*/
      *v3++ = 0; /*0x8defcf*/
      --v4; /*0x8defd8*/
    }
    while ( v4 ); /*0x8defd9*/
    result = ((int (__thiscall *)(int **, _DWORD))(*(this + 2))[1])(this + 2, *(this + 4)); /*0x8defe5*/
    *(this + 4) = 0; /*0x8defea*/
  }
  return result; /*0x8deff2*/
}
