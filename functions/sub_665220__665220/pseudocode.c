void __usercall sub_665220(double a1@<st0>)
{
  char *v1; // eax

  if ( sub_57B400() == 2 )
  {
    v1 = (char *)sub_57B410();
    if ( v1 )
      sub_660450(TESDataHandler_g_PlayerRef, a1, v1);
  }
}
