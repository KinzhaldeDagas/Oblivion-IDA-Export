// Synchronous KF model load path. Queued idle loader and menu/power-attack setup use this when an immediate KFModel is required.
int __thiscall sub_439FF0(_DWORD *this, const char *a2)
{
  int v2; // ecx
  IOManager *v3; // edi
  char v4; // bl
  int result; // eax
  int v6; // [esp+10h] [ebp-40h] BYREF
  IOTask v7; // [esp+14h] [ebp-3Ch] BYREF
  unsigned int v8; // [esp+34h] [ebp-1Ch]
  int v9; // [esp+3Ch] [ebp-14h]
  unsigned int v10; // [esp+4Ch] [ebp-4h]

  v2 = *(this + 1); /*0x43a016*/
  v6 = 0; /*0x43a021*/
  if ( !(*(unsigned __int8 (__thiscall **)(int, const char *, int *))(*(_DWORD *)v2 + 4))(v2, a2, &v6) ) /*0x43a030*/
  {
    v3 = MEMORY[0xB33A10]; /*0x43a03a*/
    if ( GetCurrentThreadId() == v3->members.currentThreadIDBoh ) /*0x43a049*/
    {
      v4 = 0; /*0x43a056*/
    }
    else
    {
      sub_432860((volatile LONG *)v3); /*0x43a04d*/
      v4 = 1; /*0x43a052*/
    }
    sub_4377D0(&v7, a2, 0); /*0x43a05f*/
    v10 = 0; /*0x43a068*/
    sub_439940(&v7); /*0x43a070*/
    sub_4378F0(&v7); /*0x43a079*/
    if ( v4 ) /*0x43a080*/
      sub_432890((volatile LONG *)MEMORY[0xB33A10]); /*0x43a088*/
    v6 = v9; /*0x43a093*/
    v10 = 0xFFFFFFFF; /*0x43a097*/
    if ( v9 ) /*0x43a09f*/
      InterlockedDecrement((volatile LONG *)(v9 + 0xC)); /*0x43a0a5*/
    v7.vtbl = &QueuedFileEntry::`vftable'; /*0x43a0b0*/
    FormHeapFree(v8); /*0x43a0b8*/
    QueuedMagicItem::~QueuedMagicItem((QueuedMagicItem *)&v7); /*0x43a0c4*/
  }
  result = v6; /*0x43a0c9*/
  if ( v6 ) /*0x43a0cf*/
  {
    InterlockedIncrement((volatile LONG *)(v6 + 0xC)); /*0x43a0d5*/
    return v6; /*0x43a0db*/
  }
  return result; /*0x43a0df*/
}
