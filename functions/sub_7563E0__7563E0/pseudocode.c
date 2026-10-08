char *sub_7563E0()
{
  char *v0; // eax

  v0 = (char *)FormHeapAlloc(0x100u); /*0x7563e5*/
  if ( v0 ) /*0x7563ef*/
    return sub_7561F0( /*0x756449*/
             v0,
             1.0,
             0,
             0,
             0,
             0,
             1.0,
             1.0,
             LODWORD(stru_B258D0.x),
             LODWORD(stru_B258D0.y),
             LODWORD(stru_B258D0.z),
             LODWORD(stru_B258DC.x),
             LODWORD(stru_B258DC.y),
             LODWORD(stru_B258DC.z));
  else
    return 0; /*0x75644f*/
}
