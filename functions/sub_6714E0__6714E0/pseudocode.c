// Queued-move processor called from Player_OnInput. It may call PlayerCharacter_ProcessQueuedWorldspaceMove only when global/player/worldspace gates pass; a call-site wrapper at 0x672F08 should run its pending encounter logic after calling this original function.
void __usercall PlayerCharacter_ProcessQueuedMoveIfAllowed(
        int a1@<ecx>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>)
{
  unsigned int v9; // ebp
  char v11; // bl
  int v12; // eax
  unsigned int v13; // esi
  int v14; // eax
  int v15; // esi
  TESWorldSpace *WorldSpace; // eax
  unsigned int i; // [esp+14h] [ebp-Ch]
  float v18[2]; // [esp+18h] [ebp-8h] BYREF
  int savedregs; // [esp+20h] [ebp+0h] BYREF

  v9 = (unsigned int)&savedregs; /*0x6714e1*/
  if ( byte_B14F58 && !MEMORY[0xB333A0]->unk51 && !MEMORY[0xB333A0]->unk52 ) /*0x67150b*/
  {
    v11 = 0; /*0x671515*/
    if ( !*(_BYTE *)(a1 + 0x71E) ) /*0x671517*/
    {
      if ( *(_DWORD *)(a1 + 0x730) ) /*0x671523*/
      {
        v12 = a1; /*0x671538*/
        if ( *(_DWORD *)(a1 + 0xD4) ) /*0x671530*/
          v12 = *(_DWORD *)(a1 + 0xD4); /*0x67153c*/
        sub_4A6950(v18, (float *)(v12 + 0x2C)); /*0x671546*/
        v13 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 0x730) + 0xA); /*0x671551*/
        v9 = 0; /*0x671555*/
        for ( i = v13; v9 < v13; ++v9 ) /*0x671551*/
        {
          v14 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0x730) + 4) + 4 * v9); /*0x67156c*/
          if ( (*(_DWORD *)(v14 + 8) & 0x20) == 0 ) /*0x671578*/
          {
            v15 = *(_DWORD *)(v14 + 0x1C); /*0x67157a*/
            while ( v15 && (*(_DWORD *)(v15 + 4) || *(_DWORD *)v15) ) /*0x67158d*/
            {
              if ( sub_4A7330(*(float **)v15, v18) ) /*0x671596*/
                v11 = 1; /*0x67159f*/
              v15 = *(_DWORD *)(v15 + 4); /*0x6715a3*/
              if ( v11 ) /*0x6715a6*/
                goto LABEL_17; /*0x6715a6*/
            }
            v13 = i; /*0x6715b7*/
          }
        }
        goto LABEL_24; /*0x6715c0*/
      }
      WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1); /*0x6715d3*/
      if ( WorldSpace && sub_4EF160(WorldSpace) ) /*0x6715de*/
      {
LABEL_24:
        PlayerCharacter_ProcessQueuedWorldspaceMove(a1, v9, a2, a3, a4, a5, a6, a7, a8, a9, 0.0); /*0x6715e7*/
        return; /*0x6715eb*/
      }
    }
LABEL_17:
    sub_664320((PlayerCharacter *)a1); /*0x6715a8*/
  }
}
