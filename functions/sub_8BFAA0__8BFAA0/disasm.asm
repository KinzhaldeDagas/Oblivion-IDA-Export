0x8BFAA0: push    0FFFFFFFFh
0x8BFAA2: push    offset SEH_8BFAA0
0x8BFAA7: mov     eax, large fs:0
0x8BFAAD: push    eax
0x8BFAAE: sub     esp, 18h
0x8BFAB1: push    ebx
0x8BFAB2: push    ebp
0x8BFAB3: push    esi
0x8BFAB4: push    edi
0x8BFAB5: mov     eax, ds:0B30AACh
0x8BFABA: xor     eax, esp
0x8BFABC: push    eax
0x8BFABD: lea     eax, [esp+38h+var_C]
0x8BFAC1: mov     large fs:0, eax
0x8BFAC7: mov     ebp, ecx
0x8BFAC9: mov     eax, [ebp+0]
0x8BFACC: mov     edx, [eax+74h]
0x8BFACF: lea     ecx, [esp+38h+var_24+3]
0x8BFAD3: push    ecx
0x8BFAD4: mov     ecx, ebp
0x8BFAD6: call    edx
0x8BFAD8: xor     ebx, ebx
0x8BFADA: cmp     eax, ebx
0x8BFADC: jz      short loc_8BFAE3
0x8BFADE: lea     esi, [eax-4]
0x8BFAE1: jmp     short loc_8BFAE5
0x8BFAE3: xor     esi, esi
0x8BFAE5: mov     edi, [esp+38h+arg_0]
0x8BFAE9: cmp     dword ptr [edi+4], 6
0x8BFAED: jnb     short loc_8BFB6C
0x8BFAEF: cmp     esi, ebx
0x8BFAF1: jz      loc_8BFB89
0x8BFAF7: mov     ecx, edi
0x8BFAF9: call    sub_7124A0
0x8BFAFE: cmp     eax, ebx
0x8BFB00: jz      short loc_8BFB62
0x8BFB02: mov     [esp+38h+var_20], offset ??_7hkConstraintCinfo@@6B@; const hkConstraintCinfo::`vftable'
0x8BFB0A: mov     [esp+38h+var_1C], ebx
0x8BFB0E: mov     [esp+38h+var_14], ebx
0x8BFB12: mov     [esp+38h+var_10], ebx
0x8BFB16: mov     [esp+38h+var_18], 1
0x8BFB1E: lea     ecx, [esp+38h+var_20]
0x8BFB22: push    ecx
0x8BFB23: mov     ecx, eax
0x8BFB25: mov     [esp+3Ch+var_4], ebx
0x8BFB29: call    sub_8A07E0
0x8BFB2E: mov     edx, [esp+38h+var_1C]
0x8BFB32: push    edx
0x8BFB33: mov     ecx, esi
0x8BFB35: call    sub_8BEF00
0x8BFB3A: mov     ecx, [esp+38h+var_10]
0x8BFB3E: mov     eax, [esp+38h+var_14]
0x8BFB42: mov     [esi+10h], ecx
0x8BFB45: push    ebx
0x8BFB46: lea     ecx, [esp+3Ch+var_20]
0x8BFB4A: mov     [esi+0Ch], eax
0x8BFB4D: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x8BFB55: mov     [esp+3Ch+var_20], offset ??_7hkConstraintCinfo@@6B@; const hkConstraintCinfo::`vftable'
0x8BFB5D: call    sub_8A0200
0x8BFB62: push    edi
0x8BFB63: mov     ecx, ebp
0x8BFB65: call    sub_89D6C0
0x8BFB6A: jmp     short loc_8BFB89
0x8BFB6C: push    edi
0x8BFB6D: mov     ecx, ebp
0x8BFB6F: call    sub_8A0320
0x8BFB74: mov     ecx, edi
0x8BFB76: call    sub_7124D0
0x8BFB7B: mov     ecx, edi
0x8BFB7D: call    sub_7124A0
0x8BFB82: mov     ecx, edi
0x8BFB84: call    sub_7124A0
0x8BFB89: mov     ecx, dword ptr [esp+38h+var_C]
0x8BFB8D: mov     large fs:0, ecx
0x8BFB94: pop     ecx
0x8BFB95: pop     edi
0x8BFB96: pop     esi
0x8BFB97: pop     ebp
0x8BFB98: pop     ebx
0x8BFB99: add     esp, 24h
0x8BFB9C: retn    4
