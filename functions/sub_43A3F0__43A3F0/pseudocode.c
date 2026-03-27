int __thiscall sub_43A3F0(_DWORD *this)
{
  unsigned int v2; // ebp
  void *v3; // ebx
  _DWORD *v4; // esi
  int v5; // eax
  int v6; // edx
  int v7; // ebx
  int result; // eax
  size_t v9; // [esp-8h] [ebp-20h]
  _DWORD *v10; // [esp+Ch] [ebp-Ch]
  int v11; // [esp+10h] [ebp-8h]
  void *v12; // [esp+14h] [ebp-4h]

  v2 = 3 * **(_DWORD **)(*this + 0x14);
  v3 = (void *)FormHeapAlloc((unsigned __int64)v2 >> 0x1E != 0 ? 0xFFFFFFFF : 0xC * **(_DWORD **)(*this + 0x14));
  LODWORD(v9) = 4 * v2;
  v12 = v3;
  memcpy(v3, *(const void **)(*this + 4), v9);
  v10 = 0;
  v11 = 0;
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
      ++v11;
      v4[1] = v10;
      v10 = v4;
    }
    else
    {
LABEL_5:
      v6 = *v4;
      v4[1] = 0;
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*this + 0x20))(*this, v6);
      v7 = v4[1];
      if ( v7 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v7 + 8)) )
          (**(void (__thiscall ***)(int, int))v7)(v7, 1);
      }
      FormHeapFree((unsigned int)v4);
      v3 = v12;
    }
  }
  FormHeapFree((unsigned int)v3);
  *(this + 7) = v10;
  *(this + 8) = v11;
  return result;
}
