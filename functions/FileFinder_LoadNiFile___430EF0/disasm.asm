0x430EF0: push    0FFFFFFFFh
0x430EF2: push    offset FileFinder_LoadNiFile??_SEH
0x430EF7: mov     eax, large fs:0
0x430EFD: push    eax
0x430EFE: sub     esp, 314h
0x430F04: mov     eax, ___security_cookie
0x430F09: xor     eax, esp
0x430F0B: mov     [esp+320h+var_10], eax
0x430F12: push    ebx
0x430F13: push    esi
0x430F14: push    edi
0x430F15: mov     eax, ___security_cookie
0x430F1A: xor     eax, esp
0x430F1C: push    eax
0x430F1D: lea     eax, [esp+330h+var_C]
0x430F24: mov     large fs:0, eax
0x430F2A: mov     ecx, OBSE_g_FileFinder
0x430F30: mov     esi, [esp+330h+arg_0]
0x430F37: xor     edi, edi
0x430F39: cmp     ecx, edi
0x430F3B: jz      loc_430FF1
0x430F41: mov     ebx, [esp+330h+arg_4]
0x430F48: cmp     ebx, 1
0x430F4B: jnz     short loc_430F81
0x430F4D: push    154h; Size
0x430F52: call    FormHeapAlloc
0x430F57: add     esp, 4
0x430F5A: mov     [esp+330h+var_320], eax
0x430F5E: cmp     eax, edi
0x430F60: mov     [esp+330h+var_4], edi
0x430F67: jz      short loc_430F7D
0x430F69: mov     ecx, [esp+330h+arg_8]
0x430F70: push    edi
0x430F71: push    ecx
0x430F72: push    ebx
0x430F73: push    esi
0x430F74: mov     ecx, eax
0x430F76: call    BSFile_constr
0x430F7B: jmp     short loc_430FF3
0x430F7D: xor     eax, eax
0x430F7F: jmp     short loc_430FF3
0x430F81: mov     edx, [ecx]
0x430F83: mov     edx, [edx+4]
0x430F86: push    0FFFFFFFFh
0x430F88: push    edi
0x430F89: lea     eax, [esp+338h+Str1]
0x430F8D: push    eax
0x430F8E: push    esi
0x430F8F: call    edx
0x430F91: cmp     eax, edi
0x430F93: jz      short loc_430FF1
0x430F95: cmp     eax, 2
0x430F98: jnz     short loc_430FB9
0x430F9A: mov     eax, [esp+330h+arg_C]
0x430FA1: mov     ecx, [esp+330h+arg_8]
0x430FA8: push    eax; int
0x430FA9: push    ecx; int
0x430FAA: lea     edx, [esp+338h+Str1]
0x430FAE: push    edx; Str1
0x430FAF: call    ArchiveManager_FindFileInBSA
0x430FB4: add     esp, 0Ch
0x430FB7: jmp     short loc_430FF3
0x430FB9: push    154h; Size
0x430FBE: call    FormHeapAlloc
0x430FC3: add     esp, 4
0x430FC6: mov     [esp+330h+var_320], eax
0x430FCA: cmp     eax, edi
0x430FCC: mov     [esp+330h+var_4], 1
0x430FD7: jz      short loc_430F7D
0x430FD9: mov     ecx, [esp+330h+arg_8]
0x430FE0: push    edi
0x430FE1: push    ecx
0x430FE2: push    ebx
0x430FE3: lea     edx, [esp+33Ch+Str1]
0x430FE7: push    edx
0x430FE8: mov     ecx, eax
0x430FEA: call    BSFile_constr
0x430FEF: jmp     short loc_430FF3
0x430FF1: mov     eax, edi
0x430FF3: mov     ecx, [esp+330h+var_C]
0x430FFA: mov     large fs:0, ecx
0x431001: pop     ecx
0x431002: pop     edi
0x431003: pop     esi
0x431004: pop     ebx
0x431005: mov     ecx, [esp+320h+var_10]
0x43100C: xor     ecx, esp
0x43100E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x431013: add     esp, 320h
0x431019: retn
