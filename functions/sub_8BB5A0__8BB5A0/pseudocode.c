signed int __thiscall sub_8BB5A0(int *this, unsigned int a2, char a3)
{
  int *v3; // ecx

  v3 = this + 2;
  if ( a3 )
    return sub_8B1570(v3, a2);
  else
    return sub_8B0E80((char **)v3, a2, 1);
}
