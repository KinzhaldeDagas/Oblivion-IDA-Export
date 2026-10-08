void __userpurge sub_88C3D0(int *a1@<ecx>, int a2@<ebp>, int a3)
{
  int *v4; // eax

  if ( a1 ) /*0x88c3d5*/
  {
    v4 = (int *)(*(int (__thiscall **)(int *))(*a1 + 0x58))(a1); /*0x88c3dc*/
    if ( v4 ) /*0x88c3e0*/
    {
      if ( a1[7] ) /*0x88c3e2*/
      {
        if ( (unsigned int)a1[0xF] >= 0x64 ) /*0x88c3ec*/
        {
          sub_889F20(a1, 0); /*0x88c3f2*/
          sub_88AD90(a1); /*0x88c3f9*/
          sub_88A080((unsigned int *)a1); /*0x88c400*/
          sub_88A120(a1, a2); /*0x88c407*/
        }
        if ( *(_WORD *)(a3 + 4) ) /*0x88c410*/
          ++*(_WORD *)(a3 + 6); /*0x88c41c*/
        *(_DWORD *)(a1[0xE] + 4 * a1[0xF]++) = a3; /*0x88c427*/
      }
      else
      {
        sub_89BAE0(v4, a3); /*0x88c435*/
      }
    }
  }
}
