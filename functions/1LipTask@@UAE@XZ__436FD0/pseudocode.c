void __thiscall LipTask::~LipTask(LipTask *this)
{
  unsigned int v2; // [esp-4h] [ebp-8h]

  v2 = *((_DWORD *)this + 8);
  *(_DWORD *)this = &QueuedFileEntry::`vftable';
  FormHeapFree(v2);
  QueuedMagicItem::~QueuedMagicItem(this);
}
