void __thiscall sub_75E0A0(unsigned int *this)
{
  _DWORD *v2; // esi
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void (__stdcall ****v4)(signed int); // ecx

  v2 = (_DWORD *)*(this + 5);
  *(this + 2) = 0;
  if ( v2 )
  {
    v3 = (void (__thiscall ***)(_DWORD, int))*v2;
    if ( *v2 )
    {
      if ( v3[0xFFFFFFFF] )
        (**v3)(v3, 3);
      else
        FormHeapFree((unsigned int)(v3 + 0xFFFFFFFF));
    }
    v4 = (void (__stdcall ****)(signed int))v2[2];
    if ( v4 )
      sub_56B680(v4, 1);
    FormHeapFree((unsigned int)v2);
  }
  FormHeapFree(*this);
}
