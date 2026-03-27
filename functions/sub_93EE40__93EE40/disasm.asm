0x93EE40: push    ebp
0x93EE41: mov     ebp, esp
0x93EE43: and     esp, 0FFFFFFF0h
0x93EE46: sub     esp, 74h
0x93EE49: push    ebx
0x93EE4A: push    esi
0x93EE4B: mov     esi, ecx
0x93EE4D: push    edi
0x93EE4E: mov     edi, [ebp+arg_0]
0x93EE51: mov     eax, [edi]
0x93EE53: lea     ecx, [esp+80h+var_20]
0x93EE57: push    ecx
0x93EE58: mov     ecx, edi
0x93EE5A: call    dword ptr [eax+2Ch]
0x93EE5D: mov     ebx, [ebp+arg_4]
0x93EE60: mov     edx, [ebx]
0x93EE62: lea     eax, [esp+80h+var_30]
0x93EE66: push    eax
0x93EE67: mov     ecx, ebx
0x93EE69: call    dword ptr [edx+2Ch]
0x93EE6C: mov     edx, [ebp+arg_8]
0x93EE6F: lea     ecx, [esp+80h+var_30]
0x93EE73: push    ecx
0x93EE74: push    edx
0x93EE75: lea     ecx, [esp+88h+var_40]
0x93EE79: call    sub_88FCC0
0x93EE7E: movaps  xmm0, [esp+80h+var_20]
0x93EE83: movaps  xmm1, [esp+80h+var_40]
0x93EE88: mov     eax, [edi]
0x93EE8A: lea     ecx, [esp+80h+var_50]
0x93EE8E: push    ecx
0x93EE8F: lea     edx, [esp+84h+var_70]
0x93EE93: subps   xmm1, xmm0
0x93EE96: push    edx
0x93EE97: mov     ecx, edi
0x93EE99: movaps  [esp+88h+var_70], xmm1
0x93EE9E: call    dword ptr [eax+24h]
0x93EEA1: mov     edx, [ebp+arg_8]
0x93EEA4: mov     ax, word ptr [esp+80h+var_50+0Ch]
0x93EEA9: movaps  xmm0, [esp+80h+var_50]
0x93EEAE: movaps  xmm1, [esp+80h+var_40]
0x93EEB3: lea     ecx, [esp+80h+var_70]
0x93EEB7: push    ecx
0x93EEB8: subps   xmm1, xmm0
0x93EEBB: push    edx
0x93EEBC: lea     ecx, [esp+88h+var_60]
0x93EEC0: mov     [esi], ax
0x93EEC3: movaps  [esp+88h+var_70], xmm1
0x93EEC8: call    sub_88FD90
0x93EECD: movaps  xmm1, [esp+80h+var_60]
0x93EED2: movaps  xmm0, xmmword ptr ds:0A965C0h
0x93EED9: mov     eax, [ebx]
0x93EEDB: lea     ecx, [esp+80h+var_10]
0x93EEDF: push    ecx
0x93EEE0: lea     edx, [esp+84h+var_60]
0x93EEE4: xorps   xmm1, xmm0
0x93EEE7: push    edx
0x93EEE8: mov     ecx, ebx
0x93EEEA: movaps  [esp+88h+var_60], xmm1
0x93EEEF: call    dword ptr [eax+24h]
0x93EEF2: mov     ax, [esp+80h+var_4]
0x93EEF7: mov     [esi+2], ax
0x93EEFB: mov     eax, 0FFFFh
0x93EF00: mov     [esi+4], ax
0x93EF04: mov     [esi+6], ax
0x93EF08: mov     al, 1
0x93EF0A: mov     [esi+8], al
0x93EF0D: mov     [esi+9], al
0x93EF10: mov     edx, [edi]
0x93EF12: mov     ecx, edi
0x93EF14: call    dword ptr [edx+30h]
0x93EF17: mov     [esi+0Ah], al
0x93EF1A: mov     eax, [ebx]
0x93EF1C: mov     ecx, ebx
0x93EF1E: call    dword ptr [eax+30h]
0x93EF21: pop     edi
0x93EF22: mov     [esi+0Bh], al
0x93EF25: pop     esi
0x93EF26: pop     ebx
0x93EF27: mov     esp, ebp
0x93EF29: pop     ebp
0x93EF2A: retn    0Ch
