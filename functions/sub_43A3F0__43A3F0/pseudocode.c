int __thiscall sub_43A3F0(_DWORD *this)
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

  v2 = 3 * **(_DWORD **)(*this + 0x14); /*0x43a3ff*/
  v3 = (void *)FormHeapAlloc((unsigned __int64)v2 >> 0x1E != 0 ? 0xFFFFFFFF : 0xC * **(_DWORD **)(*this + 0x14));
  v11 = v3; /*0x43a42b*/
  memcpy(v3, *(const void **)(*this + 4), 4 * v2); /*0x43a42f*/
  v9 = 0; /*0x43a43c*/
  v10 = 0; /*0x43a440*/
  while ( *(this + 7) ) /*0x43a439*/
  {
    v4 = (_DWORD *)*(this + 7); /*0x43a447*/
    *(this + 7) = v4[1]; /*0x43a44d*/
    v5 = 0; /*0x43a450*/
    if ( v2 ) /*0x43a454*/
    {
      while ( v4 != *((_DWORD **)v3 + v5) ) /*0x43a459*/
      {
        if ( ++v5 >= v2 ) /*0x43a460*/
          goto LABEL_5; /*0x43a460*/
      }
      ++v10; /*0x43a4cb*/
      v4[1] = v9; /*0x43a4d0*/
      v9 = v4; /*0x43a4d3*/
    }
    else
    {
LABEL_5:
      v6 = *v4; /*0x43a462*/
      v4[1] = 0; /*0x43a464*/
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*this + 0x20))(*this, v6); /*0x43a46f*/
      v7 = v4[1]; /*0x43a471*/
      if ( v7 ) /*0x43a476*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v7 + 8)) ) /*0x43a47c*/
          (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x43a492*/
      }
      FormHeapFree((unsigned int)v4); /*0x43a495*/
      v3 = v11; /*0x43a49a*/
    }
  }
  FormHeapFree((unsigned int)v3); /*0x43a4aa*/
  *(this + 7) = v9; /*0x43a4ba*/
  *(this + 8) = v10; /*0x43a4bd*/
  return result; /*0x43a4c0*/
}
