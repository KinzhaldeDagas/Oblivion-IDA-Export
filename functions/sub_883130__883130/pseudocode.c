unsigned int __cdecl sub_883130(unsigned int a1)
{
  char v1; // cl
  unsigned int v2; // esi
  unsigned int *v3; // eax
  unsigned int v4; // edi

  v1 = 0;
  if ( a1 > 0x80 )
  {
    v2 = 0;
    a1 = 0;
    v3 = &a1;
    v1 = 1;
  }
  else
  {
    v2 = a1;
    v3 = (unsigned int *)(4 * a1 + 0xB45088);
  }
  v4 = *v3;
  if ( (v1 & 1) != 0 )
  {
    if ( v2 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
        (**(void (__thiscall ***)(unsigned int, int))v2)(v2, 1);
    }
  }
  return v4;
}
