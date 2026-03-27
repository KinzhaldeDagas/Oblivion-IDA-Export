char __cdecl sub_88CD50(NiObjectNET *a1, char a2, char a3)
{
  char result; // al
  NiObject *v4; // eax
  void (__cdecl *v5)(int, int); // eax
  bool v6; // zf
  int v7; // [esp+4h] [ebp-1Ch] BYREF
  char v8; // [esp+8h] [ebp-18h]
  int v9; // [esp+Ch] [ebp-14h]

  result = 0;
  if ( a1 )
  {
    if ( a3 || (v4 = sub_6FA970(a1)) != 0 && (v4[1].members.m_uiRefCount & 2) != 0 )
    {
      v8 = a2;
      v5 = (void (__cdecl *)(int, int))off_B2E304[0];
      v6 = off_B2E304[0] == 0;
      v7 = 0;
      v9 = 1;
      if ( !v6 )
        sub_88A7D0(a1, (int)&v7, v5);
      return a3;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
