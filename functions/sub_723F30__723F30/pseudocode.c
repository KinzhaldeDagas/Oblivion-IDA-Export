bool __thiscall sub_723F30(NiNode *this, int a2)
{
  return sub_70AD70(this, a2)
      && *((_DWORD *)this + 0x38) == *(_DWORD *)(a2 + 0xE0)
      && ((*((_BYTE *)this + 0xDC) ^ *(_BYTE *)(a2 + 0xDC)) & 1) == 0;
}
