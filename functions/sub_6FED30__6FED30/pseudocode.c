void __thiscall sub_6FED30(char *this, NiObjectNET *a2)
{
  NiObjectNET *v3; // esi
  int v4; // ebx
  int v5; // eax
  bool v6; // zf
  NiExtraData *ExtraData; // eax
  int v8; // esi
  NiObjectNET *v9; // eax

  v3 = a2; /*0x6fed56*/
  if ( a2 ) /*0x6fed5c*/
  {
    v4 = (*((int (__thiscall **)(NiObjectNET *))a2->vtbl + 2))(a2); /*0x6fed6e*/
    if ( v3 != *((NiObjectNET **)this + 0x14) ) /*0x6fed70*/
    {
      v5 = *((_DWORD *)this + 0x15); /*0x6fed76*/
      if ( v5 ) /*0x6fed7c*/
      {
        if ( v5 != 1 ) /*0x6fed81*/
        {
          v6 = v4 == 0; /*0x6fed83*/
LABEL_9:
          if ( !v6 ) /*0x6feda5*/
          {
            a2 = v3; /*0x6fedab*/
            InterlockedIncrement((volatile LONG *)&v3->members); /*0x6fedaf*/
            sub_6FEB00((MEF_RefPointerArray16 *)(this + 0x58), (LONG *)&a2); /*0x6fedc5*/
            if ( !InterlockedDecrement((volatile LONG *)&v3->members) ) /*0x6fedd3*/
              (*(void (__thiscall **)(NiObjectNET *, int))v3->vtbl)(v3, 1); /*0x6fede5*/
          }
          if ( v4 ) /*0x6fede9*/
          {
            v8 = *(unsigned __int16 *)(v4 + 0xB6); /*0x6fedeb*/
            if ( *(_WORD *)(v4 + 0xB6) ) /*0x6fedeb*/
            {
              do /*0x6fee25*/
              {
                if ( *(unsigned __int16 *)(v4 + 0xB6) > (unsigned int)--v8 ) /*0x6fee0c*/
                  v9 = *(NiObjectNET **)(*(_DWORD *)(v4 + 0xB0) + 4 * v8); /*0x6fee18*/
                else
                  v9 = 0; /*0x6fee0e*/
                sub_6FED30(this, v9); /*0x6fee1e*/
              }
              while ( v8 ); /*0x6fee25*/
            }
          }
          return; /*0x6fee25*/
        }
        ExtraData = NiObjectNET_GetExtraData(v3, (const char *)&off_A7D44C); /*0x6fed8e*/
      }
      else
      {
        ExtraData = (NiExtraData *)(*((int (__thiscall **)(NiObjectNET *))v3->vtbl + 3))(v3); /*0x6fed9c*/
      }
      v6 = ExtraData == 0; /*0x6fed9e*/
      goto LABEL_9; /*0x6fed9e*/
    }
  }
}
