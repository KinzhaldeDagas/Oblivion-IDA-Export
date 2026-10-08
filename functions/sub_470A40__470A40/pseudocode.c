// Encoded animation-key map hash: UInt16 key modulo bucket count.
unsigned int __thiscall AnimKeyMap_HashKey(_DWORD *this, unsigned __int16 a2)
{
  return (unsigned int)a2 % *(this + 1); /*0x470a4c*/
}
