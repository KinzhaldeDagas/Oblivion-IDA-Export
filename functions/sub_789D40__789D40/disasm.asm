0x789D40: push    0FFFFFFFFh
0x789D42: push    offset SEH_6F8D30
0x789D47: mov     eax, large fs:0
0x789D4D: push    eax
0x789D4E: sub     esp, 1Ch
0x789D51: push    ebx
0x789D52: push    esi
0x789D53: push    edi
0x789D54: mov     eax, ds:0B30AACh
0x789D59: xor     eax, esp
0x789D5B: push    eax
0x789D5C: lea     eax, [esp+38h+var_C]
0x789D60: mov     large fs:0, eax
0x789D66: mov     ebx, ecx
0x789D68: mov     ecx, [ebx+58h]
0x789D6B: test    ecx, ecx
0x789D6D: jz      loc_789E98
0x789D73: mov     eax, [ecx+4]
0x789D76: test    eax, eax
0x789D78: mov     edi, dword ptr [esp+38h+ArgList]
0x789D7C: jz      short loc_789D9E
0x789D7E: mov     esi, [ecx+8]
0x789D81: sub     esi, eax
0x789D83: mov     eax, 92492493h
0x789D88: imul    esi
0x789D8A: add     edx, esi
0x789D8C: sar     edx, 4
0x789D8F: mov     eax, edx
0x789D91: shr     eax, 1Fh
0x789D94: add     eax, edx
0x789D96: cmp     edi, eax
0x789D98: jb      loc_789E33
0x789D9E: mov     eax, [ecx+4]
0x789DA1: test    eax, eax
0x789DA3: jz      short loc_789DBD
0x789DA5: mov     ecx, [ecx+8]
0x789DA8: sub     ecx, eax
0x789DAA: mov     eax, 92492493h
0x789DAF: imul    ecx
0x789DB1: add     edx, ecx
0x789DB3: sar     edx, 4
0x789DB6: mov     eax, edx
0x789DB8: shr     eax, 1Fh
0x789DBB: add     eax, edx
0x789DBD: push    eax
0x789DBE: push    edi; ArgList
0x789DBF: push    offset aCollisionObjec; "collision object index (%d) exceeds max"...
0x789DC4: lea     esi, [esp+44h+var_28]
0x789DC8: call    sub_7A54A0
0x789DCD: add     esp, 0Ch
0x789DD0: mov     edi, 10h
0x789DD5: cmp     [eax+18h], edi
0x789DD8: mov     [esp+38h+var_4], 0
0x789DE0: jb      short loc_789DE7
0x789DE2: mov     edx, [eax+4]
0x789DE5: jmp     short loc_789DEA
0x789DE7: lea     edx, [eax+4]
0x789DEA: mov     eax, edx
0x789DEC: lea     esi, [eax+1]
0x789DEF: nop
0x789DF0: mov     cl, [eax]
0x789DF2: add     eax, 1
0x789DF5: test    cl, cl
0x789DF7: jnz     short loc_789DF0
0x789DF9: sub     eax, esi
0x789DFB: push    eax; MaxCount
0x789DFC: push    edx; Src
0x789DFD: mov     ecx, offset dword_B2B614
0x789E02: call    sub_414500
0x789E07: cmp     [esp+38h+var_10], edi
0x789E0B: jb      loc_789EA9
0x789E11: mov     eax, [esp+38h+var_24]
0x789E15: push    eax
0x789E16: call    FormHeapFree
0x789E1B: add     esp, 4
0x789E1E: mov     ecx, [esp+38h+var_C]
0x789E22: mov     large fs:0, ecx
0x789E29: pop     ecx
0x789E2A: pop     edi
0x789E2B: pop     esi
0x789E2C: pop     ebx
0x789E2D: add     esp, 28h
0x789E30: retn    10h
0x789E33: push    edi
0x789E34: call    sub_7876F0
0x789E39: mov     ecx, [eax]
0x789E3B: mov     edx, [esp+38h+arg_4]
0x789E3F: mov     [edx], ecx
0x789E41: mov     ecx, [ebx+58h]
0x789E44: push    edi
0x789E45: call    sub_7876F0
0x789E4A: mov     edx, [eax+4]
0x789E4D: mov     ecx, [esp+38h+arg_8]
0x789E51: add     eax, 4
0x789E54: mov     [ecx], edx
0x789E56: mov     edx, [eax+4]
0x789E59: mov     [ecx+4], edx
0x789E5C: mov     eax, [eax+8]
0x789E5F: mov     [ecx+8], eax
0x789E62: mov     ecx, [ebx+58h]
0x789E65: push    edi
0x789E66: call    sub_7876F0
0x789E6B: mov     edx, [eax+10h]
0x789E6E: mov     ecx, [esp+38h+arg_C]
0x789E72: add     eax, 10h
0x789E75: mov     [ecx], edx
0x789E77: mov     edx, [eax+4]
0x789E7A: mov     [ecx+4], edx
0x789E7D: mov     eax, [eax+8]
0x789E80: mov     [ecx+8], eax
0x789E83: mov     ecx, [esp+38h+var_C]
0x789E87: mov     large fs:0, ecx
0x789E8E: pop     ecx
0x789E8F: pop     edi
0x789E90: pop     esi
0x789E91: pop     ebx
0x789E92: add     esp, 28h
0x789E95: retn    10h
0x789E98: push    2Eh ; '.'; MaxCount
0x789E9A: push    offset aNoCollisionObj; "no collision objects are stored with th"...
0x789E9F: mov     ecx, offset dword_B2B614
0x789EA4: call    sub_414500
0x789EA9: mov     ecx, [esp+38h+var_C]
0x789EAD: mov     large fs:0, ecx
0x789EB4: pop     ecx
0x789EB5: pop     edi
0x789EB6: pop     esi
0x789EB7: pop     ebx
0x789EB8: add     esp, 28h
0x789EBB: retn    10h
