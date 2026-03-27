bool __thiscall MagicTarget_HasEffect(void *this, int a2)
{
  int *v2; // ecx
  bool result; // al
  int *v4; // edx
  int v5; // ecx

  v2 = (int *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 8))(this);
  result = 0;
  if ( v2 )
  {
    do
    {
      v4 = (int *)v2[1];
      if ( !v4 && !*v2 )
        break;
      if ( result )
        break;
      v5 = *v2;
      if ( v5 )
        result = **(_DWORD **)(v5 + 0xC) == a2;
      v2 = v4;
    }
    while ( v4 );
  }
  return result;
}
