void __stdcall sub_848FA0(_DWORD **a1, int a2)
{
  int v2; // eax

  if ( a1 )
  {
    if ( a2 )
    {
      if ( byte_B42CDD )
      {
        v2 = (*(int (**)(void))(*(_DWORD *)a2 + 0x78))();
        sub_7715E0(a1, v2);
      }
    }
  }
}
