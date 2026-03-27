int __thiscall sub_8DEFA0(int **this)
{
  _DWORD *v2; // ecx
  int **v3; // esi
  int v4; // ebx
  int result; // eax

  v2 = *(this + 4);
  if ( v2 )
  {
    v3 = this + 5;
    sub_89D080(v2, (int)(this + 5), 6);
    v4 = 6;
    do
    {
      sub_8DE6C0(*v3, (int)(this + 3));
      sub_8BC730((int (__thiscall ***)(int (__stdcall ***)(signed int), int))*v3);
      *v3++ = 0;
      --v4;
    }
    while ( v4 );
    result = ((int (__thiscall *)(int **, _DWORD))(*(this + 2))[1])(this + 2, *(this + 4));
    *(this + 4) = 0;
  }
  return result;
}
