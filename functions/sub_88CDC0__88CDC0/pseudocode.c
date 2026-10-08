char __cdecl sub_88CDC0(NiObjectNET *a1, char a2, char a3)
{
  char v3; // bl
  NiObject *v4; // eax
  void (__cdecl *v5)(int, int); // eax
  bool v6; // zf
  int v8; // [esp+8h] [ebp-1Ch] BYREF
  char v9; // [esp+Ch] [ebp-18h]
  int v10; // [esp+10h] [ebp-14h]

  v3 = 0; /*0x88cdc9*/
  if ( a1 ) /*0x88cdcd*/
  {
    if ( a3 || (v4 = sub_6FA970(a1)) != 0 && (v4[1].members.m_uiRefCount & 2) != 0 ) /*0x88cde8*/
    {
      v9 = a2; /*0x88cdee*/
      v5 = (void (__cdecl *)(int, int))off_B2E308; /*0x88cdf2*/
      v6 = off_B2E308 == 0; /*0x88cdf7*/
      v3 = 1; /*0x88cdf9*/
      v8 = 0; /*0x88cdfb*/
      v10 = 2; /*0x88ce03*/
      if ( !v6 ) /*0x88ce0b*/
        sub_88A7D0(a1, (int)&v8, v5); /*0x88ce14*/
    }
  }
  return v3; /*0x88ce1c*/
}
