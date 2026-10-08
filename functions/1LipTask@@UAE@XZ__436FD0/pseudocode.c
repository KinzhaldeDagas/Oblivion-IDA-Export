void __thiscall LipTask::~LipTask(LipTask *this)
{
  unsigned int v2; // [esp-4h] [ebp-8h]

  v2 = *((_DWORD *)this + 8); /*0x436fd6*/
  *(_DWORD *)this = &QueuedFileEntry::`vftable'; /*0x436fd7*/
  FormHeapFree(v2); /*0x436fdd*/
  QueuedMagicItem::~QueuedMagicItem(this); /*0x436fe8*/
}
