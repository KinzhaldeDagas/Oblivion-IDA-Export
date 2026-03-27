char __cdecl sub_88D000(NiObjectNET *a1, char a2, char a3)
{
  char v3; // bl
  NiObject *v4; // eax
  void (__cdecl *v5)(int, int); // eax
  bool v6; // zf
  int v8; // [esp+8h] [ebp-1Ch] BYREF
  char v9; // [esp+Ch] [ebp-18h]
  int v10; // [esp+10h] [ebp-14h]

  v3 = 0;
  if ( a1 )
  {
    if ( a3 || (v4 = sub_6FA970(a1)) != 0 && (v4[1].members.m_uiRefCount & 2) != 0 )
    {
      v9 = a2;
      v5 = (void (__cdecl *)(int, int))off_B2E310;
      v6 = off_B2E310 == 0;
      v3 = 1;
      v8 = 0;
      v10 = 4;
      if ( !v6 )
        sub_88A7D0(a1, (int)&v8, v5);
    }
  }
  return v3;
}
