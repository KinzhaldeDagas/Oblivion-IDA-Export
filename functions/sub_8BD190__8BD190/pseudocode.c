void __thiscall sub_8BD190(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // ebx
  int v5; // eax

  sub_721550(this, a2);
  v3 = sub_7124D0(a2);
  if ( v3 )
  {
    v4 = v3;
    do
    {
      v5 = sub_7124A0(a2);
      if ( v5 )
        sub_8BD090(this, v5);
      --v4;
    }
    while ( v4 );
  }
}
