0x8CBC60: push    ebp
0x8CBC61: mov     ebp, esp
0x8CBC63: and     esp, 0FFFFFFF0h
0x8CBC66: sub     esp, 34h
0x8CBC69: mov     al, [ebp+arg_8]
0x8CBC6C: test    al, al
0x8CBC6E: push    ebx
0x8CBC6F: push    esi
0x8CBC70: push    edi
0x8CBC71: mov     edi, [ebp+arg_0]
0x8CBC74: jz      loc_8CBD48
0x8CBC7A: mov     al, [ebp+arg_C]
0x8CBC7D: test    al, al
0x8CBC7F: jnz     short loc_8CBCB2
0x8CBC81: mov     esi, [edi+50h]
0x8CBC84: mov     eax, [esi+0F0h]
0x8CBC8A: mov     [edi+50h], eax
0x8CBC8D: mov     cx, [esi+0F4h]
0x8CBC94: mov     [edi+2Eh], cx
0x8CBC98: mov     edx, [esi]
0x8CBC9A: push    eax
0x8CBC9B: mov     ecx, esi
0x8CBC9D: call    dword ptr [edx+74h]
0x8CBCA0: mov     dword ptr [esi+0F0h], 0
0x8CBCAA: mov     edx, [esi]
0x8CBCAC: push    1
0x8CBCAE: mov     ecx, esi
0x8CBCB0: call    dword ptr [edx]
0x8CBCB2: mov     ecx, [edi+50h]
0x8CBCB5: mov     eax, [ecx]
0x8CBCB7: call    dword ptr [eax+8]
0x8CBCBA: mov     ebx, [ebp+arg_4]
0x8CBCBD: cmp     eax, ebx
0x8CBCBF: jz      loc_8CBE4D
0x8CBCC5: cmp     ebx, 1
0x8CBCC8: jz      loc_8CBE4D
0x8CBCCE: mov     esi, [edi+50h]
0x8CBCD1: mov     edx, [esi]
0x8CBCD3: lea     eax, [esp+40h+var_30]
0x8CBCD7: push    eax
0x8CBCD8: mov     ecx, esi
0x8CBCDA: call    dword ptr [edx+28h]
0x8CBCDD: mov     ecx, [esi+0B8h]
0x8CBCE3: mov     edx, [esi+0B4h]
0x8CBCE9: push    ecx
0x8CBCEA: push    edx
0x8CBCEB: lea     eax, [esi+90h]
0x8CBCF1: push    eax
0x8CBCF2: lea     ecx, [esp+4Ch+var_30]
0x8CBCF6: push    ecx
0x8CBCF7: mov     ecx, esi
0x8CBCF9: call    sub_89DA90
0x8CBCFE: push    ecx
0x8CBCFF: fstp    [esp+54h+var_54]
0x8CBD02: lea     edx, [esi+80h]
0x8CBD08: push    edx
0x8CBD09: lea     eax, [esi+40h]
0x8CBD0C: push    eax
0x8CBD0D: push    ebx
0x8CBD0E: call    sub_8A9630
0x8CBD13: mov     edx, [esi]
0x8CBD15: add     esp, 20h
0x8CBD18: mov     ebx, eax
0x8CBD1A: push    ebx
0x8CBD1B: mov     ecx, esi
0x8CBD1D: call    dword ptr [edx+74h]
0x8CBD20: mov     eax, [esi+0C8h]
0x8CBD26: mov     [ebx+0C8h], eax
0x8CBD2C: mov     ecx, [esi+0CCh]
0x8CBD32: mov     [ebx+0CCh], ecx
0x8CBD38: mov     [edi+50h], ebx
0x8CBD3B: mov     edx, [esi]
0x8CBD3D: push    1
0x8CBD3F: mov     ecx, esi
0x8CBD41: call    dword ptr [edx]
0x8CBD43: jmp     loc_8CBE4A
0x8CBD48: mov     eax, [ebp+arg_4]
0x8CBD4B: mov     ecx, ds:0BA7D98h
0x8CBD51: mov     ebx, [edi+50h]
0x8CBD54: push    2Bh ; '+'
0x8CBD56: cmp     eax, 7
0x8CBD59: mov     eax, [ecx]
0x8CBD5B: push    100h
0x8CBD60: jnz     short loc_8CBDB0
0x8CBD62: call    dword ptr [eax+10h]
0x8CBD65: mov     word ptr [eax+4], 100h
0x8CBD6B: mov     ecx, [edi+50h]
0x8CBD6E: lea     edx, [ecx+80h]
0x8CBD74: add     ecx, 40h ; '@'
0x8CBD77: push    edx
0x8CBD78: push    ecx
0x8CBD79: mov     ecx, eax
0x8CBD7B: call    sub_8EA030
0x8CBD80: mov     esi, eax
0x8CBD82: lea     eax, [ebx+10h]
0x8CBD85: lea     ecx, [esi+10h]
0x8CBD88: push    eax
0x8CBD89: call    sub_89DF00
0x8CBD8E: fld     dword ptr ds:0A2FAA8h
0x8CBD94: fld     dword ptr [esi+6Ch]
0x8CBD97: fucompp
0x8CBD99: fnstsw  ax
0x8CBD9B: test    ah, 44h
0x8CBD9E: jnp     short loc_8CBDD8
0x8CBDA0: mov     eax, [edi+8]
0x8CBDA3: test    eax, eax
0x8CBDA5: jz      short loc_8CBDF4
0x8CBDA7: mov     ecx, [eax+0Ch]
0x8CBDAA: mov     [esp+40h+var_34], ecx
0x8CBDAE: jmp     short loc_8CBE04
0x8CBDB0: call    dword ptr [eax+10h]
0x8CBDB3: mov     word ptr [eax+4], 100h
0x8CBDB9: mov     ecx, [edi+50h]
0x8CBDBC: lea     edx, [ecx+80h]
0x8CBDC2: add     ecx, 40h ; '@'
0x8CBDC5: push    edx
0x8CBDC6: push    ecx
0x8CBDC7: mov     ecx, eax
0x8CBDC9: call    sub_8EA140
0x8CBDCE: mov     esi, eax
0x8CBDD0: mov     eax, [ebx]
0x8CBDD2: push    esi
0x8CBDD3: mov     ecx, ebx
0x8CBDD5: call    dword ptr [eax+74h]
0x8CBDD8: mov     al, [ebp+arg_C]
0x8CBDDB: test    al, al
0x8CBDDD: jz      short loc_8CBE17
0x8CBDDF: mov     [esi+0F0h], ebx
0x8CBDE5: movzx   ecx, word ptr [edi+2Eh]
0x8CBDE9: mov     [esi+0F4h], ecx
0x8CBDEF: mov     [edi+50h], esi
0x8CBDF2: jmp     short loc_8CBE3A
0x8CBDF4: fld     dword ptr ds:0A2F948h
0x8CBDFA: fdiv    dword ptr [esi+6Ch]
0x8CBDFD: fadd    dword ptr [esi+5Ch]
0x8CBE00: fstp    [esp+40h+var_34]
0x8CBE04: mov     edx, [esp+40h+var_34]
0x8CBE08: lea     eax, [esi+10h]
0x8CBE0B: push    eax; int
0x8CBE0C: push    edx; float
0x8CBE0D: call    sub_8DD750
0x8CBE12: add     esp, 8
0x8CBE15: jmp     short loc_8CBDD8
0x8CBE17: mov     edx, [ebx+0F0h]
0x8CBE1D: mov     [esi+0F0h], edx
0x8CBE23: mov     eax, [ebx+0F4h]
0x8CBE29: mov     [esi+0F4h], eax
0x8CBE2F: mov     [edi+50h], esi
0x8CBE32: mov     edx, [ebx]
0x8CBE34: push    1
0x8CBE36: mov     ecx, ebx
0x8CBE38: call    dword ptr [edx]
0x8CBE3A: mov     edx, [ebp+arg_4]
0x8CBE3D: xor     eax, eax
0x8CBE3F: cmp     edx, 7
0x8CBE42: setnz   al
0x8CBE45: inc     eax
0x8CBE46: mov     [edi+2Eh], ax
0x8CBE4A: mov     ebx, [ebp+arg_4]
0x8CBE4D: mov     ecx, [edi+50h]
0x8CBE50: add     ecx, 10h
0x8CBE53: cmp     ebx, 7
0x8CBE56: setz    dl
0x8CBE59: cmp     ebx, 7
0x8CBE5C: mov     [edi+1Ch], ecx
0x8CBE5F: mov     [edi+91h], dl
0x8CBE65: jz      short loc_8CBE7B
0x8CBE67: cmp     ebx, 6
0x8CBE6A: jz      short loc_8CBE7B
0x8CBE6C: xor     al, al
0x8CBE6E: mov     [edi+92h], al
0x8CBE74: pop     edi
0x8CBE75: pop     esi
0x8CBE76: pop     ebx
0x8CBE77: mov     esp, ebp
0x8CBE79: pop     ebp
0x8CBE7A: retn
0x8CBE7B: mov     al, 1
0x8CBE7D: mov     [edi+92h], al
0x8CBE83: pop     edi
0x8CBE84: pop     esi
0x8CBE85: pop     ebx
0x8CBE86: mov     esp, ebp
0x8CBE88: pop     ebp
0x8CBE89: retn
