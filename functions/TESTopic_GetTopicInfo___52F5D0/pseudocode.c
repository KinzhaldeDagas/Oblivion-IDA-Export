int __thiscall TESTopic_GetTopicInfo__(int *this, int a2, char a3)
{
  int *v3; // edi
  int v4; // esi
  unsigned int v5; // edx
  unsigned int v6; // ecx
  int result; // eax
  int v8; // ecx

  v3 = this + 0xA; /*0x52f5d4*/
  if ( this != (int *)0xFFFFFFD8 ) /*0x52f5d9*/
  {
    do /*0x52f5e3*/
    {
      v4 = *v3; /*0x52f5e3*/
      if ( !*v3 ) /*0x52f5e3*/
        break; /*0x52f5e3*/
      v5 = *(_DWORD *)(v4 + 0x10); /*0x52f5e9*/
      v3 = (int *)v3[1]; /*0x52f5ee*/
      if ( v5 ) /*0x52f5f1*/
      {
        if ( !a3 ) /*0x52f5f5*/
        {
          v8 = 0; /*0x52f61a*/
          while ( 1 ) /*0x52f627*/
          {
            result = *(_DWORD *)(*(_DWORD *)(v4 + 8) + 4 * v8); /*0x52f627*/
            if ( result ) /*0x52f62c*/
            {
              if ( *(_DWORD *)(result + 0xC) == a2 ) /*0x52f631*/
                return result; /*0x52f631*/
            }
            if ( ++v8 >= v5 ) /*0x52f638*/
              goto LABEL_15; /*0x52f638*/
          }
        }
        v6 = v5 - 1; /*0x52f5f7*/
        if ( (int)(v5 - 1) >= 0 ) /*0x52f5fc*/
        {
          do /*0x52f602*/
          {
            if ( v6 < v5 ) /*0x52f602*/
            {
              result = *(_DWORD *)(*(_DWORD *)(v4 + 8) + 4 * v6); /*0x52f607*/
              if ( result ) /*0x52f60c*/
              {
                if ( *(_DWORD *)(result + 0xC) == a2 ) /*0x52f611*/
                  return result; /*0x52f611*/
              }
            }
          }
          while ( (int)--v6 >= 0 ); /*0x52f602*/
        }
      }
LABEL_15:
      ; /*0x52f63c*/
    }
    while ( v3 ); /*0x52f5e3*/
  }
  return 0; /*0x52f640*/
}
