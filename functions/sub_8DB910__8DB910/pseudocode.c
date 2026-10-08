void __userpurge sub_8DB910(int a1@<eax>, const void **a2@<ecx>, int a3)
{
  int v4; // ebx
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  _RTL_CRITICAL_SECTION_0 *v8; // ecx
  int v9; // [esp+10h] [ebp-18h] BYREF
  int v10; // [esp+14h] [ebp-14h]
  int v11; // [esp+18h] [ebp-10h]
  int v12; // [esp+1Ch] [ebp-Ch]
  const void **v13; // [esp+24h] [ebp-4h]

  v4 = (int)a2[0x21]; /*0x8db918*/
  v5 = (int)a2[0x22]; /*0x8db91e*/
  LOWORD(v9) = a3; /*0x8db92e*/
  v10 = 0; /*0x8db933*/
  v11 = v4; /*0x8db93b*/
  v12 = v5; /*0x8db93f*/
  v13 = a2; /*0x8db943*/
  if ( (_WORD)a3 != 0xFFFF ) /*0x8db947*/
  {
    a1 = (*((int (__thiscall **)(const void **, int))*a2 + 8))(a2, a3); /*0x8db94c*/
    if ( a1 ) /*0x8db951*/
    {
      a1 += 8; /*0x8db953*/
      v10 = a1; /*0x8db956*/
    }
    else
    {
      v10 = 0; /*0x8db95c*/
    }
  }
  sub_8DC920(a1, (int)a2[2], (int)&v9); /*0x8db96d*/
  if ( *(_DWORD *)(v4 + 0x98) ) /*0x8db972*/
    sub_8DC0A0((int)&v9, v4, (int)&v9); /*0x8db985*/
  v6 = *(_DWORD *)(v5 + 0x98); /*0x8db98d*/
  if ( v6 ) /*0x8db995*/
    sub_8DC0A0(v6, v5, (int)&v9); /*0x8db99d*/
  sub_925C10(a2 + 4, a3); /*0x8db9a9*/
  if ( !a2[0x13] ) /*0x8db9ae*/
  {
    v7 = (int)a2[2]; /*0x8db9b5*/
    v8 = *(_RTL_CRITICAL_SECTION_0 **)(v7 + 0xA0); /*0x8db9b8*/
    if ( v8 ) /*0x8db9c0*/
    {
      sub_8A7720(v8); /*0x8db9db*/
      sub_8CB4E0((int)a2[2], (int)(a2 + 0x1D), 1); /*0x8db9ea*/
      LeaveCriticalSection(*((LPCRITICAL_SECTION *)a2[2] + 0x28)); /*0x8db9fc*/
    }
    else
    {
      sub_8CB4E0(v7, (int)(a2 + 0x1D), 1); /*0x8db9c9*/
    }
  }
}
