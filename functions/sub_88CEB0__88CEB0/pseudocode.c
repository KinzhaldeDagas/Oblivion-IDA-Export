char __cdecl sub_88CEB0(NiObjectNET *a1, unsigned __int8 a2, char a3, char a4)
{
  char v4; // bl
  NiObject *v5; // eax
  void (__cdecl *v6)(int, int); // eax
  bool v7; // zf
  int v9; // [esp+8h] [ebp-1Ch] BYREF
  char v10; // [esp+Ch] [ebp-18h]
  int v11; // [esp+10h] [ebp-14h]
  int v12; // [esp+14h] [ebp-10h]

  v4 = 0; /*0x88ceb9*/
  if ( a1 ) /*0x88cebd*/
  {
    if ( a4 || (v5 = sub_6FA970(a1)) != 0 && (v5[1].members.m_uiRefCount & 2) != 0 ) /*0x88ced8*/
    {
      v10 = a3; /*0x88cee3*/
      v6 = (void (__cdecl *)(int, int))off_B2E30C; /*0x88cee7*/
      v7 = off_B2E30C == 0; /*0x88ceec*/
      v4 = 1; /*0x88ceee*/
      v9 = 0; /*0x88cef0*/
      v11 = 3; /*0x88cef8*/
      v12 = a2; /*0x88cf00*/
      if ( !v7 ) /*0x88cf04*/
        sub_88A7D0(a1, (int)&v9, v6); /*0x88cf0d*/
    }
  }
  return v4; /*0x88cf15*/
}
