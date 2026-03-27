0x42CC00: sub     esp, 0Ch
0x42CC03: push    esi
0x42CC04: mov     esi, ecx
0x42CC06: test    byte ptr [esi+194h], 20h
0x42CC0D: jz      short loc_42CC30
0x42CC0F: mov     eax, [esi+1A4h]
0x42CC15: mov     ecx, [esp+10h+arg_0]
0x42CC19: mov     edx, [eax+ecx*4]
0x42CC1C: mov     eax, [esp+10h+arg_4]
0x42CC20: mov     eax, [edx+eax*4]
0x42CC23: add     eax, [esi+1A0h]
0x42CC29: pop     esi
0x42CC2A: add     esp, 0Ch
0x42CC2D: retn    8
0x42CC30: mov     ecx, [esi+160h]
0x42CC36: push    ebx
0x42CC37: shr     ecx, 1
0x42CC39: mov     ebx, 1
0x42CC3E: test    bl, cl
0x42CC40: jz      loc_42CE27
0x42CC46: mov     eax, [esi+1A0h]
0x42CC4C: push    ebp
0x42CC4D: xor     ebp, ebp
0x42CC4F: cmp     eax, ebp
0x42CC51: jz      short loc_42CC62
0x42CC53: push    eax
0x42CC54: call    FormHeapFree
0x42CC59: add     esp, 4
0x42CC5C: mov     [esi+1A0h], ebp
0x42CC62: push    edi
0x42CC63: xor     edi, edi
0x42CC65: push    100h; Size
0x42CC6A: mov     [esp+20h+var_4], edi
0x42CC6E: call    FormHeapAlloc
0x42CC73: mov     [esi+1A0h], eax
0x42CC79: mov     eax, iRetainFilenameOffsetTable_Archive
0x42CC7E: add     esp, 4
0x42CC81: cmp     eax, ebx
0x42CC83: jnz     short loc_42CC92
0x42CC85: mov     eax, [esi+160h]
0x42CC8B: shr     eax, 5
0x42CC8E: and     al, bl
0x42CC90: jmp     short loc_42CC97
0x42CC92: cmp     eax, ebp
0x42CC94: setnz   al
0x42CC97: mov     edx, [esi]
0x42CC99: mov     edx, [edx+0Ch]
0x42CC9C: test    al, al
0x42CC9E: mov     eax, ds:BSFile_FilePos_Beg
0x42CCA3: push    eax
0x42CCA4: jz      loc_42CD2B
0x42CCAA: mov     ecx, [esi+1A4h]
0x42CCB0: mov     eax, [esp+20h+arg_0]
0x42CCB4: mov     ecx, [ecx+eax*4]
0x42CCB7: mov     eax, [esp+20h+arg_4]
0x42CCBB: mov     ecx, [ecx+eax*4]
0x42CCBE: add     ecx, [esi+188h]
0x42CCC4: push    ecx
0x42CCC5: mov     ecx, esi
0x42CCC7: call    edx
0x42CCC9: mov     ecx, [esi+1A0h]
0x42CCCF: mov     edx, [esi+4]
0x42CCD2: push    ebx
0x42CCD3: lea     eax, [esp+20h+arg_0]
0x42CCD7: push    eax
0x42CCD8: push    ebx
0x42CCD9: push    ecx
0x42CCDA: push    esi
0x42CCDB: mov     [esp+30h+arg_0], ebx
0x42CCDF: call    edx
0x42CCE1: mov     eax, [esi+1A0h]
0x42CCE7: add     esp, 14h
0x42CCEA: cmp     byte ptr [eax], 0
0x42CCED: jz      short loc_42CD1B
0x42CCEF: nop
0x42CCF0: mov     edx, [esi+1A0h]
0x42CCF6: mov     eax, [esi+4]
0x42CCF9: push    ebx
0x42CCFA: lea     ecx, [esp+20h+arg_0]
0x42CCFE: push    ecx
0x42CCFF: add     edi, ebx
0x42CD01: push    ebx
0x42CD02: add     edx, edi
0x42CD04: push    edx
0x42CD05: push    esi
0x42CD06: mov     [esp+30h+arg_0], ebx
0x42CD0A: call    eax
0x42CD0C: mov     ecx, [esi+1A0h]
0x42CD12: add     esp, 14h
0x42CD15: cmp     byte ptr [edi+ecx], 0
0x42CD19: jnz     short loc_42CCF0
0x42CD1B: mov     eax, [esi+1A0h]
0x42CD21: pop     edi
0x42CD22: pop     ebp
0x42CD23: pop     ebx
0x42CD24: pop     esi
0x42CD25: add     esp, 0Ch
0x42CD28: retn    8
0x42CD2B: mov     ecx, [esi+188h]
0x42CD31: push    ecx
0x42CD32: mov     ecx, esi
0x42CD34: call    edx
0x42CD36: mov     eax, [esp+1Ch+arg_0]
0x42CD3A: cmp     eax, ebp
0x42CD3C: jbe     short loc_42CD8F
0x42CD3E: mov     [esp+1Ch+var_C], eax
0x42CD42: mov     eax, [esi+178h]
0x42CD48: xor     edi, edi
0x42CD4A: cmp     [eax+ebp+8], edi
0x42CD4E: jbe     short loc_42CD82
0x42CD50: mov     byte ptr [esp+1Ch+arg_0], bl
0x42CD54: mov     eax, [esi+4]
0x42CD57: push    ebx
0x42CD58: lea     ecx, [esp+20h+var_8]
0x42CD5C: push    ecx
0x42CD5D: push    ebx
0x42CD5E: lea     edx, [esp+28h+arg_0]
0x42CD62: push    edx
0x42CD63: push    esi
0x42CD64: mov     [esp+30h+var_8], ebx
0x42CD68: call    eax
0x42CD6A: add     esp, 14h
0x42CD6D: cmp     byte ptr [esp+1Ch+arg_0], 0
0x42CD72: jnz     short loc_42CD54
0x42CD74: mov     ecx, [esi+178h]
0x42CD7A: add     edi, ebx
0x42CD7C: cmp     edi, [ecx+ebp+8]
0x42CD80: jb      short loc_42CD50
0x42CD82: add     ebp, 10h
0x42CD85: sub     [esp+1Ch+var_C], ebx
0x42CD89: jnz     short loc_42CD42
0x42CD8B: mov     edi, [esp+1Ch+var_4]
0x42CD8F: mov     eax, [esp+1Ch+arg_4]
0x42CD93: test    eax, eax
0x42CD95: jbe     short loc_42CDC8
0x42CD97: mov     ebp, eax
0x42CD99: lea     esp, [esp+0]
0x42CDA0: mov     byte ptr [esp+1Ch+arg_0], bl
0x42CDA4: mov     ecx, [esi+4]
0x42CDA7: push    ebx
0x42CDA8: lea     edx, [esp+20h+arg_4]
0x42CDAC: push    edx
0x42CDAD: push    ebx
0x42CDAE: lea     eax, [esp+28h+arg_0]
0x42CDB2: push    eax
0x42CDB3: push    esi
0x42CDB4: mov     [esp+30h+arg_4], ebx
0x42CDB8: call    ecx
0x42CDBA: add     esp, 14h
0x42CDBD: cmp     byte ptr [esp+1Ch+arg_0], 0
0x42CDC2: jnz     short loc_42CDA4
0x42CDC4: sub     ebp, ebx
0x42CDC6: jnz     short loc_42CDA0
0x42CDC8: mov     eax, [esi+1A0h]
0x42CDCE: mov     ecx, [esi+4]
0x42CDD1: push    ebx
0x42CDD2: lea     edx, [esp+20h+arg_0]
0x42CDD6: push    edx
0x42CDD7: push    ebx
0x42CDD8: push    eax
0x42CDD9: push    esi
0x42CDDA: mov     [esp+30h+arg_0], ebx
0x42CDDE: call    ecx
0x42CDE0: mov     edx, [esi+1A0h]
0x42CDE6: add     esp, 14h
0x42CDE9: cmp     byte ptr [edx], 0
0x42CDEC: jz      loc_42CD1B
0x42CDF2: mov     ecx, [esi+1A0h]
0x42CDF8: mov     edx, [esi+4]
0x42CDFB: push    ebx
0x42CDFC: lea     eax, [esp+20h+arg_0]
0x42CE00: push    eax
0x42CE01: add     edi, ebx
0x42CE03: push    ebx
0x42CE04: add     ecx, edi
0x42CE06: push    ecx
0x42CE07: push    esi
0x42CE08: mov     [esp+30h+arg_0], ebx
0x42CE0C: call    edx
0x42CE0E: mov     eax, [esi+1A0h]
0x42CE14: add     esp, 14h
0x42CE17: cmp     byte ptr [edi+eax], 0
0x42CE1B: jnz     short loc_42CDF2
0x42CE1D: pop     edi
0x42CE1E: pop     ebp
0x42CE1F: pop     ebx
0x42CE20: pop     esi
0x42CE21: add     esp, 0Ch
0x42CE24: retn    8
0x42CE27: pop     ebx
0x42CE28: xor     eax, eax
0x42CE2A: pop     esi
0x42CE2B: add     esp, 0Ch
0x42CE2E: retn    8
