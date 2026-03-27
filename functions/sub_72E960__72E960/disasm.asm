0x72E960: push    0FFFFFFFFh
0x72E962: push    offset SEH_72E960
0x72E967: mov     eax, large fs:0
0x72E96D: push    eax
0x72E96E: sub     esp, 28h
0x72E971: mov     eax, ds:0B30AACh
0x72E976: xor     eax, esp
0x72E978: mov     [esp+34h+var_10], eax
0x72E97C: push    ebx
0x72E97D: push    ebp
0x72E97E: push    esi
0x72E97F: push    edi
0x72E980: mov     eax, ds:0B30AACh
0x72E985: xor     eax, esp
0x72E987: push    eax
0x72E988: lea     eax, [esp+48h+var_C]
0x72E98C: mov     large fs:0, eax
0x72E992: mov     eax, [esp+48h+arg_8]
0x72E996: mov     esi, [esp+48h+arg_0]
0x72E99A: mov     [esp+48h+var_24], eax
0x72E99E: movzx   eax, word ptr [esi+40h]
0x72E9A2: movzx   ecx, ax
0x72E9A5: xor     eax, eax
0x72E9A7: test    ecx, ecx
0x72E9A9: mov     [esp+48h+var_28], esi
0x72E9AD: mov     [esp+48h+var_1C], ecx
0x72E9B1: mov     [esp+48h+var_30], eax
0x72E9B5: jbe     loc_72EB7D
0x72E9BB: mov     edx, [esi]
0x72E9BD: mov     edx, [edx+60h]
0x72E9C0: lea     ecx, [esp+48h+var_14]
0x72E9C4: push    ecx
0x72E9C5: lea     ecx, [esp+4Ch+var_16]
0x72E9C9: push    ecx
0x72E9CA: lea     ecx, [esp+50h+var_18]
0x72E9CE: push    ecx
0x72E9CF: push    eax
0x72E9D0: mov     ecx, esi
0x72E9D2: call    edx
0x72E9D4: mov     cx, word ptr [esp+48h+var_18]
0x72E9D9: mov     ax, word ptr [esp+48h+var_16]
0x72E9DE: cmp     cx, ax
0x72E9E1: jz      loc_72EB68
0x72E9E7: mov     dx, word ptr [esp+48h+var_14]
0x72E9EC: cmp     ax, dx
0x72E9EF: jz      loc_72EB68
0x72E9F5: cmp     dx, cx
0x72E9F8: jz      loc_72EB68
0x72E9FE: push    0Ch; Size
0x72EA00: call    FormHeapAlloc
0x72EA05: add     esp, 4
0x72EA08: xor     ecx, ecx
0x72EA0A: cmp     eax, ecx
0x72EA0C: jz      short loc_72EA1A
0x72EA0E: mov     [eax], ecx
0x72EA10: mov     [eax+4], ecx
0x72EA13: mov     [eax+8], ecx
0x72EA16: mov     esi, eax
0x72EA18: jmp     short loc_72EA1C
0x72EA1A: xor     esi, esi
0x72EA1C: mov     [esp+48h+var_4], 0FFFFFFFFh
0x72EA24: mov     [esp+48h+var_2C], ecx
0x72EA28: movzx   eax, word ptr [esp+ecx*2+48h+var_18]
0x72EA2D: mov     edx, [esp+48h+arg_4]
0x72EA31: lea     eax, [eax+eax*2]
0x72EA34: lea     ebp, [edx+eax*4]
0x72EA37: mov     eax, [ebp+8]
0x72EA3A: xor     ebx, ebx
0x72EA3C: test    eax, eax
0x72EA3E: mov     [esp+48h+var_20], eax
0x72EA42: jbe     short loc_72EAA2
0x72EA44: mov     eax, [ebp+0]
0x72EA47: movzx   edi, word ptr [eax+ebx*8]
0x72EA4B: mov     edx, [esi+8]
0x72EA4E: xor     eax, eax
0x72EA50: test    edx, edx
0x72EA52: jbe     short loc_72EA6C
0x72EA54: mov     ecx, [esi]
0x72EA56: cmp     [ecx], di
0x72EA59: jz      short loc_72EA67
0x72EA5B: add     eax, 1
0x72EA5E: add     ecx, 2
0x72EA61: cmp     eax, edx
0x72EA63: jb      short loc_72EA56
0x72EA65: jmp     short loc_72EA6C
0x72EA67: cmp     eax, 0FFFFFFFFh
0x72EA6A: jnz     short loc_72EA95
0x72EA6C: mov     eax, [esi+4]
0x72EA6F: cmp     edx, eax
0x72EA71: jnz     short loc_72EA88
0x72EA73: test    eax, eax
0x72EA75: jbe     short loc_72EA7B
0x72EA77: add     eax, eax
0x72EA79: jmp     short loc_72EA80
0x72EA7B: mov     eax, 1
0x72EA80: push    eax
0x72EA81: mov     ecx, esi
0x72EA83: call    sub_72CCC0
0x72EA88: mov     ecx, [esi+8]
0x72EA8B: mov     edx, [esi]
0x72EA8D: mov     [edx+ecx*2], di
0x72EA91: add     dword ptr [esi+8], 1
0x72EA95: add     ebx, 1
0x72EA98: cmp     ebx, [esp+48h+var_20]
0x72EA9C: jb      short loc_72EA44
0x72EA9E: mov     ecx, [esp+48h+var_2C]
0x72EAA2: add     ecx, 1
0x72EAA5: cmp     ecx, 3
0x72EAA8: mov     [esp+48h+var_2C], ecx
0x72EAAC: jb      loc_72EA28
0x72EAB2: mov     eax, [esi+8]
0x72EAB5: mov     ecx, [esi]
0x72EAB7: push    offset PtFuncCompare
0x72EABC: push    2
0x72EABE: push    eax
0x72EABF: push    ecx
0x72EAC0: call    unknown_libname_60
0x72EAC5: mov     ebp, [esp+58h+var_24]
0x72EAC9: xor     edi, edi
0x72EACB: add     esp, 10h
0x72EACE: cmp     [ebp+8], edi
0x72EAD1: jbe     short loc_72EB33
0x72EAD3: mov     edx, [ebp+0]
0x72EAD6: mov     ebx, [edx+edi*4]
0x72EAD9: push    esi
0x72EADA: mov     ecx, ebx
0x72EADC: call    sub_72CDF0
0x72EAE1: test    al, al
0x72EAE3: jnz     short loc_72EB22
0x72EAE5: push    ebx
0x72EAE6: mov     ecx, esi
0x72EAE8: call    sub_72CDF0
0x72EAED: test    al, al
0x72EAEF: jz      short loc_72EB18
0x72EAF1: test    ebx, ebx
0x72EAF3: jz      short loc_72EB06
0x72EAF5: mov     eax, [ebx]
0x72EAF7: push    eax
0x72EAF8: call    FormHeapFree
0x72EAFD: push    ebx
0x72EAFE: call    FormHeapFree
0x72EB03: add     esp, 8
0x72EB06: add     dword ptr [ebp+8], 0FFFFFFFFh
0x72EB0A: mov     ecx, [ebp+8]
0x72EB0D: mov     eax, [ebp+0]
0x72EB10: mov     ecx, [eax+ecx*4]
0x72EB13: mov     [eax+edi*4], ecx
0x72EB16: jmp     short loc_72EB1B
0x72EB18: add     edi, 1
0x72EB1B: cmp     edi, [ebp+8]
0x72EB1E: jb      short loc_72EAD3
0x72EB20: jmp     short loc_72EB33
0x72EB22: mov     edx, [esi]
0x72EB24: push    edx
0x72EB25: call    FormHeapFree
0x72EB2A: push    esi
0x72EB2B: call    FormHeapFree
0x72EB30: add     esp, 8
0x72EB33: mov     ecx, [ebp+8]
0x72EB36: cmp     edi, ecx
0x72EB38: jnz     short loc_72EB64
0x72EB3A: mov     edi, ebp
0x72EB3C: mov     eax, [edi+4]
0x72EB3F: cmp     ecx, eax
0x72EB41: jnz     short loc_72EB58
0x72EB43: test    eax, eax
0x72EB45: jbe     short loc_72EB4B
0x72EB47: add     eax, eax
0x72EB49: jmp     short loc_72EB50
0x72EB4B: mov     eax, 1
0x72EB50: push    eax
0x72EB51: mov     ecx, edi
0x72EB53: call    sub_6E8CA0
0x72EB58: mov     eax, [edi+8]
0x72EB5B: mov     ecx, [edi]
0x72EB5D: mov     [ecx+eax*4], esi
0x72EB60: add     dword ptr [edi+8], 1
0x72EB64: mov     esi, [esp+48h+var_28]
0x72EB68: mov     eax, [esp+48h+var_30]
0x72EB6C: add     eax, 1
0x72EB6F: cmp     eax, [esp+48h+var_1C]
0x72EB73: mov     [esp+48h+var_30], eax
0x72EB77: jb      loc_72E9BB
0x72EB7D: mov     ecx, dword ptr [esp+48h+var_C]
0x72EB81: mov     large fs:0, ecx
0x72EB88: pop     ecx
0x72EB89: pop     edi
0x72EB8A: pop     esi
0x72EB8B: pop     ebp
0x72EB8C: pop     ebx
0x72EB8D: mov     ecx, [esp+34h+var_10]
0x72EB91: xor     ecx, esp
0x72EB93: call    @__security_check_cookie@4; __security_check_cookie(x)
0x72EB98: add     esp, 34h
0x72EB9B: retn    0Ch
