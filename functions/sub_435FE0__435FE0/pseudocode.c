int __thiscall sub_435FE0(_DWORD *this)
{
  unsigned int v2; // ebp
  void *v3; // ebx
  _DWORD *v4; // esi
  int v5; // eax
  int v6; // edx
  int result; // eax
  size_t v8; // [esp-8h] [ebp-1Ch]
  _DWORD *v9; // [esp+Ch] [ebp-8h]
  int v10; // [esp+10h] [ebp-4h]

  v2 = 3 * **(_DWORD **)(*this + 0x14);
  v3 = (void *)FormHeapAlloc((unsigned __int64)v2 >> 0x1E != 0 ? 0xFFFFFFFF : 0xC * **(_DWORD **)(*this + 0x14));
  LODWORD(v8) = 4 * v2;
  memcpy(v3, *(const void **)(*this + 4), v8);
  v9 = 0;
  v10 = 0;
  while ( *(this + 7) )
  {
    v4 = (_DWORD *)*(this + 7);
    *(this + 7) = v4[1];
    v5 = 0;
    if ( v2 )
    {
      while ( v4 != *((_DWORD **)v3 + v5) )
      {
        if ( ++v5 >= v2 )
          goto LABEL_5;
      }
      ++v10;
      v4[1] = v9;
      v9 = v4;
    }
    else
    {
LABEL_5:
      v6 = *v4;
      v4[1] = 0;
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*this + 0x20))(*this, v6);
      FormHeapFree((unsigned int)v4);
    }
  }
  FormHeapFree((unsigned int)v3);
  *(this + 7) = v9;
  *(this + 8) = v10;
  return result;
}
