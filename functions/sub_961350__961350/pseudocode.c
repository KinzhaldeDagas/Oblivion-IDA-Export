void (__thiscall ***__cdecl sub_961350(int a1))(_DWORD, int)
{
  int v1; // eax
  void (__thiscall ***v2)(_DWORD, int); // esi

  v1 = FormHeapAlloc(0x3Cu); /*0x961353*/
  if ( v1 ) /*0x96135d*/
  {
    v2 = (void (__thiscall ***)(_DWORD, int))sub_9604C0( /*0x9613b0*/
                                               v1,
                                               1.0,
                                               1.0,
                                               LODWORD(g_zeroNiPoint3.x),
                                               LODWORD(g_zeroNiPoint3.y),
                                               LODWORD(g_zeroNiPoint3.z),
                                               LODWORD(stru_B258D0.x),
                                               LODWORD(stru_B258D0.y),
                                               LODWORD(stru_B258D0.z));
    (**v2)(v2, a1); /*0x9613bd*/
    return v2; /*0x9613bf*/
  }
  else
  {
    (**(void (__thiscall ***)(_DWORD, int))0)(0, a1); /*0x9613d0*/
    return 0; /*0x9613d2*/
  }
}
