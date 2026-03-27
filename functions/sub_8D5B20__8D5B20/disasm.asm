0x8D5B20: sub     esp, 10h
0x8D5B23: push    ebx
0x8D5B24: mov     ebx, ds:0BA9DE4h
0x8D5B2A: push    ebp
0x8D5B2B: push    esi
0x8D5B2C: push    edi
0x8D5B2D: mov     edi, large fs:2Ch
0x8D5B34: mov     eax, [edi+ebx*4]
0x8D5B37: mov     edx, [eax+1A8h]
0x8D5B3D: mov     [esp+20h+var_10], ecx
0x8D5B41: mov     ecx, [eax+1A4h]
0x8D5B47: cmp     ecx, edx
0x8D5B49: jnb     short loc_8D5B6F
0x8D5B4B: mov     esi, eax
0x8D5B4D: mov     ecx, [esi+1A4h]
0x8D5B53: mov     dword ptr [ecx], offset aTtcollide; "TtCollide"
0x8D5B59: rdtsc
0x8D5B5B: mov     [esp+20h+var_C], eax
0x8D5B5F: mov     edx, [esp+20h+var_C]
0x8D5B63: mov     [ecx+4], edx
0x8D5B66: add     ecx, 0Ch
0x8D5B69: mov     [esi+1A4h], ecx
0x8D5B6F: mov     esi, [esp+20h+arg_0]
0x8D5B73: mov     eax, [esp+20h+arg_4]
0x8D5B77: mov     edx, eax
0x8D5B79: mov     ebp, [edx]
0x8D5B7B: lea     ecx, [esi+160h]
0x8D5B81: mov     [ecx], ebp
0x8D5B83: mov     ebp, [edx+4]
0x8D5B86: mov     [ecx+4], ebp
0x8D5B89: mov     ebp, [edx+8]
0x8D5B8C: mov     [ecx+8], ebp
0x8D5B8F: mov     edx, [edx+0Ch]
0x8D5B92: mov     [ecx+0Ch], edx
0x8D5B95: mov     ecx, [esi+74h]
0x8D5B98: add     ecx, 10h
0x8D5B9B: mov     edx, eax
0x8D5B9D: mov     ebp, [edx]
0x8D5B9F: mov     [ecx], ebp
0x8D5BA1: mov     ebp, [edx+4]
0x8D5BA4: mov     [ecx+4], ebp
0x8D5BA7: mov     ebp, [edx+8]
0x8D5BAA: mov     [ecx+8], ebp
0x8D5BAD: mov     edx, [edx+0Ch]
0x8D5BB0: mov     [ecx+0Ch], edx
0x8D5BB3: fld     dword ptr [esi+270h]
0x8D5BB9: fmul    dword ptr [eax+8]
0x8D5BBC: xor     ebp, ebp
0x8D5BBE: fstp    dword ptr [esi+264h]
0x8D5BC4: fild    dword ptr [esi+26Ch]
0x8D5BCA: fmul    dword ptr [eax+0Ch]
0x8D5BCD: fstp    dword ptr [esi+268h]
0x8D5BD3: mov     ecx, [esi+88h]
0x8D5BD9: mov     eax, [esi+3Ch]
0x8D5BDC: inc     ecx
0x8D5BDD: test    eax, eax
0x8D5BDF: mov     [esi+88h], ecx
0x8D5BE5: jle     short loc_8D5C18
0x8D5BE7: mov     eax, [esi+38h]
0x8D5BEA: mov     eax, [eax+ebp*4]
0x8D5BED: mov     ecx, [eax+38h]
0x8D5BF0: mov     edx, [eax+34h]
0x8D5BF3: push    0; lpCriticalSection
0x8D5BF5: push    esi; int
0x8D5BF6: push    ecx; int
0x8D5BF7: mov     ecx, [esp+2Ch+var_10]
0x8D5BFB: push    edx; int
0x8D5BFC: call    sub_8D4590
0x8D5C01: mov     eax, ds:0BA7D98h
0x8D5C06: cmp     dword ptr [eax+4], 1
0x8D5C0A: jz      loc_8D5E0E
0x8D5C10: mov     eax, [esi+3Ch]
0x8D5C13: inc     ebp
0x8D5C14: cmp     ebp, eax
0x8D5C16: jl      short loc_8D5BE7
0x8D5C18: dec     dword ptr [esi+88h]
0x8D5C1E: jnz     short loc_8D5C3B
0x8D5C20: mov     eax, [esi+84h]
0x8D5C26: test    eax, eax
0x8D5C28: jz      short loc_8D5C3B
0x8D5C2A: mov     al, [esi+90h]
0x8D5C30: test    al, al
0x8D5C32: jnz     short loc_8D5C3B
0x8D5C34: mov     ecx, esi
0x8D5C36: call    sub_899210
0x8D5C3B: mov     ecx, [esi+88h]
0x8D5C41: mov     eax, [esi+3Ch]
0x8D5C44: inc     ecx
0x8D5C45: test    eax, eax
0x8D5C47: mov     [esi+88h], ecx
0x8D5C4D: mov     [esp+20h+arg_0], 0
0x8D5C55: jle     loc_8D5D28
0x8D5C5B: jmp     short loc_8D5C60
0x8D5C5D: align 10h
0x8D5C60: mov     eax, [esi+38h]
0x8D5C63: mov     ecx, [esp+20h+arg_0]
0x8D5C67: mov     ebp, [eax+ecx*4]
0x8D5C6A: mov     edx, [esi+74h]
0x8D5C6D: mov     ecx, [esp+20h+var_10]
0x8D5C71: push    edx
0x8D5C72: push    ebp
0x8D5C73: mov     [esp+28h+var_8], ebp
0x8D5C77: call    sub_8D4290
0x8D5C7C: mov     eax, ds:0BA7D98h
0x8D5C81: cmp     dword ptr [eax+4], 1
0x8D5C85: jz      loc_8D5E58
0x8D5C8B: mov     eax, [esi+140h]
0x8D5C91: test    eax, eax
0x8D5C93: jz      short loc_8D5D14
0x8D5C95: mov     eax, [edi+ebx*4]
0x8D5C98: mov     ecx, [eax+1A4h]
0x8D5C9E: cmp     ecx, [eax+1A8h]
0x8D5CA4: jnb     short loc_8D5CCE
0x8D5CA6: mov     ebp, eax
0x8D5CA8: mov     ecx, [ebp+1A4h]
0x8D5CAE: mov     dword ptr [ecx], offset aTtislandpostco; "TtIslandPostCollideCb"
0x8D5CB4: rdtsc
0x8D5CB6: mov     [esp+20h+var_C], eax
0x8D5CBA: mov     edx, [esp+20h+var_C]
0x8D5CBE: mov     [ecx+4], edx
0x8D5CC1: add     ecx, 0Ch
0x8D5CC4: mov     [ebp+1A4h], ecx
0x8D5CCA: mov     ebp, [esp+20h+var_8]
0x8D5CCE: mov     eax, [esp+20h+arg_4]
0x8D5CD2: push    eax
0x8D5CD3: push    ebp
0x8D5CD4: push    esi
0x8D5CD5: call    sub_8DCFA0
0x8D5CDA: mov     eax, [edi+ebx*4]
0x8D5CDD: mov     ecx, [eax+1A4h]
0x8D5CE3: mov     edx, [eax+1A8h]
0x8D5CE9: add     esp, 0Ch
0x8D5CEC: cmp     ecx, edx
0x8D5CEE: jnb     short loc_8D5D14
0x8D5CF0: mov     ebp, eax
0x8D5CF2: mov     ecx, [ebp+1A4h]
0x8D5CF8: mov     dword ptr [ecx], offset aEt; "Et"
0x8D5CFE: rdtsc
0x8D5D00: mov     [esp+20h+var_4], eax
0x8D5D04: mov     edx, [esp+20h+var_4]
0x8D5D08: mov     [ecx+4], edx
0x8D5D0B: add     ecx, 0Ch
0x8D5D0E: mov     [ebp+1A4h], ecx
0x8D5D14: mov     eax, [esp+20h+arg_0]
0x8D5D18: mov     ecx, [esi+3Ch]
0x8D5D1B: inc     eax
0x8D5D1C: cmp     eax, ecx
0x8D5D1E: mov     [esp+20h+arg_0], eax
0x8D5D22: jl      loc_8D5C60
0x8D5D28: dec     dword ptr [esi+88h]
0x8D5D2E: jnz     short loc_8D5D4B
0x8D5D30: mov     eax, [esi+84h]
0x8D5D36: test    eax, eax
0x8D5D38: jz      short loc_8D5D4B
0x8D5D3A: mov     al, [esi+90h]
0x8D5D40: test    al, al
0x8D5D42: jnz     short loc_8D5D4B
0x8D5D44: mov     ecx, esi
0x8D5D46: call    sub_899210
0x8D5D4B: mov     eax, [esi+128h]
0x8D5D51: test    eax, eax
0x8D5D53: jz      short loc_8D5DCF
0x8D5D55: mov     eax, [edi+ebx*4]
0x8D5D58: mov     ecx, [eax+1A4h]
0x8D5D5E: cmp     ecx, [eax+1A8h]
0x8D5D64: jnb     short loc_8D5D8A
0x8D5D66: mov     ebp, eax
0x8D5D68: mov     ecx, [ebp+1A4h]
0x8D5D6E: mov     dword ptr [ecx], offset aTtpostcollidec; "TtPostCollideCB"
0x8D5D74: rdtsc
0x8D5D76: mov     [esp+20h+arg_0], eax
0x8D5D7A: mov     edx, [esp+20h+arg_0]
0x8D5D7E: mov     [ecx+4], edx
0x8D5D81: add     ecx, 0Ch
0x8D5D84: mov     [ebp+1A4h], ecx
0x8D5D8A: mov     eax, [esp+20h+arg_4]
0x8D5D8E: push    eax
0x8D5D8F: push    esi
0x8D5D90: call    sub_8DCE80
0x8D5D95: mov     eax, [edi+ebx*4]
0x8D5D98: mov     ecx, [eax+1A4h]
0x8D5D9E: mov     edx, [eax+1A8h]
0x8D5DA4: add     esp, 8
0x8D5DA7: cmp     ecx, edx
0x8D5DA9: jnb     short loc_8D5DCF
0x8D5DAB: mov     esi, eax
0x8D5DAD: mov     ecx, [esi+1A4h]
0x8D5DB3: mov     dword ptr [ecx], offset aEt; "Et"
0x8D5DB9: rdtsc
0x8D5DBB: mov     [esp+20h+arg_4], eax
0x8D5DBF: mov     edx, [esp+20h+arg_4]
0x8D5DC3: mov     [ecx+4], edx
0x8D5DC6: add     ecx, 0Ch
0x8D5DC9: mov     [esi+1A4h], ecx
0x8D5DCF: mov     eax, [edi+ebx*4]
0x8D5DD2: mov     ecx, [eax+1A4h]
0x8D5DD8: cmp     ecx, [eax+1A8h]
0x8D5DDE: jnb     short loc_8D5E04
0x8D5DE0: mov     edi, eax
0x8D5DE2: mov     ecx, [edi+1A4h]
0x8D5DE8: mov     dword ptr [ecx], offset aEt; "Et"
0x8D5DEE: rdtsc
0x8D5DF0: mov     [esp+20h+arg_4], eax
0x8D5DF4: mov     edx, [esp+20h+arg_4]
0x8D5DF8: mov     [ecx+4], edx
0x8D5DFB: add     ecx, 0Ch
0x8D5DFE: mov     [edi+1A4h], ecx
0x8D5E04: pop     edi
0x8D5E05: pop     esi
0x8D5E06: pop     ebp
0x8D5E07: pop     ebx
0x8D5E08: add     esp, 10h
0x8D5E0B: retn    8
0x8D5E0E: dec     dword ptr [esi+88h]
0x8D5E14: jnz     short loc_8D5E31
0x8D5E16: mov     eax, [esi+84h]
0x8D5E1C: test    eax, eax
0x8D5E1E: jz      short loc_8D5E31
0x8D5E20: mov     al, [esi+90h]
0x8D5E26: test    al, al
0x8D5E28: jnz     short loc_8D5E31
0x8D5E2A: mov     ecx, esi
0x8D5E2C: call    sub_899210
0x8D5E31: mov     eax, [edi+ebx*4]
0x8D5E34: mov     ecx, [eax+1A4h]
0x8D5E3A: cmp     ecx, [eax+1A8h]
0x8D5E40: jnb     short loc_8D5E04
0x8D5E42: mov     edi, eax
0x8D5E44: mov     ecx, [edi+1A4h]
0x8D5E4A: mov     dword ptr [ecx], offset aEt; "Et"
0x8D5E50: rdtsc
0x8D5E52: mov     [esp+20h+arg_4], eax
0x8D5E56: jmp     short loc_8D5DF4
0x8D5E58: dec     dword ptr [esi+88h]
0x8D5E5E: jnz     short loc_8D5E7B
0x8D5E60: mov     eax, [esi+84h]
0x8D5E66: test    eax, eax
0x8D5E68: jz      short loc_8D5E7B
0x8D5E6A: mov     al, [esi+90h]
0x8D5E70: test    al, al
0x8D5E72: jnz     short loc_8D5E7B
0x8D5E74: mov     ecx, esi
0x8D5E76: call    sub_899210
0x8D5E7B: mov     eax, [edi+ebx*4]
0x8D5E7E: mov     ecx, [eax+1A4h]
0x8D5E84: cmp     ecx, [eax+1A8h]
0x8D5E8A: jnb     loc_8D5E04
0x8D5E90: mov     edi, eax
0x8D5E92: mov     ecx, [edi+1A4h]
0x8D5E98: mov     dword ptr [ecx], offset aEt; "Et"
0x8D5E9E: rdtsc
0x8D5EA0: mov     [esp+20h+arg_4], eax
0x8D5EA4: jmp     loc_8D5DF4
