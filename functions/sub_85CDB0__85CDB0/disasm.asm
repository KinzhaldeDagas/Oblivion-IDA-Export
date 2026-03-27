0x85CDB0: push    0FFFFFFFFh
0x85CDB2: push    offset SEH_85E160
0x85CDB7: mov     eax, large fs:0
0x85CDBD: push    eax
0x85CDBE: push    ebx
0x85CDBF: push    ebp
0x85CDC0: push    esi
0x85CDC1: push    edi
0x85CDC2: mov     eax, ds:0B30AACh
0x85CDC7: xor     eax, esp
0x85CDC9: push    eax
0x85CDCA: lea     eax, [esp+20h+var_C]
0x85CDCE: mov     large fs:0, eax
0x85CDD4: mov     esi, ecx
0x85CDD6: mov     ebx, [esp+20h+arg_8]
0x85CDDA: mov     eax, [ebx+10h]
0x85CDDD: mov     edi, ds:0B477D4h
0x85CDE3: push    eax
0x85CDE4: call    sub_848C40
0x85CDE9: mov     ebx, [ebx+0Ch]
0x85CDEC: push    ebx
0x85CDED: mov     ecx, esi
0x85CDEF: call    sub_848E50
0x85CDF4: mov     ecx, [esp+20h+arg_0]
0x85CDF8: mov     eax, [esi]
0x85CDFA: mov     edx, [eax+0BCh]
0x85CE00: push    0
0x85CE02: push    ebx
0x85CE03: push    ecx
0x85CE04: mov     ecx, esi
0x85CE06: call    edx
0x85CE08: mov     eax, [edi+24h]
0x85CE0B: mov     ebx, [esp+20h+arg_C]
0x85CE0F: mov     ebp, [eax]
0x85CE11: mov     edx, [ebx]
0x85CE13: mov     eax, [edx+88h]
0x85CE19: push    0
0x85CE1B: mov     ecx, ebx
0x85CE1D: mov     [esp+24h+arg_8], ebp
0x85CE21: call    eax
0x85CE23: mov     ebp, [ebp+4]
0x85CE26: cmp     ebp, eax
0x85CE28: mov     [esp+20h+arg_0], eax
0x85CE2C: jz      short loc_85CE68
0x85CE2E: test    ebp, ebp
0x85CE30: jz      short loc_85CE53
0x85CE32: lea     ecx, [ebp+4]
0x85CE35: push    ecx; lpAddend
0x85CE36: call    dword ptr ds:0A2807Ch
0x85CE3C: test    eax, eax
0x85CE3E: jnz     short loc_85CE4F
0x85CE40: test    ebp, ebp
0x85CE42: jz      short loc_85CE4F
0x85CE44: mov     edx, [ebp+0]
0x85CE47: mov     eax, [edx]
0x85CE49: push    1
0x85CE4B: mov     ecx, ebp
0x85CE4D: call    eax
0x85CE4F: mov     eax, [esp+20h+arg_0]
0x85CE53: test    eax, eax
0x85CE55: mov     ecx, [esp+20h+arg_8]
0x85CE59: mov     [ecx+4], eax
0x85CE5C: jz      short loc_85CE68
0x85CE5E: add     eax, 4
0x85CE61: push    eax; lpAddend
0x85CE62: call    dword ptr ds:0A28078h
0x85CE68: mov     edx, [esp+20h+arg_8]
0x85CE6C: push    ebx
0x85CE6D: push    edx
0x85CE6E: mov     ecx, esi
0x85CE70: call    sub_848FA0
0x85CE75: mov     eax, [edi+24h]
0x85CE78: mov     ebp, [eax+4]
0x85CE7B: push    0
0x85CE7D: push    ebx
0x85CE7E: mov     ecx, esi
0x85CE80: mov     [esp+28h+arg_8], ebp
0x85CE84: call    sub_848FD0
0x85CE89: mov     ebp, [ebp+4]
0x85CE8C: cmp     ebp, eax
0x85CE8E: mov     [esp+20h+arg_0], eax
0x85CE92: jz      short loc_85CECE
0x85CE94: test    ebp, ebp
0x85CE96: jz      short loc_85CEB9
0x85CE98: lea     ecx, [ebp+4]
0x85CE9B: push    ecx; lpAddend
0x85CE9C: call    dword ptr ds:0A2807Ch
0x85CEA2: test    eax, eax
0x85CEA4: jnz     short loc_85CEB5
0x85CEA6: test    ebp, ebp
0x85CEA8: jz      short loc_85CEB5
0x85CEAA: mov     edx, [ebp+0]
0x85CEAD: mov     eax, [edx]
0x85CEAF: push    1
0x85CEB1: mov     ecx, ebp
0x85CEB3: call    eax
0x85CEB5: mov     eax, [esp+20h+arg_0]
0x85CEB9: test    eax, eax
0x85CEBB: mov     ecx, [esp+20h+arg_8]
0x85CEBF: mov     [ecx+4], eax
0x85CEC2: jz      short loc_85CECE
0x85CEC4: add     eax, 4
0x85CEC7: push    eax; lpAddend
0x85CEC8: call    dword ptr ds:0A28078h
0x85CECE: mov     edx, [esp+20h+arg_8]
0x85CED2: push    ebx
0x85CED3: push    edx
0x85CED4: mov     ecx, esi
0x85CED6: call    sub_848FA0
0x85CEDB: mov     ecx, [edi+24h]
0x85CEDE: mov     ebx, [ecx+18h]
0x85CEE1: mov     eax, ds:0B43108h
0x85CEE6: mov     ebp, [ebx+4]
0x85CEE9: add     ebx, 4
0x85CEEC: cmp     ebp, eax
0x85CEEE: mov     [esp+20h+arg_8], eax
0x85CEF2: jz      short loc_85CF29
0x85CEF4: test    ebp, ebp
0x85CEF6: jz      short loc_85CF19
0x85CEF8: lea     edx, [ebp+4]
0x85CEFB: push    edx; lpAddend
0x85CEFC: call    dword ptr ds:0A2807Ch
0x85CF02: test    eax, eax
0x85CF04: jnz     short loc_85CF15
0x85CF06: test    ebp, ebp
0x85CF08: jz      short loc_85CF15
0x85CF0A: mov     eax, [ebp+0]
0x85CF0D: mov     edx, [eax]
0x85CF0F: push    1
0x85CF11: mov     ecx, ebp
0x85CF13: call    edx
0x85CF15: mov     eax, [esp+20h+arg_8]
0x85CF19: test    eax, eax
0x85CF1B: mov     [ebx], eax
0x85CF1D: jz      short loc_85CF29
0x85CF1F: add     eax, 4
0x85CF22: push    eax; lpAddend
0x85CF23: call    dword ptr ds:0A28078h
0x85CF29: mov     eax, [edi+24h]
0x85CF2C: mov     ebp, [eax+1Ch]
0x85CF2F: mov     eax, ds:0B4310Ch
0x85CF34: mov     ebx, [ebp+4]
0x85CF37: cmp     ebx, eax
0x85CF39: mov     ecx, eax
0x85CF3B: mov     [esp+20h+arg_8], ecx
0x85CF3F: jz      short loc_85CF76
0x85CF41: test    ebx, ebx
0x85CF43: jz      short loc_85CF65
0x85CF45: lea     ecx, [ebx+4]
0x85CF48: push    ecx; lpAddend
0x85CF49: call    dword ptr ds:0A2807Ch
0x85CF4F: test    eax, eax
0x85CF51: jnz     short loc_85CF61
0x85CF53: test    ebx, ebx
0x85CF55: jz      short loc_85CF61
0x85CF57: mov     edx, [ebx]
0x85CF59: mov     eax, [edx]
0x85CF5B: push    1
0x85CF5D: mov     ecx, ebx
0x85CF5F: call    eax
0x85CF61: mov     ecx, [esp+20h+arg_8]
0x85CF65: test    ecx, ecx
0x85CF67: mov     [ebp+4], ecx
0x85CF6A: jz      short loc_85CF76
0x85CF6C: add     ecx, 4
0x85CF6F: push    ecx; lpAddend
0x85CF70: call    dword ptr ds:0A28078h
0x85CF76: cmp     byte ptr [esp+20h+arg_10], 0
0x85CF7B: jnz     short loc_85CFB8
0x85CF7D: mov     ebx, 1
0x85CF82: add     [edi+60h], ebx
0x85CF85: mov     [esp+20h+arg_10], edi
0x85CF89: mov     edx, [esi+38h]
0x85CF8C: lea     ecx, [esp+20h+arg_10]
0x85CF90: push    ecx
0x85CF91: push    edx
0x85CF92: lea     ecx, [esi+40h]
0x85CF95: mov     [esp+28h+var_4], 0
0x85CF9D: call    sub_76CE40
0x85CFA2: or      eax, 0FFFFFFFFh
0x85CFA5: add     [edi+60h], eax
0x85CFA8: mov     [esp+20h+var_4], eax
0x85CFAC: jnz     short loc_85CFB5
0x85CFAE: mov     ecx, edi
0x85CFB0: call    sub_7604D0
0x85CFB5: add     [esi+38h], ebx
0x85CFB8: mov     ecx, [esp+20h+var_C]
0x85CFBC: mov     large fs:0, ecx
0x85CFC3: pop     ecx
0x85CFC4: pop     edi
0x85CFC5: pop     esi
0x85CFC6: pop     ebp
0x85CFC7: pop     ebx
0x85CFC8: add     esp, 0Ch
0x85CFCB: retn    14h
