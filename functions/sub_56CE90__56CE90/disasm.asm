0x56CE90: push    0FFFFFFFFh
0x56CE92: push    offset SEH_56CE90
0x56CE97: mov     eax, large fs:0
0x56CE9D: push    eax
0x56CE9E: push    ecx
0x56CE9F: push    ebx
0x56CEA0: push    ebp
0x56CEA1: push    esi
0x56CEA2: push    edi
0x56CEA3: mov     eax, ds:0B30AACh
0x56CEA8: xor     eax, esp
0x56CEAA: push    eax
0x56CEAB: lea     eax, [esp+24h+var_C]
0x56CEAF: mov     large fs:0, eax
0x56CEB5: mov     esi, ecx
0x56CEB7: mov     [esp+24h+var_10], esi
0x56CEBB: fld     [esp+24h+arg_4]
0x56CEBF: mov     eax, [esp+24h+arg_0]
0x56CEC3: push    ecx
0x56CEC4: fstp    [esp+28h+var_28]; float
0x56CEC7: push    eax; int
0x56CEC8: call    BSTempEff_constr
0x56CECD: xor     ebx, ebx
0x56CECF: mov     dword ptr [esi], offset ??_7BSTempEffectGeometryDecal@@6B@; const BSTempEffectGeometryDecal::`vftable'
0x56CED5: mov     [esp+24h+var_4], ebx
0x56CED9: mov     [esi+1Ch], ebx
0x56CEDC: mov     [esi+2Ch], ebx
0x56CEDF: mov     [esi+30h], ebx
0x56CEE2: mov     eax, [esp+24h+arg_8]
0x56CEE6: lea     ecx, [eax+8]
0x56CEE9: mov     byte ptr [esp+24h+var_4], 3
0x56CEEE: mov     [esi+28h], bl
0x56CEF1: mov     [esi+18h], eax
0x56CEF4: call    sub_718A50
0x56CEF9: mov     edi, [esi+1Ch]
0x56CEFC: cmp     edi, ebx
0x56CEFE: jz      short loc_56CF1F
0x56CF00: lea     ecx, [edi+4]
0x56CF03: push    ecx; lpAddend
0x56CF04: call    dword ptr ds:0A2807Ch
0x56CF0A: test    eax, eax
0x56CF0C: jnz     short loc_56CF1C
0x56CF0E: cmp     edi, ebx
0x56CF10: jz      short loc_56CF1C
0x56CF12: mov     edx, [edi]
0x56CF14: mov     eax, [edx]
0x56CF16: push    1
0x56CF18: mov     ecx, edi
0x56CF1A: call    eax
0x56CF1C: mov     [esi+1Ch], ebx
0x56CF1F: mov     ebp, [esp+24h+arg_C]
0x56CF23: mov     [esi+24h], ebx
0x56CF26: mov     edi, [esi+2Ch]
0x56CF29: cmp     edi, ebp
0x56CF2B: jz      short loc_56CF5E
0x56CF2D: cmp     edi, ebx
0x56CF2F: jz      short loc_56CF4D
0x56CF31: lea     ecx, [edi+4]
0x56CF34: push    ecx; lpAddend
0x56CF35: call    dword ptr ds:0A2807Ch
0x56CF3B: test    eax, eax
0x56CF3D: jnz     short loc_56CF4D
0x56CF3F: cmp     edi, ebx
0x56CF41: jz      short loc_56CF4D
0x56CF43: mov     edx, [edi]
0x56CF45: mov     eax, [edx]
0x56CF47: push    1
0x56CF49: mov     ecx, edi
0x56CF4B: call    eax
0x56CF4D: cmp     ebp, ebx
0x56CF4F: mov     [esi+2Ch], ebp
0x56CF52: jz      short loc_56CF5E
0x56CF54: lea     ecx, [ebp+4]
0x56CF57: push    ecx; lpAddend
0x56CF58: call    dword ptr ds:0A28078h
0x56CF5E: mov     ebp, [ebp+1Ch]
0x56CF61: mov     edi, [esi+30h]
0x56CF64: cmp     edi, ebp
0x56CF66: jz      short loc_56CF99
0x56CF68: cmp     edi, ebx
0x56CF6A: jz      short loc_56CF88
0x56CF6C: lea     edx, [edi+4]
0x56CF6F: push    edx; lpAddend
0x56CF70: call    dword ptr ds:0A2807Ch
0x56CF76: test    eax, eax
0x56CF78: jnz     short loc_56CF88
0x56CF7A: cmp     edi, ebx
0x56CF7C: jz      short loc_56CF88
0x56CF7E: mov     eax, [edi]
0x56CF80: mov     edx, [eax]
0x56CF82: push    1
0x56CF84: mov     ecx, edi
0x56CF86: call    edx
0x56CF88: cmp     ebp, ebx
0x56CF8A: mov     [esi+30h], ebp
0x56CF8D: jz      short loc_56CF99
0x56CF8F: add     ebp, 4
0x56CF92: push    ebp; lpAddend
0x56CF93: call    dword ptr ds:0A28078h
0x56CF99: mov     eax, [esp+24h+arg_10]
0x56CF9D: fld     [esp+24h+arg_28]
0x56CFA1: mov     ecx, [esp+24h+arg_14]
0x56CFA5: fstp    dword ptr [esi+4Ch]
0x56CFA8: mov     edx, [esp+24h+arg_18]
0x56CFAC: fld     [esp+24h+arg_2C]
0x56CFB0: mov     [esi+34h], eax
0x56CFB3: fstp    dword ptr [esi+50h]
0x56CFB6: mov     eax, [esp+24h+arg_1C]
0x56CFBA: mov     [esi+38h], ecx
0x56CFBD: mov     ecx, [esp+24h+arg_20]
0x56CFC1: mov     [esi+40h], eax
0x56CFC4: mov     [esi+3Ch], edx
0x56CFC7: mov     edx, [esp+24h+arg_24]
0x56CFCB: mov     [esi+44h], ecx
0x56CFCE: mov     [esi+48h], edx
0x56CFD1: mov     eax, esi
0x56CFD3: mov     ecx, dword ptr [esp+24h+var_C]
0x56CFD7: mov     large fs:0, ecx
0x56CFDE: pop     ecx
0x56CFDF: pop     edi
0x56CFE0: pop     esi
0x56CFE1: pop     ebp
0x56CFE2: pop     ebx
0x56CFE3: add     esp, 10h
0x56CFE6: retn    30h ; '0'
