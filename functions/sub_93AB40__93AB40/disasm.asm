0x93AB40: push    ecx
0x93AB41: push    ebx
0x93AB42: push    ebp
0x93AB43: push    esi
0x93AB44: mov     esi, [esp+10h+arg_0]
0x93AB48: cmp     byte ptr [esi+2], 4
0x93AB4C: push    edi
0x93AB4D: mov     [esp+14h+var_4], 4
0x93AB55: jnz     loc_93AC51
0x93AB5B: mov     ecx, [esp+14h+arg_18]
0x93AB5F: call    sub_93A7A0
0x93AB64: mov     edi, eax
0x93AB66: cmp     edi, 4
0x93AB69: jz      loc_93AD1A
0x93AB6F: mov     ebx, [esp+14h+arg_1C]
0x93AB73: mov     eax, [ebx]
0x93AB75: xor     ecx, ecx
0x93AB77: mov     cx, [esi+edi*8+6]
0x93AB7C: push    ecx
0x93AB7D: mov     ecx, ebx
0x93AB7F: call    dword ptr [eax+10h]
0x93AB82: test    edi, edi
0x93AB84: jz      short loc_93AB96
0x93AB86: mov     edx, [esi+4]
0x93AB89: mov     [esi+edi*8+4], edx
0x93AB8D: mov     eax, [esi+8]
0x93AB90: mov     [esi+edi*8+8], eax
0x93AB94: jmp     short loc_93ABA4
0x93AB96: mov     ecx, [esi+0Ch]
0x93AB99: mov     [esi+edi*8+4], ecx
0x93AB9D: mov     edx, [esi+10h]
0x93ABA0: mov     [esi+edi*8+8], edx
0x93ABA4: mov     ecx, esi
0x93ABA6: call    sub_9399E0
0x93ABAB: mov     ebp, [esp+14h+arg_14]
0x93ABAF: mov     ecx, [esp+14h+arg_C]
0x93ABB3: mov     edx, [esp+14h+arg_8]
0x93ABB7: mov     eax, [ebx]
0x93ABB9: push    ebp
0x93ABBA: push    ecx
0x93ABBB: mov     ecx, [esp+1Ch+arg_4]
0x93ABBF: push    edx
0x93ABC0: push    ecx
0x93ABC1: mov     ecx, ebx
0x93ABC3: call    dword ptr [eax+8]
0x93ABC6: mov     ebx, eax
0x93ABC8: cmp     bx, 0FFFFh
0x93ABCD: jnz     short loc_93AC31
0x93ABCF: mov     eax, [esi+20h]
0x93ABD2: mov     edx, [esi+1Ch]
0x93ABD5: mov     [esi+8], eax
0x93ABD8: mov     al, [esi+2]
0x93ABDB: dec     al
0x93ABDD: movzx   ecx, al
0x93ABE0: mov     [esi+2], al
0x93ABE3: lea     eax, [esi+ecx*8]
0x93ABE6: mov     [esi+4], edx
0x93ABE9: lea     ecx, [eax+4]
0x93ABEC: lea     edx, [eax+0Ch]
0x93ABEF: movzx   eax, byte ptr [esi+1]
0x93ABF3: movzx   esi, byte ptr [esi]
0x93ABF6: lea     eax, [eax+esi-1]
0x93ABFA: sar     eax, 1
0x93ABFC: test    eax, eax
0x93ABFE: jl      short loc_93AC0E
0x93AC00: inc     eax
0x93AC01: mov     esi, [edx]
0x93AC03: mov     [ecx], esi
0x93AC05: add     ecx, 4
0x93AC08: add     edx, 4
0x93AC0B: dec     eax
0x93AC0C: jnz     short loc_93AC01
0x93AC0E: mov     eax, [esp+14h+arg_18]
0x93AC12: lea     ecx, [eax+90h]
0x93AC18: push    ecx
0x93AC19: lea     ecx, [edi+edi*2]
0x93AC1C: shl     ecx, 4
0x93AC1F: add     ecx, eax
0x93AC21: call    sub_934050
0x93AC26: pop     edi
0x93AC27: pop     esi
0x93AC28: pop     ebp
0x93AC29: mov     eax, 6
0x93AC2E: pop     ebx
0x93AC2F: pop     ecx
0x93AC30: retn
0x93AC31: mov     eax, [esp+14h+arg_18]
0x93AC35: lea     ecx, [edi+edi*2]
0x93AC38: shl     ecx, 4
0x93AC3B: push    ebp
0x93AC3C: add     ecx, eax
0x93AC3E: mov     [ebp+20h], bx
0x93AC42: call    sub_934050
0x93AC47: mov     [esp+14h+var_4], edi
0x93AC4B: mov     edi, [esp+14h+arg_10]
0x93AC4F: jmp     short loc_93ACC2
0x93AC51: mov     eax, [esp+14h+arg_20]
0x93AC55: test    eax, eax
0x93AC57: mov     ebp, [esp+14h+arg_14]
0x93AC5B: mov     edi, [esp+14h+arg_10]
0x93AC5F: jz      loc_93ACF4
0x93AC65: cmp     byte ptr [edi+9], 3
0x93AC69: jz      loc_93ACF4
0x93AC6F: mov     ebx, 0FFFFh
0x93AC74: mov     [ebp+20h], bx
0x93AC78: movzx   ecx, byte ptr [esi+1]
0x93AC7C: movzx   edx, byte ptr [esi]
0x93AC7F: lea     eax, [ecx+edx-1]
0x93AC83: movzx   ecx, byte ptr [esi+2]
0x93AC87: sar     eax, 1
0x93AC89: test    eax, eax
0x93AC8B: lea     ecx, [eax+ecx*2]
0x93AC8E: lea     edx, [esi+ecx*4+0Ch]
0x93AC92: lea     ecx, [esi+ecx*4+4]
0x93AC96: jl      short loc_93ACAD
0x93AC98: inc     eax
0x93AC99: lea     esp, [esp+0]
0x93ACA0: mov     ebp, [ecx]
0x93ACA2: mov     [edx], ebp
0x93ACA4: sub     edx, 4
0x93ACA7: sub     ecx, 4
0x93ACAA: dec     eax
0x93ACAB: jnz     short loc_93ACA0
0x93ACAD: movzx   edx, byte ptr [esi+2]
0x93ACB1: mov     eax, [esi+4]
0x93ACB4: mov     [esi+edx*8+4], eax
0x93ACB8: mov     ecx, [esi+8]
0x93ACBB: mov     [esi+edx*8+8], ecx
0x93ACBF: inc     byte ptr [esi+2]
0x93ACC2: mov     dl, [edi+8]
0x93ACC5: mov     [esi+4], dl
0x93ACC8: mov     al, [edi+9]
0x93ACCB: mov     [esi+6], bx
0x93ACCF: mov     [esi+5], al
0x93ACD2: mov     dword ptr [esi+8], 0
0x93ACD9: movzx   ecx, byte ptr [esi+2]
0x93ACDD: mov     al, [edi+8]
0x93ACE0: xor     ebx, ebx
0x93ACE2: test    al, al
0x93ACE4: lea     ebp, [esi+ecx*8+4]
0x93ACE8: mov     [esp+14h+arg_0], ebx
0x93ACEC: jle     loc_93ADEC
0x93ACF2: jmp     short loc_93AD30
0x93ACF4: mov     eax, [esp+14h+arg_C]
0x93ACF8: mov     ecx, [esp+14h+arg_1C]
0x93ACFC: mov     edx, [ecx]
0x93ACFE: push    ebp
0x93ACFF: push    eax
0x93AD00: mov     eax, [esp+1Ch+arg_8]
0x93AD04: push    eax
0x93AD05: mov     eax, [esp+20h+arg_4]
0x93AD09: push    eax
0x93AD0A: call    dword ptr [edx+8]
0x93AD0D: mov     ebx, eax
0x93AD0F: cmp     bx, 0FFFFh
0x93AD14: jnz     loc_93AC74
0x93AD1A: pop     edi
0x93AD1B: pop     esi
0x93AD1C: pop     ebp
0x93AD1D: mov     eax, 5
0x93AD22: pop     ebx
0x93AD23: pop     ecx
0x93AD24: retn
0x93AD25: mov     edi, [esp+14h+arg_10]
0x93AD29: lea     esp, [esp+0]
0x93AD30: movzx   edx, byte ptr [esi]
0x93AD33: mov     di, [edi+ebx*2]
0x93AD37: xor     eax, eax
0x93AD39: test    edx, edx
0x93AD3B: jle     short loc_93AD4F
0x93AD3D: lea     ecx, [ecx+0]
0x93AD40: cmp     [ebp+eax*2+0], di
0x93AD45: jz      short loc_93AD85
0x93AD47: movzx   ecx, byte ptr [esi]
0x93AD4A: inc     eax
0x93AD4B: cmp     eax, ecx
0x93AD4D: jl      short loc_93AD40
0x93AD4F: movzx   ecx, byte ptr [esi+1]
0x93AD53: add     ecx, edx
0x93AD55: cmp     ecx, eax
0x93AD57: jle     short loc_93AD6F
0x93AD59: lea     esp, [esp+0]
0x93AD60: mov     dx, [ebp+ecx*2-2]
0x93AD65: mov     [ebp+ecx*2+0], dx
0x93AD6A: dec     ecx
0x93AD6B: cmp     ecx, eax
0x93AD6D: jg      short loc_93AD60
0x93AD6F: mov     ecx, [esp+14h+arg_0]
0x93AD73: mov     [ebp+eax*2+0], di
0x93AD78: mov     dl, [esi]
0x93AD7A: inc     dl
0x93AD7C: add     ecx, 10h
0x93AD7F: mov     [esi], dl
0x93AD81: mov     [esp+14h+arg_0], ecx
0x93AD85: shl     al, 4
0x93AD88: mov     [esi+ebx+8], al
0x93AD8C: mov     eax, [esp+14h+arg_10]
0x93AD90: movsx   ecx, byte ptr [eax+8]
0x93AD94: inc     ebx
0x93AD95: cmp     ebx, ecx
0x93AD97: jl      short loc_93AD25
0x93AD99: mov     eax, [esp+14h+arg_0]
0x93AD9D: test    eax, eax
0x93AD9F: jz      short loc_93ADE8
0x93ADA1: cmp     byte ptr [esi+2], 1
0x93ADA5: lea     eax, [esi+0Ch]
0x93ADA8: mov     edi, 1
0x93ADAD: jbe     short loc_93ADE8
0x93ADAF: nop
0x93ADB0: movzx   ecx, byte ptr [eax]
0x93ADB3: movzx   edx, byte ptr [eax+1]
0x93ADB7: add     edx, ecx
0x93ADB9: cmp     ecx, edx
0x93ADBB: jge     short loc_93ADDC
0x93ADBD: lea     ecx, [ecx+0]
0x93ADC0: mov     bl, [eax+ecx+4]
0x93ADC4: mov     dl, byte ptr [esp+14h+arg_0]
0x93ADC8: add     bl, dl
0x93ADCA: mov     [eax+ecx+4], bl
0x93ADCE: movzx   edx, byte ptr [eax+1]
0x93ADD2: movzx   ebx, byte ptr [eax]
0x93ADD5: inc     ecx
0x93ADD6: add     edx, ebx
0x93ADD8: cmp     ecx, edx
0x93ADDA: jl      short loc_93ADC0
0x93ADDC: movzx   ecx, byte ptr [esi+2]
0x93ADE0: add     eax, 8
0x93ADE3: inc     edi
0x93ADE4: cmp     edi, ecx
0x93ADE6: jl      short loc_93ADB0
0x93ADE8: mov     edi, [esp+14h+arg_10]
0x93ADEC: mov     al, [edi+9]
0x93ADEF: xor     ebx, ebx
0x93ADF1: test    al, al
0x93ADF3: jle     short loc_93AE3A
0x93ADF5: movzx   eax, byte ptr [esi]
0x93ADF8: movzx   ecx, byte ptr [esi+1]
0x93ADFC: movsx   edx, byte ptr [edi+8]
0x93AE00: add     edx, ebx
0x93AE02: mov     dx, [edi+edx*2]
0x93AE06: add     ecx, eax
0x93AE08: cmp     eax, ecx
0x93AE0A: jge     short loc_93AE1C
0x93AE0C: lea     esp, [esp+0]
0x93AE10: cmp     [ebp+eax*2+0], dx
0x93AE15: jz      short loc_93AE24
0x93AE17: inc     eax
0x93AE18: cmp     eax, ecx
0x93AE1A: jl      short loc_93AE10
0x93AE1C: mov     [ebp+eax*2+0], dx
0x93AE21: inc     byte ptr [esi+1]
0x93AE24: movsx   ecx, byte ptr [edi+8]
0x93AE28: shl     al, 4
0x93AE2B: add     ecx, ebx
0x93AE2D: mov     [ecx+esi+8], al
0x93AE31: movsx   edx, byte ptr [edi+9]
0x93AE35: inc     ebx
0x93AE36: cmp     ebx, edx
0x93AE38: jl      short loc_93ADF5
0x93AE3A: mov     eax, [esp+14h+var_4]
0x93AE3E: pop     edi
0x93AE3F: pop     esi
0x93AE40: pop     ebp
0x93AE41: pop     ebx
0x93AE42: pop     ecx
0x93AE43: retn
