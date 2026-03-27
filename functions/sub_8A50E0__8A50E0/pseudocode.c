void __thiscall sub_8A50E0(int *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // ebx
  volatile LONG *v5; // eax

  sub_89F350(this, a2);
  v3 = sub_7124D0(a2);
  if ( v3 )
  {
    v4 = v3;
    do
    {
      v5 = (volatile LONG *)sub_7124A0(a2);
      if ( v5 )
        sub_8A46C0(this, v5);
      --v4;
    }
    while ( v4 );
  }
}
