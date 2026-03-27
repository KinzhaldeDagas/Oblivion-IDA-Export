void __thiscall sub_68A250(float ***this)
{
  float ***v1; // eax
  float ***v2; // edx
  float **v3; // eax

  v1 = this + 1;
  if ( this != (float ***)0xFFFFFFFC )
  {
    do
    {
      v2 = (float ***)v1[1];
      if ( !v2 && !*v1 )
        break;
      v3 = *v1;
      if ( v3 && !v2 )
      {
        sub_68B110(v3);
        return;
      }
      v1 = v2;
    }
    while ( v2 );
  }
}
