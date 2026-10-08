int __thiscall sub_435FE0(_DWORD *this)
{
  unsigned int v2; // ebp
  void *v3; // ebx
  _DWORD *v4; // esi
  int v5; // eax
  int v6; // edx
  int result; // eax
  _DWORD *v8; // [esp+Ch] [ebp-8h]
  int v9; // [esp+10h] [ebp-4h]

  v2 = 3 * **(_DWORD **)(*this + 0x14); /*0x435fef*/
  v3 = (void *)FormHeapAlloc((unsigned __int64)v2 >> 0x1E != 0 ? 0xFFFFFFFF : 0xC * **(_DWORD **)(*this + 0x14));
  memcpy(v3, *(const void **)(*this + 4), 4 * v2); /*0x43601b*/
  v8 = 0; /*0x436028*/
  v9 = 0; /*0x43602c*/
  while ( *(this + 7) ) /*0x436025*/
  {
    v4 = (_DWORD *)*(this + 7); /*0x436033*/
    *(this + 7) = v4[1]; /*0x436039*/
    v5 = 0; /*0x43603c*/
    if ( v2 ) /*0x436040*/
    {
      while ( v4 != *((_DWORD **)v3 + v5) ) /*0x436045*/
      {
        if ( ++v5 >= v2 ) /*0x43604c*/
          goto LABEL_5; /*0x43604c*/
      }
      ++v9; /*0x436090*/
      v4[1] = v8; /*0x436095*/
      v8 = v4; /*0x436098*/
    }
    else
    {
LABEL_5:
      v6 = *v4; /*0x43604e*/
      v4[1] = 0; /*0x436050*/
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*this + 0x20))(*this, v6); /*0x43605b*/
      FormHeapFree((unsigned int)v4); /*0x43605e*/
    }
  }
  FormHeapFree((unsigned int)v3); /*0x43606f*/
  *(this + 7) = v8; /*0x43607f*/
  *(this + 8) = v9; /*0x436082*/
  return result; /*0x436085*/
}
