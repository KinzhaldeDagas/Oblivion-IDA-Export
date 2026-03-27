0x67CDB0: push    ecx
0x67CDB1: push    ebp
0x67CDB2: mov     ebp, [esp+8+arg_0]
0x67CDB6: test    ebp, ebp
0x67CDB8: push    esi
0x67CDB9: mov     esi, ecx
0x67CDBB: mov     [esp+0Ch+var_4], esi
0x67CDBF: jz      loc_67CEF8
0x67CDC5: push    ebx
0x67CDC6: push    0Ch; Size
0x67CDC8: call    FormHeapAlloc
0x67CDCD: add     esp, 4
0x67CDD0: mov     ecx, ebp; this
0x67CDD2: mov     ebx, eax
0x67CDD4: call    sub_5E6C60
0x67CDD9: test    al, al
0x67CDDB: mov     eax, ds:0B333C4h
0x67CDE0: jz      short loc_67CE07
0x67CDE2: cmp     byte ptr [eax+738h], 0
0x67CDE9: jnz     short loc_67CDF4
0x67CDEB: cmp     byte ptr [eax+610h], 0
0x67CDF2: jz      short loc_67CE07
0x67CDF4: mov     ecx, [ebp+58h]
0x67CDF7: mov     eax, [ecx]
0x67CDF9: mov     edx, [eax+14Ch]
0x67CDFF: push    0
0x67CE01: call    edx
0x67CE03: xor     al, al
0x67CE05: jmp     short loc_67CE25
0x67CE07: cmp     ebp, eax
0x67CE09: jnz     short loc_67CE21
0x67CE0B: cmp     byte ptr [eax+738h], 0
0x67CE12: jnz     short loc_67CE1D
0x67CE14: cmp     byte ptr [eax+610h], 0
0x67CE1B: jz      short loc_67CE21
0x67CE1D: mov     al, 1
0x67CE1F: jmp     short loc_67CE25
0x67CE21: mov     al, byte ptr [esp+10h+arg_4]
0x67CE25: mov     [ebx+4], al
0x67CE28: mov     al, byte ptr [esp+10h+arg_8]
0x67CE2C: cmp     al, 0FFh
0x67CE2E: mov     [ebx], ebp
0x67CE30: mov     dword ptr [ebx+8], 0
0x67CE37: jz      short loc_67CE44
0x67CE39: movsx   eax, al
0x67CE3C: mov     [ebx+8], eax
0x67CE3F: jmp     loc_67CECC
0x67CE44: push    edi
0x67CE45: mov     edi, [esi]
0x67CE47: test    edi, edi
0x67CE49: mov     byte ptr [esp+14h+arg_4], 0
0x67CE4E: mov     [esp+14h+arg_8], 0
0x67CE56: jz      short loc_67CEC4
0x67CE58: mov     esi, [edi]
0x67CE5A: test    esi, esi
0x67CE5C: jz      short loc_67CEB9
0x67CE5E: mov     ecx, [ebx+8]
0x67CE61: mov     edx, [ebp+0]
0x67CE64: mov     eax, [esi]
0x67CE66: mov     edx, [edx+224h]
0x67CE6C: mov     [esp+14h+arg_8], ecx
0x67CE70: push    eax
0x67CE71: mov     ecx, ebp
0x67CE73: call    edx
0x67CE75: cmp     eax, 50h ; 'P'
0x67CE78: jl      short loc_67CEAD
0x67CE7A: mov     ecx, [esi]
0x67CE7C: mov     eax, [ecx]
0x67CE7E: mov     edx, [eax+330h]
0x67CE84: call    edx
0x67CE86: test    eax, eax
0x67CE88: jz      short loc_67CEA2
0x67CE8A: mov     ecx, [esi]
0x67CE8C: mov     eax, [ecx]
0x67CE8E: mov     edx, [eax+330h]
0x67CE94: push    ebp
0x67CE95: call    edx
0x67CE97: mov     ecx, eax
0x67CE99: call    sub_613670
0x67CE9E: test    al, al
0x67CEA0: jnz     short loc_67CEAD
0x67CEA2: mov     eax, [esi+8]
0x67CEA5: mov     [ebx+8], eax
0x67CEA8: mov     byte ptr [esp+14h+arg_4], 1
0x67CEAD: mov     edi, [edi+4]
0x67CEB0: add     [esp+14h+arg_8], 1
0x67CEB5: test    edi, edi
0x67CEB7: jnz     short loc_67CE58
0x67CEB9: cmp     byte ptr [esp+14h+arg_4], 0
0x67CEBE: mov     esi, [esp+14h+var_4]
0x67CEC2: jnz     short loc_67CECB
0x67CEC4: mov     ecx, [esp+14h+arg_8]
0x67CEC8: mov     [ebx+8], ecx
0x67CECB: pop     edi
0x67CECC: cmp     dword ptr [esi], 0
0x67CECF: jz      short loc_67CEEE
0x67CED1: push    0
0x67CED3: push    ebp
0x67CED4: mov     ecx, esi
0x67CED6: call    sub_67B6B0
0x67CEDB: test    eax, eax
0x67CEDD: jnz     short loc_67CEEE
0x67CEDF: mov     ecx, [esi]
0x67CEE1: push    ebx
0x67CEE2: call    BSSimpleList_PushFront
0x67CEE7: pop     ebx
0x67CEE8: pop     esi
0x67CEE9: pop     ebp
0x67CEEA: pop     ecx
0x67CEEB: retn    0Ch
0x67CEEE: push    ebx
0x67CEEF: call    FormHeapFree
0x67CEF4: add     esp, 4
0x67CEF7: pop     ebx
0x67CEF8: pop     esi
0x67CEF9: pop     ebp
0x67CEFA: pop     ecx
0x67CEFB: retn    0Ch
