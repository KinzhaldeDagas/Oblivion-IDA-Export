0x5AC6A0: push    ecx
0x5AC6A1: mov     eax, [ecx+28h]
0x5AC6A4: push    ebx
0x5AC6A5: push    ebp
0x5AC6A6: push    edi
0x5AC6A7: mov     edi, [eax+34h]
0x5AC6AA: or      ebp, 0FFFFFFFFh
0x5AC6AD: test    edi, edi
0x5AC6AF: mov     ebx, ebp
0x5AC6B1: mov     [esp+10h+var_4], ebp
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
0x5AC6E5: call    Double_To_SInt32
0x5AC6EA: push    eax
0x5AC6EB: push    0
0x5AC6ED: call    ActorValue_GetAVFromGroupOffset
0x5AC6F2: add     esp, 8
0x5AC6F5: cmp     ebx, 0FFFFFFFFh
0x5AC6F8: jnz     short loc_5AC6FE
0x5AC6FA: mov     ebx, eax
0x5AC6FC: jmp     short loc_5AC712
0x5AC6FE: cmp     [esp+14h+var_4], 0FFFFFFFFh
0x5AC703: jnz     short loc_5AC70B
0x5AC705: mov     [esp+14h+var_4], eax
0x5AC709: jmp     short loc_5AC712
0x5AC70B: cmp     ebp, 0FFFFFFFFh
0x5AC70E: jnz     short loc_5AC712
0x5AC710: mov     ebp, eax
0x5AC712: test    edi, edi
0x5AC714: jnz     short loc_5AC6B8
0x5AC716: pop     esi
0x5AC717: mov     ecx, [esp+10h+var_4]
0x5AC71B: push    ebp
0x5AC71C: push    ecx
0x5AC71D: mov     ecx, ds:0B333C4h
0x5AC723: push    ebx
0x5AC724: call    sub_66C3E0
0x5AC729: pop     edi
0x5AC72A: pop     ebp
0x5AC72B: pop     ebx
0x5AC72C: pop     ecx
0x5AC72D: retn
