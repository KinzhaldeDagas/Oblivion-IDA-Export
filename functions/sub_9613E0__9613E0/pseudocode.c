int sub_9613E0()
{
  int v0; // eax

  v0 = FormHeapAlloc(0x3Cu); /*0x9613e2*/
  if ( v0 ) /*0x9613ec*/
    return sub_9604C0( /*0x96143a*/
             v0,
             1.0,
             1.0,
             LODWORD(g_zeroNiPoint3.x),
             LODWORD(g_zeroNiPoint3.y),
             LODWORD(g_zeroNiPoint3.z),
             LODWORD(stru_B258D0.x),
             LODWORD(stru_B258D0.y),
             LODWORD(stru_B258D0.z));
  else
    return 0; /*0x961440*/
}
