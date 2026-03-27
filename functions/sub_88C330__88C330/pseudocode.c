void __userpurge sub_88C330(int *a1@<ecx>, int a2@<ebp>, int a3)
{
  int v4; // eax
  int v5; // esi
  int v6; // esi

  if ( a1 )
  {
    v4 = (*(int (__thiscall **)(int *))(*a1 + 0x58))(a1);
    if ( v4 )
    {
      if ( a1[7] )
      {
        if ( (unsigned int)a1[0x11] >= 0xC8 )
        {
          sub_889E20(a1);
          sub_88AD90(a1);
          sub_88A080((unsigned int *)a1);
          sub_88A120(a1, a2);
        }
        if ( *(_WORD *)(a3 + 4) )
          ++*(_WORD *)(a3 + 6);
        *(_DWORD *)(a1[0x10] + 4 * a1[0x11]++) = a3;
      }
      else if ( a3 )
      {
        if ( !*(_DWORD *)(a3 + 8) )
        {
          v5 = *(_DWORD *)(a3 + 0x10);
          if ( !v5 || *(_DWORD *)(v5 + 0x54) )
          {
            v6 = *(_DWORD *)(a3 + 0x14);
            if ( !v6 || *(_DWORD *)(v6 + 0x54) )
              sub_8988A0(v4, a2, (_DWORD *)a3);
          }
        }
      }
    }
  }
}
