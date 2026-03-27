// positive sp value has been detected, the output may be wrong!
int __userpurge def_76F600@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        int a3@<ebx>,
        int a4@<ebp>,
        int a5@<edi>,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  int (__cdecl *v12)(_DWORD *); // ecx
  int v13; // eax
  _DWORD v15[3]; // [esp-28h] [ebp-28h] BYREF
  int v16; // [esp-1Ch] [ebp-1Ch]
  int v17; // [esp-18h] [ebp-18h]
  int v18; // [esp-14h] [ebp-14h] BYREF
  int v19; // [esp-10h] [ebp-10h] BYREF

  if ( a1 < 0 )
  {
    if ( sub_726320(a2, a1 & 0x7FFFFFFF, &a12, &a11, &a6, &a10, &v18, &v19) )
    {
      v17 = a12;
    }
    else
    {
      v17 = 0;
      a11 = 0;
      v18 = 0;
      v19 = 0;
    }
  }
  v12 = *(int (__cdecl **)(_DWORD *))(*(_DWORD *)(a4 + 8) + 4 * a11);
  if ( !v12 )
    goto LABEL_12;
  v16 = 0;
  if ( a5 )
  {
    v13 = *(_DWORD *)(a3 + 8);
    if ( v13 != 1 && v13 != 2 )
      v16 = *(_DWORD *)(a5 + 0xC);
  }
  v15[0] = *(_DWORD *)(a3 + 0xC);
  v15[1] = a11;
  if ( !v17 )
LABEL_12:
    JUMPOUT(0x76F607);
  return v12(v15);
}
