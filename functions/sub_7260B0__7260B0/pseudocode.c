char __userpurge sub_7260B0@<al>(int a1@<ecx>, int a2@<edi>, unsigned int a3, void *a4, _DWORD *Src, char a6)
{
  _DWORD *v6; // ebx
  _DWORD *v8; // esi
  void *v10; // edi
  size_t v11; // [esp-4h] [ebp-10h]

  v6 = Src;
  if ( a3 < *(unsigned __int16 *)(a1 + 0x26) && (Src = *(_DWORD **)(*(_DWORD *)(a1 + 0x20) + 4 * a3), (v8 = Src) != 0) )
  {
    if ( (_DWORD *)Src[1] != v6 )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*Src + 0xC))(Src, 0);
      v8[2] = 0;
    }
  }
  else
  {
    v8 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x50))(a1);
    Src = v8;
    if ( !v8 )
      return 0;
  }
  if ( !v8[2] )
  {
    if ( a6 )
    {
      *((_BYTE *)v8 + 0xD) = *(_WORD *)(a1 + 0xC) < 0x40u;
      v10 = (void *)(*(int (__thiscall **)(_DWORD *, _DWORD *, int))*v8)(v8, v6, a2);
      if ( Src )
      {
        LODWORD(v11) = v6;
        memcpy(v10, Src, v11);
      }
      (*(void (__thiscall **)(_DWORD *, void *))(*v8 + 4))(v8, v10);
    }
    else
    {
      v10 = a4;
    }
    v8[1] = v6;
    v8[2] = v10;
  }
  if ( a3 >= *(unsigned __int16 *)(a1 + 0x24) )
    NiTArray_SetSize((unsigned __int16 *)(a1 + 0x1C), a3 + *(unsigned __int16 *)(a1 + 0x2A));
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(a1 + 0x1C), a3, &Src);
  *((_BYTE *)v8 + 0xC) = a6;
  return 1;
}
