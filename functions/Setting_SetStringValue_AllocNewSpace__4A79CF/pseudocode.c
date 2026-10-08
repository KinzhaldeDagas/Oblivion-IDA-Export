int __usercall Setting_SetStringValue_::AllocNewSpace@<eax>(
        unsigned int a1@<eax>,
        int a2@<ebp>,
        int a3@<ebx>,
        char *a4@<edi>,
        int a5,
        int a6,
        int a7,
        _DWORD *a8)
{
  int v8; // eax

  v8 = FormHeapAlloc(a1); /*0x4a79d1*/
  if ( v8 ) /*0x4a79dd*/
    return Setting_SetStringValue_::CopyValue(a4, v8 + a3 - (_DWORD)a4, a3, v8 + a3, a5, a6, a7, a8); /*0x4a79e7*/
  else
    return Setting_SetStringValue_::Done_(a2, a5); /*0x4a79dd*/
}
