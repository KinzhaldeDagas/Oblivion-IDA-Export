// Walks every controller-manager sequence, RTTI-filters to the Oblivion animation-group sequence class, and clears the +8 pointer in each 0x10-byte controlled-block record through 0x49F520. Kept conservatively unnamed because the exact field type is not yet recovered.
unsigned int __thiscall sub_4730B0(_DWORD *this)
{
  unsigned int result; // eax
  unsigned int v3; // ebx
  unsigned int i; // edi
  int v5; // ecx
  int v6; // esi
  int v7; // eax
  char v8; // al

  result = *(this + 0x26); /*0x4730b3*/
  if ( result )
  {
    v3 = *(unsigned __int16 *)(result + 0x46); /*0x4730be*/
    for ( i = 0; i < v3; ++i )
    {
      result = *(this + 0x26); /*0x4730d0*/
      v5 = *(_DWORD *)(result + 0x40); /*0x4730d6*/
      v6 = *(_DWORD *)(v5 + 4 * i); /*0x4730d9*/
      if ( v6 )
      {
        v7 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 4))(*(_DWORD *)(v5 + 4 * i)); /*0x4730e7*/
        if ( v7 ) /*0x4730eb*/
        {
          while ( (char *)v7 != &MEMORY[0xB33E90][0x13E0] ) /*0x4730f5*/
          {
            v7 = *(_DWORD *)(v7 + 4); /*0x4730f7*/
            if ( !v7 ) /*0x4730fc*/
              goto LABEL_7; /*0x4730fc*/
          }
          v8 = 1; /*0x47311b*/
        }
        else
        {
LABEL_7:
          v8 = 0; /*0x4730fe*/
        }
        result = v8 != 0 ? v6 : 0;
        if ( result ) /*0x473106*/
          result = sub_49F520((_DWORD *)result); /*0x47310a*/
      }
    }
  }
  return result; /*0x473119*/
}
