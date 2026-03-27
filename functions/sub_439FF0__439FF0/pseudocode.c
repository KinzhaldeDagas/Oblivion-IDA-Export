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

  v2 = *(this + 1);
  v6 = 0;
  if ( !(*(unsigned __int8 (__thiscall **)(int, const char *, int *))(*(_DWORD *)v2 + 4))(v2, a2, &v6) )
  {
    v3 = ioManager;
    if ( GetCurrentThreadId() == v3->members.currentThreadIDBoh )
    {
      v4 = 0;
    }
    else
    {
      sub_432860((volatile LONG *)v3);
      v4 = 1;
    }
    sub_4377D0(&v7, a2, 0);
    v10 = 0;
    sub_439940(&v7);
    sub_4378F0(&v7);
    if ( v4 )
      sub_432890((volatile LONG *)ioManager);
    v6 = v9;
    v10 = 0xFFFFFFFF;
    if ( v9 )
      InterlockedDecrement((volatile LONG *)(v9 + 0xC));
    v7.vtbl = &QueuedFileEntry::`vftable';
    FormHeapFree(v8);
    QueuedMagicItem::~QueuedMagicItem((QueuedMagicItem *)&v7);
  }
  result = v6;
  if ( v6 )
  {
    InterlockedIncrement((volatile LONG *)(v6 + 0xC));
    return v6;
  }
  return result;
}
