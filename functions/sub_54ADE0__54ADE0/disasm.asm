0x54ADE0: push    ebx
0x54ADE1: push    ebp
0x54ADE2: push    esi
0x54ADE3: xor     ebx, ebx
0x54ADE5: or      ebp, 0FFFFFFFFh
0x54ADE8: cmp     [esp+0Ch+arg_0], bl
0x54ADEC: push    edi
0x54ADED: mov     edi, ecx
0x54ADEF: jz      short loc_54AE3B
0x54ADF1: cmp     [edi+30h], ebx
0x54ADF4: jz      short loc_54AE3B
0x54ADF6: mov     eax, [edi+28h]
0x54ADF9: mov     ecx, [eax+8]
0x54ADFC: cmp     ecx, ebx
0x54ADFE: jz      short loc_54AE3B
0x54AE00: lea     esi, [edi+24h]
0x54AE03: mov     edx, [ecx]
0x54AE05: mov     eax, [edx]
0x54AE07: push    1
0x54AE09: call    eax
0x54AE0B: mov     ecx, [esi+4]
0x54AE0E: mov     eax, [ecx]
0x54AE10: cmp     eax, ebx
0x54AE12: mov     [esi+4], eax
0x54AE15: jz      short loc_54AE1C
0x54AE17: mov     [eax+4], ebx
0x54AE1A: jmp     short loc_54AE1F
0x54AE1C: mov     [esi+8], ebx
0x54AE1F: mov     edx, [esi]
0x54AE21: mov     eax, [edx+8]
0x54AE24: push    ecx
0x54AE25: mov     ecx, esi
0x54AE27: call    eax
0x54AE29: add     [esi+0Ch], ebp
0x54AE2C: cmp     [edi+30h], ebx
0x54AE2F: jz      short loc_54AE3B
0x54AE31: mov     ecx, [edi+28h]
0x54AE34: mov     ecx, [ecx+8]
0x54AE37: cmp     ecx, ebx
0x54AE39: jnz     short loc_54AE03
0x54AE3B: cmp     [esp+10h+arg_8], bl
0x54AE3F: jz      short loc_54AE9E
0x54AE41: cmp     [edi+8Ch], ebx
0x54AE47: jz      short loc_54AE9E
0x54AE49: mov     edx, [edi+84h]
0x54AE4F: mov     ecx, [edx+8]
0x54AE52: cmp     ecx, ebx
0x54AE54: jz      short loc_54AE9E
0x54AE56: lea     esi, [edi+80h]
0x54AE5C: lea     esp, [esp+0]
0x54AE60: mov     eax, [ecx]
0x54AE62: mov     edx, [eax]
0x54AE64: push    1
0x54AE66: call    edx
0x54AE68: mov     ecx, [esi+4]
0x54AE6B: mov     eax, [ecx]
0x54AE6D: cmp     eax, ebx
0x54AE6F: mov     [esi+4], eax
0x54AE72: jz      short loc_54AE79
0x54AE74: mov     [eax+4], ebx
0x54AE77: jmp     short loc_54AE7C
0x54AE79: mov     [esi+8], ebx
0x54AE7C: mov     eax, [esi]
0x54AE7E: mov     edx, [eax+8]
0x54AE81: push    ecx
0x54AE82: mov     ecx, esi
0x54AE84: call    edx
0x54AE86: add     [esi+0Ch], ebp
0x54AE89: cmp     [edi+8Ch], ebx
0x54AE8F: jz      short loc_54AE9E
0x54AE91: mov     eax, [edi+84h]
0x54AE97: mov     ecx, [eax+8]
0x54AE9A: cmp     ecx, ebx
0x54AE9C: jnz     short loc_54AE60
0x54AE9E: cmp     [esp+10h+arg_4], bl
0x54AEA2: jz      short loc_54AEFE
0x54AEA4: cmp     [edi+0E8h], ebx
0x54AEAA: jz      short loc_54AEFE
0x54AEAC: mov     ecx, [edi+0E0h]
0x54AEB2: mov     ecx, [ecx+8]
0x54AEB5: cmp     ecx, ebx
0x54AEB7: jz      short loc_54AEFE
0x54AEB9: lea     esi, [edi+0DCh]
0x54AEBF: nop
0x54AEC0: mov     edx, [ecx]
0x54AEC2: mov     eax, [edx]
0x54AEC4: push    1
0x54AEC6: call    eax
0x54AEC8: mov     ecx, [esi+4]
0x54AECB: mov     eax, [ecx]
0x54AECD: cmp     eax, ebx
0x54AECF: mov     [esi+4], eax
0x54AED2: jz      short loc_54AED9
0x54AED4: mov     [eax+4], ebx
0x54AED7: jmp     short loc_54AEDC
0x54AED9: mov     [esi+8], ebx
0x54AEDC: mov     edx, [esi]
0x54AEDE: mov     eax, [edx+8]
0x54AEE1: push    ecx
0x54AEE2: mov     ecx, esi
0x54AEE4: call    eax
0x54AEE6: add     [esi+0Ch], ebp
0x54AEE9: cmp     [edi+0E8h], ebx
0x54AEEF: jz      short loc_54AEFE
0x54AEF1: mov     ecx, [edi+0E0h]
0x54AEF7: mov     ecx, [ecx+8]
0x54AEFA: cmp     ecx, ebx
0x54AEFC: jnz     short loc_54AEC0
0x54AEFE: cmp     [esp+10h+arg_C], bl
0x54AF02: jz      short loc_54AF5E
0x54AF04: cmp     [edi+144h], ebx
0x54AF0A: jz      short loc_54AF5E
0x54AF0C: mov     edx, [edi+13Ch]
0x54AF12: mov     ecx, [edx+8]
0x54AF15: cmp     ecx, ebx
0x54AF17: jz      short loc_54AF5E
0x54AF19: lea     esi, [edi+138h]
0x54AF1F: nop
0x54AF20: mov     eax, [ecx]
0x54AF22: mov     edx, [eax]
0x54AF24: push    1
0x54AF26: call    edx
0x54AF28: mov     ecx, [esi+4]
0x54AF2B: mov     eax, [ecx]
0x54AF2D: cmp     eax, ebx
0x54AF2F: mov     [esi+4], eax
0x54AF32: jz      short loc_54AF39
0x54AF34: mov     [eax+4], ebx
0x54AF37: jmp     short loc_54AF3C
0x54AF39: mov     [esi+8], ebx
0x54AF3C: mov     eax, [esi]
0x54AF3E: mov     edx, [eax+8]
0x54AF41: push    ecx
0x54AF42: mov     ecx, esi
0x54AF44: call    edx
0x54AF46: add     [esi+0Ch], ebp
0x54AF49: cmp     [edi+144h], ebx
0x54AF4F: jz      short loc_54AF5E
0x54AF51: mov     eax, [edi+13Ch]
0x54AF57: mov     ecx, [eax+8]
0x54AF5A: cmp     ecx, ebx
0x54AF5C: jnz     short loc_54AF20
0x54AF5E: pop     edi
0x54AF5F: pop     esi
0x54AF60: pop     ebp
0x54AF61: pop     ebx
0x54AF62: retn    10h
