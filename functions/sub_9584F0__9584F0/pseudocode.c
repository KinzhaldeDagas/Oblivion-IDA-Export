void __cdecl sub_9584F0(unsigned int *a1, unsigned int a2, char **a3)
{
  unsigned int *v3; // esi

  v3 = a1;
  if ( (unsigned int)a1 < a2 )
  {
    while ( 2 )
    {
      sub_8B0E80(a3, *v3, *v3);
      switch ( *(_BYTE *)*v3 )
      {
        case 'E':
        case 'S':
        case 'T':
        case 'l':
          v3 += 3;
          goto LABEL_7;
        case 'L':
          sub_8B0E80(a3, v3[3], v3[3]);
          v3 += 4;
          goto LABEL_7;
        case 'M':
          v3 += 2;
          goto LABEL_7;
        case 'P':
        case 'p':
          ++v3;
LABEL_7:
          if ( (unsigned int)v3 >= a2 )
            return;
          continue;
        default:
          return;
      }
    }
  }
}
