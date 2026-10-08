0x587A50: push    0FFFFFFFFh
0x587A52: push    offset ??1SaveMenu@@UAE@XZ_SEH
0x587A57: mov     eax, large fs:0
0x587A5D: push    eax
0x587A5E: push    ecx
0x587A5F: push    esi
0x587A60: mov     eax, ds:0B30AACh
0x587A65: xor     eax, esp
0x587A67: push    eax
0x587A68: lea     eax, [esp+18h+var_C]
0x587A6C: mov     large fs:0, eax
0x587A72: mov     esi, ecx
0x587A74: mov     [esp+18h+var_10], esi
0x587A78: mov     dword ptr [esi], offset ??_7TextEditMenu@@6B@; const TextEditMenu::`vftable'
0x587A7E: lea     ecx, [esi+34h]
0x587A81: mov     [esp+18h+var_4], 0
0x587A89: call    sub_57FEB0
0x587A8E: mov     ecx, esi; this
0x587A90: mov     [esp+18h+var_4], 0FFFFFFFFh
0x587A98: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x587A9D: mov     ecx, [esp+18h+var_C]
0x587AA1: mov     large fs:0, ecx
0x587AA8: pop     ecx
0x587AA9: pop     esi
0x587AAA: add     esp, 10h
0x587AAD: retn
0x9C0380: mov     ecx, [ebp-10h]; this
0x9C0383: jmp     ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x9C0388: mov     edx, [esp+arg_4]
0x9C038C: lea     eax, [edx-8]
0x9C038F: mov     ecx, [edx-0Ch]
0x9C0392: xor     ecx, eax
0x9C0394: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C0399: mov     eax, offset stru_AE9668
0x9C039E: jmp     ___CxxFrameHandler3
