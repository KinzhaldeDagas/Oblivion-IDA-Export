int __thiscall sub_439EB0(int *this, const char *a2, char a3, void *a4, char a5)
{
  int v5; // ecx
  IOManager *v6; // edi
  char v7; // bl
  int v9; // [esp+10h] [ebp-48h] BYREF
  IOTask v10; // [esp+14h] [ebp-44h] BYREF
  unsigned int v11; // [esp+34h] [ebp-24h]
  int v12; // [esp+3Ch] [ebp-1Ch]
  char v13; // [esp+48h] [ebp-10h]
  unsigned int v14; // [esp+54h] [ebp-4h]

  v5 = *this;
  v9 = 0;
  if ( !(*(unsigned __int8 (__thiscall **)(int, const char *, int *))(*(_DWORD *)v5 + 4))(v5, a2, &v9) )
  {
    v6 = ioManager;
    if ( GetCurrentThreadId() == v6->members.currentThreadIDBoh )
    {
      v7 = 0;
    }
    else
    {
      sub_432860((volatile LONG *)v6);
      v7 = 1;
    }
    sub_437250(&v10, a2, 0, a4, a3 == 0, a5, 0);
    v13 |= 0x20u;
    v14 = 0;
    sub_439400(&v10);
    sub_4395D0((char *)&v10);
    if ( v7 )
      sub_432890((volatile LONG *)ioManager);
    v9 = v12;
    v14 = 0xFFFFFFFF;
    if ( v12 )
      InterlockedDecrement((volatile LONG *)(v12 + 4));
    v10.vtbl = &QueuedFileEntry::`vftable';
    FormHeapFree(v11);
    QueuedMagicItem::~QueuedMagicItem((QueuedMagicItem *)&v10);
  }
  if ( !v9 )
    return 0;
  InterlockedIncrement((volatile LONG *)(v9 + 4));
  return *(_DWORD *)(v9 + 8);
}
