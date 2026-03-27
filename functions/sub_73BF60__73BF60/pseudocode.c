bool __thiscall sub_73BF60(float *this, int a2)
{
  return sub_708C30(this, (_DWORD *)a2)
      && sub_70FF20((float *)(a2 + 0xDC), this + 0x37)
      && !sub_8AA390((float *)(a2 + 0x100), this + 0x40)
      && *(_DWORD *)(a2 + 0x140) == *((_DWORD *)this + 0x50)
      && *(_DWORD *)(a2 + 0x144) == *((_DWORD *)this + 0x51)
      && *(_DWORD *)(a2 + 0x148) == *((_DWORD *)this + 0x52)
      && *(_DWORD *)(a2 + 0x14C) == *((_DWORD *)this + 0x53)
      && *(_BYTE *)(a2 + 0x150) == *((_BYTE *)this + 0x150)
      && !sub_632310((float *)(a2 + 0x154), this + 0x55);
}
