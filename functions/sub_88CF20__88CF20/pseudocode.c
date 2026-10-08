char __cdecl sub_88CF20(NiObjectNET *a1, unsigned __int8 a2, char a3, char a4)
{
  char v4; // bl
  NiObject *v5; // eax
  void (__cdecl *v6)(int, int); // eax
  bool v7; // zf
  int v9; // [esp+8h] [ebp-1Ch] BYREF
  char v10; // [esp+Ch] [ebp-18h]
  int v11; // [esp+10h] [ebp-14h]
  int v12; // [esp+14h] [ebp-10h]

  v4 = 0; /*0x88cf29*/
  if ( a1 ) /*0x88cf2d*/
  {
    if ( a4 || (v5 = sub_6FA970(a1)) != 0 && (v5[1].members.m_uiRefCount & 2) != 0 ) /*0x88cf48*/
    {
      v10 = a3; /*0x88cf53*/
      v6 = (void (__cdecl *)(int, int))off_B2E338[0]; /*0x88cf57*/
      v7 = off_B2E338[0] == 0; /*0x88cf5c*/
      v4 = 1; /*0x88cf5e*/
      v9 = 0; /*0x88cf60*/
      v11 = 0xE; /*0x88cf68*/
      v12 = a2; /*0x88cf70*/
      if ( !v7 ) /*0x88cf74*/
        sub_88A7D0(a1, (int)&v9, v6); /*0x88cf7d*/
    }
  }
  return v4; /*0x88cf85*/
}
