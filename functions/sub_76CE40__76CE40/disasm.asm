0x76CE40: push    ebx
0x76CE41: push    esi
0x76CE42: mov     ebx, 1
0x76CE47: test    ds:0B42578h, bl
0x76CE4D: push    edi
0x76CE4E: mov     esi, ecx
0x76CE50: jnz     short loc_76CE6F
0x76CE52: or      ds:0B42578h, ebx
0x76CE58: push    offset sub_A26DC0; void (__cdecl *)()
0x76CE5D: mov     dword ptr ds:0B42574h, 0
0x76CE67: call    _atexit
0x76CE6C: add     esp, 4
0x76CE6F: movzx   ecx, word ptr [esi+0Ah]
0x76CE73: mov     eax, [esp+0Ch+arg_0]
0x76CE77: cmp     eax, ecx
0x76CE79: mov     edi, [esp+0Ch+arg_4]
0x76CE7D: jb      short loc_76CE96
0x76CE7F: lea     edx, [eax+1]
0x76CE82: mov     [esi+0Ah], dx
0x76CE86: mov     ecx, [edi]
0x76CE88: cmp     ecx, ds:0B42574h
0x76CE8E: jz      short loc_76CEB9
0x76CE90: add     [esi+0Ch], bx
0x76CE94: jmp     short loc_76CEB9
0x76CE96: mov     ecx, ds:0B42574h
0x76CE9C: cmp     [edi], ecx
0x76CE9E: mov     edx, [esi+4]
0x76CEA1: jz      short loc_76CEAE
0x76CEA3: cmp     [edx+eax*4], ecx
0x76CEA6: jnz     short loc_76CEB9
0x76CEA8: add     [esi+0Ch], bx
0x76CEAC: jmp     short loc_76CEB9
0x76CEAE: cmp     [edx+eax*4], ecx
0x76CEB1: jz      short loc_76CEB9
0x76CEB3: add     word ptr [esi+0Ch], 0FFFFh
0x76CEB9: mov     ecx, [esi+4]
0x76CEBC: lea     esi, [ecx+eax*4]
0x76CEBF: mov     ecx, [esi]; this
0x76CEC1: cmp     ecx, [edi]
0x76CEC3: jz      short loc_76CEDF
0x76CEC5: test    ecx, ecx
0x76CEC7: jz      short loc_76CED4
0x76CEC9: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x76CECD: jnz     short loc_76CED4
0x76CECF: call    sub_7604D0
0x76CED4: mov     eax, [edi]
0x76CED6: test    eax, eax
0x76CED8: mov     [esi], eax
0x76CEDA: jz      short loc_76CEDF
0x76CEDC: add     [eax+60h], ebx
0x76CEDF: pop     edi
0x76CEE0: pop     esi
0x76CEE1: pop     ebx
0x76CEE2: retn    8
