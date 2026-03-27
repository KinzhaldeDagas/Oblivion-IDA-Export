void (__thiscall ***__cdecl sub_961350(int a1))(_DWORD, int)
{
  int v1; // eax
  void (__thiscall ***v2)(_DWORD, int); // esi

  v1 = FormHeapAlloc(0x3Cu);
  if ( v1 )
  {
    v2 = (void (__thiscall ***)(_DWORD, int))sub_9604C0(
                                               v1,
                                               1.0,
                                               1.0,
                                               LODWORD(Vector3_InitValue_),
                                               *((_DWORD *)&Vector3_InitValue_ + 1),
                                               LODWORD(dword_B3F9B0),
                                               dword_B258D0,
                                               dword_B258D4,
                                               dword_B258D8);
    (**v2)(v2, a1);
    return v2;
  }
  else
  {
    (**(void (__thiscall ***)(_DWORD, int))0)(0, a1);
    return 0;
  }
}
