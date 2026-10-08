bool __cdecl sub_6BE880(float a1, int *a2, _DWORD *a3)
{
  _DWORD *v3; // ebx
  int *v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // edi
  unsigned int i; // ebx
  int v9; // eax
  int v11; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v12; // [esp+28h] [ebp-4h]

  v3 = a3; /*0x6be8a4*/
  v4 = a2; /*0x6be8ab*/
  if ( !*a3 ) /*0x6be8a8*/
  {
    v5 = FormHeapAlloc(0x4Cu); /*0x6be8b3*/
    a3 = (_DWORD *)v5; /*0x6be8bb*/
    v12 = 0; /*0x6be8c1*/
    if ( v5 ) /*0x6be8c9*/
    {
      v6 = v5 + 4; /*0x6be8d7*/
      *(_DWORD *)v5 = 1; /*0x6be8dd*/
      ArrayConstructor((char *)(v5 + 4), 0x48u, 1, (void (__thiscall *)(char *))sub_6BE430, Shared_NoOpVirtual_60D0A0); /*0x6be8e3*/
    }
    else
    {
      v6 = 0; /*0x6be8ea*/
    }
    *v4 = v6; /*0x6be8ec*/
    v12 = 0xFFFFFFFF; /*0x6be8ee*/
    *v3 = 1; /*0x6be8f6*/
  }
  v7 = *v4; /*0x6be8fc*/
  LOBYTE(a3) = 0; /*0x6be8fe*/
  for ( i = 0; i < 3; ++i ) /*0x6be903*/
  {
    v11 = *(_DWORD *)(v7 + 4 * (unsigned __int8)i + 0x30); /*0x6be90c*/
    a2 = *(int **)(v7 + 4 * (unsigned __int8)i + 0x14); /*0x6be916*/
    if ( a2 ) /*0x6be91a*/
    {
      if ( (*(unsigned __int8 (__cdecl **)(_DWORD, int *, int **))(4 * *(_DWORD *)(v7 + 4 * (unsigned __int8)i + 0x20) /*0x6be939*/
                                                                 + 0xB3D1A8))(
             LODWORD(a1),
             &v11,
             &a2) )
      {
        LOBYTE(a3) = 1; /*0x6be942*/
      }
      v9 = v11; /*0x6be94b*/
      *(_DWORD *)(v7 + 4 * (unsigned __int8)i + 0x14) = a2; /*0x6be94f*/
      *(_DWORD *)(v7 + 4 * (unsigned __int8)i + 0x30) = v9; /*0x6be953*/
      *(_DWORD *)(v7 + 4 * (unsigned __int8)i + 0x3C) = 0; /*0x6be957*/
    }
  }
  return (_BYTE)a3 != 0; /*0x6be96f*/
}
