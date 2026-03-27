void __thiscall sub_8A04D0(_DWORD *this, _WORD *a2)
{
  int v2; // esi
  int (__stdcall ***v3)(signed int); // ecx

  if ( this )
  {
    v2 = *(this + 2);
    if ( v2 )
    {
      if ( a2 )
        sub_8BC720(a2);
      v3 = *(int (__stdcall ****)(signed int))(v2 + 0x10);
      if ( v3 )
        sub_8BC730(v3);
      *(_DWORD *)(v2 + 0x10) = a2;
    }
  }
}
