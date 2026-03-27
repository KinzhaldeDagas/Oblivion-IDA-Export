_DWORD *__thiscall sub_43CB90(volatile LONG *this)
{
  int v2; // edi
  signed int v3; // eax
  _DWORD *v4; // ecx
  int v5; // ebx
  _DWORD *result; // eax
  _DWORD *v7; // esi
  _DWORD *v8; // [esp+Ch] [ebp-4h] BYREF

  v2 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 8) + 0x170))(*((_DWORD *)this + 8));
  v3 = sub_4A2A30(v2);
  v4 = *((_DWORD **)this + 8);
  v5 = v3;
  if ( v4 )
  {
    if ( sub_4D6FD0(v4) )
      v5 = 6;
  }
  sub_43B780(&v8, *((_DWORD *)this + 8), v2, BYTE2(*((_DWORD *)this + 4)), this, v5);
  result = v8;
  if ( v8 )
  {
    v7 = v8;
    result = (_DWORD *)InterlockedDecrement(v8 + 2);
    if ( !result )
      return (_DWORD *)(*(LONG (__thiscall **)(_DWORD *, int))*v7)(v7, 1);
  }
  return result;
}
