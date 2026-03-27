0x54ACA0: push    ebx
0x54ACA1: push    ebp
0x54ACA2: push    esi
0x54ACA3: xor     ebx, ebx
0x54ACA5: cmp     [esp+0Ch+arg_0], bl
0x54ACA9: push    edi
0x54ACAA: mov     edi, ecx
0x54ACAC: jz      short loc_54ACB8
0x54ACAE: mov     eax, [edi]
0x54ACB0: mov     edx, [eax+0D4h]
0x54ACB6: call    edx
0x54ACB8: or      ebp, 0FFFFFFFFh
0x54ACBB: cmp     [esp+10h+arg_8], bl
0x54ACBF: jz      short loc_54AD0B
0x54ACC1: cmp     [edi+68h], ebx
0x54ACC4: jz      short loc_54AD0B
0x54ACC6: mov     eax, [edi+60h]
0x54ACC9: mov     ecx, [eax+8]
0x54ACCC: cmp     ecx, ebx
0x54ACCE: jz      short loc_54AD0B
0x54ACD0: lea     esi, [edi+5Ch]
0x54ACD3: mov     edx, [ecx]
0x54ACD5: mov     eax, [edx]
0x54ACD7: push    1
0x54ACD9: call    eax
0x54ACDB: mov     ecx, [esi+4]
0x54ACDE: mov     eax, [ecx]
0x54ACE0: cmp     eax, ebx
0x54ACE2: mov     [esi+4], eax
0x54ACE5: jz      short loc_54ACEC
0x54ACE7: mov     [eax+4], ebx
0x54ACEA: jmp     short loc_54ACEF
0x54ACEC: mov     [esi+8], ebx
0x54ACEF: mov     edx, [esi]
0x54ACF1: mov     eax, [edx+8]
0x54ACF4: push    ecx
0x54ACF5: mov     ecx, esi
0x54ACF7: call    eax
0x54ACF9: add     [esi+0Ch], ebp
0x54ACFC: cmp     [edi+68h], ebx
0x54ACFF: jz      short loc_54AD0B
0x54AD01: mov     ecx, [edi+60h]
0x54AD04: mov     ecx, [ecx+8]
0x54AD07: cmp     ecx, ebx
0x54AD09: jnz     short loc_54ACD3
0x54AD0B: cmp     [esp+10h+arg_4], bl
0x54AD0F: jz      short loc_54AD6E
0x54AD11: cmp     [edi+0C4h], ebx
0x54AD17: jz      short loc_54AD6E
0x54AD19: mov     edx, [edi+0BCh]
0x54AD1F: mov     ecx, [edx+8]
0x54AD22: cmp     ecx, ebx
0x54AD24: jz      short loc_54AD6E
0x54AD26: lea     esi, [edi+0B8h]
0x54AD2C: lea     esp, [esp+0]
0x54AD30: mov     eax, [ecx]
0x54AD32: mov     edx, [eax]
0x54AD34: push    1
0x54AD36: call    edx
0x54AD38: mov     ecx, [esi+4]
0x54AD3B: mov     eax, [ecx]
0x54AD3D: cmp     eax, ebx
0x54AD3F: mov     [esi+4], eax
0x54AD42: jz      short loc_54AD49
0x54AD44: mov     [eax+4], ebx
0x54AD47: jmp     short loc_54AD4C
0x54AD49: mov     [esi+8], ebx
0x54AD4C: mov     eax, [esi]
0x54AD4E: mov     edx, [eax+8]
0x54AD51: push    ecx
0x54AD52: mov     ecx, esi
0x54AD54: call    edx
0x54AD56: add     [esi+0Ch], ebp
0x54AD59: cmp     [edi+0C4h], ebx
0x54AD5F: jz      short loc_54AD6E
0x54AD61: mov     eax, [edi+0BCh]
0x54AD67: mov     ecx, [eax+8]
0x54AD6A: cmp     ecx, ebx
0x54AD6C: jnz     short loc_54AD30
0x54AD6E: cmp     [esp+10h+arg_C], bl
0x54AD72: jz      short loc_54ADCE
0x54AD74: cmp     [edi+120h], ebx
0x54AD7A: jz      short loc_54ADCE
0x54AD7C: mov     ecx, [edi+118h]
0x54AD82: mov     ecx, [ecx+8]
0x54AD85: cmp     ecx, ebx
0x54AD87: jz      short loc_54ADCE
0x54AD89: lea     esi, [edi+114h]
0x54AD8F: nop
0x54AD90: mov     edx, [ecx]
0x54AD92: mov     eax, [edx]
0x54AD94: push    1
0x54AD96: call    eax
0x54AD98: mov     ecx, [esi+4]
0x54AD9B: mov     eax, [ecx]
0x54AD9D: cmp     eax, ebx
0x54AD9F: mov     [esi+4], eax
0x54ADA2: jz      short loc_54ADA9
0x54ADA4: mov     [eax+4], ebx
0x54ADA7: jmp     short loc_54ADAC
0x54ADA9: mov     [esi+8], ebx
0x54ADAC: mov     edx, [esi]
0x54ADAE: mov     eax, [edx+8]
0x54ADB1: push    ecx
0x54ADB2: mov     ecx, esi
0x54ADB4: call    eax
0x54ADB6: add     [esi+0Ch], ebp
0x54ADB9: cmp     [edi+120h], ebx
0x54ADBF: jz      short loc_54ADCE
0x54ADC1: mov     ecx, [edi+118h]
0x54ADC7: mov     ecx, [ecx+8]
0x54ADCA: cmp     ecx, ebx
0x54ADCC: jnz     short loc_54AD90
0x54ADCE: pop     edi
0x54ADCF: pop     esi
0x54ADD0: pop     ebp
0x54ADD1: pop     ebx
0x54ADD2: retn    10h
