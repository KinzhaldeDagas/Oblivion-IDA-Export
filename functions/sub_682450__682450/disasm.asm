0x682450: push    0FFFFFFFFh
0x682452: push    offset SEH_6F8920
0x682457: mov     eax, large fs:0
0x68245D: push    eax
0x68245E: push    esi
0x68245F: mov     eax, ds:0B30AACh
0x682464: xor     eax, esp
0x682466: push    eax
0x682467: lea     eax, [esp+14h+var_C]
0x68246B: mov     large fs:0, eax
0x682471: mov     esi, [esp+14h+arg_0]
0x682475: test    esi, esi
0x682477: jz      short loc_6824DB
0x682479: cmp     dword ptr [esi+20h], 2
0x68247D: jz      short loc_6824DB
0x68247F: cmp     dword ptr [esi+8], 0
0x682483: jnz     short loc_6824B5
0x682485: push    14h; Size
0x682487: call    FormHeapAlloc
0x68248C: add     esp, 4
0x68248F: mov     [esp+14h+arg_0], eax
0x682493: test    eax, eax
0x682495: mov     [esp+14h+var_4], 0
0x68249D: jz      short loc_6824A8
0x68249F: mov     ecx, eax; this
0x6824A1: call    PathLow_ctor; Verified PathLow constructor: installs the PathLow vtable at +0, initializes the BSSimpleList at +4/+8 to empty, copies unk_B3A458 to +0x0C, and sets byte +0x10 to 1. +0x0C and byte +0x10 semantics remain Unknown.
0x6824A6: jmp     short loc_6824AA
0x6824A8: xor     eax, eax
0x6824AA: mov     [esp+14h+var_4], 0FFFFFFFFh
0x6824B2: mov     [esi+8], eax
0x6824B5: mov     eax, [esi+10h]
0x6824B8: mov     ecx, [esi+0Ch]
0x6824BB: push    eax; destinationWorldspace
0x6824BC: mov     eax, [esi+4]
0x6824BF: push    ecx; destinationCell
0x6824C0: mov     ecx, [esi+8]; this
0x6824C3: lea     edx, [esi+14h]
0x6824C6: push    edx; destinationPosition
0x6824C7: push    eax; sourceRef
0x6824C8: call    TravelPath_BuildToDestination; Verified top-level TravelPath build sequence: select the destination's smallest containing interior/exterior SubSpace (fallback to supplied cell/worldspace), call TravelPath_BuildRoute with the source reference and positions, then, on success, augment the route with TESRoad surface samples.
0x6824CD: test    al, al
0x6824CF: jnz     short loc_6824D4
0x6824D1: mov     [esi+24h], al
0x6824D4: mov     dword ptr [esi+20h], 2
0x6824DB: mov     ecx, [esp+14h+var_C]
0x6824DF: mov     large fs:0, ecx
0x6824E6: pop     ecx
0x6824E7: pop     esi
0x6824E8: add     esp, 0Ch
0x6824EB: retn    4
0x9AFAD0: mov     eax, [ebp+4]
0x9AFAD3: push    eax
0x9AFAD4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AFAD9: pop     ecx
0x9AFADA: retn
0x9AFADB: mov     edx, [esp+arg_4]
0x9AFADF: lea     eax, [edx-4]
0x9AFAE2: mov     ecx, [edx-8]
0x9AFAE5: xor     ecx, eax
0x9AFAE7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AFAEC: mov     eax, offset stru_ADBFDC
0x9AFAF1: jmp     ___CxxFrameHandler3
