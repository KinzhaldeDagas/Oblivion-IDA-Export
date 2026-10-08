0x8C8DB0: push    0FFFFFFFFh
0x8C8DB2: push    offset SEH_8C8DB0
0x8C8DB7: mov     eax, large fs:0
0x8C8DBD: push    eax
0x8C8DBE: push    ecx
0x8C8DBF: push    ebx
0x8C8DC0: push    esi
0x8C8DC1: push    edi
0x8C8DC2: mov     eax, ds:0B30AACh
0x8C8DC7: xor     eax, esp
0x8C8DC9: push    eax
0x8C8DCA: lea     eax, [esp+20h+var_C]
0x8C8DCE: mov     large fs:0, eax
0x8C8DD4: mov     esi, ecx
0x8C8DD6: mov     [esp+20h+var_10], esi
0x8C8DDA: mov     eax, [esi+1Ch]
0x8C8DDD: test    eax, eax
0x8C8DDF: mov     edi, ds:0BA9DE4h
0x8C8DE5: mov     ebx, large fs:2Ch
0x8C8DEC: mov     [esp+20h+var_4], 0
0x8C8DF4: js      short loc_8C8E1D
0x8C8DF6: mov     ecx, [ebx+edi*4]
0x8C8DF9: mov     ecx, [ecx+19Ch]
0x8C8DFF: test    ecx, ecx
0x8C8E01: jnz     short loc_8C8E09
0x8C8E03: mov     ecx, ds:0BA7D9Ch
0x8C8E09: mov     edx, [esi+14h]
0x8C8E0C: and     eax, 3FFFFFFFh
0x8C8E11: push    14h
0x8C8E13: shl     eax, 4
0x8C8E16: push    eax
0x8C8E17: push    edx
0x8C8E18: call    sub_8A75D0
0x8C8E1D: mov     eax, [esi+10h]
0x8C8E20: test    eax, eax
0x8C8E22: mov     [esp+20h+var_4], 0FFFFFFFFh
0x8C8E2A: js      short loc_8C8E53
0x8C8E2C: mov     ecx, [ebx+edi*4]
0x8C8E2F: mov     ecx, [ecx+19Ch]
0x8C8E35: test    ecx, ecx
0x8C8E37: jnz     short loc_8C8E3F
0x8C8E39: mov     ecx, ds:0BA7D9Ch
0x8C8E3F: mov     edx, [esi+8]
0x8C8E42: and     eax, 3FFFFFFFh
0x8C8E47: push    14h
0x8C8E49: shl     eax, 4
0x8C8E4C: push    eax
0x8C8E4D: push    edx
0x8C8E4E: call    sub_8A75D0
0x8C8E53: mov     ecx, [esp+20h+var_C]
0x8C8E57: mov     large fs:0, ecx
0x8C8E5E: pop     ecx
0x8C8E5F: pop     edi
0x8C8E60: pop     esi
0x8C8E61: pop     ebx
0x8C8E62: add     esp, 10h
0x8C8E65: retn
0x564B30: mov     edx, ecx
0x564B32: mov     eax, [edx+8]
0x564B35: test    eax, eax
0x564B37: js      short locret_564B6E
0x564B39: mov     ecx, ds:0BA9DE4h
0x564B3F: push    esi
0x564B40: mov     esi, large fs:2Ch
0x564B47: mov     ecx, [esi+ecx*4]
0x564B4A: mov     ecx, [ecx+19Ch]
0x564B50: test    ecx, ecx
0x564B52: pop     esi
0x564B53: jnz     short loc_564B5B
0x564B55: mov     ecx, ds:0BA7D9Ch
0x564B5B: mov     edx, [edx]
0x564B5D: and     eax, 3FFFFFFFh
0x564B62: push    14h
0x564B64: shl     eax, 4
0x564B67: push    eax
0x564B68: push    edx
0x564B69: call    sub_8A75D0
0x564B6E: retn
0x9D7990: mov     ecx, [ebp-10h]
0x9D7993: add     ecx, 8
0x9D7996: jmp     loc_564B30
0x9D799B: mov     edx, [esp+arg_4]
0x9D799F: lea     eax, [edx-10h]
0x9D79A2: mov     ecx, [edx-14h]
0x9D79A5: xor     ecx, eax
0x9D79A7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D79AC: mov     eax, offset stru_AFF4FC
0x9D79B1: jmp     ___CxxFrameHandler3
