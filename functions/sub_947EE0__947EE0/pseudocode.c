int __thiscall sub_947EE0(char **this, int *a2)
{
  int v2; // eax
  int v4; // esi
  int result; // eax
  char **v6; // ebx
  int v7; // [esp+Ch] [ebp-8h] BYREF
  int v8; // [esp+10h] [ebp-4h] BYREF

  v2 = *a2;
  v4 = 0;
  v8 = 0;
  v7 = 0;
  result = (*(int (__thiscall **)(int *, int *, int *))(v2 + 8))(a2, &v8, &v7);
  if ( v7 > 0 )
  {
    v6 = this + 2;
    do
    {
      sub_8B0E80(v6, *(unsigned __int8 *)(v4 + v8), (int)a2);
      result = v7;
      ++v4;
    }
    while ( v4 < v7 );
  }
  return result;
}
