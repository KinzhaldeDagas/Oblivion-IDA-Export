int *__thiscall sub_5E0F50(void *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // ebx
  int *result; // eax

  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x128))(this);
  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this);
  v4 = v3;
  if ( !v2 )
  {
    if ( v3 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) )
        v2 = v4;
    }
  }
  result = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x120))(v2);
  if ( !result )
    return sub_4A98C0();
  return result;
}
