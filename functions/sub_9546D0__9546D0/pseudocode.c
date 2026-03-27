int __thiscall sub_9546D0(void *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // esi
  int v5; // ebx
  int result; // eax

  v3 = a2;
  if ( *a2 )
  {
    v5 = a3 - (_DWORD)a2;
    do
    {
      result = *(_DWORD *)((char *)v3 + v5);
      if ( !result )
        break;
      (*(void (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)this + 8))(
        this,
        *(_DWORD *)(*v3 + 8),
        *(_DWORD *)((char *)v3 + v5));
      result = v3[1];
      ++v3;
    }
    while ( result );
  }
  return result;
}
