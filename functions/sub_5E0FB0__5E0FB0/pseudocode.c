int __thiscall sub_5E0FB0(void *this, int *a2)
{
  int v3; // edi
  bool v4; // zf
  int (__thiscall *v5)(void *); // edx
  int v6; // ebx
  int v8; // ebx

  v3 = 0; /*0x5e0fbf*/
  v4 = a2 == sub_4A98C0(); /*0x5e0fc1*/
  v5 = *(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170); /*0x5e0fc5*/
  if ( v4 ) /*0x5e0fcd*/
  {
    v6 = v5(this); /*0x5e0fd1*/
    if ( v6 ) /*0x5e0fd5*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) ) /*0x5e0fe1*/
        v3 = v6; /*0x5e0fe7*/
    }
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 0x124))(v3, 0); /*0x5e0ff5*/
  }
  else
  {
    v8 = v5(this); /*0x5e1000*/
    if ( v8 ) /*0x5e1004*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) ) /*0x5e1010*/
        v3 = v8; /*0x5e1016*/
    }
    return (*(int (__thiscall **)(int, int *))(*(_DWORD *)v3 + 0x124))(v3, a2); /*0x5e1023*/
  }
}
