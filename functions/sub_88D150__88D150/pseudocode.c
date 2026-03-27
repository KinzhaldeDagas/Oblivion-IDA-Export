bool __cdecl sub_88D150(NiObjectNET *a1, char a2, char a3)
{
  NiObject *v3; // eax
  void (__cdecl *v4)(int, int); // eax
  bool v5; // zf
  int v7; // [esp+8h] [ebp-1Ch] BYREF
  char v8; // [esp+Ch] [ebp-18h]
  int v9; // [esp+10h] [ebp-14h]
  int v10; // [esp+14h] [ebp-10h]

  if ( !a1 )
    return 0;
  if ( !a3 )
  {
    v3 = sub_6FA970(a1);
    if ( !v3 || (v3[1].members.m_uiRefCount & 2) == 0 )
      return 0;
  }
  v8 = a2;
  v4 = (void (__cdecl *)(int, int))off_B2E320[0];
  v5 = off_B2E320[0] == 0;
  v7 = 0;
  v9 = 8;
  v10 = 0;
  if ( !v5 )
    sub_88A7D0(a1, (int)&v7, v4);
  return v10 != 0;
}
