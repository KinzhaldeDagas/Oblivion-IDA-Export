0x5AC6A0: push    ecx; Collects up to three selected LevelUpMenu attribute tiles, maps their group-0 offsets to attribute AVs, and commits them through Player_CommitLevelUp. Missing selections remain 0xFFFFFFFF and are ignored by Player_LevelUpAttribute.
0x5AC6A1: mov     eax, [ecx+28h]
0x5AC6A4: push    ebx
0x5AC6A5: push    ebp
0x5AC6A6: push    edi
0x5AC6A7: mov     edi, [eax+34h]
0x5AC6AA: or      ebp, 0FFFFFFFFh
0x5AC6AD: test    edi, edi
0x5AC6AF: mov     ebx, ebp
0x5AC6B1: mov     [esp+10h+attribute2], ebp
0x5AC6B5: jz      short loc_5AC717
0x5AC6B7: push    esi
0x5AC6B8: mov     esi, [edi+8]
0x5AC6BB: lea     eax, [edi+8]
0x5AC6BE: mov     edi, [edi]
0x5AC6C0: push    0FAEh
0x5AC6C5: mov     ecx, esi
0x5AC6C7: call    Tile_GetFloat
0x5AC6CC: fcomp   dword ptr ds:0A379B4h
0x5AC6D2: fnstsw  ax
0x5AC6D4: test    ah, 44h
0x5AC6D7: jp      short loc_5AC712
0x5AC6D9: push    0FAAh
0x5AC6DE: mov     ecx, esi
0x5AC6E0: call    Tile_GetFloat
0x5AC6E5: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5AC6EA: push    eax
0x5AC6EB: push    0
0x5AC6ED: call    ActorValue_GetAVFromGroupOffset; mwMediumArmor: Oblivion group 2 maps skill offset to actor value by adding 0x0C. OpenMW/Morrowind skill index 2 is MediumArmor, but Oblivion offset 2 becomes actor value 0x0E (Blade). Do not pass Morrowind skill indexes directly through this helper.
0x5AC6F2: add     esp, 8
0x5AC6F5: cmp     ebx, 0FFFFFFFFh
0x5AC6F8: jnz     short loc_5AC6FE
0x5AC6FA: mov     ebx, eax
0x5AC6FC: jmp     short loc_5AC712
0x5AC6FE: cmp     [esp+14h+attribute2], 0FFFFFFFFh
0x5AC703: jnz     short loc_5AC70B
0x5AC705: mov     [esp+14h+attribute2], eax
0x5AC709: jmp     short loc_5AC712
0x5AC70B: cmp     ebp, 0FFFFFFFFh
0x5AC70E: jnz     short loc_5AC712
0x5AC710: mov     ebp, eax
0x5AC712: test    edi, edi
0x5AC714: jnz     short loc_5AC6B8
0x5AC716: pop     esi
0x5AC717: mov     ecx, [esp+10h+attribute2]
0x5AC71B: push    ebp; attribute3
0x5AC71C: push    ecx; attribute2
0x5AC71D: mov     ecx, ds:0B333C4h; this
0x5AC723: push    ebx; attribute1
0x5AC724: call    Player_CommitLevelUp; Commit one Oblivion character level: apply three attributes, raise player level, consume the oldest all-skill attribute-bonus bucket, age specialization counters, subtract exactly g_iLevelUpSkillCount from majorSkillAdvances, clear all 21 per-skill advance counters, reset training use, and preserve any excess major progress/readiness.
0x5AC729: pop     edi
0x5AC72A: pop     ebp
0x5AC72B: pop     ebx
0x5AC72C: pop     ecx
0x5AC72D: retn
