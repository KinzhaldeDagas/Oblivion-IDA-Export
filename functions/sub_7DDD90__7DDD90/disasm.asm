0x7DDD90: push    0FFFFFFFFh
0x7DDD92: push    offset SEH_7DDD90
0x7DDD97: mov     eax, large fs:0
0x7DDD9D: push    eax
0x7DDD9E: sub     esp, 0Ch
0x7DDDA1: push    ebx
0x7DDDA2: push    ebp
0x7DDDA3: push    esi
0x7DDDA4: push    edi
0x7DDDA5: mov     eax, ds:0B30AACh
0x7DDDAA: xor     eax, esp
0x7DDDAC: push    eax
0x7DDDAD: lea     eax, [esp+2Ch+var_C]
0x7DDDB1: mov     large fs:0, eax
0x7DDDB7: mov     esi, ecx
0x7DDDB9: mov     eax, [esi+0F8h]
0x7DDDBF: test    eax, eax
0x7DDDC1: jnz     loc_7DDF06
0x7DDDC7: lea     eax, [esp+2Ch+var_14]
0x7DDDCB: push    eax
0x7DDDCC: call    sub_7606A0
0x7DDDD1: add     esp, 4
0x7DDDD4: mov     edi, eax
0x7DDDD6: mov     ecx, [esi+0F8h]
0x7DDDDC: or      ebx, 0FFFFFFFFh
0x7DDDDF: cmp     ecx, [edi]
0x7DDDE1: mov     [esp+2Ch+var_4], 0
0x7DDDE9: jz      short loc_7DDE09
0x7DDDEB: test    ecx, ecx
0x7DDDED: jz      short loc_7DDDF9
0x7DDDEF: add     [ecx+60h], ebx
0x7DDDF2: jnz     short loc_7DDDF9
0x7DDDF4: call    sub_7604D0
0x7DDDF9: mov     eax, [edi]
0x7DDDFB: test    eax, eax
0x7DDDFD: mov     [esi+0F8h], eax
0x7DDE03: jz      short loc_7DDE09
0x7DDE05: add     dword ptr [eax+60h], 1
0x7DDE09: mov     eax, [esp+2Ch+var_14]
0x7DDE0D: test    eax, eax
0x7DDE0F: mov     [esp+2Ch+var_4], ebx
0x7DDE13: jz      short loc_7DDE27
0x7DDE15: add     [eax+60h], ebx
0x7DDE18: mov     ecx, eax
0x7DDE1A: add     eax, 60h ; '`'
0x7DDE1D: cmp     dword ptr [eax], 0
0x7DDE20: jnz     short loc_7DDE27
0x7DDE22: call    sub_7604D0
0x7DDE27: lea     ecx, [esp+2Ch+a3]
0x7DDE2B: push    ecx
0x7DDE2C: call    sub_772630
0x7DDE31: mov     edx, [esp+30h+a3]
0x7DDE35: push    2
0x7DDE37: push    3
0x7DDE39: push    0
0x7DDE3B: mov     ebp, 1
0x7DDE40: push    edx
0x7DDE41: mov     [esp+40h+var_4], ebp
0x7DDE45: call    sub_801110
0x7DDE4A: mov     ecx, [esi+0F8h]; this
0x7DDE50: mov     eax, [esp+40h+a3]
0x7DDE54: mov     edx, [ecx+14h]
0x7DDE57: add     esp, 14h
0x7DDE5A: push    eax; a3
0x7DDE5B: push    edx; a2
0x7DDE5C: call    sub_760010
0x7DDE61: lea     eax, [esp+2Ch+var_10]
0x7DDE65: push    eax
0x7DDE66: call    sub_772630
0x7DDE6B: add     esp, 4
0x7DDE6E: mov     edi, eax
0x7DDE70: mov     eax, [esp+2Ch+a3]
0x7DDE74: cmp     eax, [edi]
0x7DDE76: mov     byte ptr [esp+2Ch+var_4], 2
0x7DDE7B: jz      short loc_7DDEA4
0x7DDE7D: test    eax, eax
0x7DDE7F: jz      short loc_7DDE93
0x7DDE81: add     [eax+5Ch], ebx
0x7DDE84: mov     ecx, eax
0x7DDE86: add     eax, 5Ch ; '\'
0x7DDE89: cmp     dword ptr [eax], 0
0x7DDE8C: jnz     short loc_7DDE93
0x7DDE8E: call    sub_772560
0x7DDE93: mov     eax, [edi]
0x7DDE95: test    eax, eax
0x7DDE97: mov     [esp+2Ch+a3], eax
0x7DDE9B: jz      short loc_7DDEA4
0x7DDE9D: add     [eax+5Ch], ebp
0x7DDEA0: mov     eax, [esp+2Ch+a3]
0x7DDEA4: mov     ecx, [esp+2Ch+var_10]
0x7DDEA8: test    ecx, ecx
0x7DDEAA: mov     byte ptr [esp+2Ch+var_4], 1
0x7DDEAF: jz      short loc_7DDEC6
0x7DDEB1: add     [ecx+5Ch], ebx
0x7DDEB4: cmp     dword ptr [ecx+5Ch], 0
0x7DDEB8: lea     eax, [ecx+5Ch]
0x7DDEBB: jnz     short loc_7DDEC2
0x7DDEBD: call    sub_772560
0x7DDEC2: mov     eax, [esp+2Ch+a3]
0x7DDEC6: push    2
0x7DDEC8: push    3
0x7DDECA: push    ebp
0x7DDECB: push    eax
0x7DDECC: call    sub_801110
0x7DDED1: mov     ecx, [esi+0F8h]; this
0x7DDED7: mov     edx, [esp+3Ch+a3]
0x7DDEDB: mov     eax, [ecx+14h]
0x7DDEDE: add     esp, 10h
0x7DDEE1: push    edx; a3
0x7DDEE2: push    eax; a2
0x7DDEE3: call    sub_760010
0x7DDEE8: mov     eax, [esp+2Ch+a3]
0x7DDEEC: test    eax, eax
0x7DDEEE: mov     [esp+2Ch+var_4], ebx
0x7DDEF2: jz      short loc_7DDF06
0x7DDEF4: add     [eax+5Ch], ebx
0x7DDEF7: mov     ecx, eax
0x7DDEF9: add     eax, 5Ch ; '\'
0x7DDEFC: cmp     dword ptr [eax], 0
0x7DDEFF: jnz     short loc_7DDF06
0x7DDF01: call    sub_772560
0x7DDF06: mov     edi, [esi+0F8h]
0x7DDF0C: cmp     dword ptr [edi+30h], 0
0x7DDF10: jnz     short loc_7DDF1A
0x7DDF12: call    sub_772DF0
0x7DDF17: mov     [edi+30h], eax
0x7DDF1A: mov     ecx, [edi+30h]
0x7DDF1D: push    0
0x7DDF1F: push    0
0x7DDF21: push    7
0x7DDF23: call    sub_772CD0
0x7DDF28: mov     edi, [esi+0F8h]
0x7DDF2E: cmp     dword ptr [edi+30h], 0
0x7DDF32: jnz     short loc_7DDF3C
0x7DDF34: call    sub_772DF0
0x7DDF39: mov     [edi+30h], eax
0x7DDF3C: mov     ecx, [edi+30h]
0x7DDF3F: push    0
0x7DDF41: push    0
0x7DDF43: push    0Eh
0x7DDF45: call    sub_772CD0
0x7DDF4A: mov     edi, [esi+0F8h]
0x7DDF50: cmp     dword ptr [edi+30h], 0
0x7DDF54: jnz     short loc_7DDF5E
0x7DDF56: call    sub_772DF0
0x7DDF5B: mov     [edi+30h], eax
0x7DDF5E: mov     ecx, [edi+30h]
0x7DDF61: push    0
0x7DDF63: push    0
0x7DDF65: push    1Bh
0x7DDF67: call    sub_772CD0
0x7DDF6C: mov     edi, [esi+0F8h]
0x7DDF72: cmp     dword ptr [edi+30h], 0
0x7DDF76: jnz     short loc_7DDF80
0x7DDF78: call    sub_772DF0
0x7DDF7D: mov     [edi+30h], eax
0x7DDF80: mov     ecx, [edi+30h]
0x7DDF83: push    0
0x7DDF85: push    0
0x7DDF87: push    0Fh
0x7DDF89: call    sub_772CD0
0x7DDF8E: mov     edi, [esi+0F8h]
0x7DDF94: cmp     dword ptr [edi+30h], 0
0x7DDF98: jnz     short loc_7DDFA2
0x7DDF9A: call    sub_772DF0
0x7DDF9F: mov     [edi+30h], eax
0x7DDFA2: mov     ecx, [edi+30h]
0x7DDFA5: push    0
0x7DDFA7: push    0Fh
0x7DDFA9: push    0A8h ; '¨'
0x7DDFAE: call    sub_772CD0
0x7DDFB3: mov     edi, [esi+0F8h]
0x7DDFB9: cmp     dword ptr [edi+30h], 0
0x7DDFBD: jnz     short loc_7DDFC7
0x7DDFBF: call    sub_772DF0
0x7DDFC4: mov     [edi+30h], eax
0x7DDFC7: mov     ecx, [edi+30h]
0x7DDFCA: push    0
0x7DDFCC: push    1
0x7DDFCE: push    16h
0x7DDFD0: call    sub_772CD0
0x7DDFD5: mov     edi, [esi+0F8h]
0x7DDFDB: mov     ebx, [esi+0B4h]
0x7DDFE1: mov     ebp, [edi+58h]
0x7DDFE4: add     edi, 58h ; 'X'
0x7DDFE7: cmp     ebp, ebx
0x7DDFE9: jz      short loc_7DE01C
0x7DDFEB: test    ebp, ebp
0x7DDFED: jz      short loc_7DE00C
0x7DDFEF: lea     ecx, [ebp+4]
0x7DDFF2: push    ecx; lpAddend
0x7DDFF3: call    dword ptr ds:0A2807Ch
0x7DDFF9: test    eax, eax
0x7DDFFB: jnz     short loc_7DE00C
0x7DDFFD: test    ebp, ebp
0x7DDFFF: jz      short loc_7DE00C
0x7DE001: mov     edx, [ebp+0]
0x7DE004: mov     eax, [edx]
0x7DE006: push    1
0x7DE008: mov     ecx, ebp
0x7DE00A: call    eax
0x7DE00C: test    ebx, ebx
0x7DE00E: mov     [edi], ebx
0x7DE010: jz      short loc_7DE01C
0x7DE012: add     ebx, 4
0x7DE015: push    ebx; lpAddend
0x7DE016: call    dword ptr ds:0A28078h
0x7DE01C: mov     ebx, [esi+0D4h]
0x7DE022: mov     esi, [esi+0F8h]
0x7DE028: mov     edi, [esi+44h]
0x7DE02B: add     esi, 44h ; 'D'
0x7DE02E: cmp     edi, ebx
0x7DE030: jz      short loc_7DE062
0x7DE032: test    edi, edi
0x7DE034: jz      short loc_7DE052
0x7DE036: lea     ecx, [edi+4]
0x7DE039: push    ecx; lpAddend
0x7DE03A: call    dword ptr ds:0A2807Ch
0x7DE040: test    eax, eax
0x7DE042: jnz     short loc_7DE052
0x7DE044: test    edi, edi
0x7DE046: jz      short loc_7DE052
0x7DE048: mov     edx, [edi]
0x7DE04A: mov     eax, [edx]
0x7DE04C: push    1
0x7DE04E: mov     ecx, edi
0x7DE050: call    eax
0x7DE052: test    ebx, ebx
0x7DE054: mov     [esi], ebx
0x7DE056: jz      short loc_7DE062
0x7DE058: add     ebx, 4
0x7DE05B: push    ebx; lpAddend
0x7DE05C: call    dword ptr ds:0A28078h
0x7DE062: mov     al, 1
0x7DE064: mov     ecx, dword ptr [esp+2Ch+var_C]
0x7DE068: mov     large fs:0, ecx
0x7DE06F: pop     ecx
0x7DE070: pop     edi
0x7DE071: pop     esi
0x7DE072: pop     ebp
0x7DE073: pop     ebx
0x7DE074: add     esp, 18h
0x7DE077: retn
