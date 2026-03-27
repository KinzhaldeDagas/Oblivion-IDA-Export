int __userpurge sub_6F2DB0@<eax>(int this@<ecx>, int a2@<ebp>, _DWORD *a3)
{
  *(_DWORD *)(this + 0x18) = 0xF;
  *(_DWORD *)(this + 0x14) = 0;
  *(_BYTE *)(this + 4) = 0;
  sub_414420(this, a3, 0, 0xFFFFFFFF);
  *(_DWORD *)(this + 0x1C) = a3[7];
  sub_6F23C0((_DWORD *)(this + 0x20), a2, (int)(a3 + 8));
  return this;
}
