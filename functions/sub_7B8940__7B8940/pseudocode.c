char __cdecl sub_7B8940(NiAVObject *a1, unsigned int a2, int a3, int a4)
{
  const char *v4; // eax
  char v5; // bl

  if ( !a1 )
    return 0;
  NiAVObject_InitializePropertyState(a1);
  v4 = 0;
  if ( dword_B42EB4 )
    v4 = (const char *)dword_B42EB4(a1);
  v5 = sub_7B7FC0((NiNode *)a1, a2, a3, a4, v4);
  NiAVObject_InitializePropertyState(a1);
  return v5;
}
