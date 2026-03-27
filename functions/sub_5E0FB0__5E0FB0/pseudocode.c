int __thiscall sub_5E0FB0(void *this, int *a2)
{
  int v3; // edi
  bool v4; // zf
  int (__thiscall *v5)(void *); // edx
  int v6; // ebx
  int v8; // ebx

  v3 = 0;
  v4 = a2 == sub_4A98C0();
  v5 = *(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170);
  if ( v4 )
  {
    v6 = v5(this);
    if ( v6 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) )
        v3 = v6;
    }
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 0x124))(v3, 0);
  }
  else
  {
    v8 = v5(this);
    if ( v8 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) )
        v3 = v8;
    }
    return (*(int (__thiscall **)(int, int *))(*(_DWORD *)v3 + 0x124))(v3, a2);
  }
}
