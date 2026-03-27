0x5D6960: push    0FFFFFFFFh
0x5D6962: push    offset ??1SaveMenu@@UAE@XZ_SEH
0x5D6967: mov     eax, large fs:0
0x5D696D: push    eax
0x5D696E: push    ecx
0x5D696F: push    esi
0x5D6970: mov     eax, ds:0B30AACh
0x5D6975: xor     eax, esp
0x5D6977: push    eax
0x5D6978: lea     eax, [esp+18h+var_C]
0x5D697C: mov     large fs:0, eax
0x5D6982: mov     esi, ecx
0x5D6984: mov     [esp+18h+var_10], esi
0x5D6988: mov     dword ptr [esi], offset ??_7SleepWaitMenu@@6B@; const SleepWaitMenu::`vftable'
0x5D698E: mov     ecx, ds:0B33B00h
0x5D6994: mov     [esp+18h+var_4], 0
0x5D699C: call    sub_45A500
0x5D69A1: test    al, al
0x5D69A3: jnz     short loc_5D69D1
0x5D69A5: cmp     ds:0B3B72Ch, al
0x5D69AB: jz      short loc_5D69B7
0x5D69AD: mov     ecx, offset ActorProcessManager_ptr
0x5D69B2: call    sub_679A70
0x5D69B7: mov     eax, ds:0B33A1Ch
0x5D69BC: mov     ecx, [eax+8]
0x5D69BF: mov     edx, [ecx]
0x5D69C1: mov     eax, [edx+38h]
0x5D69C4: call    eax
0x5D69C6: test    eax, eax
0x5D69C8: jz      short loc_5D69D1
0x5D69CA: mov     byte ptr ds:0B3B72Ah, 1
0x5D69D1: mov     ecx, ds:0B3A6B0h
0x5D69D7: push    0
0x5D69D9: push    1
0x5D69DB: call    sub_572EC0
0x5D69E0: mov     ecx, esi; this
0x5D69E2: mov     byte ptr ds:0B3B72Bh, 0
0x5D69E9: mov     byte ptr ds:0B3B72Ch, 0
0x5D69F0: mov     [esp+18h+var_4], 0FFFFFFFFh
0x5D69F8: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x5D69FD: mov     ecx, [esp+18h+var_C]
0x5D6A01: mov     large fs:0, ecx
0x5D6A08: pop     ecx
0x5D6A09: pop     esi
0x5D6A0A: add     esp, 10h
0x5D6A0D: retn
