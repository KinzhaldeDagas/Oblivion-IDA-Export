0x79FB80: push    ebp
0x79FB81: mov     ebp, [esp+4+arg_0]
0x79FB85: push    esi
0x79FB86: mov     esi, ecx
0x79FB88: cmp     esi, ebp
0x79FB8A: jz      loc_79FD02
0x79FB90: mov     eax, [ebp+4]
0x79FB93: test    eax, eax
0x79FB95: push    edi
0x79FB96: jz      short loc_79FBB2
0x79FB98: mov     edi, [ebp+8]
0x79FB9B: mov     ecx, edi
0x79FB9D: sub     ecx, eax
0x79FB9F: mov     eax, 2AAAAAABh
0x79FBA4: imul    ecx
0x79FBA6: sar     edx, 3
0x79FBA9: mov     ecx, edx
0x79FBAB: shr     ecx, 1Fh
0x79FBAE: add     ecx, edx
0x79FBB0: jnz     short loc_79FBC1
0x79FBB2: mov     ecx, esi
0x79FBB4: call    sub_79F630
0x79FBB9: pop     edi
0x79FBBA: mov     eax, esi
0x79FBBC: pop     esi
0x79FBBD: pop     ebp
0x79FBBE: retn    4
0x79FBC1: push    ebx
0x79FBC2: mov     ebx, [esi+4]
0x79FBC5: test    ebx, ebx
0x79FBC7: jnz     short loc_79FBCD
0x79FBC9: xor     eax, eax
0x79FBCB: jmp     short loc_79FBE3
0x79FBCD: mov     edx, [esi+8]
0x79FBD0: sub     edx, ebx
0x79FBD2: mov     eax, 2AAAAAABh
0x79FBD7: imul    edx
0x79FBD9: sar     edx, 3
0x79FBDC: mov     eax, edx
0x79FBDE: shr     eax, 1Fh
0x79FBE1: add     eax, edx
0x79FBE3: cmp     ecx, eax
0x79FBE5: ja      short loc_79FC60
0x79FBE7: mov     byte ptr [esp+10h+arg_0], 0
0x79FBEC: mov     eax, [esp+10h+arg_0]
0x79FBF0: mov     ecx, [esp+10h+arg_0]
0x79FBF4: mov     edx, [esp+10h+arg_0]
0x79FBF8: push    eax
0x79FBF9: mov     eax, [ebp+4]
0x79FBFC: push    ecx
0x79FBFD: push    edx
0x79FBFE: push    ebx
0x79FBFF: push    edi
0x79FC00: push    eax
0x79FC01: call    sub_79BE80
0x79FC06: mov     ecx, [esp+28h+arg_0]
0x79FC0A: mov     edx, [esi+8]
0x79FC0D: push    ecx
0x79FC0E: push    esi
0x79FC0F: push    edx
0x79FC10: push    eax
0x79FC11: call    sub_79E150
0x79FC16: mov     eax, [ebp+4]
0x79FC19: add     esp, 28h
0x79FC1C: test    eax, eax
0x79FC1E: jnz     short loc_79FC35
0x79FC20: lea     eax, [eax+eax*2]
0x79FC23: shl     eax, 4
0x79FC26: add     eax, [esi+4]
0x79FC29: pop     ebx
0x79FC2A: mov     [esi+8], eax
0x79FC2D: pop     edi
0x79FC2E: mov     eax, esi
0x79FC30: pop     esi
0x79FC31: pop     ebp
0x79FC32: retn    4
0x79FC35: mov     ebp, [ebp+8]
0x79FC38: sub     ebp, eax
0x79FC3A: mov     eax, 2AAAAAABh
0x79FC3F: imul    ebp
0x79FC41: sar     edx, 3
0x79FC44: mov     eax, edx
0x79FC46: shr     eax, 1Fh
0x79FC49: add     eax, edx
0x79FC4B: lea     eax, [eax+eax*2]
0x79FC4E: shl     eax, 4
0x79FC51: add     eax, [esi+4]
0x79FC54: pop     ebx
0x79FC55: mov     [esi+8], eax
0x79FC58: pop     edi
0x79FC59: mov     eax, esi
0x79FC5B: pop     esi
0x79FC5C: pop     ebp
0x79FC5D: retn    4
0x79FC60: test    ebx, ebx
0x79FC62: jnz     short loc_79FC68
0x79FC64: xor     eax, eax
0x79FC66: jmp     short loc_79FC7E
0x79FC68: mov     edx, [esi+0Ch]
0x79FC6B: sub     edx, ebx
0x79FC6D: mov     eax, 2AAAAAABh
0x79FC72: imul    edx
0x79FC74: sar     edx, 3
0x79FC77: mov     eax, edx
0x79FC79: shr     eax, 1Fh
0x79FC7C: add     eax, edx
0x79FC7E: cmp     ecx, eax
0x79FC80: ja      short loc_79FCBB
0x79FC82: mov     ecx, esi
0x79FC84: call    sub_799F10
0x79FC89: lea     edi, [eax+eax*2]
0x79FC8C: mov     eax, [ebp+4]
0x79FC8F: shl     edi, 4
0x79FC92: add     edi, eax
0x79FC94: push    ebx
0x79FC95: push    edi
0x79FC96: push    eax
0x79FC97: call    sub_79E0C0
0x79FC9C: mov     ecx, [esi+8]
0x79FC9F: mov     edx, [ebp+8]
0x79FCA2: add     esp, 0Ch
0x79FCA5: push    ecx
0x79FCA6: push    edx
0x79FCA7: push    edi
0x79FCA8: mov     ecx, esi
0x79FCAA: call    sub_79EA70
0x79FCAF: pop     ebx
0x79FCB0: mov     [esi+8], eax
0x79FCB3: pop     edi
0x79FCB4: mov     eax, esi
0x79FCB6: pop     esi
0x79FCB7: pop     ebp
0x79FCB8: retn    4
0x79FCBB: test    ebx, ebx
0x79FCBD: jz      short loc_79FCD7
0x79FCBF: mov     eax, [esi+8]
0x79FCC2: push    eax
0x79FCC3: push    ebx
0x79FCC4: mov     ecx, esi
0x79FCC6: call    sub_79EAA0
0x79FCCB: mov     ecx, [esi+4]
0x79FCCE: push    ecx
0x79FCCF: call    FormHeapFree
0x79FCD4: add     esp, 4
0x79FCD7: mov     ecx, ebp
0x79FCD9: call    sub_799F10
0x79FCDE: push    eax; char *
0x79FCDF: mov     ecx, esi
0x79FCE1: call    sub_79AD20
0x79FCE6: test    al, al
0x79FCE8: jz      short loc_79FD00
0x79FCEA: mov     edx, [esi+4]
0x79FCED: mov     eax, [ebp+8]
0x79FCF0: mov     ecx, [ebp+4]
0x79FCF3: push    edx
0x79FCF4: push    eax
0x79FCF5: push    ecx
0x79FCF6: mov     ecx, esi
0x79FCF8: call    sub_79EA70
0x79FCFD: mov     [esi+8], eax
0x79FD00: pop     ebx
0x79FD01: pop     edi
0x79FD02: mov     eax, esi
0x79FD04: pop     esi
0x79FD05: pop     ebp
0x79FD06: retn    4
