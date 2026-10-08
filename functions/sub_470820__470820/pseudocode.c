// Insert-or-assign for the ActorAnimData encoded-key map at +0x9C. Hashes UInt16 key, finds an equal node, invokes node cleanup before overwrite, or allocates/links a new node and increments map count.
int __thiscall sub_470820(_DWORD *this, int a2, int a3)
{
  int v4; // ebp
  int *v5; // edi
  _DWORD *v6; // edi
  int result; // eax

  v4 = (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, a2); /*0x470832*/
  v5 = *(int **)(*(this + 2) + 4 * v4); /*0x470837*/
  if ( v5 ) /*0x47083c*/
  {
    while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))( /*0x470851*/
               this,
               a2,
               *((unsigned __int16 *)v5 + 2)) )
    {
      v5 = (int *)*v5; /*0x470853*/
      if ( !v5 ) /*0x470857*/
        goto LABEL_4; /*0x470857*/
    }
    (*(void (__thiscall **)(_DWORD *, int *))(*this + 0x10))(this, v5); /*0x470895*/
    return (*(int (__thiscall **)(_DWORD *, int *, int, int))(*this + 0xC))(this, v5, a2, a3); /*0x4708a5*/
  }
  else
  {
LABEL_4:
    v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 0x14))(this); /*0x470859*/
    (*(void (__thiscall **)(_DWORD *, _DWORD *, int, int))(*this + 0xC))(this, v6, a2, a3); /*0x470872*/
    result = *(this + 2); /*0x470874*/
    *v6 = *(_DWORD *)(result + 4 * v4); /*0x47087a*/
    *(_DWORD *)(*(this + 2) + 4 * v4) = v6; /*0x47087f*/
    ++*(this + 3); /*0x470882*/
  }
  return result; /*0x470886*/
}
