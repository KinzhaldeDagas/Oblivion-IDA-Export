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

  v3 = ecx0;
  if ( *(_DWORD *)(ecx0 + 0x58) )
  {
    if ( a1 )
    {
      v4 = (*(int (__thiscall **)(_DWORD *))(*a1 + 8))(a1);
      if ( v4 )
      {
        HIDWORD(v12) = a2;
        v5 = NiObjectNET_LookupObjectByName(a1, "SkinAttachment");
        if ( !v5 )
        {
          v6 = *(unsigned __int16 *)(v4 + 0xB6);
          v7 = 0;
          if ( *(_WORD *)(v4 + 0xB6) )
          {
            while ( !v5 )
            {
              if ( v6 > v7 )
              {
                v8 = *(_DWORD **)(*(_DWORD *)(v4 + 0xB0) + 4 * v7);
                if ( v8 )
                {
                  v9 = (const char *)v8[2];
                  if ( v9 )
                  {
                    LODWORD(v12) = 3;
                    if ( _strnicmp(v9, off_A6E684, v12) )
                      v5 = (*(int (__thiscall **)(_DWORD *))(*v8 + 8))(v8);
                  }
                }
              }
              v6 = *(unsigned __int16 *)(v4 + 0xB6);
              if ( ++v7 >= v6 )
              {
                if ( v5 )
                  break;
                goto LABEL_14;
              }
            }
          }
          else
          {
LABEL_14:
            v5 = v4;
          }
          v3 = ecx0;
        }
        v10 = (void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v3 + 0x58) + 0x3A8);
        v11 = sub_480630(v5);
        (*v10)(*(_DWORD *)(v3 + 0x58), v11);
      }
    }
  }
}
