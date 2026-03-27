0x7ADCD8: mov     eax, [esp+arg_30]
0x7ADCDC: xor     edi, edi
0x7ADCDE: cmp     eax, edi
0x7ADCE0: jz      loc_7ADDE7
0x7ADCE6: test    byte ptr [eax+18h], 1
0x7ADCEA: jz      loc_7ADDE7
0x7ADCF0: cmp     byte ptr [ebx+21E0h], 0
0x7ADCF7: jz      loc_7ADE41
0x7ADCFD: mov     eax, [esp+arg_18]
0x7ADD01: mov     ecx, [eax+1Ch]
0x7ADD04: test    ecx, 100h
0x7ADD0A: ja      short loc_7ADD1C
0x7ADD0C: fld1
0x7ADD0E: fcomp   dword ptr [eax+20h]
0x7ADD11: fnstsw  ax
0x7ADD13: test    ah, 41h
0x7ADD16: jnz     loc_7ADDE7
0x7ADD1C: cmp     word ptr ds:0B42EACh, 5
0x7ADD24: jz      loc_7ADDE7
0x7ADD2A: cmp     si, 156h
0x7ADD2F: jb      short loc_7ADD3C
0x7ADD31: cmp     si, 15Ah
0x7ADD36: jbe     loc_7ADDE7
0x7ADD3C: cmp     si, 160h
0x7ADD41: jb      short loc_7ADD4E
0x7ADD43: cmp     si, 164h
0x7ADD48: jbe     loc_7ADDE7
0x7ADD4E: cmp     [ebx+5Ch], edi
0x7ADD51: jle     short loc_7ADD74
0x7ADD53: mov     eax, [ebx+60h]
0x7ADD56: cmp     eax, edi
0x7ADD58: jz      short loc_7ADD74
0x7ADD5A: test    ecx, 200h
0x7ADD60: jbe     short loc_7ADD74
0x7ADD62: push    ebp
0x7ADD63: push    eax
0x7ADD64: mov     ecx, ebx
0x7ADD66: call    sub_7AD1C0
0x7ADD6B: cmp     [esp+arg_10], edi
0x7ADD6F: jmp     loc_7ADC08
0x7ADD74: lea     eax, [esp+arg_14]
0x7ADD78: push    eax
0x7ADD79: lea     ecx, [ebx+21C0h]
0x7ADD7F: call    sub_5B1E20
0x7ADD84: cmp     byte ptr ds:0B42CE3h, 0
0x7ADD8B: jnz     short loc_7ADDD5
0x7ADD8D: cmp     byte ptr ds:0B42CE1h, 0
0x7ADD94: jz      short loc_7ADDC0
0x7ADD96: mov     ecx, [ebp+0]
0x7ADD99: fld     dword ptr [ecx+28h]
0x7ADD9C: fild    dword ptr ds:0B42CE4h
0x7ADDA2: fcompp
0x7ADDA4: fnstsw  ax
0x7ADDA6: test    ah, 41h
0x7ADDA9: jnz     short loc_7ADDC0
0x7ADDAB: push    ebp
0x7ADDAC: lea     ecx, [ebx+2254h]
0x7ADDB2: call    sub_5B1E20
0x7ADDB7: cmp     [esp+arg_10], edi
0x7ADDBB: jmp     loc_7ADC08
0x7ADDC0: push    ebp
0x7ADDC1: lea     ecx, [ebx+2244h]
0x7ADDC7: call    sub_5B1E20
0x7ADDCC: cmp     [esp+arg_10], edi
0x7ADDD0: jmp     loc_7ADC08
0x7ADDD5: push    ebp
0x7ADDD6: lea     ecx, [ebx+0Ch]
0x7ADDD9: call    sub_5B1E20
0x7ADDDE: cmp     [esp+arg_10], edi
0x7ADDE2: jmp     loc_7ADC08
0x7ADDE7: cmp     byte ptr [ebx+21E0h], 0
0x7ADDEE: jz      short loc_7ADE41
0x7ADDF0: cmp     [esp+arg_F], 0
0x7ADDF5: jz      short loc_7ADE1B
0x7ADDF7: mov     eax, [ebx+40h]
0x7ADDFA: cmp     [eax+8], edi
0x7ADDFD: jz      short loc_7ADE1B
0x7ADDFF: mov     edx, [eax+8]
0x7ADE02: push    ebp
0x7ADE03: push    edx
0x7ADE04: mov     ecx, ebx
0x7ADE06: call    sub_7AD1C0
0x7ADE0B: add     dword ptr ds:0B42CB0h, 10h
0x7ADE12: cmp     [esp+arg_10], edi
0x7ADE16: jmp     loc_7ADC08
0x7ADE1B: lea     eax, [esp+arg_14]
0x7ADE1F: push    eax
0x7ADE20: movzx   eax, si
0x7ADE23: add     eax, 0Dh
0x7ADE26: lea     ecx, [eax+eax*4]
0x7ADE29: lea     ecx, [ebx+ecx*4]
0x7ADE2C: call    sub_7ABDE0
0x7ADE31: add     dword ptr ds:0B42CB0h, 10h
0x7ADE38: cmp     [esp+arg_10], edi
0x7ADE3C: jmp     loc_7ADC08
0x7ADE41: cmp     word ptr ds:0B42EACh, 6
0x7ADE49: jz      loc_7ADEE8
0x7ADE4F: cmp     byte ptr ds:0B2BB7Ch, 0
0x7ADE56: jz      short loc_7ADEA5
0x7ADE58: movzx   eax, word ptr [ebp+4]
0x7ADE5C: cmp     ax, 195h
0x7ADE60: jnz     short loc_7ADE82
0x7ADE62: lea     edx, [esp+arg_14]
0x7ADE66: push    edx
0x7ADE67: lea     ecx, [ebx+90h]
0x7ADE6D: call    sub_7ABDE0
0x7ADE72: add     dword ptr ds:0B42CB0h, 10h
0x7ADE79: cmp     [esp+arg_10], edi
0x7ADE7D: jmp     loc_7ADC08
0x7ADE82: cmp     ax, 76h ; 'v'
0x7ADE86: jnz     short loc_7ADEA5
0x7ADE88: lea     eax, [esp+arg_14]
0x7ADE8C: push    eax
0x7ADE8D: lea     ecx, [ebx+7Ch]
0x7ADE90: call    sub_7ABDE0
0x7ADE95: add     dword ptr ds:0B42CB0h, 10h
0x7ADE9C: cmp     [esp+arg_10], edi
0x7ADEA0: jmp     loc_7ADC08
0x7ADEA5: cmp     [ebx+78h], edi
0x7ADEA8: jnz     short loc_7ADEDB
0x7ADEAA: push    18h; Size
0x7ADEAC: call    FormHeapAlloc
0x7ADEB1: add     esp, 4
0x7ADEB4: cmp     eax, edi
0x7ADEB6: jz      short loc_7ADEC9
0x7ADEB8: mov     dword ptr [eax], offset ??_7?$BSTPersistentList@V?$NiTPointerAllocator@I@@PAVRenderPass@BSShaderProperty@@@@6B@; const BSTPersistentList<NiTPointerAllocator<uint>,BSShaderProperty::RenderPass *>::`vftable'
0x7ADEBE: mov     [eax+4], edi
0x7ADEC1: mov     [eax+8], edi
0x7ADEC4: mov     [eax+0Ch], edi
0x7ADEC7: jmp     short loc_7ADECB
0x7ADEC9: xor     eax, eax
0x7ADECB: fldz
0x7ADECD: mov     [ebx+78h], eax
0x7ADED0: fstp    dword ptr [eax+14h]
0x7ADED3: mov     ecx, [ebx+78h]
0x7ADED6: call    sub_7AA6C0
0x7ADEDB: lea     ecx, [esp+arg_14]
0x7ADEDF: push    ecx
0x7ADEE0: mov     ecx, [ebx+78h]
0x7ADEE3: call    sub_7ABDE0
0x7ADEE8: add     dword ptr ds:0B42CB0h, 10h
0x7ADEEF: cmp     [esp+arg_10], edi
0x7ADEF3: jmp     loc_7ADC08
