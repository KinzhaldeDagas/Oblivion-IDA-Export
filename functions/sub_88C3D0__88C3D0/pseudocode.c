void __userpurge sub_88C3D0(int *a1@<ecx>, int a2@<ebp>, int a3)
{
  int *v4; // eax

  if ( a1 )
  {
    v4 = (int *)(*(int (__thiscall **)(int *))(*a1 + 0x58))(a1);
    if ( v4 )
    {
      if ( a1[7] )
      {
        if ( (unsigned int)a1[0xF] >= 0x64 )
        {
          sub_889F20(a1, 0);
          sub_88AD90(a1);
          sub_88A080((unsigned int *)a1);
          sub_88A120(a1, a2);
        }
        if ( *(_WORD *)(a3 + 4) )
          ++*(_WORD *)(a3 + 6);
        *(_DWORD *)(a1[0xE] + 4 * a1[0xF]++) = a3;
      }
      else
      {
        sub_89BAE0(v4, a3);
      }
    }
  }
}
