char *sub_7563E0()
{
  char *v0; // eax

  v0 = (char *)FormHeapAlloc(0x100u);
  if ( v0 )
    return sub_7561F0(
             v0,
             1.0,
             0,
             0,
             0,
             0,
             1.0,
             1.0,
             dword_B258D0,
             dword_B258D4,
             dword_B258D8,
             dword_B258DC,
             qword_B258E0,
             HIDWORD(qword_B258E0));
  else
    return 0;
}
