0x841B40: push    0FFFFFFFFh
0x841B42: push    offset SEH_882120
0x841B47: mov     eax, large fs:0
0x841B4D: push    eax
0x841B4E: push    ebx
0x841B4F: push    ebp
0x841B50: push    esi
0x841B51: push    edi
0x841B52: mov     eax, ds:0B30AACh
0x841B57: xor     eax, esp
0x841B59: push    eax
0x841B5A: lea     eax, [esp+20h+var_C]
0x841B5E: mov     large fs:0, eax
0x841B64: mov     esi, ecx
0x841B66: mov     ebx, [esp+20h+arg_8]
0x841B6A: mov     eax, [ebx+10h]
0x841B6D: mov     edi, ds:0B456CCh
0x841B73: push    eax
0x841B74: call    sub_848DA0
0x841B79: mov     ebx, [ebx+0Ch]
0x841B7C: push    ebx
0x841B7D: mov     ecx, esi
0x841B7F: call    sub_848E50
0x841B84: mov     ecx, [esp+20h+arg_0]
0x841B88: mov     eax, [esi]
0x841B8A: mov     edx, [eax+0BCh]
0x841B90: push    0
0x841B92: push    ebx
0x841B93: push    ecx
0x841B94: mov     ecx, esi
0x841B96: call    edx
0x841B98: mov     eax, [edi+24h]
0x841B9B: mov     ebx, [esp+20h+arg_C]
0x841B9F: mov     ebp, [eax]
0x841BA1: mov     edx, [ebx]
0x841BA3: mov     eax, [edx+88h]
0x841BA9: push    0
0x841BAB: mov     ecx, ebx
0x841BAD: mov     [esp+24h+arg_8], ebp
0x841BB1: call    eax
0x841BB3: mov     ebp, [ebp+4]
0x841BB6: cmp     ebp, eax
0x841BB8: mov     [esp+20h+arg_0], eax
0x841BBC: jz      short loc_841BF8
0x841BBE: test    ebp, ebp
0x841BC0: jz      short loc_841BE3
0x841BC2: lea     ecx, [ebp+4]
0x841BC5: push    ecx; lpAddend
0x841BC6: call    dword ptr ds:0A2807Ch
0x841BCC: test    eax, eax
0x841BCE: jnz     short loc_841BDF
0x841BD0: test    ebp, ebp
0x841BD2: jz      short loc_841BDF
0x841BD4: mov     edx, [ebp+0]
0x841BD7: mov     eax, [edx]
0x841BD9: push    1
0x841BDB: mov     ecx, ebp
0x841BDD: call    eax
0x841BDF: mov     eax, [esp+20h+arg_0]
0x841BE3: test    eax, eax
0x841BE5: mov     ecx, [esp+20h+arg_8]
0x841BE9: mov     [ecx+4], eax
0x841BEC: jz      short loc_841BF8
0x841BEE: add     eax, 4
0x841BF1: push    eax; lpAddend
0x841BF2: call    dword ptr ds:0A28078h
0x841BF8: mov     edx, [esp+20h+arg_8]
0x841BFC: push    ebx
0x841BFD: push    edx
0x841BFE: mov     ecx, esi
0x841C00: call    sub_848FA0
0x841C05: mov     eax, [edi+24h]
0x841C08: mov     ebp, [eax+4]
0x841C0B: push    0
0x841C0D: push    ebx
0x841C0E: mov     ecx, esi
0x841C10: mov     [esp+28h+arg_8], ebp
0x841C14: call    sub_848FD0
0x841C19: mov     ebp, [ebp+4]
0x841C1C: cmp     ebp, eax
0x841C1E: mov     [esp+20h+arg_0], eax
0x841C22: jz      short loc_841C5E
0x841C24: test    ebp, ebp
0x841C26: jz      short loc_841C49
0x841C28: lea     ecx, [ebp+4]
0x841C2B: push    ecx; lpAddend
0x841C2C: call    dword ptr ds:0A2807Ch
0x841C32: test    eax, eax
0x841C34: jnz     short loc_841C45
0x841C36: test    ebp, ebp
0x841C38: jz      short loc_841C45
0x841C3A: mov     edx, [ebp+0]
0x841C3D: mov     eax, [edx]
0x841C3F: push    1
0x841C41: mov     ecx, ebp
0x841C43: call    eax
0x841C45: mov     eax, [esp+20h+arg_0]
0x841C49: test    eax, eax
0x841C4B: mov     ecx, [esp+20h+arg_8]
0x841C4F: mov     [ecx+4], eax
0x841C52: jz      short loc_841C5E
0x841C54: add     eax, 4
0x841C57: push    eax; lpAddend
0x841C58: call    dword ptr ds:0A28078h
0x841C5E: mov     edx, [esp+20h+arg_8]
0x841C62: push    ebx
0x841C63: push    edx
0x841C64: mov     ecx, esi
0x841C66: call    sub_848FA0
0x841C6B: mov     eax, [edi+24h]
0x841C6E: mov     ebp, [eax+0Ch]
0x841C71: mov     edx, [ebx]
0x841C73: mov     eax, [edx+90h]
0x841C79: push    0
0x841C7B: mov     ecx, ebx
0x841C7D: mov     [esp+24h+arg_8], ebp
0x841C81: call    eax
0x841C83: mov     ebp, [ebp+4]
0x841C86: cmp     ebp, eax
0x841C88: mov     [esp+20h+arg_0], eax
0x841C8C: jz      short loc_841CC8
0x841C8E: test    ebp, ebp
0x841C90: jz      short loc_841CB3
0x841C92: lea     ecx, [ebp+4]
0x841C95: push    ecx; lpAddend
0x841C96: call    dword ptr ds:0A2807Ch
0x841C9C: test    eax, eax
0x841C9E: jnz     short loc_841CAF
0x841CA0: test    ebp, ebp
0x841CA2: jz      short loc_841CAF
0x841CA4: mov     edx, [ebp+0]
0x841CA7: mov     eax, [edx]
0x841CA9: push    1
0x841CAB: mov     ecx, ebp
0x841CAD: call    eax
0x841CAF: mov     eax, [esp+20h+arg_0]
0x841CB3: test    eax, eax
0x841CB5: mov     ecx, [esp+20h+arg_8]
0x841CB9: mov     [ecx+4], eax
0x841CBC: jz      short loc_841CC8
0x841CBE: add     eax, 4
0x841CC1: push    eax; lpAddend
0x841CC2: call    dword ptr ds:0A28078h
0x841CC8: mov     edx, [esp+20h+arg_8]
0x841CCC: push    ebx
0x841CCD: push    edx
0x841CCE: mov     ecx, esi
0x841CD0: call    sub_848FA0
0x841CD5: mov     ebx, 1
0x841CDA: add     [edi+60h], ebx
0x841CDD: mov     [esp+20h+arg_8], edi
0x841CE1: mov     ecx, [esi+38h]
0x841CE4: lea     eax, [esp+20h+arg_8]
0x841CE8: push    eax
0x841CE9: push    ecx
0x841CEA: lea     ecx, [esi+40h]
0x841CED: mov     [esp+28h+var_4], 0
0x841CF5: call    sub_76CE40
0x841CFA: or      eax, 0FFFFFFFFh
0x841CFD: add     [edi+60h], eax
0x841D00: mov     [esp+20h+var_4], eax
0x841D04: jnz     short loc_841D0D
0x841D06: mov     ecx, edi
0x841D08: call    sub_7604D0
0x841D0D: add     [esi+38h], ebx
0x841D10: mov     ecx, [esp+20h+var_C]
0x841D14: mov     large fs:0, ecx
0x841D1B: pop     ecx
0x841D1C: pop     edi
0x841D1D: pop     esi
0x841D1E: pop     ebp
0x841D1F: pop     ebx
0x841D20: add     esp, 0Ch
0x841D23: retn    10h
