int __thiscall sub_55CFE0(char **this, int a2, _DWORD **a3)
{
  int result; // eax

  if ( a2 )
  {
    sub_70AC60(this, a2, a3);
    sub_55E2A0((int *)(a2 + 0xDC), (int *)this + 0x37);
    qmemcpy((void *)(a2 + 0xE0), this + 0x38, 0x28u);
    *(float *)(a2 + 0x10C) = *((float *)this + 0x43);
    result = *((unsigned __int8 *)this + 0x110);
    *(_BYTE *)(a2 + 0x110) = result;
    *(_BYTE *)(a2 + 0x111) = *((_BYTE *)this + 0x111);
  }
  return result;
}
