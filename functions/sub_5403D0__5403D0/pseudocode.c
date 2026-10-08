void __thiscall sub_5403D0(Sky *this, int a2)
{
  int v2; // edi
  int v3; // ebp
  _DWORD *v4; // esi
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  int *unk0E0; // ecx
  int v8; // eax
  bool v9; // dl
  _DWORD *v10; // eax
  int v11; // ecx
  _DWORD *v12; // edi
  _DWORD *v13; // esi
  _DWORD *v14; // eax
  int *v15; // [esp+14h] [ebp-18h]

  v2 = a2; /*0x5403fb*/
  if ( a2 ) /*0x540403*/
  {
    v15 = (int *)(a2 + 0x108); /*0x540411*/
    if ( a2 != 0xFFFFFEF8 ) /*0x540415*/
    {
      do /*0x5404fd*/
      {
        v3 = *v15; /*0x54041f*/
        if ( !*v15 ) /*0x54041f*/
          break; /*0x540423*/
        if ( byte_B11DE4 || *(_DWORD *)(v3 + 4) != 1 ) /*0x540435*/
        {
          v4 = OSGLobals_PlaySound((int *)MEMORY[0xB33398]->sound, *(void **)v3, 0x21, 0); /*0x540450*/
          if ( v4 ) /*0x540454*/
            goto LABEL_13; /*0x540454*/
          if ( sub_6ACA40((_DWORD *)MEMORY[0xB33398]->sound, *(_DWORD *)v3) ) /*0x540462*/
          {
            v5 = (_DWORD *)FormHeapAlloc(4u); /*0x54046d*/
            if ( v5 ) /*0x54047f*/
              v6 = unknown_libname_1(v5, *(_DWORD *)v3); /*0x540487*/
            else
              v6 = 0; /*0x54048e*/
            v4 = v6; /*0x540498*/
          }
          if ( v4 ) /*0x54049c*/
          {
LABEL_13:
            unk0E0 = (int *)this->unk0E0; /*0x5404a2*/
            while ( unk0E0 ) /*0x5404b2*/
            {
              v8 = *unk0E0; /*0x5404b4*/
              if ( !*unk0E0 ) /*0x5404b4*/
                break; /*0x5404b4*/
              v9 = **(_DWORD **)v8 == *v4 && *(_DWORD *)(v8 + 4) == v2 && *(_DWORD *)(v8 + 8) == *(_DWORD *)(v3 + 4); /*0x5404cf*/
              unk0E0 = (int *)unk0E0[1]; /*0x5404d7*/
              if ( v9 ) /*0x5404da*/
              {
                sub_6B73E0(v4); /*0x5404e2*/
                FormHeapFree((unsigned int)v4); /*0x5404e8*/
                goto LABEL_23; /*0x5404e8*/
              }
            }
            v10 = (_DWORD *)FormHeapAlloc(0x10u); /*0x54051f*/
            if ( v10 ) /*0x540529*/
            {
              v11 = *(_DWORD *)(v3 + 4); /*0x54052b*/
              v10[1] = v2; /*0x54052e*/
              *v10 = v4; /*0x540531*/
              v10[2] = v11; /*0x540533*/
              v10[3] = 0; /*0x540536*/
              v12 = v10; /*0x540539*/
            }
            else
            {
              v12 = 0; /*0x54053d*/
            }
            v13 = (_DWORD *)this->unk0E0; /*0x540545*/
            if ( v12 ) /*0x54054b*/
            {
              if ( *v13 ) /*0x54054d*/
              {
                v14 = (_DWORD *)FormHeapAlloc(8u); /*0x540553*/
                if ( v14 ) /*0x54055d*/
                {
                  *v14 = *v13; /*0x540561*/
                  v14[1] = 0; /*0x540563*/
                }
                else
                {
                  v14 = 0; /*0x540568*/
                }
                v14[1] = v13[1]; /*0x54056d*/
                v13[1] = v14; /*0x540570*/
              }
              *v13 = v12; /*0x540573*/
            }
            v2 = a2; /*0x540579*/
            if ( *(_DWORD *)(v3 + 4) == 3 ) /*0x54057d*/
              ++unk_B365C0; /*0x540583*/
          }
        }
LABEL_23:
        v15 = (int *)v15[1]; /*0x5404f9*/
      }
      while ( v15 ); /*0x5404fd*/
    }
  }
}
