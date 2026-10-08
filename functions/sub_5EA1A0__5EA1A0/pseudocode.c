void __userpurge sub_5EA1A0(int ecx0@<ecx>, int a2@<ebp>, _DWORD *a1)
{
  int v3; // edi
  int v4; // ebx
  int v5; // ebp
  unsigned int v6; // eax
  unsigned int v7; // edi
  _DWORD *v8; // esi
  const char *v9; // eax
  void (__thiscall **v10)(_DWORD, int); // esi
  int v11; // eax
  size_t v12; // [esp-10h] [ebp-18h]

  v3 = ecx0; /*0x5ea1a2*/
  if ( *(_DWORD *)(ecx0 + 0x58) ) /*0x5ea1a4*/
  {
    if ( a1 ) /*0x5ea1b9*/
    {
      v4 = (*(int (__thiscall **)(_DWORD *))(*a1 + 8))(a1); /*0x5ea1c9*/
      if ( v4 ) /*0x5ea1cd*/
      {
        HIDWORD(v12) = a2; /*0x5ea1d3*/
        v5 = NiObjectNET_LookupObjectByName(a1, "SkinAttachment"); /*0x5ea1df*/
        if ( !v5 ) /*0x5ea1e6*/
        {
          v6 = *(unsigned __int16 *)(v4 + 0xB6); /*0x5ea1e8*/
          v7 = 0; /*0x5ea1ef*/
          if ( *(_WORD *)(v4 + 0xB6) ) /*0x5ea1e8*/
          {
            while ( !v5 ) /*0x5ea1f7*/
            {
              if ( v6 > v7 ) /*0x5ea1fb*/
              {
                v8 = *(_DWORD **)(*(_DWORD *)(v4 + 0xB0) + 4 * v7); /*0x5ea203*/
                if ( v8 ) /*0x5ea208*/
                {
                  v9 = (const char *)v8[2]; /*0x5ea20a*/
                  if ( v9 ) /*0x5ea20f*/
                  {
                    LODWORD(v12) = 3; /*0x5ea211*/
                    if ( _strnicmp(v9, off_A6E684, v12) ) /*0x5ea219*/
                      v5 = (*(int (__thiscall **)(_DWORD *))(*v8 + 8))(v8); /*0x5ea22e*/
                  }
                }
              }
              v6 = *(unsigned __int16 *)(v4 + 0xB6); /*0x5ea230*/
              if ( ++v7 >= v6 ) /*0x5ea23c*/
              {
                if ( v5 ) /*0x5ea240*/
                  break; /*0x5ea240*/
                goto LABEL_14; /*0x5ea240*/
              }
            }
          }
          else
          {
LABEL_14:
            v5 = v4; /*0x5ea242*/
          }
          v3 = ecx0; /*0x5ea244*/
        }
        v10 = (void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v3 + 0x58) + 0x3A8); /*0x5ea24e*/
        v11 = sub_480630(v5); /*0x5ea254*/
        (*v10)(*(_DWORD *)(v3 + 0x58), v11); /*0x5ea262*/
      }
    }
  }
}
