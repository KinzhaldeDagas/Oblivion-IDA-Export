char __cdecl sub_88CD50(NiObjectNET *a1, char a2, char a3)
{
  char result; // al
  NiObject *v4; // eax
  void (__cdecl *v5)(int, int); // eax
  bool v6; // zf
  int v7; // [esp+4h] [ebp-1Ch] BYREF
  char v8; // [esp+8h] [ebp-18h]
  int v9; // [esp+Ch] [ebp-14h]

  result = 0; /*0x88cd58*/
  if ( a1 ) /*0x88cd5c*/
  {
    if ( a3 || (v4 = sub_6FA970(a1)) != 0 && (v4[1].members.m_uiRefCount & 2) != 0 ) /*0x88cd7a*/
    {
      v8 = a2; /*0x88cd80*/
      v5 = (void (__cdecl *)(int, int))off_B2E304[0]; /*0x88cd84*/
      v6 = off_B2E304[0] == 0; /*0x88cd89*/
      v7 = 0; /*0x88cd8b*/
      v9 = 1; /*0x88cd93*/
      if ( !v6 ) /*0x88cd9b*/
        sub_88A7D0(a1, (int)&v7, v5); /*0x88cda4*/
      return a3; /*0x88cdac*/
    }
    else
    {
      return 0; /*0x88cdb4*/
    }
  }
  return result; /*0x88cdaf*/
}
