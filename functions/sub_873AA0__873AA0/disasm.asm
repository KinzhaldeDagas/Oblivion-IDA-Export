0x873AA0: push    0FFFFFFFFh
0x873AA2: push    offset SEH_880560
0x873AA7: mov     eax, large fs:0
0x873AAD: push    eax
0x873AAE: push    ebx
0x873AAF: push    ebp
0x873AB0: push    esi
0x873AB1: push    edi
0x873AB2: mov     eax, ds:0B30AACh
0x873AB7: xor     eax, esp
0x873AB9: push    eax
0x873ABA: lea     eax, [esp+20h+var_C]
0x873ABE: mov     large fs:0, eax
0x873AC4: mov     esi, ecx
0x873AC6: mov     ebx, [esp+20h+arg_8]
0x873ACA: mov     eax, [ebx+10h]
0x873ACD: mov     edi, ds:0B47628h
0x873AD3: push    eax
0x873AD4: call    sub_848C40
0x873AD9: mov     ebx, [ebx+0Ch]
0x873ADC: push    ebx
0x873ADD: mov     ecx, esi
0x873ADF: call    sub_848E50
0x873AE4: mov     ecx, [esp+20h+arg_0]
0x873AE8: mov     eax, [esi]
0x873AEA: mov     edx, [eax+0BCh]
0x873AF0: push    0
0x873AF2: push    ebx
0x873AF3: push    ecx
0x873AF4: mov     ecx, esi
0x873AF6: call    edx
0x873AF8: mov     eax, [edi+24h]
0x873AFB: mov     ecx, [esp+20h+arg_C]
0x873AFF: mov     ebx, [eax]
0x873B01: mov     edx, [ecx]
0x873B03: mov     eax, [edx+88h]
0x873B09: push    0
0x873B0B: mov     [esp+24h+arg_8], ebx
0x873B0F: call    eax
0x873B11: mov     ebx, [ebx+4]
0x873B14: mov     ebp, eax
0x873B16: cmp     ebx, ebp
0x873B18: jz      short loc_873B4F
0x873B1A: test    ebx, ebx
0x873B1C: jz      short loc_873B3A
0x873B1E: lea     ecx, [ebx+4]
0x873B21: push    ecx; lpAddend
0x873B22: call    dword ptr ds:0A2807Ch
0x873B28: test    eax, eax
0x873B2A: jnz     short loc_873B3A
0x873B2C: test    ebx, ebx
0x873B2E: jz      short loc_873B3A
0x873B30: mov     edx, [ebx]
0x873B32: mov     eax, [edx]
0x873B34: push    1
0x873B36: mov     ecx, ebx
0x873B38: call    eax
0x873B3A: test    ebp, ebp
0x873B3C: mov     ecx, [esp+20h+arg_8]
0x873B40: mov     [ecx+4], ebp
0x873B43: jz      short loc_873B4F
0x873B45: add     ebp, 4
0x873B48: push    ebp; lpAddend
0x873B49: call    dword ptr ds:0A28078h
0x873B4F: mov     edx, [edi+24h]
0x873B52: mov     eax, [esp+20h+arg_C]
0x873B56: mov     ebx, [edx+4]
0x873B59: push    0
0x873B5B: push    eax
0x873B5C: mov     ecx, esi
0x873B5E: mov     [esp+28h+arg_8], ebx
0x873B62: call    sub_848FD0
0x873B67: mov     ebx, [ebx+4]
0x873B6A: mov     ebp, eax
0x873B6C: cmp     ebx, ebp
0x873B6E: jz      short loc_873BA5
0x873B70: test    ebx, ebx
0x873B72: jz      short loc_873B90
0x873B74: lea     ecx, [ebx+4]
0x873B77: push    ecx; lpAddend
0x873B78: call    dword ptr ds:0A2807Ch
0x873B7E: test    eax, eax
0x873B80: jnz     short loc_873B90
0x873B82: test    ebx, ebx
0x873B84: jz      short loc_873B90
0x873B86: mov     edx, [ebx]
0x873B88: mov     eax, [edx]
0x873B8A: push    1
0x873B8C: mov     ecx, ebx
0x873B8E: call    eax
0x873B90: test    ebp, ebp
0x873B92: mov     ecx, [esp+20h+arg_8]
0x873B96: mov     [ecx+4], ebp
0x873B99: jz      short loc_873BA5
0x873B9B: add     ebp, 4
0x873B9E: push    ebp; lpAddend
0x873B9F: call    dword ptr ds:0A28078h
0x873BA5: mov     edx, [edi+24h]
0x873BA8: mov     ebp, [edx+10h]
0x873BAB: mov     eax, ds:0B43110h
0x873BB0: mov     ebx, [ebp+4]
0x873BB3: cmp     ebx, eax
0x873BB5: mov     ecx, eax
0x873BB7: mov     [esp+20h+arg_C], ecx
0x873BBB: jz      short loc_873BF2
0x873BBD: test    ebx, ebx
0x873BBF: jz      short loc_873BE1
0x873BC1: lea     eax, [ebx+4]
0x873BC4: push    eax; lpAddend
0x873BC5: call    dword ptr ds:0A2807Ch
0x873BCB: test    eax, eax
0x873BCD: jnz     short loc_873BDD
0x873BCF: test    ebx, ebx
0x873BD1: jz      short loc_873BDD
0x873BD3: mov     edx, [ebx]
0x873BD5: mov     eax, [edx]
0x873BD7: push    1
0x873BD9: mov     ecx, ebx
0x873BDB: call    eax
0x873BDD: mov     ecx, [esp+20h+arg_C]
0x873BE1: test    ecx, ecx
0x873BE3: mov     [ebp+4], ecx
0x873BE6: jz      short loc_873BF2
0x873BE8: add     ecx, 4
0x873BEB: push    ecx; lpAddend
0x873BEC: call    dword ptr ds:0A28078h
0x873BF2: mov     ebx, 1
0x873BF7: add     [edi+60h], ebx
0x873BFA: mov     [esp+20h+arg_C], edi
0x873BFE: mov     edx, [esi+38h]
0x873C01: lea     ecx, [esp+20h+arg_C]
0x873C05: push    ecx
0x873C06: push    edx
0x873C07: lea     ecx, [esi+40h]
0x873C0A: mov     [esp+28h+var_4], 0
0x873C12: call    sub_76CE40
0x873C17: or      eax, 0FFFFFFFFh
0x873C1A: add     [edi+60h], eax
0x873C1D: mov     [esp+20h+var_4], eax
0x873C21: jnz     short loc_873C2A
0x873C23: mov     ecx, edi
0x873C25: call    sub_7604D0
0x873C2A: add     [esi+38h], ebx
0x873C2D: mov     ecx, [esp+20h+var_C]
0x873C31: mov     large fs:0, ecx
0x873C38: pop     ecx
0x873C39: pop     edi
0x873C3A: pop     esi
0x873C3B: pop     ebp
0x873C3C: pop     ebx
0x873C3D: add     esp, 0Ch
0x873C40: retn    10h
