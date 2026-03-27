void __thiscall QueuedTreeBillboard::~QueuedTreeBillboard(QueuedTreeBillboard *this)
{
  _DWORD *v2; // edi

  *(_DWORD *)this = &QueuedTreeBillboard::`vftable';
  v2 = *((_DWORD **)this + 0xC);
  if ( v2 )
  {
    sub_4B9CF0(v2);
    FormHeapFree((unsigned int)v2);
  }
  QueuedTexture::~QueuedTexture(this);
}
