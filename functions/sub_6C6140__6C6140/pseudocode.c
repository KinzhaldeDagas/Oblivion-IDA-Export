void __cdecl sub_6C6140(const char *a1, int a2)
{
  FormHeapAlloc(strlen(a1) + 0x20);
  switch ( a2 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      JUMPOUT(0x6C61AE);
    default:
      JUMPOUT(0x6C61AA);
  }
}
