0x6E9F60: sub     esp, 8
0x6E9F63: push    ebx
0x6E9F64: push    ebp
0x6E9F65: push    esi
0x6E9F66: push    edi
0x6E9F67: mov     edi, ecx
0x6E9F69: xor     ebx, ebx
0x6E9F6B: xor     esi, esi
0x6E9F6D: cmp     [edi+4Eh], bx
0x6E9F71: jbe     short loc_6E9F9A
0x6E9F73: mov     eax, [edi+48h]
0x6E9F76: mov     ebp, [eax+esi*4]
0x6E9F79: cmp     ebp, ebx
0x6E9F7B: jz      short loc_6E9F8F
0x6E9F7D: mov     ecx, [ebp+0]
0x6E9F80: push    ecx
0x6E9F81: call    FormHeapFree
0x6E9F86: push    ebp
0x6E9F87: call    FormHeapFree
0x6E9F8C: add     esp, 8
0x6E9F8F: movzx   edx, word ptr [edi+4Eh]
0x6E9F93: add     esi, 1
0x6E9F96: cmp     esi, edx
0x6E9F98: jb      short loc_6E9F73
0x6E9F9A: xor     eax, eax
0x6E9F9C: cmp     [edi+4Eh], bx
0x6E9FA0: jbe     short loc_6E9FB4
0x6E9FA2: mov     edx, [edi+48h]
0x6E9FA5: movzx   ecx, ax
0x6E9FA8: add     eax, 1
0x6E9FAB: mov     [edx+ecx*4], ebx
0x6E9FAE: cmp     ax, [edi+4Eh]
0x6E9FB2: jb      short loc_6E9FA2
0x6E9FB4: xor     esi, esi
0x6E9FB6: mov     [edi+4Eh], bx
0x6E9FBA: mov     [edi+50h], bx
0x6E9FBE: cmp     [edi+5Eh], bx
0x6E9FC2: mov     [esp+18h+var_4], esi
0x6E9FC6: jbe     loc_6EA056
0x6E9FCC: lea     esp, [esp+0]
0x6E9FD0: mov     eax, [edi+58h]
0x6E9FD3: mov     ebp, [eax+esi*4]
0x6E9FD6: cmp     ebp, ebx
0x6E9FD8: jz      short loc_6EA043
0x6E9FDA: xor     eax, eax
0x6E9FDC: cmp     [ebp+8], ebx
0x6E9FDF: mov     [esp+18h+var_8], eax
0x6E9FE3: jbe     short loc_6EA031
0x6E9FE5: mov     ecx, [ebp+0]
0x6E9FE8: mov     ebx, [ecx+eax*4]
0x6E9FEB: test    ebx, ebx
0x6E9FED: jz      short loc_6EA01F
0x6E9FEF: mov     esi, [ebx+4]
0x6E9FF2: test    esi, esi
0x6E9FF4: jz      short loc_6EA012
0x6E9FF6: lea     edx, [esi+4]
0x6E9FF9: push    edx; lpAddend
0x6E9FFA: call    dword ptr ds:0A2807Ch
0x6EA000: test    eax, eax
0x6EA002: jnz     short loc_6EA012
0x6EA004: test    esi, esi
0x6EA006: jz      short loc_6EA012
0x6EA008: mov     eax, [esi]
0x6EA00A: mov     edx, [eax]
0x6EA00C: push    1
0x6EA00E: mov     ecx, esi
0x6EA010: call    edx
0x6EA012: push    ebx
0x6EA013: call    FormHeapFree
0x6EA018: mov     eax, [esp+1Ch+var_8]
0x6EA01C: add     esp, 4
0x6EA01F: add     eax, 1
0x6EA022: cmp     eax, [ebp+8]
0x6EA025: mov     [esp+18h+var_8], eax
0x6EA029: jb      short loc_6E9FE5
0x6EA02B: mov     esi, [esp+18h+var_4]
0x6EA02F: xor     ebx, ebx
0x6EA031: mov     eax, [ebp+0]
0x6EA034: push    eax
0x6EA035: call    FormHeapFree
0x6EA03A: push    ebp
0x6EA03B: call    FormHeapFree
0x6EA040: add     esp, 8
0x6EA043: movzx   ecx, word ptr [edi+5Eh]
0x6EA047: add     esi, 1
0x6EA04A: cmp     esi, ecx
0x6EA04C: mov     [esp+18h+var_4], esi
0x6EA050: jb      loc_6E9FD0
0x6EA056: xor     eax, eax
0x6EA058: cmp     [edi+5Eh], bx
0x6EA05C: jbe     short loc_6EA072
0x6EA05E: mov     edi, edi
0x6EA060: mov     ecx, [edi+58h]
0x6EA063: movzx   edx, ax
0x6EA066: add     eax, 1
0x6EA069: mov     [ecx+edx*4], ebx
0x6EA06C: cmp     ax, [edi+5Eh]
0x6EA070: jb      short loc_6EA060
0x6EA072: mov     [edi+5Eh], bx
0x6EA076: mov     [edi+60h], bx
0x6EA07A: mov     [edi+6Ch], ebx
0x6EA07D: pop     edi
0x6EA07E: pop     esi
0x6EA07F: pop     ebp
0x6EA080: pop     ebx
0x6EA081: add     esp, 8
0x6EA084: retn
