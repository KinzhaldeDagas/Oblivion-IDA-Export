// Verified shared texture dependency helper used by tree, landscape, and generated landscape-LOD paths. It queries the texture/resource cache; on a miss it creates and queues a QueuedTexture, while a hit with a parent creates an attached wrapper task so the dependency participates in parent completion. Caller priority and parent task are forwarded.
bool __stdcall QueuedTexture_QueueOrAttachPath(const char *path, unsigned __int8 priority, IOTask *parent)
{
  int v3; // edi
  IOTask *v4; // eax
  IOTask *v5; // esi
  QueuedChildren *v6; // edx
  QueuedTexture *v7; // ecx
  QueuedTexture *v9; // eax
  QueuedTexture *v10; // esi

  v3 = (*(int (__thiscall **)(UInt32, const char *, _DWORD))(*(_DWORD *)unk_B35300 + 4))(unk_B35300, path, 0); /*0x43b10a*/
  if ( !v3 ) /*0x43b112*/
  {
    v9 = (QueuedTexture *)FormHeapAlloc(0x30u); /*0x43b1eb*/
    if ( v9 ) /*0x43b1fe*/
      v10 = QueuedTexture_ctor(v9, path, priority); /*0x43b20d*/
    else
      v10 = 0; /*0x43b211*/
    if ( v10 ) /*0x43b219*/
      InterlockedIncrement((volatile LONG *)v10 + 2); /*0x43b21f*/
    sub_43AC40((QueuedChildren **)v10, (volatile LONG *)parent); /*0x43b231*/
    (*(void (__thiscall **)(QueuedTexture *))(*(_DWORD *)v10 + 0x20))(v10); /*0x43b23d*/
    if ( InterlockedDecrement((volatile LONG *)v10 + 2) ) /*0x43b247*/
      return 1; /*0x43b24f*/
    v6 = *(QueuedChildren **)v10; /*0x43b251*/
    v7 = v10; /*0x43b253*/
    goto LABEL_22; /*0x43b253*/
  }
  InterlockedIncrement((volatile LONG *)(v3 + 4)); /*0x43b118*/
  if ( parent ) /*0x43b130*/
  {
    v4 = (IOTask *)FormHeapAlloc(0x30u); /*0x43b138*/
    if ( v4 ) /*0x43b14b*/
      v5 = sub_4371A0(v4, v3, priority); /*0x43b15a*/
    else
      v5 = 0; /*0x43b15e*/
    if ( v5 ) /*0x43b166*/
      InterlockedIncrement((volatile LONG *)&v5->members.unk08); /*0x43b16c*/
    sub_43AC40((QueuedChildren **)v5, (volatile LONG *)parent); /*0x43b17a*/
    (*((void (__thiscall **)(IOTask *))v5->vtbl + 0xA))(v5); /*0x43b186*/
    if ( !InterlockedDecrement((volatile LONG *)&v5->members.unk08) ) /*0x43b196*/
      (*(void (__thiscall **)(IOTask *, int))v5->vtbl)(v5, 1); /*0x43b1a4*/
    if ( InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x43b1b2*/
      return 1; /*0x43b1b6*/
    v6 = *(QueuedChildren **)v3; /*0x43b1bc*/
    v7 = (QueuedTexture *)v3; /*0x43b1be*/
LABEL_22:
    (*(void (__thiscall **)(QueuedTexture *, int))v6)(v7, 1); /*0x43b255*/
    return 1; /*0x43b25b*/
  }
  if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x43b1d1*/
    (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x43b1e3*/
  return 0; /*0x43b25d*/
}
