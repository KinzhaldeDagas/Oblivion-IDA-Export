void __thiscall sub_71A040(void *this, unsigned __int16 a2, _WORD *a3, int a4)
{
  unsigned int *v5; // eax
  unsigned int v6; // edi
  bool v7; // zf
  int v8; // ebx
  unsigned int *v9; // eax
  unsigned int v10; // edi
  _WORD *v11; // eax
  int v12; // ecx

  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x44))(this) ) /*0x71a04b*/
  {
    if ( a3 != *((_WORD **)this + 0x12) ) /*0x71a058*/
    {
      v5 = (unsigned int *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x44))(this); /*0x71a061*/
      v6 = (unsigned int)v5; /*0x71a063*/
      v7 = v5[3]-- == 1; /*0x71a065*/
      if ( v7 ) /*0x71a069*/
      {
        sub_732A20(v5); /*0x71a06d*/
        FormHeapFree(v6); /*0x71a073*/
      }
    }
    v8 = a4; /*0x71a07b*/
    if ( a4 != *((_DWORD *)this + 0x13) ) /*0x71a082*/
    {
      v9 = (unsigned int *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x44))(this); /*0x71a08b*/
      v10 = (unsigned int)v9; /*0x71a08d*/
      v7 = v9[3]-- == 1; /*0x71a08f*/
      if ( v7 ) /*0x71a093*/
      {
        sub_732A20(v9); /*0x71a097*/
        FormHeapFree(v10); /*0x71a09d*/
      }
    }
  }
  else
  {
    if ( a3 != *((_WORD **)this + 0x12) ) /*0x71a0a9*/
      FormHeapFree(*((_DWORD *)this + 0x12)); /*0x71a0ac*/
    v8 = a4; /*0x71a0b7*/
    if ( a4 != *((_DWORD *)this + 0x13) ) /*0x71a0bd*/
      FormHeapFree(*((_DWORD *)this + 0x13)); /*0x71a0c0*/
  }
  *((_WORD *)this + 0x22) = a2; /*0x71a0d0*/
  *((_DWORD *)this + 0x12) = a3; /*0x71a0d4*/
  *((_DWORD *)this + 0x13) = v8; /*0x71a0d7*/
  *((_WORD *)this + 0x20) = 0; /*0x71a0da*/
  if ( a2 ) /*0x71a0e0*/
  {
    v11 = a3; /*0x71a0e2*/
    v12 = a2; /*0x71a0e4*/
    do /*0x71a101*/
    {
      *((_WORD *)this + 0x20) += *v11++ - 2; /*0x71a0f7*/
      --v12; /*0x71a0fe*/
    }
    while ( v12 ); /*0x71a101*/
  }
}
