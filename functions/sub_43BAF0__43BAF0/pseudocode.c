volatile LONG ***__thiscall sub_43BAF0(
        _DWORD **this,
        volatile LONG ***arg0,
        UInt32 a3,
        unsigned __int8 a2,
        volatile LONG *a5)
{
  IOTask *v5; // esi
  volatile LONG **v6; // esi
  volatile LONG **v8; // [esp-8h] [ebp-30h]

  v5 = (IOTask *)FormHeapAlloc(0x38u); /*0x43bb30*/
  if ( v5 ) /*0x43bb37*/
  {
    sub_436500(v5, a2); /*0x43bb40*/
    v5[1].vtbl = 0; /*0x43bb45*/
    v5[1].members.unk08 = a3; /*0x43bb48*/
    v5[1].members.unk04 = 0; /*0x43bb4b*/
    v5->vtbl = &QueuedHelmet::`vftable'; /*0x43bb4e*/
    v5[1].members.unk0C = 0; /*0x43bb54*/
    v5[1].members.unk10 = 0; /*0x43bb57*/
    v5[1].members.unk14 = 0; /*0x43bb5a*/
    v5[2].vtbl = *(void **)(v5[1].members.unk08 + 0x150); /*0x43bb66*/
  }
  else
  {
    v5 = 0; /*0x43bb6b*/
  }
  *arg0 = (volatile LONG **)v5; /*0x43bb73*/
  if ( v5 ) /*0x43bb75*/
    InterlockedIncrement((volatile LONG *)&v5->members.unk08); /*0x43bb7b*/
  v8 = *arg0; /*0x43bb99*/
  if ( *arg0 ) /*0x43bb81*/
    InterlockedIncrement((volatile LONG *)*arg0 + 2); /*0x43bba1*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, volatile LONG **, _DWORD))(**(this + 4) + 0xC))( /*0x43bbba*/
         *(this + 4),
         *(_DWORD *)(a3 + 0x150),
         v8,
         0) )
  {
    sub_43AC40(*arg0, a5); /*0x43bbc7*/
    (*((void (__thiscall **)(volatile LONG **))**arg0 + 8))(*arg0); /*0x43bbd3*/
  }
  else
  {
    v6 = *arg0; /*0x43bbd7*/
    if ( *arg0 ) /*0x43bbd7*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v6 + 2) ) /*0x43bbe1*/
      {
        if ( v6 ) /*0x43bbed*/
          (*(void (__thiscall **)(volatile LONG **, int))*v6)(v6, 1); /*0x43bbf7*/
      }
      *arg0 = 0; /*0x43bbf9*/
    }
  }
  return arg0; /*0x43bbfd*/
}
