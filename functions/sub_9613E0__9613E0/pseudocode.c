int sub_9613E0()
{
  int v0; // eax

  v0 = FormHeapAlloc(0x3Cu);
  if ( v0 )
    return sub_9604C0(
             v0,
             1.0,
             1.0,
             LODWORD(Vector3_InitValue_),
             *((_DWORD *)&Vector3_InitValue_ + 1),
             LODWORD(dword_B3F9B0),
             dword_B258D0,
             dword_B258D4,
             dword_B258D8);
  else
    return 0;
}
