bool __thiscall sub_5E8A90(void *this)
{
  _DWORD *v1; // ecx
  bool result; // al
  int v4; // edi
  int v5; // eax
  int v6; // ebx
  int v7; // ebx
  int v8; // edi

  v4 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x128))(this); /*0x5e8a9f*/
  v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this); /*0x5e8aab*/
  v6 = v5; /*0x5e8aaf*/
  if ( !v4 ) /*0x5e8ab1*/
  {
    if ( v5 ) /*0x5e8ab5*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) ) /*0x5e8ac1*/
        v4 = v6; /*0x5e8ac7*/
    }
  }
  v7 = v4; /*0x5e8acb*/
  if ( v4 ) /*0x5e8acd*/
  {
    if ( !*(_DWORD *)(v4 + 0x40) && !*(_DWORD *)(v4 + 0x3C) ) /*0x5e8ad5*/
    {
      v7 = 0; /*0x5e8ae5*/
      v8 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this); /*0x5e8ae9*/
      if ( v8 ) /*0x5e8aed*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) ) /*0x5e8af9*/
          v7 = v8; /*0x5e8aff*/
      }
    }
  }
  v1 = (_DWORD *)(v7 + 0x3C); /*0x4675a0*/
  result = 0; /*0x4675a3*/
  do /*0x4675cf*/
  {
    if ( result ) /*0x4675b2*/
      break; /*0x4675b2*/
    if ( *v1 ) /*0x4675b4*/
      result = (*(_BYTE *)(*(_DWORD *)*v1 + 0x34) & 4) != 0; /*0x4675c8*/
    v1 = (_DWORD *)v1[1]; /*0x4675ca*/
  }
  while ( v1 ); /*0x4675cf*/
  return result; /*0x4675d1*/
}
