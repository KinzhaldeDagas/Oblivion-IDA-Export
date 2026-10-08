char __cdecl sub_88BBE0(NiObjectNET *a1, int a2, void (__cdecl *a3)(int, int))
{
  char v3; // bl
  NiObject *v4; // eax

  v3 = 0; /*0x88bbe6*/
  if ( a1 ) /*0x88bbea*/
  {
    v4 = sub_6FA970(a1); /*0x88bbed*/
    if ( v4 ) /*0x88bbf7*/
    {
      if ( (v4[1].members.m_uiRefCount & 2) != 0 ) /*0x88bbff*/
      {
        v3 = 1; /*0x88bc0c*/
        sub_88A7D0(a1, a2, a3); /*0x88bc0e*/
      }
    }
  }
  return v3; /*0x88bc16*/
}
