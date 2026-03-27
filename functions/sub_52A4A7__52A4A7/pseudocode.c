int __userpurge sub_52A4A7@<eax>(void *a1@<ebx>, _DWORD *a2@<edi>, int a3)
{
  _DWORD *v3; // eax
  void *v4; // esi

  v3 = (_DWORD *)*a2;
  if ( (void *)*a2 == a1 )
    v4 = 0;
  else
    v4 = (void *)v3[0x19];
  if ( v4 == a1 )
    return sub_52A4CB((int)a1, (int)a2, a3);
  v3[0x19] = a1;
  TESTexture::ClearComponentReferences(v4);
  FormHeapFree((unsigned int)v4);
  return sub_52A4CB((int)a1, (int)a2, a3);
}
