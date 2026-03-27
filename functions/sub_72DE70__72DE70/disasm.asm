0x72DE70: sub     esp, 14h
0x72DE73: push    ebx
0x72DE74: push    ebp
0x72DE75: push    esi
0x72DE76: mov     esi, [esp+20h+arg_4]
0x72DE7A: push    edi
0x72DE7B: jmp     short loc_72DE80
0x72DE7D: align 10h
0x72DE80: xor     eax, eax
0x72DE82: cmp     [esi+8], eax
0x72DE85: mov     [esp+24h+var_14], 0FFFFFFFFh
0x72DE8D: mov     [esp+24h+arg_4], eax
0x72DE91: ja      short loc_72DEA4
0x72DE93: pop     edi
0x72DE94: pop     esi
0x72DE95: pop     ebp
0x72DE96: pop     ebx
0x72DE97: add     esp, 14h
0x72DE9A: retn    8
0x72DE9D: align 10h
0x72DEA0: mov     eax, [esp+24h+arg_4]
0x72DEA4: mov     ecx, [esi]
0x72DEA6: mov     ebx, [ecx+eax*4]
0x72DEA9: lea     edi, [eax+1]
0x72DEAC: cmp     edi, [esi+8]
0x72DEAF: mov     [esp+24h+var_C], edi
0x72DEB3: jnb     short loc_72DEFD
0x72DEB5: movzx   edx, [esp+24h+arg_0]
0x72DEBA: mov     [esp+24h+var_10], edx
0x72DEBE: mov     edi, edi
0x72DEC0: mov     eax, [esi]
0x72DEC2: mov     ebp, [eax+edi*4]
0x72DEC5: push    ebp
0x72DEC6: mov     ecx, ebx
0x72DEC8: call    sub_72D2B0
0x72DECD: cmp     eax, [esp+24h+var_10]
0x72DED1: ja      short loc_72DEF1
0x72DED3: mov     ecx, [ebp+8]
0x72DED6: add     ecx, [ebx+8]
0x72DED9: sub     ecx, eax
0x72DEDB: cmp     ecx, [esp+24h+var_14]
0x72DEDF: jle     short loc_72DEF1
0x72DEE1: mov     edx, [esp+24h+arg_4]
0x72DEE5: mov     [esp+24h+var_8], edx
0x72DEE9: mov     [esp+24h+var_4], edi
0x72DEED: mov     [esp+24h+var_14], ecx
0x72DEF1: add     edi, 1
0x72DEF4: cmp     edi, [esi+8]
0x72DEF7: jb      short loc_72DEC0
0x72DEF9: mov     edi, [esp+24h+var_C]
0x72DEFD: cmp     edi, [esi+8]
0x72DF00: mov     [esp+24h+arg_4], edi
0x72DF04: jb      short loc_72DEA0
0x72DF06: cmp     [esp+24h+var_14], 0
0x72DF0B: jl      short loc_72DE93
0x72DF0D: mov     eax, [esi]
0x72DF0F: mov     edi, [esp+24h+var_4]
0x72DF13: mov     ecx, [eax+edi*4]
0x72DF16: mov     ebx, [esp+24h+var_8]
0x72DF1A: push    ecx
0x72DF1B: mov     ecx, [eax+ebx*4]
0x72DF1E: call    sub_72D330
0x72DF23: mov     edx, [esi]
0x72DF25: mov     ebp, [edx+edi*4]
0x72DF28: test    ebp, ebp
0x72DF2A: jz      short loc_72DF3E
0x72DF2C: mov     eax, [ebp+0]
0x72DF2F: push    eax
0x72DF30: call    FormHeapFree
0x72DF35: push    ebp
0x72DF36: call    FormHeapFree
0x72DF3B: add     esp, 8
0x72DF3E: add     dword ptr [esi+8], 0FFFFFFFFh
0x72DF42: mov     ecx, [esi+8]
0x72DF45: mov     eax, [esi]
0x72DF47: mov     ecx, [eax+ecx*4]
0x72DF4A: mov     [eax+edi*4], ecx
0x72DF4D: mov     edx, [esi]
0x72DF4F: mov     ebp, [edx+ebx*4]
0x72DF52: xor     edi, edi
0x72DF54: cmp     [esi+8], edi
0x72DF57: jbe     loc_72DE80
0x72DF5D: lea     ecx, [ecx+0]
0x72DF60: mov     eax, [esi]
0x72DF62: mov     ebx, [eax+edi*4]
0x72DF65: cmp     ebx, ebp
0x72DF67: jz      short loc_72DF9B
0x72DF69: push    ebx
0x72DF6A: mov     ecx, ebp
0x72DF6C: call    sub_72CDF0
0x72DF71: test    al, al
0x72DF73: jz      short loc_72DF9B
0x72DF75: test    ebx, ebx
0x72DF77: jz      short loc_72DF8A
0x72DF79: mov     ecx, [ebx]
0x72DF7B: push    ecx
0x72DF7C: call    FormHeapFree
0x72DF81: push    ebx
0x72DF82: call    FormHeapFree
0x72DF87: add     esp, 8
0x72DF8A: add     dword ptr [esi+8], 0FFFFFFFFh
0x72DF8E: mov     ecx, [esi+8]
0x72DF91: mov     eax, [esi]
0x72DF93: mov     edx, [eax+ecx*4]
0x72DF96: mov     [eax+edi*4], edx
0x72DF99: jmp     short loc_72DF9E
0x72DF9B: add     edi, 1
0x72DF9E: cmp     edi, [esi+8]
0x72DFA1: jb      short loc_72DF60
0x72DFA3: jmp     loc_72DE80
