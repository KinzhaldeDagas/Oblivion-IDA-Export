// Advances an encoded-key map iterator. Returns the current UInt16 key and AnimSequenceBase payload, then moves along the collision chain or to the next non-empty bucket.
unsigned int __thiscall AnimKeyMap_GetNext(unsigned int *this, unsigned int *a2, _WORD *a3, _DWORD *a4)
{
  unsigned int result; // eax
  int v6; // eax
  unsigned int v7; // edx
  unsigned int *v8; // ecx

  result = *a2; /*0x4709ca*/
  *a3 = *(_WORD *)(*a2 + 4); /*0x4709d2*/
  *a4 = *(_DWORD *)(result + 8); /*0x4709dc*/
  if ( *(_DWORD *)result ) /*0x4709de*/
  {
    *a2 = *(_DWORD *)result; /*0x4709e4*/
  }
  else
  {
    v6 = (*(int (__thiscall **)(unsigned int *, _DWORD))(*this + 4))(this, *(unsigned __int16 *)(result + 4)); /*0x4709f7*/
    v7 = *(this + 1); /*0x4709f9*/
    result = v6 + 1; /*0x4709fc*/
    if ( result >= v7 ) /*0x470a01*/
    {
LABEL_7:
      *a2 = 0; /*0x470a20*/
    }
    else
    {
      v8 = (unsigned int *)(*(this + 2) + 4 * result); /*0x470a06*/
      while ( !*v8 ) /*0x470a14*/
      {
        ++result; /*0x470a16*/
        ++v8; /*0x470a19*/
        if ( result >= v7 ) /*0x470a1e*/
          goto LABEL_7; /*0x470a1e*/
      }
      *a2 = *v8; /*0x470a2b*/
    }
  }
  return result; /*0x4709e6*/
}
