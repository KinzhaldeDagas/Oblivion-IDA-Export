0x54FE70: mov     eax, ds:0B39B80h
0x54FE75: test    eax, eax
0x54FE77: jz      short locret_54FE8D
0x54FE79: cmp     dword ptr [eax+0DACh], 0
0x54FE80: jz      short locret_54FE8D
0x54FE82: mov     ecx, [eax+0DACh]
0x54FE88: jmp     loc_54F9C0
0x54FE8D: retn
0x54F9C0: push    0FFFFFFFFh
0x54F9C2: push    offset loc_9BBBC8
0x54F9C7: mov     eax, large fs:0
0x54F9CD: push    eax
0x54F9CE: sub     esp, 0Ch
0x54F9D1: push    ebx
0x54F9D2: push    esi
0x54F9D3: push    edi
0x54F9D4: mov     eax, ds:0B30AACh
0x54F9D9: xor     eax, esp
0x54F9DB: push    eax; lpCriticalSection
0x54F9DC: lea     eax, [esp+28h+var_C]
0x54F9E0: mov     large fs:0, eax
0x54F9E6: mov     esi, ecx
0x54F9E8: xor     edi, edi
0x54F9EA: mov     [esp+28h+var_18], edi
0x54F9EE: push    offset aBsfacegenmod_0; "BSFaceGenModelMap::UnloadAllEGMAndEGTDa"...
0x54F9F3: mov     ecx, offset unk_B39C80; lpCriticalSection
0x54F9F8: mov     [esp+2Ch+var_4], edi
0x54F9FC: call    NiTryEnterCS
0x54FA01: test    al, al
0x54FA03: jz      loc_54FAD9
0x54FA09: push    offset unk_B39C00; lpCriticalSection
0x54FA0E: call    dword ptr ds:0A2806Ch
0x54FA14: call    dword ptr ds:0A2808Ch
0x54FA1A: add     dword ptr ds:0B39C7Ch, 1
0x54FA21: add     esi, 4
0x54FA24: mov     ds:0B39C78h, eax
0x54FA29: mov     ecx, [esi+4]
0x54FA2C: xor     eax, eax
0x54FA2E: test    ecx, ecx
0x54FA30: jbe     short loc_54FA4A
0x54FA32: mov     ebx, [esi+8]
0x54FA35: mov     edx, ebx
0x54FA37: cmp     dword ptr [edx], 0
0x54FA3A: jnz     loc_54FAEC
0x54FA40: add     eax, 1
0x54FA43: add     edx, 4
0x54FA46: cmp     eax, ecx
0x54FA48: jb      short loc_54FA37
0x54FA4A: xor     eax, eax
0x54FA4C: test    eax, eax
0x54FA4E: mov     [esp+28h+var_14], eax
0x54FA52: jz      short loc_54FA8D
0x54FA54: lea     eax, [esp+28h+var_18]
0x54FA58: push    eax
0x54FA59: lea     ecx, [esp+2Ch+var_10]
0x54FA5D: push    ecx
0x54FA5E: lea     edx, [esp+30h+var_14]
0x54FA62: push    edx
0x54FA63: mov     ecx, esi
0x54FA65: call    sub_7B2600
0x54FA6A: mov     edi, [esp+28h+var_18]
0x54FA6E: test    edi, edi
0x54FA70: jz      short loc_54FA86
0x54FA72: mov     ecx, [edi+8]
0x54FA75: test    ecx, ecx
0x54FA77: jz      short loc_54FA86
0x54FA79: call    sub_559BA0
0x54FA7E: mov     ecx, [edi+8]
0x54FA81: call    sub_559C40
0x54FA86: cmp     [esp+28h+var_14], 0
0x54FA8B: jnz     short loc_54FA54
0x54FA8D: sub     dword ptr ds:0B39C7Ch, 1
0x54FA94: jnz     short loc_54FAA0
0x54FA96: mov     dword ptr ds:0B39C78h, 0
0x54FAA0: push    offset unk_B39C00; lpCriticalSection
0x54FAA5: call    dword ptr ds:0A28074h
0x54FAAB: mov     ecx, offset unk_B39C80; lpCriticalSection
0x54FAB0: call    NiLeaveCriticalSection_0
0x54FAB5: test    edi, edi
0x54FAB7: mov     [esp+28h+var_4], 0FFFFFFFFh
0x54FABF: jz      short loc_54FAD9
0x54FAC1: lea     eax, [edi+4]
0x54FAC4: push    eax; lpAddend
0x54FAC5: call    dword ptr ds:0A2807Ch
0x54FACB: test    eax, eax
0x54FACD: jnz     short loc_54FAD9
0x54FACF: mov     edx, [edi]
0x54FAD1: mov     eax, [edx]
0x54FAD3: push    1
0x54FAD5: mov     ecx, edi
0x54FAD7: call    eax
0x54FAD9: mov     ecx, [esp+28h+var_C]
0x54FADD: mov     large fs:0, ecx
0x54FAE4: pop     ecx
0x54FAE5: pop     edi
0x54FAE6: pop     esi
0x54FAE7: pop     ebx
0x54FAE8: add     esp, 18h
0x54FAEB: retn
0x54FAEC: mov     eax, [ebx+eax*4]
0x54FAEF: jmp     loc_54FA4C
0x9BBBC0: lea     ecx, [ebp-18h]; slot
0x9BBBC3: jmp     NiPointerSlot_Release
0x9BBBC8: mov     edx, [esp+arg_4]
0x9BBBCC: lea     eax, [edx-18h]
0x9BBBCF: mov     ecx, [edx-1Ch]
0x9BBBD2: xor     ecx, eax
0x9BBBD4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BBBD9: mov     eax, offset stru_AE58F8
0x9BBBDE: jmp     ___CxxFrameHandler3
