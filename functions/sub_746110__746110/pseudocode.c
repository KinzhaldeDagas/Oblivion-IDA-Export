unsigned int __usercall sub_746110@<eax>(unsigned int result@<eax>, int a2@<ecx>, _WORD *a3)
{
  unsigned int v3; // edi
  int v4; // edx
  int v6; // ecx
  int v7; // esi
  unsigned __int16 *v8; // [esp+10h] [ebp-Ch]
  unsigned int v9; // [esp+14h] [ebp-8h]
  int v10; // [esp+18h] [ebp-4h]

  v3 = *(unsigned __int16 *)(result + 2); /*0x74611b*/
  v4 = 0; /*0x74611f*/
  v9 = 0xFFFFFFFF; /*0x746125*/
  v6 = 7; /*0x74612d*/
  v7 = 4; /*0x746132*/
  if ( !*(_WORD *)(result + 2) ) /*0x74611b*/
  {
    v6 = 0x8A; /*0x746139*/
    v7 = 3; /*0x74613e*/
  }
  *(_WORD *)(result + 4 * a2 + 6) = 0xFFFF; /*0x746145*/
  if ( a2 >= 0 ) /*0x74614c*/
  {
    v10 = a2 + 1; /*0x746158*/
    v8 = (unsigned __int16 *)(result + 6); /*0x74615c*/
    do /*0x7461ef*/
    {
      result = v3; /*0x746165*/
      v3 = *v8; /*0x74616b*/
      if ( ++v4 >= v6 || result != v3 ) /*0x746176*/
      {
        if ( v4 >= v7 ) /*0x74617a*/
        {
          if ( result ) /*0x746188*/
          {
            if ( result != v9 ) /*0x74618e*/
              ++a3[2 * result + 0x53A]; /*0x746190*/
            ++a3[0x55A]; /*0x746198*/
          }
          else if ( v4 > 0xA ) /*0x7461a4*/
          {
            ++a3[0x55E]; /*0x7461af*/
          }
          else
          {
            ++a3[0x55C]; /*0x7461a6*/
          }
        }
        else
        {
          a3[2 * result + 0x53A] += v4; /*0x74617c*/
        }
        v4 = 0; /*0x7461b6*/
        v9 = result; /*0x7461ba*/
        if ( v3 ) /*0x7461be*/
        {
          if ( result == v3 ) /*0x7461ce*/
          {
            v6 = 6; /*0x7461d0*/
            v7 = 3; /*0x7461d5*/
          }
          else
          {
            v6 = 7; /*0x7461dc*/
            v7 = 4; /*0x7461e1*/
          }
        }
        else
        {
          v6 = 0x8A; /*0x7461c0*/
          v7 = 3; /*0x7461c5*/
        }
      }
      v8 += 2; /*0x7461e6*/
      --v10; /*0x7461eb*/
    }
    while ( v10 ); /*0x7461ef*/
  }
  return result; /*0x7461f5*/
}
