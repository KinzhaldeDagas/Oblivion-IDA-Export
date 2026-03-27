0x84AE80: push    0FFFFFFFFh
0x84AE82: push    offset SEH_879360
0x84AE87: mov     eax, large fs:0
0x84AE8D: push    eax
0x84AE8E: push    ecx
0x84AE8F: push    ebx
0x84AE90: push    ebp
0x84AE91: push    esi
0x84AE92: push    edi
0x84AE93: mov     eax, ds:0B30AACh
0x84AE98: xor     eax, esp
0x84AE9A: push    eax
0x84AE9B: lea     eax, [esp+24h+var_C]
0x84AE9F: mov     large fs:0, eax
0x84AEA5: mov     [esp+24h+var_10], ecx
0x84AEA9: mov     eax, [esp+24h+arg_8]
0x84AEAD: mov     eax, [eax+10h]
0x84AEB0: mov     edi, ds:0B45618h
0x84AEB6: push    eax
0x84AEB7: call    sub_848C40
0x84AEBC: mov     ecx, [edi+24h]
0x84AEBF: mov     ebx, [esp+24h+arg_C]
0x84AEC3: mov     esi, [ecx]
0x84AEC5: mov     edx, [ebx]
0x84AEC7: mov     eax, [edx+88h]
0x84AECD: push    0
0x84AECF: mov     ecx, ebx
0x84AED1: mov     [esp+28h+arg_8], esi
0x84AED5: call    eax
0x84AED7: mov     esi, [esi+4]
0x84AEDA: mov     ebp, eax
0x84AEDC: cmp     esi, ebp
0x84AEDE: jz      short loc_84AF17
0x84AEE0: test    esi, esi
0x84AEE2: jz      short loc_84AF00
0x84AEE4: lea     ecx, [esi+4]
0x84AEE7: push    ecx; lpAddend
0x84AEE8: call    dword ptr ds:0A2807Ch
0x84AEEE: test    eax, eax
0x84AEF0: jnz     short loc_84AF00
0x84AEF2: test    esi, esi
0x84AEF4: jz      short loc_84AF00
0x84AEF6: mov     edx, [esi]
0x84AEF8: mov     eax, [edx]
0x84AEFA: push    1
0x84AEFC: mov     ecx, esi
0x84AEFE: call    eax
0x84AF00: test    ebp, ebp
0x84AF02: mov     esi, [esp+24h+arg_8]
0x84AF06: mov     [esi+4], ebp
0x84AF09: jz      short loc_84AF1B
0x84AF0B: add     ebp, 4
0x84AF0E: push    ebp; lpAddend
0x84AF0F: call    dword ptr ds:0A28078h
0x84AF15: jmp     short loc_84AF1B
0x84AF17: mov     esi, [esp+24h+arg_8]
0x84AF1B: test    esi, esi
0x84AF1D: jz      short loc_84AF39
0x84AF1F: cmp     byte ptr ds:0B42CDDh, 0
0x84AF26: jz      short loc_84AF39
0x84AF28: mov     edx, [ebx]
0x84AF2A: mov     eax, [edx+78h]
0x84AF2D: mov     ecx, ebx
0x84AF2F: call    eax
0x84AF31: push    eax
0x84AF32: mov     ecx, esi
0x84AF34: call    sub_7715E0
0x84AF39: mov     ecx, [edi+24h]
0x84AF3C: mov     esi, [ecx+4]
0x84AF3F: mov     edx, [ebx]
0x84AF41: mov     eax, [edx+8Ch]
0x84AF47: push    0
0x84AF49: mov     ecx, ebx
0x84AF4B: mov     [esp+28h+arg_8], esi
0x84AF4F: call    eax
0x84AF51: test    eax, eax
0x84AF53: jz      short loc_84AF67
0x84AF55: mov     edx, [ebx]
0x84AF57: mov     eax, [edx+8Ch]
0x84AF5D: push    0
0x84AF5F: mov     ecx, ebx
0x84AF61: call    eax
0x84AF63: mov     ebp, eax
0x84AF65: jmp     short loc_84AF7C
0x84AF67: test    dword ptr [ebx+1Ch], 80h
0x84AF6E: mov     ebp, ds:0B430F0h
0x84AF74: ja      short loc_84AF7C
0x84AF76: mov     ebp, ds:0B430DCh
0x84AF7C: mov     esi, [esi+4]
0x84AF7F: cmp     esi, ebp
0x84AF81: jz      short loc_84AFBA
0x84AF83: test    esi, esi
0x84AF85: jz      short loc_84AFA3
0x84AF87: lea     ecx, [esi+4]
0x84AF8A: push    ecx; lpAddend
0x84AF8B: call    dword ptr ds:0A2807Ch
0x84AF91: test    eax, eax
0x84AF93: jnz     short loc_84AFA3
0x84AF95: test    esi, esi
0x84AF97: jz      short loc_84AFA3
0x84AF99: mov     edx, [esi]
0x84AF9B: mov     eax, [edx]
0x84AF9D: push    1
0x84AF9F: mov     ecx, esi
0x84AFA1: call    eax
0x84AFA3: test    ebp, ebp
0x84AFA5: mov     esi, [esp+24h+arg_8]
0x84AFA9: mov     [esi+4], ebp
0x84AFAC: jz      short loc_84AFBE
0x84AFAE: add     ebp, 4
0x84AFB1: push    ebp; lpAddend
0x84AFB2: call    dword ptr ds:0A28078h
0x84AFB8: jmp     short loc_84AFBE
0x84AFBA: mov     esi, [esp+24h+arg_8]
0x84AFBE: test    esi, esi
0x84AFC0: jz      short loc_84AFDC
0x84AFC2: cmp     byte ptr ds:0B42CDDh, 0
0x84AFC9: jz      short loc_84AFDC
0x84AFCB: mov     edx, [ebx]
0x84AFCD: mov     eax, [edx+78h]
0x84AFD0: mov     ecx, ebx
0x84AFD2: call    eax
0x84AFD4: push    eax
0x84AFD5: mov     ecx, esi
0x84AFD7: call    sub_7715E0
0x84AFDC: mov     ebx, 1
0x84AFE1: add     [edi+60h], ebx
0x84AFE4: mov     [esp+24h+arg_8], edi
0x84AFE8: mov     esi, [esp+24h+var_10]
0x84AFEC: mov     edx, [esi+38h]
0x84AFEF: lea     ecx, [esp+24h+arg_8]
0x84AFF3: push    ecx
0x84AFF4: push    edx
0x84AFF5: lea     ecx, [esi+40h]
0x84AFF8: mov     [esp+2Ch+var_4], 0
0x84B000: call    sub_76CE40
0x84B005: or      eax, 0FFFFFFFFh
0x84B008: add     [edi+60h], eax
0x84B00B: mov     [esp+24h+var_4], eax
0x84B00F: jnz     short loc_84B018
0x84B011: mov     ecx, edi
0x84B013: call    sub_7604D0
0x84B018: add     [esi+38h], ebx
0x84B01B: mov     ecx, [esp+24h+var_C]
0x84B01F: mov     large fs:0, ecx
0x84B026: pop     ecx
0x84B027: pop     edi
0x84B028: pop     esi
0x84B029: pop     ebp
0x84B02A: pop     ebx
0x84B02B: add     esp, 10h
0x84B02E: retn    10h
