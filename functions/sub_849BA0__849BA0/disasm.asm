0x849BA0: push    0FFFFFFFFh
0x849BA2: push    offset SEH_879360
0x849BA7: mov     eax, large fs:0
0x849BAD: push    eax
0x849BAE: push    ecx
0x849BAF: push    ebx
0x849BB0: push    ebp
0x849BB1: push    esi
0x849BB2: push    edi
0x849BB3: mov     eax, ds:0B30AACh
0x849BB8: xor     eax, esp
0x849BBA: push    eax
0x849BBB: lea     eax, [esp+24h+var_C]
0x849BBF: mov     large fs:0, eax
0x849BC5: mov     [esp+24h+var_10], ecx
0x849BC9: mov     eax, [esp+24h+arg_8]
0x849BCD: mov     eax, [eax+10h]
0x849BD0: mov     edi, ds:0B45604h
0x849BD6: push    eax
0x849BD7: call    sub_848C40
0x849BDC: mov     ecx, [edi+24h]
0x849BDF: mov     ebx, [esp+24h+arg_C]
0x849BE3: mov     esi, [ecx]
0x849BE5: mov     edx, [ebx]
0x849BE7: mov     eax, [edx+88h]
0x849BED: push    0
0x849BEF: mov     ecx, ebx
0x849BF1: mov     [esp+28h+arg_8], esi
0x849BF5: call    eax
0x849BF7: mov     esi, [esi+4]
0x849BFA: mov     ebp, eax
0x849BFC: cmp     esi, ebp
0x849BFE: jz      short loc_849C37
0x849C00: test    esi, esi
0x849C02: jz      short loc_849C20
0x849C04: lea     ecx, [esi+4]
0x849C07: push    ecx; lpAddend
0x849C08: call    dword ptr ds:0A2807Ch
0x849C0E: test    eax, eax
0x849C10: jnz     short loc_849C20
0x849C12: test    esi, esi
0x849C14: jz      short loc_849C20
0x849C16: mov     edx, [esi]
0x849C18: mov     eax, [edx]
0x849C1A: push    1
0x849C1C: mov     ecx, esi
0x849C1E: call    eax
0x849C20: test    ebp, ebp
0x849C22: mov     esi, [esp+24h+arg_8]
0x849C26: mov     [esi+4], ebp
0x849C29: jz      short loc_849C3B
0x849C2B: add     ebp, 4
0x849C2E: push    ebp; lpAddend
0x849C2F: call    dword ptr ds:0A28078h
0x849C35: jmp     short loc_849C3B
0x849C37: mov     esi, [esp+24h+arg_8]
0x849C3B: test    esi, esi
0x849C3D: jz      short loc_849C59
0x849C3F: cmp     byte ptr ds:0B42CDDh, 0
0x849C46: jz      short loc_849C59
0x849C48: mov     edx, [ebx]
0x849C4A: mov     eax, [edx+78h]
0x849C4D: mov     ecx, ebx
0x849C4F: call    eax
0x849C51: push    eax
0x849C52: mov     ecx, esi
0x849C54: call    sub_7715E0
0x849C59: mov     ecx, [edi+24h]
0x849C5C: mov     esi, [ecx+4]
0x849C5F: mov     edx, [ebx]
0x849C61: mov     eax, [edx+8Ch]
0x849C67: push    0
0x849C69: mov     ecx, ebx
0x849C6B: mov     [esp+28h+arg_8], esi
0x849C6F: call    eax
0x849C71: test    eax, eax
0x849C73: jz      short loc_849C87
0x849C75: mov     edx, [ebx]
0x849C77: mov     eax, [edx+8Ch]
0x849C7D: push    0
0x849C7F: mov     ecx, ebx
0x849C81: call    eax
0x849C83: mov     ebp, eax
0x849C85: jmp     short loc_849C9C
0x849C87: test    dword ptr [ebx+1Ch], 80h
0x849C8E: mov     ebp, ds:0B430F0h
0x849C94: ja      short loc_849C9C
0x849C96: mov     ebp, ds:0B430DCh
0x849C9C: mov     esi, [esi+4]
0x849C9F: cmp     esi, ebp
0x849CA1: jz      short loc_849CDA
0x849CA3: test    esi, esi
0x849CA5: jz      short loc_849CC3
0x849CA7: lea     ecx, [esi+4]
0x849CAA: push    ecx; lpAddend
0x849CAB: call    dword ptr ds:0A2807Ch
0x849CB1: test    eax, eax
0x849CB3: jnz     short loc_849CC3
0x849CB5: test    esi, esi
0x849CB7: jz      short loc_849CC3
0x849CB9: mov     edx, [esi]
0x849CBB: mov     eax, [edx]
0x849CBD: push    1
0x849CBF: mov     ecx, esi
0x849CC1: call    eax
0x849CC3: test    ebp, ebp
0x849CC5: mov     esi, [esp+24h+arg_8]
0x849CC9: mov     [esi+4], ebp
0x849CCC: jz      short loc_849CDE
0x849CCE: add     ebp, 4
0x849CD1: push    ebp; lpAddend
0x849CD2: call    dword ptr ds:0A28078h
0x849CD8: jmp     short loc_849CDE
0x849CDA: mov     esi, [esp+24h+arg_8]
0x849CDE: test    esi, esi
0x849CE0: jz      short loc_849CFC
0x849CE2: cmp     byte ptr ds:0B42CDDh, 0
0x849CE9: jz      short loc_849CFC
0x849CEB: mov     edx, [ebx]
0x849CED: mov     eax, [edx+78h]
0x849CF0: mov     ecx, ebx
0x849CF2: call    eax
0x849CF4: push    eax
0x849CF5: mov     ecx, esi
0x849CF7: call    sub_7715E0
0x849CFC: mov     ebx, 1
0x849D01: add     [edi+60h], ebx
0x849D04: mov     [esp+24h+arg_8], edi
0x849D08: mov     esi, [esp+24h+var_10]
0x849D0C: mov     edx, [esi+38h]
0x849D0F: lea     ecx, [esp+24h+arg_8]
0x849D13: push    ecx
0x849D14: push    edx
0x849D15: lea     ecx, [esi+40h]
0x849D18: mov     [esp+2Ch+var_4], 0
0x849D20: call    sub_76CE40
0x849D25: or      eax, 0FFFFFFFFh
0x849D28: add     [edi+60h], eax
0x849D2B: mov     [esp+24h+var_4], eax
0x849D2F: jnz     short loc_849D38
0x849D31: mov     ecx, edi
0x849D33: call    sub_7604D0
0x849D38: add     [esi+38h], ebx
0x849D3B: mov     ecx, [esp+24h+var_C]
0x849D3F: mov     large fs:0, ecx
0x849D46: pop     ecx
0x849D47: pop     edi
0x849D48: pop     esi
0x849D49: pop     ebp
0x849D4A: pop     ebx
0x849D4B: add     esp, 10h
0x849D4E: retn    10h
