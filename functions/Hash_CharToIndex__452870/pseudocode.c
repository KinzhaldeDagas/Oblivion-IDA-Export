unsigned int __thiscall Hash_CharToIndex(_DWORD *this, unsigned __int8 a2)
{
  return (unsigned int)a2 % *(this + 1);
}
