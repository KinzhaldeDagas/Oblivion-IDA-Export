void __thiscall sub_4A6380(_DWORD *this)
{
  int i; // edi
  _DWORD *v3; // eax

  for ( i = *(this + 1); i; i = *(this + 1) )
  {
    v3 = (_DWORD *)*(this + 2);
    if ( v3 )
    {
      *(this + 2) = v3[1];
      *(this + 1) = *v3;
      FormHeapFree((unsigned int)v3);
    }
    else
    {
      *(this + 1) = 0;
    }
    if ( *((_BYTE *)this + 0xC) )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)i + 0x10))(i, 1);
  }
}
