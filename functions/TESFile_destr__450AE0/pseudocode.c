void __thiscall TESFile_destr(CHAR *this)
{
  unsigned int *v2; // ebx
  int v3; // ebx
  unsigned int *v4; // ebx
  int v5; // ebx

  TESFile_Close((Data *)this);
  v2 = (unsigned int *)(this + 0x3E0);
  if ( this != (CHAR *)0xFFFFFC20 )
  {
    do
    {
      if ( *v2 )
        FormHeapFree(*v2);
      v2 = (unsigned int *)v2[1];
    }
    while ( v2 );
  }
  if ( *((_DWORD *)this + 0xF9) )
  {
    do
    {
      v3 = *(_DWORD *)(*((_DWORD *)this + 0xF9) + 4);
      FormHeapFree(*((_DWORD *)this + 0xF9));
      *((_DWORD *)this + 0xF9) = v3;
    }
    while ( v3 );
  }
  *((_DWORD *)this + 0xF8) = 0;
  v4 = (unsigned int *)(this + 0x3E8);
  if ( this != (CHAR *)0xFFFFFC18 )
  {
    do
    {
      if ( *v4 )
        FormHeapFree(*v4);
      v4 = (unsigned int *)v4[1];
    }
    while ( v4 );
  }
  if ( *((_DWORD *)this + 0xFB) )
  {
    do
    {
      v5 = *(_DWORD *)(*((_DWORD *)this + 0xFB) + 4);
      FormHeapFree(*((_DWORD *)this + 0xFB));
      *((_DWORD *)this + 0xFB) = v5;
    }
    while ( v5 );
  }
  *((_DWORD *)this + 0xFA) = 0;
  FormHeapFree(*((_DWORD *)this + 0x89));
  FormHeapFree(*((_DWORD *)this + 0xFD));
  *((_DWORD *)this + 0xFD) = 0;
  sub_451000((int)this, (int)this);
  FormHeapFree(*((_DWORD *)this + 0x103));
  *((_DWORD *)this + 0x103) = 0;
  *((_WORD *)this + 0x209) = 0;
  *((_WORD *)this + 0x208) = 0;
  FormHeapFree(*((_DWORD *)this + 0x101));
  *((_DWORD *)this + 0x101) = 0;
  *((_WORD *)this + 0x205) = 0;
  *((_WORD *)this + 0x204) = 0;
}
