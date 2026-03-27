void __cdecl TesObjectREFR_Disable(int a1)
{
  int *v1; // eax

  if ( a1 )
  {
    v1 = &dword_B361CC;
    while ( *v1 != a1 )
    {
      v1 = (int *)v1[1];
      if ( !v1 )
      {
        BSSimpleList_PushFront(&dword_B361CC, a1);
        return;
      }
    }
  }
}
