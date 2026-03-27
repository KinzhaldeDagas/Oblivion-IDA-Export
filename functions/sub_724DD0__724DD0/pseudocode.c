void *__userpurge sub_724DD0@<eax>(_DWORD *this@<ecx>, int a2@<ebx>, int a3, int a4)
{
  size_t v6; // [esp-4h] [ebp-Ch]

  *(_DWORD *)(a3 + 8) = *(this + 2);
  *(_DWORD *)(a3 + 0xC) = *(this + 3);
  *(_DWORD *)(a3 + 0x10) = *(this + 4);
  *(_DWORD *)(a3 + 0x14) = *(this + 5);
  *(_DWORD *)(a3 + 0x18) = *(this + 6);
  *(_DWORD *)(a3 + 0x1C) = *(this + 7);
  sub_724AB0((_DWORD *)a3, a2, *(this + 8));
  LODWORD(v6) = 0x10 * *(this + 8);
  return memcpy(*(void **)(a3 + 0x24), (const void *)*(this + 9), v6);
}
