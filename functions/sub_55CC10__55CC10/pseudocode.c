const void *__thiscall sub_55CC10(_BYTE *this, const void *a2)
{
  int (__thiscall *v3)(_BYTE *, _BYTE *); // edx
  const void *result; // eax
  _BYTE v5[36]; // [esp+Ch] [ebp-24h] BYREF

  v3 = *(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)this + 0xA4);
  qmemcpy(this + 0xE0, a2, 0x24u);
  *(this + 0x107) = 1;
  result = (const void *)v3(this, v5);
  qmemcpy(this + 0x30, result, 0x24u);
  return result;
}
