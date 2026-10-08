char __cdecl sub_6BD860(float a1, int **a2, unsigned int *a3)
{
  int *v3; // ebp
  int v4; // esi
  unsigned int v5; // ecx
  int v6; // eax
  char *v7; // ebx
  char *v8; // esi
  char *v9; // eax
  size_t v11; // [esp+10h] [ebp-3Ch]
  size_t v12; // [esp+10h] [ebp-3Ch]
  int v13[2]; // [esp+28h] [ebp-24h] BYREF
  int v14[4]; // [esp+30h] [ebp-1Ch] BYREF
  unsigned int v15; // [esp+48h] [ebp-4h]

  v3 = *a2; /*0x6bd895*/
  if ( !NiAnimationKey_FindInsertionIndex(a1, (int)*a2, *a3, (unsigned int *)v13, 0x24u) ) /*0x6bd8a4*/
    return 0; /*0x6bd9ef*/
  v4 = *a3 + 1; /*0x6bd8b6*/
  v5 = (0x24 * (unsigned __int64)(unsigned int)v4) >> 0x20 != 0 ? 0xFFFFFFFF : 0x24 * v4;
  v6 = FormHeapAlloc(__CFADD__(v5, 4) ? 0xFFFFFFFF : v5 + 4);
  v13[1] = v6; /*0x6bd8e0*/
  v15 = 0; /*0x6bd8e6*/
  if ( v6 ) /*0x6bd8ee*/
  {
    v7 = (char *)(v6 + 4); /*0x6bd8fb*/
    *(_DWORD *)v6 = v4; /*0x6bd901*/
    ArrayConstructor((char *)(v6 + 4), 0x24u, v4, (void (__thiscall *)(char *))sub_6C0AD0, Shared_NoOpVirtual_60D0A0); /*0x6bd903*/
    v8 = v7; /*0x6bd908*/
  }
  else
  {
    v8 = 0; /*0x6bd90c*/
  }
  LODWORD(v11) = 0x24 * v13[0]; /*0x6bd919*/
  v15 = 0xFFFFFFFF; /*0x6bd91c*/
  memcpy(v8, v3, v11); /*0x6bd924*/
  if ( *a3 > v13[0] ) /*0x6bd934*/
  {
    LODWORD(v12) = 0x24 * (*a3 - v13[0]); /*0x6bd946*/
    memcpy(&v8[0x24 * v13[0] + 0x24], &v3[9 * v13[0]], v12); /*0x6bd950*/
  }
  sub_6BD1F0(v14, a1, (int)v3, 2, *a3, 0x24u); /*0x6bd96d*/
  v9 = &v8[0x24 * v13[0]]; /*0x6bd97d*/
  *(float *)v9 = a1; /*0x6bd980*/
  *((_DWORD *)v9 + 1) = v14[0]; /*0x6bd986*/
  *((_DWORD *)v9 + 2) = v14[1]; /*0x6bd98d*/
  *((_DWORD *)v9 + 3) = v14[2]; /*0x6bd994*/
  *((_DWORD *)v9 + 4) = v14[3]; /*0x6bd99b*/
  ++*a3; /*0x6bd99e*/
  if ( v3 ) /*0x6bd9a6*/
  {
    _LN21((char *)v3, 0x24u, v3[0xFFFFFFFF], Shared_NoOpVirtual_60D0A0); /*0x6bd9b7*/
    FormHeapFree((unsigned int)(v3 + 0xFFFFFFFF)); /*0x6bd9bd*/
  }
  *a2 = (int *)v8; /*0x6bd9c9*/
  sub_6BD6B0((float *)v8, *a3, 0x24u); /*0x6bd9d1*/
  return 1; /*0x6bd9db*/
}
