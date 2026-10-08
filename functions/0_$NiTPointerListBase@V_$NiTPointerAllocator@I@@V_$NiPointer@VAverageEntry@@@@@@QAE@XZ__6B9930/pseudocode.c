void __thiscall NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>>::NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>>(
        NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>> *this)
{
  NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>> *v1; // esi
  unsigned int v2; // ebp
  int v3; // ebx
  _DWORD *v4; // eax
  unsigned int v5; // edi
  _DWORD *v6; // ecx
  volatile LONG *v7; // esi
  _DWORD *v8; // esi
  MEF_RefList32 *v9; // edi
  _DWORD *v10; // eax
  MEF_RefListNode32 *head; // esi
  bool v12; // zf
  MEF_RefListNode32 *v13; // ebp
  volatile LONG *v14; // esi
  MEF_RefListNode32 *v15; // eax
  int **i; // esi
  void *payload; // [esp+18h] [ebp-20h] BYREF
  MEF_RefList32 self; // [esp+1Ch] [ebp-1Ch] BYREF
  int v20; // [esp+34h] [ebp-4h]

  v1 = this; /*0x6b9957*/
  v2 = *((_DWORD *)this + 7); /*0x6b995d*/
  if ( v2 > 1 )
  {
    v3 = FormHeapAlloc((unsigned __int64)v2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v2);
    v4 = *((_DWORD **)v1 + 5); /*0x6b9983*/
    v5 = 0; /*0x6b9986*/
    if ( v4 ) /*0x6b998d*/
    {
      v6 = (_DWORD *)v3; /*0x6b998f*/
      do /*0x6b999d*/
      {
        *v6 = v4[2]; /*0x6b9994*/
        v4 = (_DWORD *)*v4; /*0x6b9996*/
        ++v6; /*0x6b9998*/
      }
      while ( v4 ); /*0x6b999d*/
    }
    unknown_libname_60(0, v3, v2, 4, (int)sub_6B9640); /*0x6b99a8*/
    memset(&self.head, 0, 0xC); /*0x6b99b4*/
    self.vtable = &NiTPointerList<NiPointer<AverageEntry>>::`vftable'; /*0x6b99bc*/
    v20 = 0; /*0x6b99c6*/
    do /*0x6b9a1e*/
    {
      payload = *(void **)(v3 + 4 * v5); /*0x6b99d5*/
      v7 = (volatile LONG *)payload; /*0x6b99d0*/
      if ( payload ) /*0x6b99d9*/
        InterlockedIncrement((volatile LONG *)payload + 1); /*0x6b99df*/
      LOBYTE(v20) = 1; /*0x6b99ee*/
      NiTRefPointerList__AddHead(&self, &payload); /*0x6b99f3*/
      LOBYTE(v20) = 0; /*0x6b99fa*/
      if ( v7 ) /*0x6b99ff*/
      {
        if ( !InterlockedDecrement(v7 + 1) ) /*0x6b9a05*/
          (**(void (__thiscall ***)(void *, int))v7)((void *)v7, 1); /*0x6b9a17*/
      }
      ++v5; /*0x6b9a19*/
    }
    while ( v5 < v2 ); /*0x6b9a1e*/
    FormHeapFree(v3); /*0x6b9a21*/
    v8 = *((_DWORD **)this + 5); /*0x6b9a2a*/
    v9 = (MEF_RefList32 *)((char *)this + 0x10); /*0x6b9a2d*/
    while ( v8 ) /*0x6b9a37*/
    {
      v10 = v8; /*0x6b9a42*/
      v8 = (_DWORD *)*v8; /*0x6b9a44*/
      (*((void (__thiscall **)(MEF_RefList32 *, _DWORD *))v9->vtable + 2))(v9, v10); /*0x6b9a4c*/
    }
    head = self.head; /*0x6b9a52*/
    v12 = self.head == 0; /*0x6b9a56*/
    *((_DWORD *)this + 7) = 0; /*0x6b9a58*/
    *((_DWORD *)this + 5) = 0; /*0x6b9a5b*/
    *((_DWORD *)this + 6) = 0; /*0x6b9a5e*/
    v13 = head; /*0x6b9a61*/
    if ( !v12 ) /*0x6b9a63*/
    {
      do /*0x6b9ab1*/
      {
        payload = v13->payload; /*0x6b9a6a*/
        v14 = (volatile LONG *)payload; /*0x6b9a65*/
        if ( payload ) /*0x6b9a6e*/
          InterlockedIncrement((volatile LONG *)payload + 1); /*0x6b9a74*/
        LOBYTE(v20) = 2; /*0x6b9a81*/
        NiTRefPointerList__AddHead(v9, &payload); /*0x6b9a86*/
        LOBYTE(v20) = 0; /*0x6b9a8d*/
        if ( v14 ) /*0x6b9a92*/
        {
          if ( !InterlockedDecrement(v14 + 1) ) /*0x6b9a98*/
            (**(void (__thiscall ***)(void *, int))v14)((void *)v14, 1); /*0x6b9aaa*/
        }
        v13 = v13->next; /*0x6b9aac*/
      }
      while ( v13 ); /*0x6b9ab1*/
      head = self.head; /*0x6b9ab3*/
    }
    self.vtable = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>>::`vftable'; /*0x6b9ab7*/
    v20 = 3; /*0x6b9ac1*/
    while ( head ) /*0x6b9ac9*/
    {
      v15 = head; /*0x6b9acf*/
      head = head->next; /*0x6b9ad1*/
      (*((void (__thiscall **)(MEF_RefList32 *, MEF_RefListNode32 *))self.vtable + 2))(&self, v15); /*0x6b9adb*/
    }
    v1 = this; /*0x6b9ae1*/
    memset(&self.head, 0, 0xC); /*0x6b9ae9*/
    v20 = 0xFFFFFFFF; /*0x6b9af1*/
    self.vtable = &NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>>::`vftable'; /*0x6b9af9*/
  }
  for ( i = *((int ***)v1 + 5); i; i = (int **)*i ) /*0x6b9b0a*/
    NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>>::NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>>((NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>> *)i[2]); /*0x6b9b13*/
}
