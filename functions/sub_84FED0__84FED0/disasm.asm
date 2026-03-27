0x84FED0: push    0FFFFFFFFh
0x84FED2: push    offset SEH_850270
0x84FED7: mov     eax, large fs:0
0x84FEDD: push    eax
0x84FEDE: sub     esp, 8
0x84FEE1: push    ebx
0x84FEE2: push    ebp
0x84FEE3: push    esi
0x84FEE4: push    edi
0x84FEE5: mov     eax, ds:0B30AACh
0x84FEEA: xor     eax, esp
0x84FEEC: push    eax
0x84FEED: lea     eax, [esp+28h+var_C]
0x84FEF1: mov     large fs:0, eax
0x84FEF7: mov     [esp+28h+var_10], ecx
0x84FEFB: mov     ebp, [esp+28h+arg_C]
0x84FEFF: mov     eax, [ebp+1Ch]
0x84FF02: mov     edi, ds:0B45BA0h
0x84FF08: shr     eax, 1Ch
0x84FF0B: movzx   eax, ax
0x84FF0E: push    eax
0x84FF0F: call    GetShadowSceneNode
0x84FF14: add     esp, 4
0x84FF17: test    eax, eax
0x84FF19: jz      short loc_84FF41
0x84FF1B: cmp     byte ptr ds:0B430ADh, 0
0x84FF22: jz      short loc_84FF35
0x84FF24: mov     ecx, [eax+120h]; this
0x84FF2A: call    BSRenderedTexture__GetInnerTexture
0x84FF2F: mov     [esp+28h+arg_C], eax
0x84FF33: jmp     short loc_84FF4B
0x84FF35: mov     ecx, ds:0B430F4h
0x84FF3B: mov     [esp+28h+arg_C], ecx
0x84FF3F: jmp     short loc_84FF4B
0x84FF41: mov     edx, ds:0B430F4h
0x84FF47: mov     [esp+28h+arg_C], edx
0x84FF4B: fld     dword ptr [ebp+0A4h]
0x84FF51: push    0
0x84FF53: fmul    dword ptr ds:0B464A4h
0x84FF59: mov     ecx, ebp
0x84FF5B: fstp    dword ptr ds:0B464A4h
0x84FF61: mov     eax, [edi+24h]
0x84FF64: mov     esi, [eax]
0x84FF66: mov     edx, [ebp+0]
0x84FF69: mov     eax, [edx+8Ch]
0x84FF6F: mov     [esp+2Ch+var_14], esi
0x84FF73: call    eax
0x84FF75: test    eax, eax
0x84FF77: jz      short loc_84FF8C
0x84FF79: mov     edx, [ebp+0]
0x84FF7C: mov     eax, [edx+8Ch]
0x84FF82: push    0
0x84FF84: mov     ecx, ebp
0x84FF86: call    eax
0x84FF88: mov     ebx, eax
0x84FF8A: jmp     short loc_84FFA1
0x84FF8C: test    dword ptr [ebp+1Ch], 80h
0x84FF93: mov     ebx, ds:0B430F0h
0x84FF99: ja      short loc_84FFA1
0x84FF9B: mov     ebx, ds:0B430DCh
0x84FFA1: mov     esi, [esi+4]
0x84FFA4: cmp     esi, ebx
0x84FFA6: jz      short loc_84FFDF
0x84FFA8: test    esi, esi
0x84FFAA: jz      short loc_84FFC8
0x84FFAC: lea     ecx, [esi+4]
0x84FFAF: push    ecx; lpAddend
0x84FFB0: call    dword ptr ds:0A2807Ch
0x84FFB6: test    eax, eax
0x84FFB8: jnz     short loc_84FFC8
0x84FFBA: test    esi, esi
0x84FFBC: jz      short loc_84FFC8
0x84FFBE: mov     edx, [esi]
0x84FFC0: mov     eax, [edx]
0x84FFC2: push    1
0x84FFC4: mov     ecx, esi
0x84FFC6: call    eax
0x84FFC8: test    ebx, ebx
0x84FFCA: mov     esi, [esp+28h+var_14]
0x84FFCE: mov     [esi+4], ebx
0x84FFD1: jz      short loc_84FFE3
0x84FFD3: add     ebx, 4
0x84FFD6: push    ebx; lpAddend
0x84FFD7: call    dword ptr ds:0A28078h
0x84FFDD: jmp     short loc_84FFE3
0x84FFDF: mov     esi, [esp+28h+var_14]
0x84FFE3: test    esi, esi
0x84FFE5: jz      short loc_850002
0x84FFE7: cmp     byte ptr ds:0B42CDDh, 0
0x84FFEE: jz      short loc_850002
0x84FFF0: mov     edx, [ebp+0]
0x84FFF3: mov     eax, [edx+78h]
0x84FFF6: mov     ecx, ebp
0x84FFF8: call    eax
0x84FFFA: push    eax
0x84FFFB: mov     ecx, esi
0x84FFFD: call    sub_7715E0
0x850002: mov     ecx, [edi+24h]
0x850005: mov     ebp, [ecx+0Ch]
0x850008: mov     esi, [ebp+4]
0x85000B: mov     ebx, [esp+28h+arg_C]
0x85000F: cmp     esi, ebx
0x850011: jz      short loc_850044
0x850013: test    esi, esi
0x850015: jz      short loc_850033
0x850017: lea     edx, [esi+4]
0x85001A: push    edx; lpAddend
0x85001B: call    dword ptr ds:0A2807Ch
0x850021: test    eax, eax
0x850023: jnz     short loc_850033
0x850025: test    esi, esi
0x850027: jz      short loc_850033
0x850029: mov     eax, [esi]
0x85002B: mov     edx, [eax]
0x85002D: push    1
0x85002F: mov     ecx, esi
0x850031: call    edx
0x850033: test    ebx, ebx
0x850035: mov     [ebp+4], ebx
0x850038: jz      short loc_850044
0x85003A: add     ebx, 4
0x85003D: push    ebx; lpAddend
0x85003E: call    dword ptr ds:0A28078h
0x850044: mov     ebx, 1
0x850049: add     [edi+60h], ebx
0x85004C: mov     [esp+28h+arg_C], edi
0x850050: mov     esi, [esp+28h+var_10]
0x850054: mov     ecx, [esi+38h]
0x850057: lea     eax, [esp+28h+arg_C]
0x85005B: push    eax
0x85005C: push    ecx
0x85005D: lea     ecx, [esi+40h]
0x850060: mov     [esp+30h+var_4], 0
0x850068: call    sub_76CE40
0x85006D: or      eax, 0FFFFFFFFh
0x850070: add     [edi+60h], eax
0x850073: mov     [esp+28h+var_4], eax
0x850077: jnz     short loc_850080
0x850079: mov     ecx, edi
0x85007B: call    sub_7604D0
0x850080: add     [esi+38h], ebx
0x850083: mov     ecx, [esp+28h+var_C]
0x850087: mov     large fs:0, ecx
0x85008E: pop     ecx
0x85008F: pop     edi
0x850090: pop     esi
0x850091: pop     ebp
0x850092: pop     ebx
0x850093: add     esp, 14h
0x850096: retn    10h
