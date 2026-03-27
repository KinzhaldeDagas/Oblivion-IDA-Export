0x8C6CE0: push    0FFFFFFFFh
0x8C6CE2: push    offset SEH_8C6CE0
0x8C6CE7: mov     eax, large fs:0
0x8C6CED: push    eax
0x8C6CEE: push    ecx
0x8C6CEF: push    ebx
0x8C6CF0: push    esi
0x8C6CF1: push    edi
0x8C6CF2: mov     eax, ds:0B30AACh
0x8C6CF7: xor     eax, esp
0x8C6CF9: push    eax
0x8C6CFA: lea     eax, [esp+20h+var_C]
0x8C6CFE: mov     large fs:0, eax
0x8C6D04: mov     esi, ecx
0x8C6D06: xor     edi, edi
0x8C6D08: cmp     [esi+0Ch], edi
0x8C6D0B: jnz     loc_8C6DAC
0x8C6D11: push    1
0x8C6D13: push    40h ; '@'
0x8C6D15: mov     ecx, offset FormHeap
0x8C6D1A: call    j_MemoryHeap_Alloc
0x8C6D1F: mov     ebx, eax
0x8C6D21: mov     cl, bl
0x8C6D23: and     cl, 0Fh
0x8C6D26: mov     al, 10h
0x8C6D28: sub     al, cl
0x8C6D2A: movzx   edx, al
0x8C6D2D: add     ebx, edx
0x8C6D2F: mov     [ebx-1], al
0x8C6D32: mov     [ebx], edi
0x8C6D34: fldz
0x8C6D36: mov     [esp+20h+var_4], 0FFFFFFFFh
0x8C6D3E: fst     dword ptr [ebx+4]
0x8C6D41: mov     dword ptr [ebx+8], offset ??_7?$NiTLargeArray@VhkNiTriStripsData@@@@6B@; const NiTLargeArray<hkNiTriStripsData>::`vftable'
0x8C6D48: mov     [ebx+10h], edi
0x8C6D4B: mov     dword ptr [ebx+1Ch], 1
0x8C6D52: mov     [ebx+14h], edi
0x8C6D55: mov     [ebx+18h], edi
0x8C6D58: mov     [ebx+0Ch], edi
0x8C6D5B: fst     dword ptr [ebx+20h]
0x8C6D5E: fst     dword ptr [ebx+24h]
0x8C6D61: fst     dword ptr [ebx+28h]
0x8C6D64: fstp    dword ptr [ebx+2Ch]
0x8C6D67: fld1
0x8C6D69: fst     dword ptr [ebx+20h]
0x8C6D6C: fst     dword ptr [ebx+24h]
0x8C6D6F: fstp    dword ptr [ebx+28h]
0x8C6D72: cmp     [esi+8], edi
0x8C6D75: mov     [esi+0Ch], ebx
0x8C6D78: jz      short loc_8C6DA3
0x8C6D7A: push    ebx
0x8C6D7B: mov     ecx, esi
0x8C6D7D: call    sub_8CE4C0
0x8C6D82: mov     ecx, [esi+8]
0x8C6D85: cmp     ecx, edi
0x8C6D87: jz      short loc_8C6D98
0x8C6D89: push    ebx
0x8C6D8A: call    sub_916310
0x8C6D8F: mov     eax, [esp+20h+arg_0]
0x8C6D93: mov     byte ptr [eax], 1
0x8C6D96: jmp     short loc_8C6DB3
0x8C6D98: fld1
0x8C6D9A: fst     dword ptr [ebx+20h]
0x8C6D9D: fst     dword ptr [ebx+24h]
0x8C6DA0: fstp    dword ptr [ebx+28h]
0x8C6DA3: mov     eax, [esp+20h+arg_0]
0x8C6DA7: mov     byte ptr [eax], 1
0x8C6DAA: jmp     short loc_8C6DB3
0x8C6DAC: mov     ecx, [esp+20h+arg_0]
0x8C6DB0: mov     byte ptr [ecx], 0
0x8C6DB3: mov     eax, [esi+0Ch]
0x8C6DB6: mov     ecx, [esp+20h+var_C]
0x8C6DBA: mov     large fs:0, ecx
0x8C6DC1: pop     ecx
0x8C6DC2: pop     edi
0x8C6DC3: pop     esi
0x8C6DC4: pop     ebx
0x8C6DC5: add     esp, 10h
0x8C6DC8: retn    4
