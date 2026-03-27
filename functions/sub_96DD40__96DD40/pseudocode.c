void __thiscall sub_96DD40(_DWORD *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // edi
  _DWORD *v5; // ecx
  int v6; // ebx
  __int16 v7; // ax

  v2 = *(this + 2);
  if ( v2 )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0xC))(v2);
    v4 = v3;
    if ( v3 )
    {
      if ( *(this + 0x10) )
      {
        if ( *((_BYTE *)this + 0x48) )
        {
          v5 = *(_DWORD **)(v3 + 0xB4);
          v6 = v5[7];
          v7 = (*(int (**)(void))(*v5 + 0x50))();
          off_B27168(v7, v6, *(this + 0x10), v4 + 0x64);
          *((_BYTE *)this + 0x48) = 0;
        }
      }
    }
  }
}
