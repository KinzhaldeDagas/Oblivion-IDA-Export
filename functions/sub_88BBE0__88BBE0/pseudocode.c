char __cdecl sub_88BBE0(NiObjectNET *a1, int a2, void (__cdecl *a3)(int, int))
{
  char v3; // bl
  NiObject *v4; // eax

  v3 = 0;
  if ( a1 )
  {
    v4 = sub_6FA970(a1);
    if ( v4 )
    {
      if ( (v4[1].members.m_uiRefCount & 2) != 0 )
      {
        v3 = 1;
        sub_88A7D0(a1, a2, a3);
      }
    }
  }
  return v3;
}
