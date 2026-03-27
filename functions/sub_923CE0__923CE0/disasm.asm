0x923CE0: push    ebp
0x923CE1: mov     ebp, esp
0x923CE3: and     esp, 0FFFFFFF0h
0x923CE6: push    ecx
0x923CE7: mov     ecx, [ebp+arg_8]
0x923CEA: push    ebx
0x923CEB: push    esi
0x923CEC: mov     esi, [ebp+arg_0]
0x923CEF: mov     eax, [esi+44h]
0x923CF2: cmp     eax, [esi+0Ch]
0x923CF5: push    edi
0x923CF6: mov     edi, [ebp+arg_4]
0x923CF9: lea     ecx, [edi+ecx*4]
0x923CFC: mov     [esp+10h+var_4], ecx
0x923D00: jnz     short loc_923D2C
0x923D02: xorps   xmm0, xmm0
0x923D05: mov     byte ptr [eax], 1
0x923D08: movaps  xmmword ptr [eax+30h], xmm0
0x923D0C: movaps  xmmword ptr [eax+10h], xmm0
0x923D10: movaps  xmmword ptr [eax+20h], xmm0
0x923D14: movaps  xmmword ptr [eax+40h], xmm0
0x923D18: movaps  xmmword ptr [eax+50h], xmm0
0x923D1C: movaps  xmmword ptr [eax+60h], xmm0
0x923D20: movaps  xmmword ptr [eax+70h], xmm0
0x923D24: add     eax, 80h ; '€'
0x923D29: mov     [esi+44h], eax
0x923D2C: cmp     edi, ecx
0x923D2E: jnb     short loc_923D5B
0x923D30: mov     edx, [edi]
0x923D32: mov     ecx, [edx+50h]
0x923D35: mov     ebx, [esi+0Ch]
0x923D38: mov     edx, eax
0x923D3A: sub     edx, ebx
0x923D3C: cmp     [ecx+8], edx
0x923D3F: mov     ebx, [esi]
0x923D41: jz      short loc_923D46
0x923D43: mov     [ecx+8], edx
0x923D46: mov     edx, [ecx]
0x923D48: push    eax
0x923D49: push    ebx
0x923D4A: call    dword ptr [edx+14h]
0x923D4D: mov     ecx, [esp+10h+var_4]
0x923D51: add     edi, 4
0x923D54: cmp     edi, ecx
0x923D56: mov     [esi+44h], eax
0x923D59: jb      short loc_923D30
0x923D5B: pop     edi
0x923D5C: pop     esi
0x923D5D: mov     byte ptr [eax], 2
0x923D60: pop     ebx
0x923D61: mov     esp, ebp
0x923D63: pop     ebp
0x923D64: retn
