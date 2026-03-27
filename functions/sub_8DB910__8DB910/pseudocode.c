void __userpurge sub_8DB910(int a1@<eax>, int *a2@<ecx>, int a3)
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
  int *v13; // [esp+24h] [ebp-4h]

  v4 = a2[0x21];
  v5 = a2[0x22];
  LOWORD(v9) = a3;
  v10 = 0;
  v11 = v4;
  v12 = v5;
  v13 = a2;
  if ( (_WORD)a3 != 0xFFFF )
  {
    a1 = (*(int (__thiscall **)(int *, int))(*a2 + 0x20))(a2, a3);
    if ( a1 )
    {
      a1 += 8;
      v10 = a1;
    }
    else
    {
      v10 = 0;
    }
  }
  sub_8DC920(a1, a2[2], (int)&v9);
  if ( *(_DWORD *)(v4 + 0x98) )
    sub_8DC0A0((int)&v9, v4, (int)&v9);
  v6 = *(_DWORD *)(v5 + 0x98);
  if ( v6 )
    sub_8DC0A0(v6, v5, (int)&v9);
  sub_925C10(a2 + 4, a3);
  if ( !a2[0x13] )
  {
    v7 = a2[2];
    v8 = *(_RTL_CRITICAL_SECTION_0 **)(v7 + 0xA0);
    if ( v8 )
    {
      sub_8A7720(v8);
      sub_8CB4E0(a2[2], (int)(a2 + 0x1D), 1);
      LeaveCriticalSection(*(LPCRITICAL_SECTION *)(a2[2] + 0xA0));
    }
    else
    {
      sub_8CB4E0(v7, (int)(a2 + 0x1D), 1);
    }
  }
}
