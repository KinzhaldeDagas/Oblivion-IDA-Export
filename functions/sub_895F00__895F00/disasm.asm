0x895F00: push    0FFFFFFFFh
0x895F02: push    offset SEH_895F00
0x895F07: mov     eax, large fs:0
0x895F0D: push    eax
0x895F0E: sub     esp, 114h
0x895F14: push    ebx
0x895F15: mov     eax, ds:0B30AACh
0x895F1A: xor     eax, esp
0x895F1C: push    eax
0x895F1D: lea     eax, [esp+128h+var_C]
0x895F24: mov     large fs:0, eax
0x895F2A: xor     ebx, ebx
0x895F2C: cmp     ecx, ebx
0x895F2E: jz      short loc_895F3E
0x895F30: mov     ecx, [ecx+8]
0x895F33: cmp     ecx, ebx
0x895F35: jz      short loc_895F3E
0x895F37: call    sub_8AC0C0
0x895F3C: jmp     short loc_895F40
0x895F3E: xor     eax, eax
0x895F40: cmp     [eax+8], ebx
0x895F43: jz      loc_895FCC
0x895F49: lea     ecx, [esp+128h+var_10C]
0x895F4D: mov     [esp+128h+var_120], offset ??_7hkAllCdBodyPairCollector@@6B@; const hkAllCdBodyPairCollector::`vftable'
0x895F55: mov     [esp+128h+var_118], ecx
0x895F59: mov     [esp+128h+var_110], 80000010h
0x895F61: mov     [esp+128h+var_114], ebx
0x895F65: mov     byte ptr [esp+128h+var_11C], bl
0x895F69: mov     edx, [eax]
0x895F6B: mov     edx, [edx+38h]
0x895F6E: lea     ecx, [esp+128h+var_120]
0x895F72: push    ecx
0x895F73: mov     ecx, eax
0x895F75: mov     [esp+12Ch+var_4], ebx
0x895F7C: call    edx
0x895F7E: mov     eax, [esp+128h+var_114]
0x895F82: cmp     eax, ebx
0x895F84: jle     short loc_895FB8
0x895F86: mov     ecx, [esp+128h+var_118]
0x895F8A: add     ecx, 8
0x895F8D: mov     edx, eax
0x895F8F: nop
0x895F90: mov     eax, [ecx]
0x895F92: mov     eax, [eax+1Ch]
0x895F95: and     eax, 3Fh
0x895F98: add     eax, 0FFFFFFFCh; switch 14 cases
0x895F9B: cmp     eax, 0Dh
0x895F9E: ja      short def_895FA7; jumptable 00895FA7 default case, cases 8,9,13-15
0x895FA0: movzx   eax, ds:byte_895FF0[eax]
0x895FA7: jmp     ds:jpt_895FA7[eax*4]; switch jump
0x895FAE: mov     bl, 1; jumptable 00895FA7 default case, cases 8,9,13-15
0x895FB0: add     ecx, 10h; jumptable 00895FA7 cases 4-7,10-12,16,17
0x895FB3: sub     edx, 1
0x895FB6: jnz     short loc_895F90
0x895FB8: lea     ecx, [esp+128h+var_120]; this
0x895FBC: mov     [esp+128h+var_4], 0FFFFFFFFh
0x895FC7: call    ??1hkAllCdBodyPairCollector@@UAE@XZ; hkAllCdBodyPairCollector::~hkAllCdBodyPairCollector(void)
0x895FCC: mov     al, bl
0x895FCE: mov     ecx, dword ptr [esp+128h+var_C]
0x895FD5: mov     large fs:0, ecx
0x895FDC: pop     ecx
0x895FDD: pop     ebx
0x895FDE: add     esp, 120h
0x895FE4: retn
