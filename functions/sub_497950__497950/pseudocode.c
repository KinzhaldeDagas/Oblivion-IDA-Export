BOOL __thiscall sub_497950(unsigned __int8 *this, int a2)
{
  unsigned int v2; // ebp
  char v4; // bl
  int v5; // eax
  int v7; // [esp+10h] [ebp-4h] BYREF

  v2 = 0; /*0x497959*/
  v7 = 0; /*0x49795f*/
  v4 = 1; /*0x497963*/
  if ( a2 ) /*0x497965*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x154))(a2) ) /*0x497971*/
    {
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x154))(a2); /*0x497981*/
      if ( v5 ) /*0x497985*/
        v2 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5); /*0x497990*/
      if ( *this || (sub_4978A0(this, a2), *this) ) /*0x49799f*/
        v4 = sub_497500(this, v2, &v7, 0); /*0x4979b3*/
    }
  }
  return v7 == *this && v4; /*0x4979c2*/
}
