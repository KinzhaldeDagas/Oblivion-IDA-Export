int __userpurge sub_52A4A7@<eax>(_DWORD *a1@<ebx>, _DWORD *a2@<edi>, int a3)
{
  _DWORD *v3; // eax
  _DWORD *v4; // esi

  v3 = (_DWORD *)*a2; /*0x52a4a7*/
  if ( (_DWORD *)*a2 == a1 ) /*0x52a4ab*/
    v4 = 0; /*0x52a4b2*/
  else
    v4 = (_DWORD *)v3[0x19]; /*0x52a4ad*/
  if ( v4 == a1 ) /*0x52a4b6*/
    return sub_52A4CB(a1, (int)a2, a3); /*0x52a4b6*/
  v3[0x19] = a1; /*0x52a4ba*/
  Shared_NoOpVirtual_60D0A0(v4); /*0x52a4bd*/
  FormHeapFree((unsigned int)v4); /*0x52a4c3*/
  return sub_52A4CB(a1, (int)a2, a3);
}
