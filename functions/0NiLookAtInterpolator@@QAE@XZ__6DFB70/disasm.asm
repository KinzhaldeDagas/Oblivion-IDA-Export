0x6DFB70: push    0FFFFFFFFh
0x6DFB72: push    offset ??0NiLookAtInterpolator@@QAE@XZ_SEH
0x6DFB77: mov     eax, large fs:0
0x6DFB7D: push    eax
0x6DFB7E: push    ecx
0x6DFB7F: push    ebx
0x6DFB80: push    ebp
0x6DFB81: push    esi
0x6DFB82: push    edi
0x6DFB83: mov     eax, ds:0B30AACh
0x6DFB88: xor     eax, esp
0x6DFB8A: push    eax
0x6DFB8B: lea     eax, [esp+24h+var_C]
0x6DFB8F: mov     large fs:0, eax
0x6DFB95: mov     esi, ecx
0x6DFB97: mov     [esp+24h+var_10], esi
0x6DFB9B: call    sub_6EBA00
0x6DFBA0: mov     eax, [esp+24h+arg_0]
0x6DFBA4: mov     dword ptr [esi], offset ??_7NiLookAtInterpolator@@6B@; const NiLookAtInterpolator::`vftable'
0x6DFBAA: mov     [esi+10h], eax
0x6DFBAD: xor     ebx, ebx
0x6DFBAF: mov     [esi+0Ch], bx
0x6DFBB3: mov     [esi+14h], ebx
0x6DFBB6: mov     ecx, ds:0B24260h
0x6DFBBC: mov     [esi+18h], ecx
0x6DFBBF: mov     edx, ds:0B24264h
0x6DFBC5: mov     [esi+1Ch], edx
0x6DFBC8: mov     eax, ds:0B24268h
0x6DFBCD: mov     [esi+20h], eax
0x6DFBD0: mov     ecx, ds:0B3CBA4h
0x6DFBD6: mov     [esi+24h], ecx
0x6DFBD9: mov     edx, ds:0B3CBA8h
0x6DFBDF: mov     [esi+28h], edx
0x6DFBE2: mov     eax, ds:0B3CBACh
0x6DFBE7: push    offset sub_7016A0; a5
0x6DFBEC: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x6DFBF1: mov     [esi+2Ch], eax
0x6DFBF4: mov     ecx, ds:0B3CBB0h
0x6DFBFA: push    3; size
0x6DFBFC: mov     [esi+30h], ecx
0x6DFBFF: fld     dword ptr ds:0A79E10h
0x6DFC05: push    4; a2
0x6DFC07: fstp    dword ptr [esi+34h]
0x6DFC0A: lea     ebp, [esi+38h]
0x6DFC0D: push    ebp; a1
0x6DFC0E: mov     [esp+38h+var_4], ebx
0x6DFC12: call    ArrayConstructor
0x6DFC17: cmp     [esp+24h+arg_8], bl
0x6DFC1B: mov     byte ptr [esp+24h+var_4], 1
0x6DFC20: jz      short loc_6DFC29
0x6DFC22: or      word ptr [esi+0Ch], 1
0x6DFC27: jmp     short loc_6DFC2F
0x6DFC29: and     word ptr [esi+0Ch], 0FFFEh
0x6DFC2F: mov     dx, [esi+0Ch]
0x6DFC33: mov     eax, [esp+24h+arg_4]
0x6DFC37: and     dx, 0FFF9h
0x6DFC3C: lea     ecx, [eax+eax]
0x6DFC3F: or      dx, cx
0x6DFC42: mov     [esi+0Ch], dx
0x6DFC46: mov     edi, [ebp+0]
0x6DFC49: cmp     edi, ebx
0x6DFC4B: jz      short loc_6DFC6C
0x6DFC4D: lea     edx, [edi+4]
0x6DFC50: push    edx; lpAddend
0x6DFC51: call    dword ptr ds:0A2807Ch
0x6DFC57: test    eax, eax
0x6DFC59: jnz     short loc_6DFC69
0x6DFC5B: cmp     edi, ebx
0x6DFC5D: jz      short loc_6DFC69
0x6DFC5F: mov     eax, [edi]
0x6DFC61: mov     edx, [eax]
0x6DFC63: push    1
0x6DFC65: mov     ecx, edi
0x6DFC67: call    edx
0x6DFC69: mov     [ebp+0], ebx
0x6DFC6C: mov     edi, [esi+3Ch]
0x6DFC6F: cmp     edi, ebx
0x6DFC71: jz      short loc_6DFC92
0x6DFC73: lea     eax, [edi+4]
0x6DFC76: push    eax; lpAddend
0x6DFC77: call    dword ptr ds:0A2807Ch
0x6DFC7D: test    eax, eax
0x6DFC7F: jnz     short loc_6DFC8F
0x6DFC81: cmp     edi, ebx
0x6DFC83: jz      short loc_6DFC8F
0x6DFC85: mov     edx, [edi]
0x6DFC87: mov     eax, [edx]
0x6DFC89: push    1
0x6DFC8B: mov     ecx, edi
0x6DFC8D: call    eax
0x6DFC8F: mov     [esi+3Ch], ebx
0x6DFC92: mov     edi, [esi+40h]
0x6DFC95: cmp     edi, ebx
0x6DFC97: jz      short loc_6DFCB8
0x6DFC99: lea     ecx, [edi+4]
0x6DFC9C: push    ecx; lpAddend
0x6DFC9D: call    dword ptr ds:0A2807Ch
0x6DFCA3: test    eax, eax
0x6DFCA5: jnz     short loc_6DFCB5
0x6DFCA7: cmp     edi, ebx
0x6DFCA9: jz      short loc_6DFCB5
0x6DFCAB: mov     edx, [edi]
0x6DFCAD: mov     eax, [edx]
0x6DFCAF: push    1
0x6DFCB1: mov     ecx, edi
0x6DFCB3: call    eax
0x6DFCB5: mov     [esi+40h], ebx
0x6DFCB8: mov     eax, esi
0x6DFCBA: mov     ecx, dword ptr [esp+24h+var_C]
0x6DFCBE: mov     large fs:0, ecx
0x6DFCC5: pop     ecx
0x6DFCC6: pop     edi
0x6DFCC7: pop     esi
0x6DFCC8: pop     ebp
0x6DFCC9: pop     ebx
0x6DFCCA: add     esp, 10h
0x6DFCCD: retn    0Ch
