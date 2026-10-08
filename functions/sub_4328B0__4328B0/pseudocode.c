int __thiscall sub_4328B0(_DWORD *this)
{
  unsigned int v2; // ebp
  void *v3; // ebx
  _DWORD *v4; // esi
  int v5; // eax
  int v6; // edx
  int v7; // ebx
  int result; // eax
  _DWORD *v9; // [esp+Ch] [ebp-Ch]
  int v10; // [esp+10h] [ebp-8h]
  void *v11; // [esp+14h] [ebp-4h]

  v2 = 3 * **(_DWORD **)(*this + 0x14); /*0x4328bf*/
  v3 = (void *)FormHeapAlloc((unsigned __int64)v2 >> 0x1E != 0 ? 0xFFFFFFFF : 0xC * **(_DWORD **)(*this + 0x14));
  v11 = v3; /*0x4328eb*/
  memcpy(v3, *(const void **)(*this + 4), 4 * v2); /*0x4328ef*/
  v9 = 0; /*0x4328fc*/
  v10 = 0; /*0x432900*/
  while ( *(this + 7) ) /*0x4328f9*/
  {
    v4 = (_DWORD *)*(this + 7); /*0x432907*/
    *(this + 7) = v4[2]; /*0x43290d*/
    v5 = 0; /*0x432910*/
    if ( v2 ) /*0x432914*/
    {
      while ( v4 != *((_DWORD **)v3 + v5) ) /*0x432919*/
      {
        if ( ++v5 >= v2 ) /*0x432920*/
          goto LABEL_5; /*0x432920*/
      }
      ++v10; /*0x43298f*/
      v4[2] = v9; /*0x432994*/
      v9 = v4; /*0x432997*/
    }
    else
    {
LABEL_5:
      v6 = v4[1]; /*0x432922*/
      v4[2] = 0; /*0x432925*/
      (*(void (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)*this + 0x20))(*this, *v4, v6); /*0x432933*/
      v7 = v4[2]; /*0x432935*/
      if ( v7 ) /*0x43293a*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v7 + 8)) ) /*0x432940*/
          (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x432956*/
      }
      FormHeapFree((unsigned int)v4); /*0x432959*/
      v3 = v11; /*0x43295e*/
    }
  }
  FormHeapFree((unsigned int)v3); /*0x43296e*/
  *(this + 7) = v9; /*0x43297e*/
  *(this + 8) = v10; /*0x432981*/
  return result; /*0x432984*/
}
