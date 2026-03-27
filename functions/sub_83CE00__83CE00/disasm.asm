0x83CE00: push    0FFFFFFFFh
0x83CE02: push    offset SEH_882120
0x83CE07: mov     eax, large fs:0
0x83CE0D: push    eax
0x83CE0E: push    ebx
0x83CE0F: push    ebp
0x83CE10: push    esi
0x83CE11: push    edi
0x83CE12: mov     eax, ds:0B30AACh
0x83CE17: xor     eax, esp
0x83CE19: push    eax
0x83CE1A: lea     eax, [esp+20h+var_C]
0x83CE1E: mov     large fs:0, eax
0x83CE24: mov     esi, ecx
0x83CE26: mov     ebx, [esp+20h+arg_8]
0x83CE2A: mov     eax, [ebx+10h]
0x83CE2D: mov     edi, ds:0B457ECh
0x83CE33: push    eax
0x83CE34: call    sub_848DA0
0x83CE39: mov     ebx, [ebx+0Ch]
0x83CE3C: push    ebx
0x83CE3D: mov     ecx, esi
0x83CE3F: call    sub_848E50
0x83CE44: mov     ecx, [esp+20h+arg_0]
0x83CE48: mov     eax, [esi]
0x83CE4A: mov     edx, [eax+0BCh]
0x83CE50: push    0
0x83CE52: push    ebx
0x83CE53: push    ecx
0x83CE54: mov     ecx, esi
0x83CE56: call    edx
0x83CE58: mov     eax, [edi+24h]
0x83CE5B: mov     ebx, [esp+20h+arg_C]
0x83CE5F: mov     ebp, [eax]
0x83CE61: mov     edx, [ebx]
0x83CE63: mov     eax, [edx+88h]
0x83CE69: push    0
0x83CE6B: mov     ecx, ebx
0x83CE6D: mov     [esp+24h+arg_8], ebp
0x83CE71: call    eax
0x83CE73: mov     ebp, [ebp+4]
0x83CE76: cmp     ebp, eax
0x83CE78: mov     [esp+20h+arg_0], eax
0x83CE7C: jz      short loc_83CEB8
0x83CE7E: test    ebp, ebp
0x83CE80: jz      short loc_83CEA3
0x83CE82: lea     ecx, [ebp+4]
0x83CE85: push    ecx; lpAddend
0x83CE86: call    dword ptr ds:0A2807Ch
0x83CE8C: test    eax, eax
0x83CE8E: jnz     short loc_83CE9F
0x83CE90: test    ebp, ebp
0x83CE92: jz      short loc_83CE9F
0x83CE94: mov     edx, [ebp+0]
0x83CE97: mov     eax, [edx]
0x83CE99: push    1
0x83CE9B: mov     ecx, ebp
0x83CE9D: call    eax
0x83CE9F: mov     eax, [esp+20h+arg_0]
0x83CEA3: test    eax, eax
0x83CEA5: mov     ecx, [esp+20h+arg_8]
0x83CEA9: mov     [ecx+4], eax
0x83CEAC: jz      short loc_83CEB8
0x83CEAE: add     eax, 4
0x83CEB1: push    eax; lpAddend
0x83CEB2: call    dword ptr ds:0A28078h
0x83CEB8: mov     edx, [esp+20h+arg_8]
0x83CEBC: push    ebx
0x83CEBD: push    edx
0x83CEBE: mov     ecx, esi
0x83CEC0: call    sub_848FA0
0x83CEC5: mov     eax, [edi+24h]
0x83CEC8: mov     ebp, [eax+4]
0x83CECB: push    0
0x83CECD: push    ebx
0x83CECE: mov     ecx, esi
0x83CED0: mov     [esp+28h+arg_8], ebp
0x83CED4: call    sub_848FD0
0x83CED9: mov     ebp, [ebp+4]
0x83CEDC: cmp     ebp, eax
0x83CEDE: mov     [esp+20h+arg_0], eax
0x83CEE2: jz      short loc_83CF1E
0x83CEE4: test    ebp, ebp
0x83CEE6: jz      short loc_83CF09
0x83CEE8: lea     ecx, [ebp+4]
0x83CEEB: push    ecx; lpAddend
0x83CEEC: call    dword ptr ds:0A2807Ch
0x83CEF2: test    eax, eax
0x83CEF4: jnz     short loc_83CF05
0x83CEF6: test    ebp, ebp
0x83CEF8: jz      short loc_83CF05
0x83CEFA: mov     edx, [ebp+0]
0x83CEFD: mov     eax, [edx]
0x83CEFF: push    1
0x83CF01: mov     ecx, ebp
0x83CF03: call    eax
0x83CF05: mov     eax, [esp+20h+arg_0]
0x83CF09: test    eax, eax
0x83CF0B: mov     ecx, [esp+20h+arg_8]
0x83CF0F: mov     [ecx+4], eax
0x83CF12: jz      short loc_83CF1E
0x83CF14: add     eax, 4
0x83CF17: push    eax; lpAddend
0x83CF18: call    dword ptr ds:0A28078h
0x83CF1E: mov     edx, [esp+20h+arg_8]
0x83CF22: push    ebx
0x83CF23: push    edx
0x83CF24: mov     ecx, esi
0x83CF26: call    sub_848FA0
0x83CF2B: mov     eax, [edi+24h]
0x83CF2E: mov     ebp, [eax+10h]
0x83CF31: mov     edx, [ebx]
0x83CF33: mov     eax, [edx+90h]
0x83CF39: push    0
0x83CF3B: mov     ecx, ebx
0x83CF3D: mov     [esp+24h+arg_8], ebp
0x83CF41: call    eax
0x83CF43: mov     ebp, [ebp+4]
0x83CF46: cmp     ebp, eax
0x83CF48: mov     [esp+20h+arg_0], eax
0x83CF4C: jz      short loc_83CF88
0x83CF4E: test    ebp, ebp
0x83CF50: jz      short loc_83CF73
0x83CF52: lea     ecx, [ebp+4]
0x83CF55: push    ecx; lpAddend
0x83CF56: call    dword ptr ds:0A2807Ch
0x83CF5C: test    eax, eax
0x83CF5E: jnz     short loc_83CF6F
0x83CF60: test    ebp, ebp
0x83CF62: jz      short loc_83CF6F
0x83CF64: mov     edx, [ebp+0]
0x83CF67: mov     eax, [edx]
0x83CF69: push    1
0x83CF6B: mov     ecx, ebp
0x83CF6D: call    eax
0x83CF6F: mov     eax, [esp+20h+arg_0]
0x83CF73: test    eax, eax
0x83CF75: mov     ecx, [esp+20h+arg_8]
0x83CF79: mov     [ecx+4], eax
0x83CF7C: jz      short loc_83CF88
0x83CF7E: add     eax, 4
0x83CF81: push    eax; lpAddend
0x83CF82: call    dword ptr ds:0A28078h
0x83CF88: mov     edx, [esp+20h+arg_8]
0x83CF8C: push    ebx
0x83CF8D: push    edx
0x83CF8E: mov     ecx, esi
0x83CF90: call    sub_848FA0
0x83CF95: mov     ebx, 1
0x83CF9A: add     [edi+60h], ebx
0x83CF9D: mov     [esp+20h+arg_8], edi
0x83CFA1: mov     ecx, [esi+38h]
0x83CFA4: lea     eax, [esp+20h+arg_8]
0x83CFA8: push    eax
0x83CFA9: push    ecx
0x83CFAA: lea     ecx, [esi+40h]
0x83CFAD: mov     [esp+28h+var_4], 0
0x83CFB5: call    sub_76CE40
0x83CFBA: or      eax, 0FFFFFFFFh
0x83CFBD: add     [edi+60h], eax
0x83CFC0: mov     [esp+20h+var_4], eax
0x83CFC4: jnz     short loc_83CFCD
0x83CFC6: mov     ecx, edi
0x83CFC8: call    sub_7604D0
0x83CFCD: add     [esi+38h], ebx
0x83CFD0: mov     ecx, [esp+20h+var_C]
0x83CFD4: mov     large fs:0, ecx
0x83CFDB: pop     ecx
0x83CFDC: pop     edi
0x83CFDD: pop     esi
0x83CFDE: pop     ebp
0x83CFDF: pop     ebx
0x83CFE0: add     esp, 0Ch
0x83CFE3: retn    10h
