char __thiscall sub_6FF820(const void **this, char *Src, unsigned int *a3)
{
  if ( !Src )
    return 0;
  if ( a3 )
  {
    if ( !sub_452A60((Atmosphere *)a3) )
    {
      sub_721440(a3, Src);
      return sub_6FF570(this, (int)a3);
    }
    if ( !strcmp(Src, (const char *)sub_452A60((Atmosphere *)a3)) )
      return sub_6FF570(this, (int)a3);
  }
  return 0;
}
