int __cdecl sub_88F200(int a1)
{
  int BhkBlendCollisionObject; // edi
  int v2; // esi
  unsigned int v3; // eax
  int v4; // edx
  int v5; // esi
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // esi
  int i; // eax

  BhkBlendCollisionObject = 0; /*0x88f206*/
  if ( a1 )
  {
    BhkBlendCollisionObject = NiAVObject_GetBhkBlendCollisionObject(a1); /*0x88f216*/
    if ( !BhkBlendCollisionObject )
    {
      v2 = *(_WORD *)(a1 + 0xB6) ? **(_DWORD **)(a1 + 0xB0) : 0;
      BhkBlendCollisionObject = NiAVObject_GetBhkBlendCollisionObject(v2); /*0x88f23e*/
      if ( !BhkBlendCollisionObject ) /*0x88f245*/
      {
        v3 = *(_WORD *)(v2 + 0xB8) != 1; /*0x88f256*/
        if ( *(unsigned __int16 *)(v2 + 0xB6) > v3 ) /*0x88f25b*/
        {
          v4 = *(_DWORD *)(v2 + 0xB0); /*0x88f25d*/
          v5 = *(_DWORD *)(v4 + 4 * v3); /*0x88f263*/
          if ( v5 ) /*0x88f268*/
          {
            BhkBlendCollisionObject = NiAVObject_GetBhkBlendCollisionObject(*(_DWORD *)(v4 + 4 * v3)); /*0x88f270*/
            if ( !BhkBlendCollisionObject ) /*0x88f277*/
            {
              v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5); /*0x88f281*/
              v7 = v6; /*0x88f283*/
              if ( v6 ) /*0x88f287*/
              {
                v8 = *(unsigned __int16 *)(v6 + 0xB6); /*0x88f289*/
                v9 = 0; /*0x88f290*/
                if ( *(_WORD *)(v7 + 0xB6) ) /*0x88f289*/
                {
                  if ( v8 ) /*0x88f298*/
                    goto LABEL_14; /*0x88f298*/
                  for ( i = 0; ; i = *(_DWORD *)(*(_DWORD *)(v7 + 0xB0) + 4 * v9) ) /*0x88f29a*/
                  {
                    BhkBlendCollisionObject = NiAVObject_GetBhkBlendCollisionObject(i); /*0x88f2ad*/
                    if ( BhkBlendCollisionObject ) /*0x88f2b4*/
                      break; /*0x88f2b4*/
                    if ( *(unsigned __int16 *)(v7 + 0xB6) <= (unsigned int)++v9 ) /*0x88f2c2*/
                      break; /*0x88f2c2*/
LABEL_14:
                    ; /*0x88f29e*/
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return BhkBlendCollisionObject; /*0x88f2c7*/
}
