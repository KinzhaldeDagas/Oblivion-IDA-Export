bhkRefObject *sub_8A41F0()
{
  bhkRefObject *v0; // eax

  v0 = (bhkRefObject *)FormHeapAlloc(0x1Cu);
  if ( v0 )
    return sub_8A4150(v0);
  else
    return 0;
}
