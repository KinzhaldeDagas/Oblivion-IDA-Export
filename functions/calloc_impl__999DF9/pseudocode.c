int __usercall _calloc_impl@<eax>(int a1@<ebx>, int a2@<esi>, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // esi
  unsigned int v6; // [esp+34h] [ebp+8h]

  if ( a3 && 0xFFFFFFE0 / a3 < a4 ) /*0x999e1b*/
  {
    *_errno() = 0xC; /*0x999e22*/
    _invalid_parameter(a1, 0, a2); /*0x999e2d*/
    return 0; /*0x999e35*/
  }
  else
  {
    v5 = a4 * a3; /*0x999e40*/
    v6 = v5; /*0x999e42*/
    if ( !v5 ) /*0x999e47*/
      v5 = 1; /*0x999e4b*/
    if ( v5 > 0xFFFFFFE0 ) /*0x999e54*/
      JUMPOUT(0x999EBF); /*0x999ebf*/
    if ( unk_BAABC0 != 3 || v6 > unk_BAABCC ) /*0x999e71*/
      JUMPOUT(0x999EAA); /*0x999eaa*/
    _lock(4); /*0x999e75*/
    __sbh_alloc_block(v6); /*0x999e81*/
    _unlock(4); /*0x999ef7*/
    return _calloc_impl_::_LN25_3(v6, (v5 + 0xF) & 0xFFFFFFF0); /*0x999efd*/
  }
}
