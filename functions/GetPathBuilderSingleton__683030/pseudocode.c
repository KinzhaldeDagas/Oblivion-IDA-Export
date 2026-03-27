void GetPathBuilderSingleton()
{
  PathBuilder *v0; // eax

  if ( !dword_B3BF80 )
  {
    v0 = (PathBuilder *)FormHeapAlloc(0x48u);
    if ( v0 )
      dword_B3BF80 = (int)PathBuilder::PathBuilder(v0);
    else
      dword_B3BF80 = 0;
  }
}
