0x740FA0: push    0FFFFFFFFh; Fog decode: startup plain NiFogProperty default producer using B3FA90/94/98; separate from active BSFogProperty world fog path.
0x740FA2: push    offset SEH_8C8970
0x740FA7: mov     eax, large fs:0
0x740FAD: push    eax
0x740FAE: push    ecx
0x740FAF: push    esi
0x740FB0: push    edi
0x740FB1: mov     eax, ds:0B30AACh
0x740FB6: xor     eax, esp
0x740FB8: push    eax
0x740FB9: lea     eax, [esp+1Ch+var_C]
0x740FBD: mov     large fs:0, eax
0x740FC3: push    2Ch ; ','; Size
0x740FC5: call    FormHeapAlloc; Fog fixed/default decode: startup default producer allocates 0x2C plain NiFogProperty, not BSFogProperty.
0x740FCA: mov     esi, eax
0x740FCC: add     esp, 4
0x740FCF: mov     [esp+1Ch+var_10], esi
0x740FD3: test    esi, esi
0x740FD5: mov     [esp+1Ch+var_4], 0
0x740FDD: jz      short loc_74101E
0x740FDF: mov     ecx, esi; this
0x740FE1: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x740FE6: fldz
0x740FE8: mov     dword ptr [esi], offset ??_7NiFogProperty@@6B@; Fog fixed/default decode: startup default object vtable is NiFogProperty; no +0x2C/+0x30 BSFogProperty fields.
0x740FEE: fst     dword ptr [esi+20h]
0x740FF1: fst     dword ptr [esi+24h]
0x740FF4: fstp    dword ptr [esi+28h]
0x740FF7: fld1
0x740FF9: mov     word ptr [esi+18h], 0; Fog fixed/default decode: plain NiFogProperty flags at +0x18 initialized to 0.
0x740FFF: fstp    dword ptr [esi+1Ch]; Fog fixed/default decode: plain NiFogProperty depth at +0x1C initialized to 1.0.
0x741002: mov     eax, ds:0B3FA90h
0x741007: mov     [esi+20h], eax; Fog decode: default plain NiFogProperty color.r from B3FA90.
0x74100A: mov     ecx, ds:0B3FA94h
0x741010: mov     [esi+24h], ecx; Fog decode: default plain NiFogProperty color.g from B3FA94.
0x741013: mov     edx, ds:0B3FA98h
0x741019: mov     [esi+28h], edx; Fog decode: default plain NiFogProperty color.b from B3FA98.
0x74101C: jmp     short loc_741020
0x74101E: xor     esi, esi
0x741020: mov     eax, ds:0B401FCh
0x741025: cmp     eax, esi
0x741027: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x74102F: jz      short loc_741067
0x741031: test    eax, eax
0x741033: jz      short loc_741053
0x741035: mov     edi, eax
0x741037: add     eax, 4
0x74103A: push    eax; lpAddend
0x74103B: call    dword ptr ds:0A2807Ch
0x741041: test    eax, eax
0x741043: jnz     short loc_741053
0x741045: test    edi, edi
0x741047: jz      short loc_741053
0x741049: mov     eax, [edi]
0x74104B: mov     edx, [eax]
0x74104D: push    1
0x74104F: mov     ecx, edi
0x741051: call    edx
0x741053: test    esi, esi
0x741055: mov     ds:0B401FCh, esi; Fog decode: installs default plain NiFogProperty global B401FC; not the active B333E4 BSFogProperty used by world shader fog.
0x74105B: jz      short loc_741067
0x74105D: add     esi, 4
0x741060: push    esi; lpAddend
0x741061: call    dword ptr ds:0A28078h
0x741067: mov     ecx, dword ptr [esp+1Ch+var_C]
0x74106B: mov     large fs:0, ecx
0x741072: pop     ecx
0x741073: pop     edi
0x741074: pop     esi
0x741075: add     esp, 10h
0x741078: retn
0x9CA7E0: mov     eax, [ebp-10h]
0x9CA7E3: push    eax
0x9CA7E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA7E9: pop     ecx
0x9CA7EA: retn
0x9CA7EB: mov     edx, [esp+arg_4]
0x9CA7EF: lea     eax, [edx-0Ch]
0x9CA7F2: mov     ecx, [edx-10h]
0x9CA7F5: xor     ecx, eax
0x9CA7F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA7FC: mov     eax, offset stru_AF2E8C
0x9CA801: jmp     ___CxxFrameHandler3
