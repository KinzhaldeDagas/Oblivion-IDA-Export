void sub_773580()
{
  unsigned int *v0; // edi
  _DWORD *v1; // esi
  _DWORD *v2; // ecx

  v0 = (unsigned int *)unk_B42838; /*0x773588*/
  if ( unk_B42838 ) /*0x773580*/
  {
    v1 = (_DWORD *)v0[5]; /*0x77358d*/
    *(_DWORD *)(unk_B42838 + 8) = 0; /*0x773592*/
    if ( v1 ) /*0x773599*/
    {
      if ( *v1 ) /*0x77359b*/
        FormHeapFree(*v1 - 4); /*0x7735a5*/
      v2 = (_DWORD *)v1[2]; /*0x7735ad*/
      if ( v2 ) /*0x7735b2*/
        sub_7733B0(v2, 1); /*0x7735b6*/
      FormHeapFree((unsigned int)v1); /*0x7735bc*/
    }
    FormHeapFree(*v0); /*0x7735c7*/
    FormHeapFree((unsigned int)v0); /*0x7735cd*/
  }
}
