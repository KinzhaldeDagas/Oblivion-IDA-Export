0x77CAB0: push    ecx
0x77CAB1: mov     eax, ds:0B42898h
0x77CAB6: test    eax, eax
0x77CAB8: jnz     short loc_77CABE
0x77CABA: xor     al, al
0x77CABC: pop     ecx
0x77CABD: retn
0x77CABE: push    esi
0x77CABF: mov     esi, [esp+8+arg_0]
0x77CAC3: lea     ecx, [esp+8+var_4]
0x77CAC7: push    ecx
0x77CAC8: push    esi
0x77CAC9: lea     ecx, [eax+24h]
0x77CACC: call    NiTMap_GetAt
0x77CAD1: test    al, al
0x77CAD3: jz      short loc_77CAF5
0x77CAD5: mov     eax, [esp+8+var_4]
0x77CAD9: test    eax, eax
0x77CADB: jz      short loc_77CAF5
0x77CADD: mov     edx, [eax+10h]
0x77CAE0: cmp     edx, [esp+8+arg_4]
0x77CAE4: jnz     short loc_77CB20
0x77CAE6: add     eax, 4
0x77CAE9: push    eax; lpAddend
0x77CAEA: call    dword ptr ds:0A28078h
0x77CAF0: mov     al, 1
0x77CAF2: pop     esi
0x77CAF3: pop     ecx
0x77CAF4: retn
0x77CAF5: push    1Ch; Size
0x77CAF7: call    FormHeapAlloc
0x77CAFC: add     esp, 4
0x77CAFF: test    eax, eax
0x77CB01: jz      short loc_77CB20
0x77CB03: mov     ecx, [esp+8+arg_C]
0x77CB07: mov     edx, [esp+8+arg_8]
0x77CB0B: push    ecx
0x77CB0C: mov     ecx, [esp+0Ch+arg_4]
0x77CB10: push    edx
0x77CB11: push    ecx
0x77CB12: push    esi
0x77CB13: mov     ecx, eax
0x77CB15: call    sub_77C1B0
0x77CB1A: mov     esi, eax
0x77CB1C: test    esi, esi
0x77CB1E: jnz     short loc_77CB25
0x77CB20: xor     al, al
0x77CB22: pop     esi
0x77CB23: pop     ecx
0x77CB24: retn
0x77CB25: lea     edx, [esi+4]
0x77CB28: push    edx; lpAddend
0x77CB29: call    dword ptr ds:0A28078h
0x77CB2F: mov     eax, [esi+8]
0x77CB32: mov     ecx, ds:0B42898h
0x77CB38: push    esi
0x77CB39: push    eax
0x77CB3A: add     ecx, 24h ; '$'
0x77CB3D: call    sub_412D30
0x77CB42: mov     al, 1
0x77CB44: pop     esi
0x77CB45: pop     ecx
0x77CB46: retn
