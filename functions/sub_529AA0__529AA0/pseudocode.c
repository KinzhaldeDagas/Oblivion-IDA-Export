void __usercall sub_529AA0(_DWORD *this@<ecx>, double a2@<st1>, double a3@<st0>)
{
  Script *v5; // ecx

  v5 = (Script *)*(this + 7);
  if ( v5 )
    Script_Run(v5, a3, a2, 0, (char **)*(this + 0x16), 0, 0);
}
