char __cdecl sub_88D0E0(NiObjectNET *a1, int a2, char a3, char a4)
{
  char v4; // bl
  NiObject *v5; // eax
  void (__cdecl *v6)(int, int); // eax
  bool v7; // zf
  int v9; // [esp+8h] [ebp-1Ch] BYREF
  char v10; // [esp+Ch] [ebp-18h]
  int v11; // [esp+10h] [ebp-14h]
  int v12; // [esp+14h] [ebp-10h]

  v4 = 0; /*0x88d0e9*/
  if ( a1 ) /*0x88d0ed*/
  {
    if ( a4 || (v5 = sub_6FA970(a1)) != 0 && (v5[1].members.m_uiRefCount & 2) != 0 ) /*0x88d108*/
    {
      v10 = a3; /*0x88d112*/
      v6 = (void (__cdecl *)(int, int))off_B2E31C[0]; /*0x88d116*/
      v7 = off_B2E31C[0] == 0; /*0x88d11b*/
      v4 = 1; /*0x88d11d*/
      v9 = 0; /*0x88d11f*/
      v11 = 7; /*0x88d127*/
      v12 = a2; /*0x88d12f*/
      if ( !v7 ) /*0x88d133*/
        sub_88A7D0(a1, (int)&v9, v6); /*0x88d13c*/
    }
  }
  return v4; /*0x88d144*/
}
