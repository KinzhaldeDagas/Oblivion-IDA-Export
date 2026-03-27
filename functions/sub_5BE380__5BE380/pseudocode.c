int __thiscall sub_5BE380(_DWORD *this)
{
  int result; // eax
  unsigned int v3; // [esp+4h] [ebp-10h] BYREF
  unsigned int v4; // [esp+8h] [ebp-Ch] BYREF
  int v5; // [esp+Ch] [ebp-8h] BYREF
  int v6; // [esp+10h] [ebp-4h] BYREF

  result = *(this + 0x36);
  if ( result )
  {
    sub_5479F0(*(_DWORD *)(result + 0xC), &v3, &v4, &v5, (unsigned int *)&v6);
    *(this + 5 * v3 + 6) = 1;
    *(this + 5 * v4 + 6) = 2;
    *(this + 5 * v5 + 6) = 3;
    result = v6;
    *(this + 5 * v6 + 6) = 4;
  }
  return result;
}
