void __thiscall NiSequence::~NiSequence(NiSequence *this)
{
  unsigned int i; // ebp
  int *v3; // ebx
  int v4; // edi
  bool v5; // zf
  void (__thiscall ***v6)(_DWORD, int); // edi
  unsigned int v7; // eax
  int v8; // edx
  unsigned int v9; // ecx
  unsigned __int16 v10; // ax
  int v11; // edi
  char *v12; // eax
  unsigned int v13; // edi
  unsigned int v14; // [esp-4h] [ebp-2Ch]
  unsigned int v15; // [esp-4h] [ebp-2Ch]
  _DWORD v16[2]; // [esp+14h] [ebp-14h] BYREF
  int v17; // [esp+24h] [ebp-4h]

  v16[1] = this; /*0x6d8229*/
  *(_DWORD *)this = &NiSequence::`vftable'; /*0x6d822d*/
  v14 = *((_DWORD *)this + 2); /*0x6d8236*/
  v17 = 3; /*0x6d8237*/
  FormHeapFree(v14); /*0x6d823f*/
  for ( i = 0; i < *((unsigned __int16 *)this + 0x13); ++i ) /*0x6d8249*/
  {
    v3 = sub_6D7F60((int)this + 0x1C, v16, i); /*0x6d8261*/
    v4 = *v3; /*0x6d8263*/
    v5 = *v3 == 0; /*0x6d8265*/
    LOBYTE(v17) = 4; /*0x6d8267*/
    if ( !v5 ) /*0x6d826c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x6d8272*/
      {
        if ( v4 ) /*0x6d827e*/
          (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x6d8288*/
      }
      *v3 = 0; /*0x6d828a*/
    }
    v6 = (void (__thiscall ***)(_DWORD, int))v16[0]; /*0x6d8290*/
    LOBYTE(v17) = 3; /*0x6d8296*/
    if ( v16[0] ) /*0x6d829b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16[0] + 4)) ) /*0x6d82a1*/
      {
        if ( v6 ) /*0x6d82ad*/
          (**v6)(v6, 1); /*0x6d82b7*/
      }
    }
    if ( i < *((unsigned __int16 *)this + 0xB) ) /*0x6d82bf*/
    {
      v8 = *((_DWORD *)this + 4); /*0x6d82c5*/
      v9 = *(_DWORD *)(v8 + 4 * i); /*0x6d82c8*/
      *(_DWORD *)(v8 + 4 * i) = 0; /*0x6d82d0*/
      if ( v9 ) /*0x6d82d6*/
        --*((_WORD *)this + 0xC); /*0x6d82d8*/
      v10 = *((_WORD *)this + 0xB); /*0x6d82de*/
      if ( i == v10 - 1 ) /*0x6d82ea*/
        *((_WORD *)this + 0xB) = v10 - 1; /*0x6d82ef*/
      v7 = v9; /*0x6d82f3*/
    }
    else
    {
      v7 = 0; /*0x6d82c1*/
    }
    FormHeapFree(v7); /*0x6d82f6*/
  }
  v11 = *((_DWORD *)this + 0xB); /*0x6d830d*/
  LOBYTE(v17) = 2; /*0x6d8312*/
  if ( v11 ) /*0x6d8317*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x6d831d*/
      (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x6d8333*/
  }
  v12 = *((char **)this + 8); /*0x6d8335*/
  LOBYTE(v17) = 1; /*0x6d833a*/
  *((_DWORD *)this + 7) = &NiTArray<NiPointer<NiTransformController>>::`vftable'; /*0x6d833f*/
  if ( v12 ) /*0x6d8346*/
  {
    v13 = (unsigned int)(v12 + 0xFFFFFFFC); /*0x6d834b*/
    _LN21(v12, 4u, *((_DWORD *)v12 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x6d8357*/
    FormHeapFree(v13); /*0x6d835d*/
  }
  v15 = *((_DWORD *)this + 4); /*0x6d8368*/
  *((_DWORD *)this + 3) = &NiTArray<char *>::`vftable'; /*0x6d8369*/
  FormHeapFree(v15); /*0x6d8370*/
  v17 = 0xFFFFFFFF; /*0x6d837a*/
  NiRefObject_destr(this); /*0x6d8382*/
}
