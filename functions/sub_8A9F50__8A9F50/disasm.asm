0x8A9F50: push    ebp
0x8A9F51: mov     ebp, esp
0x8A9F53: and     esp, 0FFFFFFF0h
0x8A9F56: sub     esp, 14h
0x8A9F59: push    ebx
0x8A9F5A: push    esi
0x8A9F5B: push    edi
0x8A9F5C: mov     edi, [ebp+arg_0]
0x8A9F5F: mov     eax, [edi+4]
0x8A9F62: push    eax
0x8A9F63: mov     esi, ecx
0x8A9F65: call    sub_8A6850
0x8A9F6A: mov     dword ptr [esi], offset off_A97A98
0x8A9F70: mov     cl, [edi+8]
0x8A9F73: mov     [esi+58h], cl
0x8A9F76: mov     dx, [edi+0Ah]
0x8A9F7A: mov     [esi+8Eh], dx
0x8A9F81: mov     eax, [edi]
0x8A9F83: mov     [esi+30h], eax
0x8A9F86: cmp     byte ptr [edi+0B0h], 7
0x8A9F8D: setz    al
0x8A9F90: test    al, al
0x8A9F92: mov     [esi+91h], al
0x8A9F98: jz      loc_8AA01F
0x8A9F9E: mov     ecx, ds:0BA7D98h
0x8A9FA4: mov     edx, [ecx]
0x8A9FA6: push    2Bh ; '+'
0x8A9FA8: push    100h
0x8A9FAD: call    dword ptr [edx+10h]
0x8A9FB0: lea     ecx, [edi+20h]
0x8A9FB3: push    ecx
0x8A9FB4: lea     edx, [edi+10h]
0x8A9FB7: push    edx
0x8A9FB8: mov     ecx, eax
0x8A9FBA: mov     word ptr [eax+4], 100h
0x8A9FC0: call    sub_8EA030
0x8A9FC5: mov     [esi+50h], eax
0x8A9FC8: mov     ecx, [edi+0A4h]
0x8A9FCE: mov     [eax+0B4h], ecx
0x8A9FD4: mov     edx, [edi+0A8h]
0x8A9FDA: push    1
0x8A9FDC: mov     ecx, eax
0x8A9FDE: mov     [eax+0B8h], edx
0x8A9FE4: call    sub_89DB80
0x8A9FE9: mov     eax, [esi+50h]
0x8A9FEC: add     eax, 10h
0x8A9FEF: mov     [esi+1Ch], eax
0x8A9FF2: fld     dword ptr [edi+0ACh]
0x8A9FF8: fcomp   dword ptr ds:0A2FAA8h
0x8A9FFE: fnstsw  ax
0x8AA000: test    ah, 41h
0x8AA003: jp      short loc_8AA011
0x8AA005: mov     dword ptr [esi+34h], 7F7FFFFFh
0x8AA00C: jmp     loc_8AA0B2
0x8AA011: mov     ecx, [edi+0ACh]
0x8AA017: mov     [esi+34h], ecx
0x8AA01A: jmp     loc_8AA0B2
0x8AA01F: mov     edx, [edi+0A8h]
0x8AA025: mov     eax, [edi+0A4h]
0x8AA02B: push    edx
0x8AA02C: push    eax
0x8AA02D: mov     eax, [edi+90h]
0x8AA033: lea     ecx, [edi+80h]
0x8AA039: push    ecx
0x8AA03A: lea     edx, [edi+50h]
0x8AA03D: push    edx
0x8AA03E: push    eax
0x8AA03F: movsx   eax, byte ptr [edi+0B0h]
0x8AA046: lea     ecx, [edi+20h]
0x8AA049: push    ecx
0x8AA04A: lea     edx, [edi+10h]
0x8AA04D: push    edx
0x8AA04E: push    eax
0x8AA04F: call    sub_8A9630
0x8AA054: movsx   ecx, byte ptr [edi+0B2h]
0x8AA05B: add     esp, 20h
0x8AA05E: mov     ebx, eax
0x8AA060: push    ecx
0x8AA061: mov     ecx, ebx
0x8AA063: call    sub_89DB80
0x8AA068: mov     ecx, esi
0x8AA06A: mov     [esi+50h], ebx
0x8AA06D: call    sub_8A6410
0x8AA072: mov     ecx, [esi+50h]
0x8AA075: mov     edx, [ecx]
0x8AA077: lea     eax, [edi+30h]
0x8AA07A: push    eax
0x8AA07B: call    dword ptr [edx+54h]
0x8AA07E: mov     ecx, esi
0x8AA080: call    sub_8A6410
0x8AA085: mov     ecx, [esi+50h]
0x8AA088: mov     edx, [ecx]
0x8AA08A: lea     eax, [edi+40h]
0x8AA08D: push    eax
0x8AA08E: call    dword ptr [edx+58h]
0x8AA091: mov     ecx, [esi+50h]
0x8AA094: add     ecx, 10h
0x8AA097: mov     [esi+1Ch], ecx
0x8AA09A: movsx   edx, byte ptr [edi+0B1h]
0x8AA0A1: push    edx
0x8AA0A2: mov     ecx, esi
0x8AA0A4: call    sub_8A9C90
0x8AA0A9: mov     eax, [edi+0ACh]
0x8AA0AF: mov     [esi+34h], eax
0x8AA0B2: mov     ecx, [esi+50h]
0x8AA0B5: mov     edx, [edi+94h]
0x8AA0BB: mov     [ecx+0C8h], edx
0x8AA0C1: mov     ecx, [edi+98h]
0x8AA0C7: mov     eax, [esi+50h]
0x8AA0CA: lea     ebx, [esi+14h]
0x8AA0CD: mov     [eax+0CCh], ecx
0x8AA0D3: mov     ecx, [ebx]
0x8AA0D5: test    ecx, ecx
0x8AA0D7: jz      short loc_8AA102
0x8AA0D9: lea     edx, [esp+20h+var_10]
0x8AA0DD: push    edx
0x8AA0DE: push    esi
0x8AA0DF: call    sub_8A9970
0x8AA0E4: fld     dword ptr [esi+34h]
0x8AA0E7: fcomp   dword ptr ds:0A2FAA8h
0x8AA0ED: add     esp, 8
0x8AA0F0: fnstsw  ax
0x8AA0F2: test    ah, 41h
0x8AA0F5: jp      short loc_8AA102
0x8AA0F7: lea     ecx, [esp+20h+var_10]
0x8AA0FB: mov     edx, ebx
0x8AA0FD: call    sub_8A9A60
0x8AA102: mov     al, [edi+0B3h]
0x8AA108: test    al, al
0x8AA10A: jz      short loc_8AA116
0x8AA10C: movsx   ax, al
0x8AA110: mov     [esi+2Eh], ax
0x8AA114: jmp     short loc_8AA13D
0x8AA116: mov     al, [esi+91h]
0x8AA11C: test    al, al
0x8AA11E: jz      short loc_8AA128
0x8AA120: mov     word ptr [esi+2Eh], 1
0x8AA126: jmp     short loc_8AA13D
0x8AA128: mov     dl, [edi+0B0h]
0x8AA12E: xor     ecx, ecx
0x8AA130: cmp     dl, 6
0x8AA133: setnz   cl
0x8AA136: add     ecx, 2
0x8AA139: mov     [esi+2Eh], cx
0x8AA13D: mov     dl, [edi+0B4h]
0x8AA143: mov     [esi+90h], dl
0x8AA149: mov     eax, [edi+9Ch]
0x8AA14F: mov     [esi+5Ch], eax
0x8AA152: mov     al, [esi+91h]
0x8AA158: test    al, al
0x8AA15A: mov     ecx, [edi+0A0h]
0x8AA160: mov     [esi+60h], ecx
0x8AA163: jnz     short loc_8AA185
0x8AA165: mov     ecx, [esi+50h]
0x8AA168: mov     edx, [ecx]
0x8AA16A: call    dword ptr [edx+8]
0x8AA16D: cmp     eax, 6
0x8AA170: jz      short loc_8AA185
0x8AA172: xor     al, al
0x8AA174: mov     [esi+92h], al
0x8AA17A: mov     eax, esi
0x8AA17C: pop     edi
0x8AA17D: pop     esi
0x8AA17E: pop     ebx
0x8AA17F: mov     esp, ebp
0x8AA181: pop     ebp
0x8AA182: retn    4
0x8AA185: mov     al, 1
0x8AA187: mov     [esi+92h], al
0x8AA18D: pop     edi
0x8AA18E: mov     eax, esi
0x8AA190: pop     esi
0x8AA191: pop     ebx
0x8AA192: mov     esp, ebp
0x8AA194: pop     ebp
0x8AA195: retn    4
