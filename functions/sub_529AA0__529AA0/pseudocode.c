void __usercall sub_529AA0(_DWORD *this@<ecx>, double a2@<st1>, double a3@<st0>)
{
  Script *v4; // ecx

  v4 = (Script *)*(this + 7); /*0x529aa2*/
  if ( v4 ) /*0x529aa7*/
    Script_Run(v4, a3, a2, 0, (char **)*(this + 0x16), 0, 0); /*0x529ab3*/
}
