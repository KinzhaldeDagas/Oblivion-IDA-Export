// ODismemberment: shared ModelLoader-backed NIF/model data load used by BSTempEffectParticle before clone/cached-instance selection.
int __thiscall ModelLoader_LoadModelData(int *this, const char *a2, char a3, void *a4, char a5)
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

  v5 = *this; /*0x439ed6*/
  v9 = 0; /*0x439ee0*/
  if ( !(*(unsigned __int8 (__thiscall **)(int, const char *, int *))(*(_DWORD *)v5 + 4))(v5, a2, &v9) ) /*0x439eef*/
  {
    v6 = MEMORY[0xB33A10]; /*0x439ef9*/
    if ( GetCurrentThreadId() == v6->members.currentThreadIDBoh ) /*0x439f08*/
    {
      v7 = 0; /*0x439f15*/
    }
    else
    {
      sub_432860((volatile LONG *)v6); /*0x439f0c*/
      v7 = 1; /*0x439f11*/
    }
    sub_437250(&v10, a2, 0, a4, a3 == 0, a5, 0); /*0x439f33*/
    v13 |= 0x20u; /*0x439f38*/
    v14 = 0; /*0x439f41*/
    QueuedTexture_LoadModelStream(&v10); /*0x439f49*/
    sub_4395D0((char *)&v10); /*0x439f52*/
    if ( v7 ) /*0x439f59*/
      sub_432890((volatile LONG *)MEMORY[0xB33A10]); /*0x439f61*/
    v9 = v12; /*0x439f6c*/
    v14 = 0xFFFFFFFF; /*0x439f70*/
    if ( v12 ) /*0x439f78*/
      InterlockedDecrement((volatile LONG *)(v12 + 4)); /*0x439f7e*/
    v10.vtbl = &QueuedFileEntry::`vftable'; /*0x439f89*/
    FormHeapFree(v11); /*0x439f91*/
    QueuedMagicItem::~QueuedMagicItem((QueuedMagicItem *)&v10); /*0x439f9d*/
  }
  if ( !v9 ) /*0x439fa8*/
    return 0; /*0x439fd0*/
  InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x439fae*/
  return *(_DWORD *)(v9 + 8); /*0x439fbb*/
}
