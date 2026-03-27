void __thiscall sub_5403D0(Sky *this, int a4)
{
  int v4; // edi
  int *v5; // ebp
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  int *unk0E0; // ecx
  int v11; // eax
  bool v12; // dl
  _DWORD *v13; // eax
  int v14; // ecx
  _DWORD *v15; // edi
  _DWORD *v16; // esi
  _DWORD *v17; // eax
  int v18; // [esp+14h] [ebp-18h]

  v4 = a4;
  if ( a4 )
  {
    v18 = a4 + 0x108;
    if ( a4 != 0xFFFFFEF8 )
    {
      do
      {
        v5 = *(int **)v18;
        if ( !*(_DWORD *)v18 )
          break;
        if ( byte_B11DE4 || v5[1] != 1 )
        {
          OSGLobals_PlaySound(*v5, 0x21, 0);
          v7 = v6;
          if ( v6 )
            goto LABEL_13;
          if ( sub_6ACA40((_DWORD *)OSGlobals->sound, *v5) )
          {
            v8 = (_DWORD *)FormHeapAlloc(4u);
            if ( v8 )
              v9 = unknown_libname_1(v8, *v5);
            else
              v9 = 0;
            v7 = v9;
          }
          if ( v7 )
          {
LABEL_13:
            unk0E0 = (int *)this->unk0E0;
            while ( unk0E0 )
            {
              v11 = *unk0E0;
              if ( !*unk0E0 )
                break;
              v12 = **(_DWORD **)v11 == *v7 && *(_DWORD *)(v11 + 4) == v4 && *(_DWORD *)(v11 + 8) == v5[1];
              unk0E0 = (int *)unk0E0[1];
              if ( v12 )
              {
                if ( v7 )
                {
                  sub_6B73E0(v7);
                  FormHeapFree((unsigned int)v7);
                }
                goto LABEL_24;
              }
            }
            v13 = (_DWORD *)FormHeapAlloc(0x10u);
            if ( v13 )
            {
              v14 = v5[1];
              v13[1] = v4;
              *v13 = v7;
              v13[2] = v14;
              v13[3] = 0;
              v15 = v13;
            }
            else
            {
              v15 = 0;
            }
            v16 = (_DWORD *)this->unk0E0;
            if ( v15 )
            {
              if ( *v16 )
              {
                v17 = (_DWORD *)FormHeapAlloc(8u);
                if ( v17 )
                {
                  *v17 = *v16;
                  v17[1] = 0;
                }
                else
                {
                  v17 = 0;
                }
                v17[1] = v16[1];
                v16[1] = v17;
              }
              *v16 = v15;
            }
            v4 = a4;
            if ( v5[1] == 3 )
              ++byte_B365C0;
          }
        }
LABEL_24:
        v18 = *(_DWORD *)(v18 + 4);
      }
      while ( v18 );
    }
  }
}
