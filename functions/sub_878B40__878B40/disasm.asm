0x878B40: push    0FFFFFFFFh
0x878B42: push    offset SEH_882120
0x878B47: mov     eax, large fs:0
0x878B4D: push    eax
0x878B4E: push    ebx
0x878B4F: push    ebp
0x878B50: push    esi
0x878B51: push    edi
0x878B52: mov     eax, ds:0B30AACh
0x878B57: xor     eax, esp
0x878B59: push    eax
0x878B5A: lea     eax, [esp+20h+var_C]
0x878B5E: mov     large fs:0, eax
0x878B64: mov     esi, ecx
0x878B66: mov     ebp, [esp+20h+arg_8]
0x878B6A: mov     ebx, [ebp+0Ch]
0x878B6D: mov     edi, ds:0B476C4h
0x878B73: push    ebx
0x878B74: call    sub_848E50
0x878B79: mov     ebp, [ebp+10h]
0x878B7C: mov     ecx, [esp+20h+arg_0]
0x878B80: mov     eax, [esi]
0x878B82: mov     edx, [eax+0BCh]
0x878B88: push    ebp
0x878B89: push    ebx
0x878B8A: push    ecx
0x878B8B: mov     ecx, esi
0x878B8D: call    edx
0x878B8F: mov     eax, [edi+24h]
0x878B92: mov     ebp, [esp+20h+arg_C]
0x878B96: mov     ebx, [eax]
0x878B98: mov     edx, [ebp+0]
0x878B9B: mov     eax, [edx+88h]
0x878BA1: push    0
0x878BA3: mov     ecx, ebp
0x878BA5: mov     [esp+24h+arg_8], ebx
0x878BA9: call    eax
0x878BAB: mov     ebx, [ebx+4]
0x878BAE: cmp     ebx, eax
0x878BB0: mov     [esp+20h+arg_0], eax
0x878BB4: jz      short loc_878BEF
0x878BB6: test    ebx, ebx
0x878BB8: jz      short loc_878BDA
0x878BBA: lea     ecx, [ebx+4]
0x878BBD: push    ecx; lpAddend
0x878BBE: call    dword ptr ds:0A2807Ch
0x878BC4: test    eax, eax
0x878BC6: jnz     short loc_878BD6
0x878BC8: test    ebx, ebx
0x878BCA: jz      short loc_878BD6
0x878BCC: mov     edx, [ebx]
0x878BCE: mov     eax, [edx]
0x878BD0: push    1
0x878BD2: mov     ecx, ebx
0x878BD4: call    eax
0x878BD6: mov     eax, [esp+20h+arg_0]
0x878BDA: test    eax, eax
0x878BDC: mov     ecx, [esp+20h+arg_8]
0x878BE0: mov     [ecx+4], eax
0x878BE3: jz      short loc_878BEF
0x878BE5: add     eax, 4
0x878BE8: push    eax; lpAddend
0x878BE9: call    dword ptr ds:0A28078h
0x878BEF: mov     edx, [edi+24h]
0x878BF2: mov     ebx, [edx+4]
0x878BF5: push    0
0x878BF7: push    ebp
0x878BF8: mov     ecx, esi
0x878BFA: mov     [esp+28h+arg_8], ebx
0x878BFE: call    sub_848FD0
0x878C03: mov     ebx, [ebx+4]
0x878C06: cmp     ebx, eax
0x878C08: mov     [esp+20h+arg_0], eax
0x878C0C: jz      short loc_878C47
0x878C0E: test    ebx, ebx
0x878C10: jz      short loc_878C32
0x878C12: lea     eax, [ebx+4]
0x878C15: push    eax; lpAddend
0x878C16: call    dword ptr ds:0A2807Ch
0x878C1C: test    eax, eax
0x878C1E: jnz     short loc_878C2E
0x878C20: test    ebx, ebx
0x878C22: jz      short loc_878C2E
0x878C24: mov     edx, [ebx]
0x878C26: mov     eax, [edx]
0x878C28: push    1
0x878C2A: mov     ecx, ebx
0x878C2C: call    eax
0x878C2E: mov     eax, [esp+20h+arg_0]
0x878C32: test    eax, eax
0x878C34: mov     ecx, [esp+20h+arg_8]
0x878C38: mov     [ecx+4], eax
0x878C3B: jz      short loc_878C47
0x878C3D: add     eax, 4
0x878C40: push    eax; lpAddend
0x878C41: call    dword ptr ds:0A28078h
0x878C47: mov     edx, [edi+24h]
0x878C4A: mov     eax, [edx+10h]
0x878C4D: mov     edx, [ebp+0]
0x878C50: mov     [esp+20h+arg_8], eax
0x878C54: mov     eax, [edx+90h]
0x878C5A: push    0
0x878C5C: mov     ecx, ebp
0x878C5E: call    eax
0x878C60: mov     ecx, [esp+20h+arg_8]
0x878C64: mov     ebp, [ecx+4]
0x878C67: mov     ebx, eax
0x878C69: cmp     ebp, ebx
0x878C6B: jz      short loc_878CA3
0x878C6D: test    ebp, ebp
0x878C6F: jz      short loc_878C8E
0x878C71: lea     edx, [ebp+4]
0x878C74: push    edx; lpAddend
0x878C75: call    dword ptr ds:0A2807Ch
0x878C7B: test    eax, eax
0x878C7D: jnz     short loc_878C8E
0x878C7F: test    ebp, ebp
0x878C81: jz      short loc_878C8E
0x878C83: mov     eax, [ebp+0]
0x878C86: mov     edx, [eax]
0x878C88: push    1
0x878C8A: mov     ecx, ebp
0x878C8C: call    edx
0x878C8E: test    ebx, ebx
0x878C90: mov     eax, [esp+20h+arg_8]
0x878C94: mov     [eax+4], ebx
0x878C97: jz      short loc_878CA3
0x878C99: add     ebx, 4
0x878C9C: push    ebx; lpAddend
0x878C9D: call    dword ptr ds:0A28078h
0x878CA3: mov     ecx, [edi+24h]
0x878CA6: mov     ebp, [ecx+14h]
0x878CA9: mov     eax, ds:0B43110h
0x878CAE: mov     ebx, [ebp+4]
0x878CB1: cmp     ebx, eax
0x878CB3: mov     ecx, eax
0x878CB5: mov     [esp+20h+arg_8], ecx
0x878CB9: jz      short loc_878CF0
0x878CBB: test    ebx, ebx
0x878CBD: jz      short loc_878CDF
0x878CBF: lea     edx, [ebx+4]
0x878CC2: push    edx; lpAddend
0x878CC3: call    dword ptr ds:0A2807Ch
0x878CC9: test    eax, eax
0x878CCB: jnz     short loc_878CDB
0x878CCD: test    ebx, ebx
0x878CCF: jz      short loc_878CDB
0x878CD1: mov     eax, [ebx]
0x878CD3: mov     edx, [eax]
0x878CD5: push    1
0x878CD7: mov     ecx, ebx
0x878CD9: call    edx
0x878CDB: mov     ecx, [esp+20h+arg_8]
0x878CDF: test    ecx, ecx
0x878CE1: mov     [ebp+4], ecx
0x878CE4: jz      short loc_878CF0
0x878CE6: add     ecx, 4
0x878CE9: push    ecx; lpAddend
0x878CEA: call    dword ptr ds:0A28078h
0x878CF0: mov     ebx, 1
0x878CF5: add     [edi+60h], ebx
0x878CF8: mov     [esp+20h+arg_8], edi
0x878CFC: mov     ecx, [esi+38h]
0x878CFF: lea     eax, [esp+20h+arg_8]
0x878D03: push    eax
0x878D04: push    ecx
0x878D05: lea     ecx, [esi+40h]
0x878D08: mov     [esp+28h+var_4], 0
0x878D10: call    sub_76CE40
0x878D15: or      eax, 0FFFFFFFFh
0x878D18: add     [edi+60h], eax
0x878D1B: mov     [esp+20h+var_4], eax
0x878D1F: jnz     short loc_878D28
0x878D21: mov     ecx, edi
0x878D23: call    sub_7604D0
0x878D28: add     [esi+38h], ebx
0x878D2B: mov     ecx, [esp+20h+var_C]
0x878D2F: mov     large fs:0, ecx
0x878D36: pop     ecx
0x878D37: pop     edi
0x878D38: pop     esi
0x878D39: pop     ebp
0x878D3A: pop     ebx
0x878D3B: add     esp, 0Ch
0x878D3E: retn    10h
