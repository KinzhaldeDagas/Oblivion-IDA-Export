int __thiscall sub_52F520(int *this, int a2)
{
  int *v2; // edi
  int result; // eax
  unsigned int v4; // esi
  int v5; // ecx

  v2 = this + 0xA; /*0x52f523*/
  if ( this != (int *)0xFFFFFFD8 ) /*0x52f528*/
  {
    do /*0x52f530*/
    {
      result = *v2; /*0x52f530*/
      if ( !*v2 ) /*0x52f530*/
        break; /*0x52f530*/
      v4 = *(_DWORD *)(result + 0x10); /*0x52f536*/
      v2 = (int *)v2[1]; /*0x52f53b*/
      if ( v4 ) /*0x52f53e*/
      {
        v5 = 0; /*0x52f540*/
        while ( *(_DWORD *)(*(_DWORD *)(result + 8) + 4 * v5) != a2 ) /*0x52f556*/
        {
          if ( ++v5 >= v4 ) /*0x52f55d*/
            goto LABEL_7; /*0x52f55d*/
        }
        return result; /*0x52f556*/
      }
LABEL_7:
      ; /*0x52f561*/
    }
    while ( v2 ); /*0x52f530*/
  }
  return 0; /*0x52f565*/
}
