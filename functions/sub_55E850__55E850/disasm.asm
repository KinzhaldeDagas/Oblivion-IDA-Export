0x55E850: push    0FFFFFFFFh
0x55E852: push    offset SEH_55E850
0x55E857: mov     eax, large fs:0
0x55E85D: push    eax
0x55E85E: sub     esp, 14h
0x55E861: push    ebx
0x55E862: push    ebp
0x55E863: push    esi
0x55E864: push    edi
0x55E865: mov     eax, ds:0B30AACh
0x55E86A: xor     eax, esp
0x55E86C: push    eax
0x55E86D: lea     eax, [esp+34h+var_C]
0x55E871: mov     large fs:0, eax
0x55E877: mov     esi, ecx
0x55E879: mov     [esp+34h+var_20], esi
0x55E87D: xor     ebx, ebx
0x55E87F: mov     [esi+4], ebx
0x55E882: mov     [esp+34h+var_4], ebx
0x55E886: mov     [esi+8], ebx
0x55E889: mov     [esi+0Ch], ebx
0x55E88C: mov     [esi+10h], ebx
0x55E88F: mov     [esi+14h], ebx
0x55E892: mov     [esi+18h], ebx
0x55E895: fldz
0x55E897: fstp    dword ptr [esi+1Ch]
0x55E89A: mov     [esi], ebx
0x55E89C: mov     byte ptr [esi+21h], 1
0x55E8A0: mov     byte ptr [esi+20h], 1
0x55E8A4: mov     [esi+22h], bl
0x55E8A7: mov     al, ds:0B125F0h
0x55E8AC: push    1Ch; Size
0x55E8AE: mov     byte ptr [esp+38h+var_4], 5
0x55E8B3: mov     [esi+23h], al
0x55E8B6: call    FormHeapAlloc
0x55E8BB: mov     edi, eax
0x55E8BD: add     esp, 4
0x55E8C0: mov     [esp+34h+var_1C], edi
0x55E8C4: cmp     edi, ebx
0x55E8C6: mov     byte ptr [esp+34h+var_4], 6
0x55E8CB: jz      short loc_55E8E4
0x55E8CD: mov     ecx, edi; this
0x55E8CF: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x55E8D4: mov     dword ptr [edi], offset ??_7NiZBufferProperty@@6B@; const NiZBufferProperty::`vftable'
0x55E8DA: mov     word ptr [edi+18h], 0Fh
0x55E8E0: mov     ebp, edi
0x55E8E2: jmp     short loc_55E8E6
0x55E8E4: xor     ebp, ebp
0x55E8E6: mov     edi, [esi+8]
0x55E8E9: cmp     edi, ebp
0x55E8EB: mov     byte ptr [esp+34h+var_4], 5
0x55E8F0: jz      short loc_55E923
0x55E8F2: cmp     edi, ebx
0x55E8F4: jz      short loc_55E912
0x55E8F6: lea     ecx, [edi+4]
0x55E8F9: push    ecx; lpAddend
0x55E8FA: call    dword ptr ds:0A2807Ch
0x55E900: test    eax, eax
0x55E902: jnz     short loc_55E912
0x55E904: cmp     edi, ebx
0x55E906: jz      short loc_55E912
0x55E908: mov     edx, [edi]
0x55E90A: mov     eax, [edx]
0x55E90C: push    1
0x55E90E: mov     ecx, edi
0x55E910: call    eax
0x55E912: cmp     ebp, ebx
0x55E914: mov     [esi+8], ebp
0x55E917: jz      short loc_55E923
0x55E919: add     ebp, 4
0x55E91C: push    ebp; lpAddend
0x55E91D: call    dword ptr ds:0A28078h
0x55E923: mov     eax, [esi+8]
0x55E926: or      word ptr [eax+18h], 1
0x55E92B: mov     eax, [esi+8]
0x55E92E: or      word ptr [eax+18h], 2
0x55E933: mov     eax, [esi+8]
0x55E936: mov     cx, [eax+18h]
0x55E93A: and     cx, 0FFCFh
0x55E93F: or      cx, 0Ch
0x55E943: push    5Ch ; '\'; Size
0x55E945: mov     [eax+18h], cx
0x55E949: call    FormHeapAlloc
0x55E94E: add     esp, 4
0x55E951: mov     [esp+34h+var_1C], eax
0x55E955: cmp     eax, ebx
0x55E957: mov     byte ptr [esp+34h+var_4], 7
0x55E95C: jz      short loc_55E969
0x55E95E: mov     ecx, eax; this
0x55E960: call    ??0NiMaterialProperty@@QAE@XZ; NiMaterialProperty::NiMaterialProperty(void)
0x55E965: mov     ebp, eax
0x55E967: jmp     short loc_55E96B
0x55E969: xor     ebp, ebp
0x55E96B: mov     edi, [esi+0Ch]
0x55E96E: cmp     edi, ebp
0x55E970: mov     byte ptr [esp+34h+var_4], 5
0x55E975: jz      short loc_55E9A8
0x55E977: cmp     edi, ebx
0x55E979: jz      short loc_55E997
0x55E97B: lea     edx, [edi+4]
0x55E97E: push    edx; lpAddend
0x55E97F: call    dword ptr ds:0A2807Ch
0x55E985: test    eax, eax
0x55E987: jnz     short loc_55E997
0x55E989: cmp     edi, ebx
0x55E98B: jz      short loc_55E997
0x55E98D: mov     eax, [edi]
0x55E98F: mov     edx, [eax]
0x55E991: push    1
0x55E993: mov     ecx, edi
0x55E995: call    edx
0x55E997: cmp     ebp, ebx
0x55E999: mov     [esi+0Ch], ebp
0x55E99C: jz      short loc_55E9A8
0x55E99E: add     ebp, 4
0x55E9A1: push    ebp; lpAddend
0x55E9A2: call    dword ptr ds:0A28078h
0x55E9A8: mov     eax, [esi+0Ch]
0x55E9AB: fld1
0x55E9AD: fst     [esp+34h+var_18]
0x55E9B1: push    1Ch; Size
0x55E9B3: mov     ecx, [esp+38h+var_18]
0x55E9B7: fst     dword ptr [esp+38h+var_14]
0x55E9BB: mov     edx, dword ptr [esp+38h+var_14]
0x55E9BF: fst     dword ptr [esp+38h+var_10]
0x55E9C3: mov     [eax+28h], ecx
0x55E9C6: fst     [esp+38h+var_18]
0x55E9CA: mov     ecx, dword ptr [esp+38h+var_10]
0x55E9CE: fst     dword ptr [esp+38h+var_14]
0x55E9D2: mov     [eax+2Ch], edx
0x55E9D5: fst     dword ptr [esp+38h+var_10]
0x55E9D9: mov     edx, [esp+38h+var_18]
0x55E9DD: fst     [esp+38h+var_18]
0x55E9E1: mov     [eax+30h], ecx
0x55E9E4: mov     ecx, 1
0x55E9E9: add     [eax+54h], ecx
0x55E9EC: mov     eax, [esi+0Ch]
0x55E9EF: add     [eax+54h], ecx
0x55E9F2: mov     [eax+1Ch], edx
0x55E9F5: mov     edx, dword ptr [esp+38h+var_14]
0x55E9F9: fst     dword ptr [esp+38h+var_14]
0x55E9FD: mov     [eax+20h], edx
0x55EA00: mov     edx, dword ptr [esp+38h+var_10]
0x55EA04: fstp    dword ptr [esp+38h+var_10]
0x55EA08: mov     [eax+24h], edx
0x55EA0B: mov     eax, [esi+0Ch]
0x55EA0E: mov     edx, [esp+38h+var_18]
0x55EA12: add     [eax+54h], ecx
0x55EA15: mov     [eax+40h], edx
0x55EA18: mov     edx, dword ptr [esp+38h+var_14]
0x55EA1C: mov     [eax+44h], edx
0x55EA1F: mov     edx, dword ptr [esp+38h+var_10]
0x55EA23: mov     [eax+48h], edx
0x55EA26: call    FormHeapAlloc
0x55EA2B: mov     edi, eax
0x55EA2D: add     esp, 4
0x55EA30: mov     [esp+34h+var_1C], edi
0x55EA34: test    edi, edi
0x55EA36: mov     ebx, 8
0x55EA3B: mov     byte ptr [esp+34h+var_4], bl
0x55EA3F: jz      short loc_55EA54
0x55EA41: mov     ecx, edi; this
0x55EA43: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x55EA48: mov     dword ptr [edi], offset ??_7NiVertexColorProperty@@6B@; const NiVertexColorProperty::`vftable'
0x55EA4E: mov     [edi+18h], bx
0x55EA52: jmp     short loc_55EA56
0x55EA54: xor     edi, edi
0x55EA56: mov     ebp, [esi+10h]
0x55EA59: cmp     ebp, edi
0x55EA5B: mov     byte ptr [esp+34h+var_4], 5
0x55EA60: jz      short loc_55EA94
0x55EA62: test    ebp, ebp
0x55EA64: jz      short loc_55EA83
0x55EA66: lea     eax, [ebp+4]
0x55EA69: push    eax; lpAddend
0x55EA6A: call    dword ptr ds:0A2807Ch
0x55EA70: test    eax, eax
0x55EA72: jnz     short loc_55EA83
0x55EA74: test    ebp, ebp
0x55EA76: jz      short loc_55EA83
0x55EA78: mov     edx, [ebp+0]
0x55EA7B: mov     eax, [edx]
0x55EA7D: push    1
0x55EA7F: mov     ecx, ebp
0x55EA81: call    eax
0x55EA83: test    edi, edi
0x55EA85: mov     [esi+10h], edi
0x55EA88: jz      short loc_55EA94
0x55EA8A: add     edi, 4
0x55EA8D: push    edi; lpAddend
0x55EA8E: call    dword ptr ds:0A28078h
0x55EA94: mov     eax, [esi+10h]
0x55EA97: and     word ptr [eax+18h], 0FFCFh
0x55EA9D: mov     eax, [esi+10h]
0x55EAA0: or      [eax+18h], bx
0x55EAA4: push    1Ch; Size
0x55EAA6: call    FormHeapAlloc
0x55EAAB: mov     edi, eax
0x55EAAD: add     esp, 4
0x55EAB0: mov     [esp+34h+var_1C], edi
0x55EAB4: test    edi, edi
0x55EAB6: mov     byte ptr [esp+34h+var_4], 9
0x55EABB: jz      short loc_55EAD6
0x55EABD: mov     ecx, edi; this
0x55EABF: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x55EAC4: mov     dword ptr [edi], offset ??_7NiAlphaProperty@@6B@; const NiAlphaProperty::`vftable'
0x55EACA: mov     word ptr [edi+18h], 0ECh ; 'ì'
0x55EAD0: mov     byte ptr [edi+1Ah], 0
0x55EAD4: jmp     short loc_55EAD8
0x55EAD6: xor     edi, edi
0x55EAD8: mov     ebp, [esi+14h]
0x55EADB: cmp     ebp, edi
0x55EADD: mov     byte ptr [esp+34h+var_4], 5
0x55EAE2: jz      short loc_55EB16
0x55EAE4: test    ebp, ebp
0x55EAE6: jz      short loc_55EB05
0x55EAE8: lea     ecx, [ebp+4]
0x55EAEB: push    ecx; lpAddend
0x55EAEC: call    dword ptr ds:0A2807Ch
0x55EAF2: test    eax, eax
0x55EAF4: jnz     short loc_55EB05
0x55EAF6: test    ebp, ebp
0x55EAF8: jz      short loc_55EB05
0x55EAFA: mov     edx, [ebp+0]
0x55EAFD: mov     eax, [edx]
0x55EAFF: push    1
0x55EB01: mov     ecx, ebp
0x55EB03: call    eax
0x55EB05: test    edi, edi
0x55EB07: mov     [esi+14h], edi
0x55EB0A: jz      short loc_55EB16
0x55EB0C: add     edi, 4
0x55EB0F: push    edi; lpAddend
0x55EB10: call    dword ptr ds:0A28078h
0x55EB16: mov     eax, [esi+14h]
0x55EB19: or      word ptr [eax+18h], 200h
0x55EB1F: mov     eax, [esi+14h]
0x55EB22: mov     cx, [eax+18h]
0x55EB26: and     cx, 0F3FFh
0x55EB2B: or      cx, 1000h
0x55EB30: mov     [eax+18h], cx
0x55EB34: mov     eax, [esi+14h]
0x55EB37: mov     byte ptr [eax+1Ah], 54h ; 'T'
0x55EB3B: mov     eax, [esi+14h]
0x55EB3E: and     word ptr [eax+18h], 0FFFEh
0x55EB44: push    10h; Size
0x55EB46: call    FormHeapAlloc
0x55EB4B: add     esp, 4
0x55EB4E: mov     [esp+34h+var_1C], eax
0x55EB52: test    eax, eax
0x55EB54: mov     byte ptr [esp+34h+var_4], 0Ah
0x55EB59: jz      short loc_55EB68
0x55EB5B: push    3
0x55EB5D: mov     ecx, eax
0x55EB5F: call    sub_6FA890
0x55EB64: mov     ebp, eax
0x55EB66: jmp     short loc_55EB6A
0x55EB68: xor     ebp, ebp
0x55EB6A: mov     edi, [esi+18h]
0x55EB6D: cmp     edi, ebp
0x55EB6F: mov     byte ptr [esp+34h+var_4], 5
0x55EB74: jz      short loc_55EBA7
0x55EB76: test    edi, edi
0x55EB78: jz      short loc_55EB96
0x55EB7A: lea     edx, [edi+4]
0x55EB7D: push    edx; lpAddend
0x55EB7E: call    dword ptr ds:0A2807Ch
0x55EB84: test    eax, eax
0x55EB86: jnz     short loc_55EB96
0x55EB88: test    edi, edi
0x55EB8A: jz      short loc_55EB96
0x55EB8C: mov     eax, [edi]
0x55EB8E: mov     edx, [eax]
0x55EB90: push    1
0x55EB92: mov     ecx, edi
0x55EB94: call    edx
0x55EB96: test    ebp, ebp
0x55EB98: mov     [esi+18h], ebp
0x55EB9B: jz      short loc_55EBA7
0x55EB9D: add     ebp, 4
0x55EBA0: push    ebp; lpAddend
0x55EBA1: call    dword ptr ds:0A28078h
0x55EBA7: push    4
0x55EBA9: call    sub_78BD80
0x55EBAE: push    1
0x55EBB0: call    sub_7871C0
0x55EBB5: push    1
0x55EBB7: call    sub_787690
0x55EBBC: fild    dword ptr ds:0B12630h
0x55EBC2: mov     eax, ds:0B12630h
0x55EBC7: test    eax, eax
0x55EBC9: jge     short loc_55EBD1
0x55EBCB: fadd    dword ptr ds:0A2FC78h
0x55EBD1: push    1Ch; Size
0x55EBD3: fstp    dword ptr ds:0B44F04h
0x55EBD9: call    FormHeapAlloc
0x55EBDE: add     esp, 10h
0x55EBE1: mov     [esp+34h+var_1C], eax
0x55EBE5: test    eax, eax
0x55EBE7: mov     byte ptr [esp+34h+var_4], 0Bh
0x55EBEC: jz      short loc_55EBFD
0x55EBEE: push    0Ch
0x55EBF0: push    25h ; '%'
0x55EBF2: push    2
0x55EBF4: mov     ecx, eax
0x55EBF6: call    sub_55E720
0x55EBFB: jmp     short loc_55EBFF
0x55EBFD: xor     eax, eax
0x55EBFF: mov     [esi+24h], eax
0x55EC02: mov     eax, esi
0x55EC04: mov     ecx, dword ptr [esp+34h+var_C]
0x55EC08: mov     large fs:0, ecx
0x55EC0F: pop     ecx
0x55EC10: pop     edi
0x55EC11: pop     esi
0x55EC12: pop     ebp
0x55EC13: pop     ebx
0x55EC14: add     esp, 20h
0x55EC17: retn
