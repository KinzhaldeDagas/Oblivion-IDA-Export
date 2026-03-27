0x83F8A0: push    0FFFFFFFFh
0x83F8A2: push    offset SEH_882120
0x83F8A7: mov     eax, large fs:0
0x83F8AD: push    eax
0x83F8AE: push    ebx
0x83F8AF: push    ebp
0x83F8B0: push    esi
0x83F8B1: push    edi
0x83F8B2: mov     eax, ds:0B30AACh
0x83F8B7: xor     eax, esp
0x83F8B9: push    eax
0x83F8BA: lea     eax, [esp+20h+var_C]
0x83F8BE: mov     large fs:0, eax
0x83F8C4: mov     esi, ecx
0x83F8C6: mov     ebx, [esp+20h+arg_8]
0x83F8CA: mov     eax, [ebx+10h]
0x83F8CD: mov     edi, ds:0B4589Ch
0x83F8D3: push    eax
0x83F8D4: call    sub_848C40
0x83F8D9: mov     ebp, [ebx+0Ch]
0x83F8DC: push    ebp
0x83F8DD: mov     ecx, esi
0x83F8DF: call    sub_848E50
0x83F8E4: mov     ebx, [ebx+10h]
0x83F8E7: mov     ecx, [esp+20h+arg_0]
0x83F8EB: mov     eax, [esi]
0x83F8ED: mov     edx, [eax+0BCh]
0x83F8F3: push    ebx
0x83F8F4: push    ebp
0x83F8F5: push    ecx
0x83F8F6: mov     ecx, esi
0x83F8F8: call    edx
0x83F8FA: mov     eax, [edi+24h]
0x83F8FD: mov     ebx, [esp+20h+arg_C]
0x83F901: mov     ebp, [eax]
0x83F903: mov     edx, [ebx]
0x83F905: mov     eax, [edx+88h]
0x83F90B: push    0
0x83F90D: mov     ecx, ebx
0x83F90F: mov     [esp+24h+arg_8], ebp
0x83F913: call    eax
0x83F915: mov     ebp, [ebp+4]
0x83F918: cmp     ebp, eax
0x83F91A: mov     [esp+20h+arg_0], eax
0x83F91E: jz      short loc_83F95A
0x83F920: test    ebp, ebp
0x83F922: jz      short loc_83F945
0x83F924: lea     ecx, [ebp+4]
0x83F927: push    ecx; lpAddend
0x83F928: call    dword ptr ds:0A2807Ch
0x83F92E: test    eax, eax
0x83F930: jnz     short loc_83F941
0x83F932: test    ebp, ebp
0x83F934: jz      short loc_83F941
0x83F936: mov     edx, [ebp+0]
0x83F939: mov     eax, [edx]
0x83F93B: push    1
0x83F93D: mov     ecx, ebp
0x83F93F: call    eax
0x83F941: mov     eax, [esp+20h+arg_0]
0x83F945: test    eax, eax
0x83F947: mov     ecx, [esp+20h+arg_8]
0x83F94B: mov     [ecx+4], eax
0x83F94E: jz      short loc_83F95A
0x83F950: add     eax, 4
0x83F953: push    eax; lpAddend
0x83F954: call    dword ptr ds:0A28078h
0x83F95A: mov     edx, [esp+20h+arg_8]
0x83F95E: push    ebx
0x83F95F: push    edx
0x83F960: mov     ecx, esi
0x83F962: call    sub_848FA0
0x83F967: mov     eax, [edi+24h]
0x83F96A: mov     ebp, [eax+4]
0x83F96D: push    0
0x83F96F: push    ebx
0x83F970: mov     ecx, esi
0x83F972: mov     [esp+28h+arg_8], ebp
0x83F976: call    sub_848FD0
0x83F97B: mov     ebp, [ebp+4]
0x83F97E: cmp     ebp, eax
0x83F980: mov     [esp+20h+arg_0], eax
0x83F984: jz      short loc_83F9C0
0x83F986: test    ebp, ebp
0x83F988: jz      short loc_83F9AB
0x83F98A: lea     ecx, [ebp+4]
0x83F98D: push    ecx; lpAddend
0x83F98E: call    dword ptr ds:0A2807Ch
0x83F994: test    eax, eax
0x83F996: jnz     short loc_83F9A7
0x83F998: test    ebp, ebp
0x83F99A: jz      short loc_83F9A7
0x83F99C: mov     edx, [ebp+0]
0x83F99F: mov     eax, [edx]
0x83F9A1: push    1
0x83F9A3: mov     ecx, ebp
0x83F9A5: call    eax
0x83F9A7: mov     eax, [esp+20h+arg_0]
0x83F9AB: test    eax, eax
0x83F9AD: mov     ecx, [esp+20h+arg_8]
0x83F9B1: mov     [ecx+4], eax
0x83F9B4: jz      short loc_83F9C0
0x83F9B6: add     eax, 4
0x83F9B9: push    eax; lpAddend
0x83F9BA: call    dword ptr ds:0A28078h
0x83F9C0: mov     edx, [esp+20h+arg_8]
0x83F9C4: push    ebx
0x83F9C5: push    edx
0x83F9C6: mov     ecx, esi
0x83F9C8: call    sub_848FA0
0x83F9CD: mov     ecx, [edi+24h]
0x83F9D0: mov     ebx, [ecx+18h]
0x83F9D3: mov     eax, ds:0B43108h
0x83F9D8: mov     ebp, [ebx+4]
0x83F9DB: add     ebx, 4
0x83F9DE: cmp     ebp, eax
0x83F9E0: mov     [esp+20h+arg_8], eax
0x83F9E4: jz      short loc_83FA1B
0x83F9E6: test    ebp, ebp
0x83F9E8: jz      short loc_83FA0B
0x83F9EA: lea     edx, [ebp+4]
0x83F9ED: push    edx; lpAddend
0x83F9EE: call    dword ptr ds:0A2807Ch
0x83F9F4: test    eax, eax
0x83F9F6: jnz     short loc_83FA07
0x83F9F8: test    ebp, ebp
0x83F9FA: jz      short loc_83FA07
0x83F9FC: mov     eax, [ebp+0]
0x83F9FF: mov     edx, [eax]
0x83FA01: push    1
0x83FA03: mov     ecx, ebp
0x83FA05: call    edx
0x83FA07: mov     eax, [esp+20h+arg_8]
0x83FA0B: test    eax, eax
0x83FA0D: mov     [ebx], eax
0x83FA0F: jz      short loc_83FA1B
0x83FA11: add     eax, 4
0x83FA14: push    eax; lpAddend
0x83FA15: call    dword ptr ds:0A28078h
0x83FA1B: mov     eax, [edi+24h]
0x83FA1E: mov     ebp, [eax+1Ch]
0x83FA21: mov     eax, ds:0B4310Ch
0x83FA26: mov     ebx, [ebp+4]
0x83FA29: cmp     ebx, eax
0x83FA2B: mov     ecx, eax
0x83FA2D: mov     [esp+20h+arg_8], ecx
0x83FA31: jz      short loc_83FA68
0x83FA33: test    ebx, ebx
0x83FA35: jz      short loc_83FA57
0x83FA37: lea     ecx, [ebx+4]
0x83FA3A: push    ecx; lpAddend
0x83FA3B: call    dword ptr ds:0A2807Ch
0x83FA41: test    eax, eax
0x83FA43: jnz     short loc_83FA53
0x83FA45: test    ebx, ebx
0x83FA47: jz      short loc_83FA53
0x83FA49: mov     edx, [ebx]
0x83FA4B: mov     eax, [edx]
0x83FA4D: push    1
0x83FA4F: mov     ecx, ebx
0x83FA51: call    eax
0x83FA53: mov     ecx, [esp+20h+arg_8]
0x83FA57: test    ecx, ecx
0x83FA59: mov     [ebp+4], ecx
0x83FA5C: jz      short loc_83FA68
0x83FA5E: add     ecx, 4
0x83FA61: push    ecx; lpAddend
0x83FA62: call    dword ptr ds:0A28078h
0x83FA68: mov     ebx, 1
0x83FA6D: add     [edi+60h], ebx
0x83FA70: mov     [esp+20h+arg_8], edi
0x83FA74: mov     edx, [esi+38h]
0x83FA77: lea     ecx, [esp+20h+arg_8]
0x83FA7B: push    ecx
0x83FA7C: push    edx
0x83FA7D: lea     ecx, [esi+40h]
0x83FA80: mov     [esp+28h+var_4], 0
0x83FA88: call    sub_76CE40
0x83FA8D: or      eax, 0FFFFFFFFh
0x83FA90: add     [edi+60h], eax
0x83FA93: mov     [esp+20h+var_4], eax
0x83FA97: jnz     short loc_83FAA0
0x83FA99: mov     ecx, edi
0x83FA9B: call    sub_7604D0
0x83FAA0: add     [esi+38h], ebx
0x83FAA3: mov     ecx, [esp+20h+var_C]
0x83FAA7: mov     large fs:0, ecx
0x83FAAE: pop     ecx
0x83FAAF: pop     edi
0x83FAB0: pop     esi
0x83FAB1: pop     ebp
0x83FAB2: pop     ebx
0x83FAB3: add     esp, 0Ch
0x83FAB6: retn    10h
