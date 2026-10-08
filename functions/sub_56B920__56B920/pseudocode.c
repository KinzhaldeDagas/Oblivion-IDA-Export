// [Verified] Allocates a pool block of 0x10-byte BSTECreateTask items and initializes each with BSTECreateTask_Ctor, paired with BSTECreateTask_Dtor for array destruction.
int *__thiscall BSTECreateTaskPool_CreateBlock(int *this, int size)
{
  int v3; // edi
  unsigned int v4; // ecx
  int v5; // eax

  v3 = 0; /*0x56b949*/
  *(this + 1) = size; /*0x56b94d*/
  *(this + 2) = 0; /*0x56b950*/
  if ( size )
  {
    v4 = (unsigned __int64)(unsigned int)size >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * size;
    v5 = FormHeapAlloc(__CFADD__(v4, 4) ? 0xFFFFFFFF : v4 + 4);
    if ( v5 ) /*0x56b986*/
    {
      v3 = v5 + 4; /*0x56b993*/
      *(_DWORD *)v5 = size; /*0x56b999*/
      ArrayConstructor( /*0x56b99b*/
        (char *)(v5 + 4),
        0x10u,
        size,
        (void (__thiscall *)(char *))BSTECreateTask_Ctor,
        (void (__thiscall *)(void *))BSTECreateTask_Dtor);
    }
  }
  *this = v3; /*0x56b9a2*/
  return this; /*0x56b9a5*/
}
