int __thiscall sub_4D6AB0(int **this, char a2)
{
  int *v3; // edi
  int result; // eax

  if ( this )
  {
    v3 = *(this + 2);
    if ( v3 )
    {
      sub_89F570(this);
      if ( a2 )
        sub_8A6410((int)v3);
      else
        sub_8A6440(v3);
      return sub_89F570(this);
    }
  }
  return result;
}
