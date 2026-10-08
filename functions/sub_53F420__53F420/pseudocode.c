void __thiscall sub_53F420(_DWORD *this, int a2)
{
  int v3; // edi
  unsigned int v4; // eax
  const char *v5; // eax
  void (__thiscall ***v6)(_DWORD, int); // esi

  if ( !*(this + 2) )
  {
    v3 = a2; /*0x53f42e*/
    if ( a2
      && ((LOWORD(v4) = *(_WORD *)(a2 + 8), (_WORD)v4 != 0xFFFF)
        ? (v4 = (unsigned __int16)v4)
        : (v4 = strlen(*(const char **)(a2 + 4))),
          v4) )
    {
      v5 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x14))(a2); /*0x53f46d*/
      sub_43B420((int *)MEMORY[0xB33A1C], (IOTask **)&a2, v5, 0, 0, 0, 0, 0, 0); /*0x53f47b*/
      if ( a2 ) /*0x53f486*/
      {
        v6 = (void (__thiscall ***)(_DWORD, int))a2; /*0x53f489*/
        if ( !InterlockedDecrement((volatile LONG *)(a2 + 8)) ) /*0x53f48f*/
          (**v6)(v6, 1); /*0x53f4a5*/
      }
      *(this + 5) = v3; /*0x53f4a8*/
    }
    else
    {
      sub_53F1F0((int)this, 0); /*0x53f4b4*/
    }
  }
}
