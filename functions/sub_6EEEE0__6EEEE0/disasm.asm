0x6EEEE0: push    0FFFFFFFFh
0x6EEEE2: push    offset SEH_6EEEE0
0x6EEEE7: mov     eax, large fs:0
0x6EEEED: push    eax
0x6EEEEE: sub     esp, 8
0x6EEEF1: push    ebx
0x6EEEF2: push    ebp
0x6EEEF3: push    esi
0x6EEEF4: push    edi
0x6EEEF5: mov     eax, ds:0B30AACh
0x6EEEFA: xor     eax, esp
0x6EEEFC: push    eax
0x6EEEFD: lea     eax, [esp+28h+var_C]
0x6EEF01: mov     large fs:0, eax
0x6EEF07: mov     esi, ecx
0x6EEF09: mov     ecx, [esi+4]
0x6EEF0C: xor     edi, edi
0x6EEF0E: cmp     ecx, edi
0x6EEF10: mov     [esp+28h+var_4], edi
0x6EEF14: jnz     short loc_6EEF1A
0x6EEF16: xor     eax, eax
0x6EEF18: jmp     short loc_6EEF30
0x6EEF1A: mov     edx, [esi+8]
0x6EEF1D: sub     edx, ecx
0x6EEF1F: mov     eax, 4EC4EC4Fh
0x6EEF24: imul    edx
0x6EEF26: sar     edx, 4
0x6EEF29: mov     eax, edx
0x6EEF2B: shr     eax, 1Fh
0x6EEF2E: add     eax, edx
0x6EEF30: mov     ebp, [esp+28h+arg_0]
0x6EEF34: cmp     eax, ebp
0x6EEF36: jnb     short loc_6EEF71
0x6EEF38: cmp     ecx, edi
0x6EEF3A: jz      short loc_6EEF52
0x6EEF3C: mov     edx, [esi+8]
0x6EEF3F: sub     edx, ecx
0x6EEF41: mov     eax, 4EC4EC4Fh
0x6EEF46: imul    edx
0x6EEF48: sar     edx, 4
0x6EEF4B: mov     edi, edx
0x6EEF4D: shr     edi, 1Fh
0x6EEF50: add     edi, edx
0x6EEF52: mov     ebx, [esi+8]
0x6EEF55: cmp     ecx, ebx
0x6EEF57: jbe     short loc_6EEF5E
0x6EEF59: call    __invalid_parameter_noinfo
0x6EEF5E: lea     eax, [esp+28h+arg_4]
0x6EEF62: push    eax
0x6EEF63: sub     ebp, edi
0x6EEF65: push    ebp
0x6EEF66: push    ebx
0x6EEF67: push    esi
0x6EEF68: mov     ecx, esi
0x6EEF6A: call    sub_6EEBC0
0x6EEF6F: jmp     short loc_6EEFCF
0x6EEF71: cmp     ecx, edi
0x6EEF73: jz      short loc_6EEFCF
0x6EEF75: mov     edi, [esi+8]
0x6EEF78: mov     edx, edi
0x6EEF7A: sub     edx, ecx
0x6EEF7C: mov     eax, 4EC4EC4Fh
0x6EEF81: imul    edx
0x6EEF83: sar     edx, 4
0x6EEF86: mov     eax, edx
0x6EEF88: shr     eax, 1Fh
0x6EEF8B: add     eax, edx
0x6EEF8D: cmp     ebp, eax
0x6EEF8F: jnb     short loc_6EEFCF
0x6EEF91: cmp     ecx, edi
0x6EEF93: jbe     short loc_6EEF9A
0x6EEF95: call    __invalid_parameter_noinfo
0x6EEF9A: mov     ebx, [esi+4]
0x6EEF9D: cmp     ebx, [esi+8]
0x6EEFA0: jbe     short loc_6EEFA7
0x6EEFA2: call    __invalid_parameter_noinfo
0x6EEFA7: imul    ebp, 34h ; '4'
0x6EEFAA: add     ebp, ebx
0x6EEFAC: cmp     ebp, [esi+8]
0x6EEFAF: mov     [esp+28h+var_10], ebx
0x6EEFB3: ja      short loc_6EEFBA
0x6EEFB5: cmp     ebp, [esi+4]
0x6EEFB8: jnb     short loc_6EEFBF
0x6EEFBA: call    __invalid_parameter_noinfo
0x6EEFBF: push    edi
0x6EEFC0: push    esi
0x6EEFC1: push    ebp
0x6EEFC2: push    esi
0x6EEFC3: lea     ecx, [esp+38h+var_14]
0x6EEFC7: push    ecx
0x6EEFC8: mov     ecx, esi
0x6EEFCA: call    sub_6EEA10
0x6EEFCF: cmp     [esp+28h+arg_34], 10h
0x6EEFD4: jb      short loc_6EEFE3
0x6EEFD6: mov     edx, [esp+28h+arg_20]
0x6EEFDA: push    edx
0x6EEFDB: call    FormHeapFree
0x6EEFE0: add     esp, 4
0x6EEFE3: mov     eax, [esp+28h+arg_10]
0x6EEFE7: test    eax, eax
0x6EEFE9: mov     [esp+28h+arg_34], 0Fh
0x6EEFF1: mov     [esp+28h+arg_30], 0
0x6EEFF9: mov     byte ptr [esp+28h+arg_20], 0
0x6EEFFE: jz      short loc_6EF009
0x6EF000: push    eax
0x6EF001: call    FormHeapFree
0x6EF006: add     esp, 4
0x6EF009: mov     ecx, [esp+28h+var_C]
0x6EF00D: mov     large fs:0, ecx
0x6EF014: pop     ecx
0x6EF015: pop     edi
0x6EF016: pop     esi
0x6EF017: pop     ebp
0x6EF018: pop     ebx
0x6EF019: add     esp, 14h
0x6EF01C: retn    38h ; '8'
