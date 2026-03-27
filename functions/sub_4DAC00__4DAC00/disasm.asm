0x4DAC00: mov     eax, [esp+arg_4]
0x4DAC04: push    ebx
0x4DAC05: push    ebp
0x4DAC06: mov     ebp, [esp+8+arg_0]
0x4DAC0A: test    ebp, ebp
0x4DAC0C: push    esi
0x4DAC0D: push    edi
0x4DAC0E: mov     edi, [eax+0Ch]
0x4DAC11: mov     [esp+10h+arg_4], edi
0x4DAC15: jz      short loc_4DAC38
0x4DAC17: mov     edx, [ebp+0]
0x4DAC1A: mov     eax, [edx+4]
0x4DAC1D: mov     ecx, ebp
0x4DAC1F: call    eax
0x4DAC21: test    eax, eax
0x4DAC23: jz      short loc_4DAC38
0x4DAC25: cmp     eax, offset unk_B365AC
0x4DAC2A: jz      short loc_4DAC35
0x4DAC2C: mov     eax, [eax+4]
0x4DAC2F: test    eax, eax
0x4DAC31: jnz     short loc_4DAC25
0x4DAC33: jmp     short loc_4DAC38
0x4DAC35: or      byte ptr [edi], 8
0x4DAC38: mov     ecx, ebp
0x4DAC3A: call    sub_452A60
0x4DAC3F: cmp     ebp, [edi+10h]
0x4DAC42: mov     ebx, eax
0x4DAC44: jz      short loc_4DAC65
0x4DAC46: test    ebx, ebx
0x4DAC48: jz      short loc_4DAC65
0x4DAC4A: mov     esi, [ebx+8]
0x4DAC4D: test    esi, esi
0x4DAC4F: jz      short loc_4DAC65
0x4DAC51: mov     edi, offset aArrow; "Arrow"
0x4DAC56: mov     ecx, 6
0x4DAC5B: xor     edx, edx
0x4DAC5D: repe cmpsb
0x4DAC5F: jz      short loc_4DACE0
0x4DAC61: mov     edi, [esp+10h+arg_4]
0x4DAC65: mov     ecx, [edi+8]
0x4DAC68: mov     eax, [ecx]
0x4DAC6A: mov     edx, [eax+190h]
0x4DAC70: call    edx
0x4DAC72: test    al, al
0x4DAC74: jz      short loc_4DAC95
0x4DAC76: test    ebx, ebx
0x4DAC78: jz      short loc_4DAC95
0x4DAC7A: mov     eax, [ebx]
0x4DAC7C: mov     edx, [eax+4]
0x4DAC7F: mov     ecx, ebx
0x4DAC81: call    edx
0x4DAC83: test    eax, eax
0x4DAC85: jz      short loc_4DAC95
0x4DAC87: cmp     eax, offset dword_B35288
0x4DAC8C: jz      short loc_4DACE0
0x4DAC8E: mov     eax, [eax+4]
0x4DAC91: test    eax, eax
0x4DAC93: jnz     short loc_4DAC87
0x4DAC95: mov     eax, [ebp+10h]
0x4DAC98: test    eax, eax
0x4DAC9A: jz      short loc_4DACE0
0x4DAC9C: push    eax
0x4DAC9D: push    offset dword_BA7D84
0x4DACA2: call    NiRTTI_Cast
0x4DACA7: add     esp, 8
0x4DACAA: test    eax, eax
0x4DACAC: jz      short loc_4DACE0
0x4DACAE: cmp     ebp, [edi+10h]
0x4DACB1: jnz     short loc_4DACB6
0x4DACB3: or      byte ptr [edi], 2
0x4DACB6: mov     ecx, [eax+8]
0x4DACB9: test    ecx, ecx
0x4DACBB: jz      short loc_4DACDB
0x4DACBD: lea     eax, [esp+10h+arg_4]
0x4DACC1: push    eax
0x4DACC2: call    sub_8A63F0
0x4DACC7: cmp     byte ptr [eax], 0
0x4DACCA: setnz   al
0x4DACCD: test    al, al
0x4DACCF: jz      short loc_4DACDB
0x4DACD1: add     word ptr [edi+2], 1
0x4DACD6: pop     edi
0x4DACD7: pop     esi
0x4DACD8: pop     ebp
0x4DACD9: pop     ebx
0x4DACDA: retn
0x4DACDB: add     word ptr [edi+4], 1
0x4DACE0: pop     edi
0x4DACE1: pop     esi
0x4DACE2: pop     ebp
0x4DACE3: pop     ebx
0x4DACE4: retn
