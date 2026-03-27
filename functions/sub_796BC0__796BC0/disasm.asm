0x796BC0: push    esi
0x796BC1: push    edi
0x796BC2: mov     edi, [esp+8+arg_0]
0x796BC6: mov     esi, ecx
0x796BC8: cmp     esi, edi
0x796BCA: jz      loc_796CFF
0x796BD0: mov     edx, [edi+4]
0x796BD3: test    edx, edx
0x796BD5: push    ebx
0x796BD6: push    ebp
0x796BD7: jz      short loc_796BE5
0x796BD9: mov     ebp, [edi+8]
0x796BDC: mov     ebx, ebp
0x796BDE: sub     ebx, edx
0x796BE0: sar     ebx, 4
0x796BE3: jnz     short loc_796BF3
0x796BE5: call    sub_796850
0x796BEA: pop     ebp
0x796BEB: pop     ebx
0x796BEC: pop     edi
0x796BED: mov     eax, esi
0x796BEF: pop     esi
0x796BF0: retn    4
0x796BF3: mov     ecx, [esi+4]
0x796BF6: test    ecx, ecx
0x796BF8: jnz     short loc_796BFE
0x796BFA: xor     eax, eax
0x796BFC: jmp     short loc_796C06
0x796BFE: mov     eax, [esi+8]
0x796C01: sub     eax, ecx
0x796C03: sar     eax, 4
0x796C06: cmp     ebx, eax
0x796C08: ja      short loc_796C5A
0x796C0A: push    ecx
0x796C0B: push    ebp
0x796C0C: push    edx
0x796C0D: call    sub_795CA0
0x796C12: mov     ecx, [esp+1Ch+arg_0]
0x796C16: mov     edx, [esi+8]
0x796C19: push    ecx
0x796C1A: push    esi
0x796C1B: push    edx
0x796C1C: push    eax
0x796C1D: call    sub_794FC0
0x796C22: mov     eax, [edi+4]
0x796C25: add     esp, 1Ch
0x796C28: test    eax, eax
0x796C2A: jnz     short loc_796C40
0x796C2C: xor     edi, edi
0x796C2E: shl     edi, 4
0x796C31: add     edi, [esi+4]
0x796C34: pop     ebp
0x796C35: pop     ebx
0x796C36: mov     [esi+8], edi
0x796C39: pop     edi
0x796C3A: mov     eax, esi
0x796C3C: pop     esi
0x796C3D: retn    4
0x796C40: mov     edi, [edi+8]
0x796C43: sub     edi, eax
0x796C45: sar     edi, 4
0x796C48: shl     edi, 4
0x796C4B: add     edi, [esi+4]
0x796C4E: pop     ebp
0x796C4F: pop     ebx
0x796C50: mov     [esi+8], edi
0x796C53: pop     edi
0x796C54: mov     eax, esi
0x796C56: pop     esi
0x796C57: retn    4
0x796C5A: test    ecx, ecx
0x796C5C: jnz     short loc_796C62
0x796C5E: xor     eax, eax
0x796C60: jmp     short loc_796C6A
0x796C62: mov     eax, [esi+0Ch]
0x796C65: sub     eax, ecx
0x796C67: sar     eax, 4
0x796C6A: cmp     ebx, eax
0x796C6C: ja      short loc_796CAC
0x796C6E: test    ecx, ecx
0x796C70: jnz     short loc_796C76
0x796C72: xor     eax, eax
0x796C74: jmp     short loc_796C7E
0x796C76: mov     eax, [esi+8]
0x796C79: sub     eax, ecx
0x796C7B: sar     eax, 4
0x796C7E: shl     eax, 4
0x796C81: add     eax, edx
0x796C83: push    ecx
0x796C84: mov     ebx, eax
0x796C86: push    ebx
0x796C87: push    edx
0x796C88: call    sub_795CA0
0x796C8D: mov     eax, [esi+8]
0x796C90: mov     ecx, [edi+8]
0x796C93: add     esp, 0Ch
0x796C96: push    eax
0x796C97: push    ecx
0x796C98: push    ebx
0x796C99: mov     ecx, esi
0x796C9B: call    sub_7967F0
0x796CA0: pop     ebp
0x796CA1: pop     ebx
0x796CA2: mov     [esi+8], eax
0x796CA5: pop     edi
0x796CA6: mov     eax, esi
0x796CA8: pop     esi
0x796CA9: retn    4
0x796CAC: test    ecx, ecx
0x796CAE: jz      short loc_796CC8
0x796CB0: mov     edx, [esi+8]
0x796CB3: push    edx
0x796CB4: push    ecx
0x796CB5: mov     ecx, esi
0x796CB7: call    sub_795820
0x796CBC: mov     eax, [esi+4]
0x796CBF: push    eax
0x796CC0: call    FormHeapFree
0x796CC5: add     esp, 4
0x796CC8: mov     ecx, [edi+4]
0x796CCB: test    ecx, ecx
0x796CCD: jnz     short loc_796CD3
0x796CCF: xor     eax, eax
0x796CD1: jmp     short loc_796CDB
0x796CD3: mov     eax, [edi+8]
0x796CD6: sub     eax, ecx
0x796CD8: sar     eax, 4
0x796CDB: push    eax; char *
0x796CDC: mov     ecx, esi
0x796CDE: call    sub_795050
0x796CE3: test    al, al
0x796CE5: jz      short loc_796CFD
0x796CE7: mov     ecx, [esi+4]
0x796CEA: mov     edx, [edi+8]
0x796CED: mov     eax, [edi+4]
0x796CF0: push    ecx
0x796CF1: push    edx
0x796CF2: push    eax
0x796CF3: mov     ecx, esi
0x796CF5: call    sub_7967F0
0x796CFA: mov     [esi+8], eax
0x796CFD: pop     ebp
0x796CFE: pop     ebx
0x796CFF: pop     edi
0x796D00: mov     eax, esi
0x796D02: pop     esi
0x796D03: retn    4
