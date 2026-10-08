// [Verified] Grows the BSTECreateTask free-item stack and appends each available 0x10-byte task slot to it; its only caller is BSTECreateTaskPool_Pop when the pool is empty.
int *__thiscall BSTECreateTaskPool_AddBlock(unsigned int *this, unsigned int a2)
{
  int *result; // eax
  unsigned int v4; // ebx
  int *v5; // ecx
  int v6; // ebp
  int v7; // edi
  int v8; // eax
  unsigned int v9; // eax
  int *v10; // [esp+14h] [ebp-10h]

  result = (int *)FormHeapAlloc(0xCu); /*0x56ba49*/
  v4 = 0; /*0x56ba55*/
  if ( result ) /*0x56ba5d*/
  {
    result = BSTECreateTaskPool_CreateBlock(result, a2); /*0x56ba66*/
    v5 = result; /*0x56ba6b*/
    v10 = result; /*0x56ba6d*/
  }
  else
  {
    v10 = 0; /*0x56ba73*/
    v5 = 0; /*0x56ba77*/
  }
  if ( a2 ) /*0x56ba85*/
  {
    v6 = 0; /*0x56ba87*/
    do /*0x56bacd*/
    {
      if ( v4 < v5[1] ) /*0x56ba8c*/
        v7 = v6 + *v5; /*0x56ba94*/
      else
        v7 = 0; /*0x56ba8e*/
      v8 = *(this + 1); /*0x56ba96*/
      if ( *(this + 2) == v8 ) /*0x56ba9c*/
      {
        if ( v8 ) /*0x56baa0*/
          v9 = 2 * v8; /*0x56baa2*/
        else
          v9 = 1; /*0x56baa6*/
        sub_6E8CA0(this, v9); /*0x56baae*/
        v5 = v10; /*0x56bab3*/
      }
      result = (int *)*this; /*0x56baba*/
      *(_DWORD *)(*this + 4 * (*(this + 2))++) = v7; /*0x56babc*/
      ++v4; /*0x56bac3*/
      v6 += 0x10; /*0x56bac6*/
    }
    while ( v4 < a2 ); /*0x56bacd*/
  }
  v5[2] = *(this + 5); /*0x56bad2*/
  *(this + 5) = (unsigned int)v5; /*0x56bad5*/
  return result; /*0x56bad8*/
}
