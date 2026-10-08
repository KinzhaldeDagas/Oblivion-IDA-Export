int *__thiscall sub_73A510(unsigned int *this, unsigned int a2)
{
  int *result; // eax
  unsigned int v4; // ebx
  int *v5; // ecx
  int v6; // ebp
  int v7; // edi
  int v8; // eax
  unsigned int v9; // eax
  int *v10; // [esp+14h] [ebp-10h]

  result = (int *)FormHeapAlloc(0xCu); /*0x73a539*/
  v4 = 0; /*0x73a545*/
  if ( result ) /*0x73a54d*/
  {
    result = sub_738920(result, a2); /*0x73a556*/
    v5 = result; /*0x73a55b*/
    v10 = result; /*0x73a55d*/
  }
  else
  {
    v10 = 0; /*0x73a563*/
    v5 = 0; /*0x73a567*/
  }
  if ( a2 ) /*0x73a575*/
  {
    v6 = 0; /*0x73a577*/
    do /*0x73a5bd*/
    {
      if ( v4 < v5[1] ) /*0x73a57c*/
        v7 = v6 + *v5; /*0x73a584*/
      else
        v7 = 0; /*0x73a57e*/
      v8 = *(this + 1); /*0x73a586*/
      if ( *(this + 2) == v8 ) /*0x73a58c*/
      {
        if ( v8 ) /*0x73a590*/
          v9 = 2 * v8; /*0x73a592*/
        else
          v9 = 1; /*0x73a596*/
        sub_6E8CA0(this, v9); /*0x73a59e*/
        v5 = v10; /*0x73a5a3*/
      }
      result = (int *)*this; /*0x73a5aa*/
      *(_DWORD *)(*this + 4 * (*(this + 2))++) = v7; /*0x73a5ac*/
      ++v4; /*0x73a5b3*/
      v6 += 0x14; /*0x73a5b6*/
    }
    while ( v4 < a2 ); /*0x73a5bd*/
  }
  v5[2] = *(this + 5); /*0x73a5c2*/
  *(this + 5) = (unsigned int)v5; /*0x73a5c5*/
  return result; /*0x73a5c8*/
}
