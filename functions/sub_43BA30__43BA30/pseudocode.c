IOTask **__stdcall sub_43BA30(IOTask **a1, UInt32 arg4, unsigned __int8 a2, volatile LONG *a4)
{
  IOTask *v4; // esi

  v4 = (IOTask *)FormHeapAlloc(0x30u); /*0x43ba65*/
  if ( v4 ) /*0x43ba6c*/
  {
    sub_436500(v4, a2); /*0x43ba75*/
    v4[1].vtbl = 0; /*0x43ba7e*/
    v4[1].members.unk04 = 0; /*0x43ba81*/
    v4->vtbl = &QueuedHead::`vftable'; /*0x43ba84*/
    v4[1].members.unk08 = arg4; /*0x43ba8a*/
    v4[1].members.unk0C = 0; /*0x43ba8d*/
    v4[1].members.unk10 = 0; /*0x43ba90*/
  }
  else
  {
    v4 = 0; /*0x43ba95*/
  }
  *a1 = v4; /*0x43ba9d*/
  if ( v4 ) /*0x43ba9f*/
    InterlockedIncrement((volatile LONG *)&v4->members.unk08); /*0x43baa5*/
  sub_43AC40((volatile LONG **)*a1, a4); /*0x43babe*/
  (*((void (__thiscall **)(_DWORD))(*a1)->vtbl + 8))(*a1); /*0x43baca*/
  return a1; /*0x43bace*/
}
