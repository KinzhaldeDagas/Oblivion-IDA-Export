void __cdecl sub_A24270()
{
  unsigned int v0; // esi
  void (__thiscall ***v1)(_DWORD, int); // ecx
  void (__stdcall ****v2)(signed int); // ecx

  v0 = (unsigned int)dword_B12BB0;
  dword_B12BA4 = 0;
  if ( dword_B12BB0 )
  {
    v1 = (void (__thiscall ***)(_DWORD, int))*dword_B12BB0;
    if ( *dword_B12BB0 )
    {
      if ( v1[0xFFFFFFFF] )
        (**v1)(v1, 3);
      else
        FormHeapFree((unsigned int)(v1 + 0xFFFFFFFF));
    }
    v2 = *(void (__stdcall *****)(signed int))(v0 + 8);
    if ( v2 )
      sub_56B680(v2, 1);
    FormHeapFree(v0);
  }
  FormHeapFree(dword_B12B9C);
}
