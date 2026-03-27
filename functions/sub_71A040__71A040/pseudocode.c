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

  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x44))(this) )
  {
    if ( a3 != *((_WORD **)this + 0x12) )
    {
      v5 = (unsigned int *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x44))(this);
      v6 = (unsigned int)v5;
      v7 = v5[3]-- == 1;
      if ( v7 )
      {
        sub_732A20(v5);
        FormHeapFree(v6);
      }
    }
    v8 = a4;
    if ( a4 != *((_DWORD *)this + 0x13) )
    {
      v9 = (unsigned int *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x44))(this);
      v10 = (unsigned int)v9;
      v7 = v9[3]-- == 1;
      if ( v7 )
      {
        sub_732A20(v9);
        FormHeapFree(v10);
      }
    }
  }
  else
  {
    if ( a3 != *((_WORD **)this + 0x12) )
      FormHeapFree(*((_DWORD *)this + 0x12));
    v8 = a4;
    if ( a4 != *((_DWORD *)this + 0x13) )
      FormHeapFree(*((_DWORD *)this + 0x13));
  }
  *((_WORD *)this + 0x22) = a2;
  *((_DWORD *)this + 0x12) = a3;
  *((_DWORD *)this + 0x13) = v8;
  *((_WORD *)this + 0x20) = 0;
  if ( a2 )
  {
    v11 = a3;
    v12 = a2;
    do
    {
      *((_WORD *)this + 0x20) += *v11++ - 2;
      --v12;
    }
    while ( v12 );
  }
}
