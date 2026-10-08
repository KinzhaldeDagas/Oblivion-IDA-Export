0x54FE90: mov     eax, ds:0B39B80h
0x54FE95: test    eax, eax
0x54FE97: jz      short locret_54FEAD
0x54FE99: cmp     dword ptr [eax+0DACh], 0
0x54FEA0: jz      short locret_54FEAD
0x54FEA2: mov     ecx, [eax+0DACh]
0x54FEA8: jmp     loc_54FB00
0x54FEAD: retn
0x54FB00: push    0FFFFFFFFh
0x54FB02: push    offset loc_9BBBC8
0x54FB07: mov     eax, large fs:0
0x54FB0D: push    eax
0x54FB0E: sub     esp, 0Ch
0x54FB11: push    ebx
0x54FB12: push    esi
0x54FB13: push    edi
0x54FB14: mov     eax, ds:0B30AACh
0x54FB19: xor     eax, esp
0x54FB1B: push    eax; lpCriticalSection
0x54FB1C: lea     eax, [esp+28h+var_C]
0x54FB20: mov     large fs:0, eax
0x54FB26: mov     esi, ecx
0x54FB28: xor     edi, edi
0x54FB2A: mov     [esp+28h+var_18], edi
0x54FB2E: push    offset aBsfacegenmod_0; "BSFaceGenModelMap::UnloadAllEGMAndEGTDa"...
0x54FB33: mov     ecx, offset unk_B39C80; lpCriticalSection
0x54FB38: mov     [esp+2Ch+var_4], edi
0x54FB3C: call    NiTryEnterCS
0x54FB41: test    al, al
0x54FB43: jz      loc_54FC11
0x54FB49: push    offset unk_B39C00; lpCriticalSection
0x54FB4E: call    dword ptr ds:0A2806Ch
0x54FB54: call    dword ptr ds:0A2808Ch
0x54FB5A: add     dword ptr ds:0B39C7Ch, 1
0x54FB61: add     esi, 4
0x54FB64: mov     ds:0B39C78h, eax
0x54FB69: mov     ecx, [esi+4]
0x54FB6C: xor     eax, eax
0x54FB6E: test    ecx, ecx
0x54FB70: jbe     short loc_54FB8A
0x54FB72: mov     ebx, [esi+8]
0x54FB75: mov     edx, ebx
0x54FB77: cmp     dword ptr [edx], 0
0x54FB7A: jnz     loc_54FC24
0x54FB80: add     eax, 1
0x54FB83: add     edx, 4
0x54FB86: cmp     eax, ecx
0x54FB88: jb      short loc_54FB77
0x54FB8A: xor     eax, eax
0x54FB8C: test    eax, eax
0x54FB8E: mov     [esp+28h+var_14], eax
0x54FB92: jz      short loc_54FBC5
0x54FB94: lea     eax, [esp+28h+var_18]
0x54FB98: push    eax
0x54FB99: lea     ecx, [esp+2Ch+var_10]
0x54FB9D: push    ecx
0x54FB9E: lea     edx, [esp+30h+var_14]
0x54FBA2: push    edx
0x54FBA3: mov     ecx, esi
0x54FBA5: call    sub_7B2600
0x54FBAA: mov     edi, [esp+28h+var_18]
0x54FBAE: test    edi, edi
0x54FBB0: jz      short loc_54FBBE
0x54FBB2: mov     ecx, [edi+8]
0x54FBB5: test    ecx, ecx
0x54FBB7: jz      short loc_54FBBE
0x54FBB9: call    sub_559F10
0x54FBBE: cmp     [esp+28h+var_14], 0
0x54FBC3: jnz     short loc_54FB94
0x54FBC5: sub     dword ptr ds:0B39C7Ch, 1
0x54FBCC: jnz     short loc_54FBD8
0x54FBCE: mov     dword ptr ds:0B39C78h, 0
0x54FBD8: push    offset unk_B39C00; lpCriticalSection
0x54FBDD: call    dword ptr ds:0A28074h
0x54FBE3: mov     ecx, offset unk_B39C80; lpCriticalSection
0x54FBE8: call    NiLeaveCriticalSection_0
0x54FBED: test    edi, edi
0x54FBEF: mov     [esp+28h+var_4], 0FFFFFFFFh
0x54FBF7: jz      short loc_54FC11
0x54FBF9: lea     eax, [edi+4]
0x54FBFC: push    eax; lpAddend
0x54FBFD: call    dword ptr ds:0A2807Ch
0x54FC03: test    eax, eax
0x54FC05: jnz     short loc_54FC11
0x54FC07: mov     edx, [edi]
0x54FC09: mov     eax, [edx]
0x54FC0B: push    1
0x54FC0D: mov     ecx, edi
0x54FC0F: call    eax
0x54FC11: mov     ecx, [esp+28h+var_C]
0x54FC15: mov     large fs:0, ecx
0x54FC1C: pop     ecx
0x54FC1D: pop     edi
0x54FC1E: pop     esi
0x54FC1F: pop     ebx
0x54FC20: add     esp, 18h
0x54FC23: retn
0x54FC24: mov     eax, [ebx+eax*4]
0x54FC27: jmp     loc_54FB8C
0x9BBBC0: lea     ecx, [ebp-18h]; slot
0x9BBBC3: jmp     NiPointerSlot_Release
0x9BBBC8: mov     edx, [esp+arg_4]
0x9BBBCC: lea     eax, [edx-18h]
0x9BBBCF: mov     ecx, [edx-1Ch]
0x9BBBD2: xor     ecx, eax
0x9BBBD4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BBBD9: mov     eax, offset stru_AE58F8
0x9BBBDE: jmp     ___CxxFrameHandler3
