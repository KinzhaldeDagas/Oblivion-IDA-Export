void sub_58BD50()
{
  int *v0; // ebp
  _DWORD *v1; // esi
  int *v2; // eax
  int v3; // ecx
  bool v4; // zf
  unsigned int v5; // edi

  v0 = &dword_B3B0B4[2]; /*0x58bd54*/
  do /*0x58bdbc*/
  {
    if ( *v0 ) /*0x58bd60*/
    {
      v1 = v0 + 0xFFFFFFFD; /*0x58bd65*/
      do /*0x58bdae*/
      {
        v2 = (int *)v1[1]; /*0x58bd68*/
        v3 = *v2; /*0x58bd6b*/
        v4 = *v2 == 0; /*0x58bd6d*/
        v1[1] = *v2; /*0x58bd6f*/
        if ( v4 ) /*0x58bd72*/
          v1[2] = 0; /*0x58bd79*/
        else
          *(_DWORD *)(v3 + 4) = 0; /*0x58bd74*/
        v5 = v2[2]; /*0x58bd7e*/
        (*(void (__thiscall **)(int *, int *))(*v1 + 8))(v0 + 0xFFFFFFFD, v2); /*0x58bd87*/
        --*v0; /*0x58bd89*/
        if ( v5 ) /*0x58bd8f*/
        {
          FormHeapFree(*(_DWORD *)(v5 + 8)); /*0x58bd95*/
          *(_DWORD *)(v5 + 8) = 0; /*0x58bd9b*/
          *(_WORD *)(v5 + 0xE) = 0; /*0x58bd9e*/
          *(_WORD *)(v5 + 0xC) = 0; /*0x58bda2*/
          FormHeapFree(v5); /*0x58bda6*/
        }
      }
      while ( *v0 ); /*0x58bdae*/
    }
    v0 += 4; /*0x58bdb3*/
  }
  while ( (int)v0 < (int)&dword_B3B0B4[0x72] ); /*0x58bdbc*/
}
