NiObject *__cdecl sub_70BE00(int *a1, int a2)
{
  int v2; // ecx
  int v3; // eax
  NiObject *result; // eax
  NiObject *v5; // esi
  NiObject *v6; // edi

  if ( !a1 || !a2 ) /*0x70be10*/
    return 0; /*0x70be5d*/
  v2 = a1[4]; /*0x70be12*/
  if ( v2 ) /*0x70be17*/
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0xC))(v2); /*0x70be1e*/
  else
    v3 = 0; /*0x70be22*/
  result = (NiObject *)(*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 0x98))(a2, v3); /*0x70be30*/
  v5 = result; /*0x70be32*/
  if ( result ) /*0x70be36*/
  {
    v6 = sub_70BC70((NiObjectVtbl *)a1[2], a1[3], a2, (int)result); /*0x70be4c*/
    FormHeapFree((unsigned int)v5); /*0x70be4e*/
    return v6; /*0x70be57*/
  }
  return result; /*0x70be39*/
}
