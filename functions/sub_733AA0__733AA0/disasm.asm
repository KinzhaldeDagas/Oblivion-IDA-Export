0x733AA0: push    0FFFFFFFFh
0x733AA2: push    offset SEH_70B000
0x733AA7: mov     eax, large fs:0
0x733AAD: push    eax
0x733AAE: push    ecx
0x733AAF: push    ebx
0x733AB0: push    esi
0x733AB1: push    edi
0x733AB2: mov     eax, ds:0B30AACh
0x733AB7: xor     eax, esp
0x733AB9: push    eax
0x733ABA: lea     eax, [esp+20h+var_C]
0x733ABE: mov     large fs:0, eax
0x733AC4: mov     eax, [ecx]
0x733AC6: mov     edx, [esp+20h+arg_0]
0x733ACA: mov     eax, [eax+8]
0x733ACD: push    0
0x733ACF: push    edx
0x733AD0: call    eax
0x733AD2: mov     ebx, eax
0x733AD4: test    ebx, ebx
0x733AD6: jz      short loc_733AE2
0x733AD8: lea     ecx, [ebx+4]
0x733ADB: push    ecx; lpAddend
0x733ADC: call    dword ptr ds:0A28078h
0x733AE2: test    ebx, ebx
0x733AE4: jz      short loc_733B59
0x733AE6: mov     edx, [ebx+54h]
0x733AE9: mov     eax, [edx]
0x733AEB: mov     ecx, [esp+20h+arg_4]
0x733AEF: mov     edi, [esp+20h+arg_C]
0x733AF3: mov     [ecx], eax
0x733AF5: mov     edx, [ebx+58h]
0x733AF8: mov     eax, [edx]
0x733AFA: mov     ecx, [esp+20h+arg_8]
0x733AFE: mov     [ecx], eax
0x733B00: lea     esi, [ebx+8]
0x733B03: mov     ecx, 11h
0x733B08: rep movsd
0x733B0A: mov     eax, [ebx+60h]
0x733B0D: cmp     eax, 1
0x733B10: mov     eax, [esp+20h+arg_10]
0x733B14: setnbe  dl
0x733B17: mov     [eax], dl
0x733B19: mov     ecx, [ebx+6Ch]
0x733B1C: mov     edx, [esp+20h+arg_14]
0x733B20: lea     eax, [ebx+4]
0x733B23: push    eax; lpAddend
0x733B24: mov     [edx], ecx
0x733B26: mov     [esp+24h+var_4], 0FFFFFFFFh
0x733B2E: call    dword ptr ds:0A2807Ch
0x733B34: test    eax, eax
0x733B36: jnz     short loc_733B42
0x733B38: mov     edx, [ebx]
0x733B3A: mov     eax, [edx]
0x733B3C: push    1
0x733B3E: mov     ecx, ebx
0x733B40: call    eax
0x733B42: mov     al, 1
0x733B44: mov     ecx, [esp+20h+var_C]
0x733B48: mov     large fs:0, ecx
0x733B4F: pop     ecx
0x733B50: pop     edi
0x733B51: pop     esi
0x733B52: pop     ebx
0x733B53: add     esp, 10h
0x733B56: retn    18h
0x733B59: xor     al, al
0x733B5B: mov     ecx, [esp+20h+var_C]
0x733B5F: mov     large fs:0, ecx
0x733B66: pop     ecx
0x733B67: pop     edi
0x733B68: pop     esi
0x733B69: pop     ebx
0x733B6A: add     esp, 10h
0x733B6D: retn    18h
