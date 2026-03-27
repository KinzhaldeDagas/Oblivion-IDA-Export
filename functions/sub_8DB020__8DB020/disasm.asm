0x8DB020: push    ebx
0x8DB021: mov     ebx, [esp+4+arg_4]
0x8DB025: push    esi
0x8DB026: mov     esi, ecx
0x8DB028: mov     eax, [esi+1C08h]
0x8DB02E: xor     edx, edx
0x8DB030: test    eax, eax
0x8DB032: push    edi
0x8DB033: mov     edi, [esp+0Ch+arg_0]
0x8DB037: jle     short loc_8DB09D
0x8DB039: push    ebp
0x8DB03A: lea     ebx, [ebx+0]
0x8DB040: mov     eax, [esi+1C04h]
0x8DB046: mov     ecx, [eax+edx*8]
0x8DB049: cmp     ecx, edi
0x8DB04B: lea     eax, [eax+edx*8]
0x8DB04E: jnz     short loc_8DB091
0x8DB050: cmp     [eax+4], ebx
0x8DB053: jnz     short loc_8DB091
0x8DB055: mov     eax, [esi+1C08h]
0x8DB05B: dec     eax
0x8DB05C: cmp     edx, eax
0x8DB05E: mov     [esi+1C08h], eax
0x8DB064: mov     ecx, edx
0x8DB066: jge     short loc_8DB090
0x8DB068: jmp     short loc_8DB070
0x8DB06A: align 10h
0x8DB070: mov     eax, [esi+1C04h]
0x8DB076: mov     ebp, [eax+ecx*8+8]
0x8DB07A: lea     eax, [eax+ecx*8]
0x8DB07D: mov     [eax], ebp
0x8DB07F: mov     ebp, [eax+0Ch]
0x8DB082: mov     [eax+4], ebp
0x8DB085: mov     eax, [esi+1C08h]
0x8DB08B: inc     ecx
0x8DB08C: cmp     ecx, eax
0x8DB08E: jl      short loc_8DB070
0x8DB090: dec     edx
0x8DB091: mov     eax, [esi+1C08h]
0x8DB097: inc     edx
0x8DB098: cmp     edx, eax
0x8DB09A: jl      short loc_8DB040
0x8DB09C: pop     ebp
0x8DB09D: push    0
0x8DB09F: push    ebx
0x8DB0A0: push    edi
0x8DB0A1: mov     ecx, esi
0x8DB0A3: call    sub_8DA800
0x8DB0A8: mov     ecx, [esi+1C0Ch]
0x8DB0AE: mov     eax, [esi+1C08h]
0x8DB0B4: add     esi, 1C04h
0x8DB0BA: and     ecx, 3FFFFFFFh
0x8DB0C0: cmp     eax, ecx
0x8DB0C2: jnz     short loc_8DB0CF
0x8DB0C4: push    8
0x8DB0C6: push    esi
0x8DB0C7: call    sub_8A6EE0
0x8DB0CC: add     esp, 8
0x8DB0CF: mov     eax, [esi+4]
0x8DB0D2: mov     edx, [esi]
0x8DB0D4: lea     ecx, [edx+eax*8]
0x8DB0D7: inc     eax
0x8DB0D8: mov     [esi+4], eax
0x8DB0DB: mov     [ecx], edi
0x8DB0DD: pop     edi
0x8DB0DE: pop     esi
0x8DB0DF: mov     [ecx+4], ebx
0x8DB0E2: pop     ebx
0x8DB0E3: retn    8
