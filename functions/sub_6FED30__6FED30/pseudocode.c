void __thiscall sub_6FED30(void *this, NiObjectNET *a2)
{
  NiObjectNET *v3; // esi
  int v4; // ebx
  int v5; // eax
  bool v6; // zf
  NiExtraData *ExtraData; // eax
  int v8; // esi
  int v9; // eax

  v3 = a2;
  if ( a2 )
  {
    v4 = (*((int (__thiscall **)(NiObjectNET *))a2->vtbl + 2))(a2);
    if ( v3 != *((NiObjectNET **)this + 0x14) )
    {
      v5 = *((_DWORD *)this + 0x15);
      if ( v5 )
      {
        if ( v5 != 1 )
        {
          v6 = v4 == 0;
LABEL_9:
          if ( !v6 )
          {
            a2 = v3;
            InterlockedIncrement((volatile LONG *)&v3->members);
            sub_6FEB00((unsigned __int16 *)this + 0x2C, (LONG *)&a2);
            if ( !InterlockedDecrement((volatile LONG *)&v3->members) )
              (*(void (__thiscall **)(NiObjectNET *, int))v3->vtbl)(v3, 1);
          }
          if ( v4 )
          {
            v8 = *(unsigned __int16 *)(v4 + 0xB6);
            if ( *(_WORD *)(v4 + 0xB6) )
            {
              do
              {
                if ( *(unsigned __int16 *)(v4 + 0xB6) > (unsigned int)--v8 )
                  v9 = *(_DWORD *)(*(_DWORD *)(v4 + 0xB0) + 4 * v8);
                else
                  v9 = 0;
                sub_6FED30(this, v9);
              }
              while ( v8 );
            }
          }
          return;
        }
        ExtraData = NiObjectNET_GetExtraData(v3, (const char *)&off_A7D44C);
      }
      else
      {
        ExtraData = (NiExtraData *)(*((int (__thiscall **)(NiObjectNET *))v3->vtbl + 3))(v3);
      }
      v6 = ExtraData == 0;
      goto LABEL_9;
    }
  }
}
