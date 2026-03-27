int __thiscall sub_414750(int this, char *Src)
{
  rsize_t v4; // [esp-4h] [ebp-Ch]

  *(_DWORD *)(this + 0x18) = 0xF;
  *(_DWORD *)(this + 0x14) = 0;
  *(_BYTE *)(this + 4) = 0;
  LODWORD(v4) = strlen(Src);
  sub_414500((_DWORD *)this, (int)(Src + 1), Src, v4);
  return this;
}
