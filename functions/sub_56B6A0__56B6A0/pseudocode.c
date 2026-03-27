void __thiscall sub_56B6A0(void (__stdcall ****this)(signed int))
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void (__stdcall ****v3)(signed int); // esi

  v2 = (void (__thiscall ***)(_DWORD, int))*this;
  if ( v2 )
  {
    if ( v2[0xFFFFFFFF] )
      (**v2)(v2, 3);
    else
      FormHeapFree((unsigned int)(v2 + 0xFFFFFFFF));
  }
  v3 = (void (__stdcall ****)(signed int))*(this + 2);
  if ( v3 )
  {
    sub_56B6A0(v3);
    FormHeapFree((unsigned int)v3);
  }
}
