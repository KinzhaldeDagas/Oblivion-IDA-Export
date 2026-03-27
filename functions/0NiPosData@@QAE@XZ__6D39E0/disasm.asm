0x6D39E0: push    0FFFFFFFFh
0x6D39E2: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x6D39E7: mov     eax, large fs:0
0x6D39ED: push    eax
0x6D39EE: push    ecx
0x6D39EF: push    ebx
0x6D39F0: push    ebp
0x6D39F1: push    esi
0x6D39F2: push    edi
0x6D39F3: mov     eax, ds:0B30AACh
0x6D39F8: xor     eax, esp
0x6D39FA: push    eax
0x6D39FB: lea     eax, [esp+24h+var_C]
0x6D39FF: mov     large fs:0, eax
0x6D3A05: mov     ebp, ecx
0x6D3A07: xor     ebx, ebx
0x6D3A09: cmp     [esp+24h+arg_4], ebx
0x6D3A0D: jbe     short loc_6D3A77
0x6D3A0F: cmp     [ebp+18h], ebx
0x6D3A12: lea     edi, [ebp+18h]
0x6D3A15: jnz     short loc_6D3A5C
0x6D3A17: push    18h; Size
0x6D3A19: call    FormHeapAlloc
0x6D3A1E: mov     esi, eax
0x6D3A20: add     esp, 4
0x6D3A23: mov     [esp+24h+var_10], esi
0x6D3A27: cmp     esi, ebx
0x6D3A29: mov     [esp+24h+var_4], ebx
0x6D3A2D: jz      short loc_6D3A4A
0x6D3A2F: mov     ecx, esi
0x6D3A31: call    NiObject_constr
0x6D3A36: mov     dword ptr [esi], offset ??_7NiPosData@@6B@; const NiPosData::`vftable'
0x6D3A3C: mov     [esi+8], ebx
0x6D3A3F: mov     [esi+0Ch], ebx
0x6D3A42: mov     [esi+10h], ebx
0x6D3A45: mov     [esi+14h], bl
0x6D3A48: jmp     short loc_6D3A4C
0x6D3A4A: xor     esi, esi
0x6D3A4C: push    esi; a2
0x6D3A4D: mov     ecx, edi; this
0x6D3A4F: mov     [esp+28h+var_4], 0FFFFFFFFh
0x6D3A57: call    NiSmartPointer_Set??
0x6D3A5C: mov     eax, [esp+24h+arg_8]
0x6D3A60: mov     ecx, [esp+24h+arg_4]
0x6D3A64: mov     edx, [esp+24h+arg_0]
0x6D3A68: push    eax
0x6D3A69: push    ecx
0x6D3A6A: mov     ecx, [edi]
0x6D3A6C: push    edx
0x6D3A6D: call    sub_6D9D00
0x6D3A72: mov     [ebp+1Ch], ebx
0x6D3A75: jmp     short loc_6D3A86
0x6D3A77: mov     ecx, [ebp+18h]
0x6D3A7A: cmp     ecx, ebx
0x6D3A7C: jz      short loc_6D3A86
0x6D3A7E: push    ebx
0x6D3A7F: push    ebx
0x6D3A80: push    ebx
0x6D3A81: call    sub_6D9D00
0x6D3A86: mov     ecx, [esp+24h+var_C]
0x6D3A8A: mov     large fs:0, ecx
0x6D3A91: pop     ecx
0x6D3A92: pop     edi
0x6D3A93: pop     esi
0x6D3A94: pop     ebp
0x6D3A95: pop     ebx
0x6D3A96: add     esp, 10h
0x6D3A99: retn    0Ch
