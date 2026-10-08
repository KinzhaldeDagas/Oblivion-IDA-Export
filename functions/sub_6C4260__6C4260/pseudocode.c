void __userpurge sub_6C4260(_DWORD *this@<ecx>, int a2@<ebp>, int a3)
{
  Ni2DBuffer **v4; // ebx
  unsigned int i; // edi
  _DWORD *v6; // ecx

  nullsub_returnvVoid_1arg(a3); /*0x6c426a*/
  v4 = (Ni2DBuffer **)*(this + 0xC); /*0x6c426f*/
  for ( i = 0; i < *((unsigned __int16 *)this + 0x23); ++i ) /*0x6c4274*/
  {
    v6 = *(_DWORD **)(*(this + 0x10) + 4 * i); /*0x6c4283*/
    if ( v6 ) /*0x6c4288*/
      sub_6C9590(v6, a2, v4); /*0x6c428b*/
  }
}
