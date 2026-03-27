0x8D9B80: sub     esp, 18h
0x8D9B83: push    ebx
0x8D9B84: mov     ebx, large fs:2Ch
0x8D9B8B: push    ebp
0x8D9B8C: mov     ebp, ds:0BA9DE4h
0x8D9B92: mov     eax, [ebx+ebp*4]
0x8D9B95: mov     edx, [eax+1A8h]
0x8D9B9B: push    esi
0x8D9B9C: push    edi
0x8D9B9D: mov     edi, ecx
0x8D9B9F: mov     ecx, [eax+1A4h]
0x8D9BA5: cmp     ecx, edx
0x8D9BA7: mov     [esp+28h+var_18], edi
0x8D9BAB: jnb     short loc_8D9BD1
0x8D9BAD: mov     esi, eax
0x8D9BAF: mov     ecx, [esi+1A4h]
0x8D9BB5: mov     dword ptr [ecx], offset aTtsimulate; "TtSimulate"
0x8D9BBB: rdtsc
0x8D9BBD: mov     [esp+28h+var_14], eax
0x8D9BC1: mov     edx, [esp+28h+var_14]
0x8D9BC5: mov     [ecx+4], edx
0x8D9BC8: add     ecx, 0Ch
0x8D9BCB: mov     [esi+1A4h], ecx
0x8D9BD1: mov     eax, [esp+28h+arg_8]
0x8D9BD5: fld     [esp+28h+arg_4]
0x8D9BD9: mov     esi, [esp+28h+arg_0]
0x8D9BDD: mov     [edi+8], eax
0x8D9BE0: fadd    dword ptr [esi+10h]
0x8D9BE3: fst     dword ptr [esi+10h]
0x8D9BE6: fcomp   dword ptr [esi+18h]
0x8D9BE9: fnstsw  ax
0x8D9BEB: test    ah, 41h
0x8D9BEE: jnz     loc_8D9D2E
0x8D9BF4: fld     [esp+28h+arg_8]
0x8D9BF8: mov     edi, [ebx+ebp*4]
0x8D9BFB: fmul    dword ptr ds:0A34BA0h
0x8D9C01: mov     [esp+28h+arg_0], edi
0x8D9C05: fstp    [esp+28h+var_14]
0x8D9C09: lea     esp, [esp+0]
0x8D9C10: fld     dword ptr [esi+10h]
0x8D9C13: fsub    dword ptr [esi+18h]
0x8D9C16: fabs
0x8D9C18: fcomp   [esp+28h+var_14]
0x8D9C1C: fnstsw  ax
0x8D9C1E: test    ah, 5
0x8D9C21: jp      short loc_8D9C3E
0x8D9C23: fld     [esp+28h+arg_4]
0x8D9C27: fdiv    [esp+28h+arg_8]
0x8D9C2B: fcomp   dword ptr ds:0A2FAACh
0x8D9C31: fnstsw  ax
0x8D9C33: test    ah, 41h
0x8D9C36: jnz     short loc_8D9C3E
0x8D9C38: mov     ecx, [esi+18h]
0x8D9C3B: mov     [esi+10h], ecx
0x8D9C3E: mov     ecx, esi
0x8D9C40: call    sub_8992B0
0x8D9C45: mov     ecx, [edi+19Ch]
0x8D9C4B: test    ecx, ecx
0x8D9C4D: jnz     short loc_8D9C55
0x8D9C4F: mov     ecx, ds:0BA7D9Ch
0x8D9C55: mov     edx, [ecx+2Ch]
0x8D9C58: sub     edx, [ecx+20h]
0x8D9C5B: sub     edx, 10h
0x8D9C5E: cmp     eax, edx
0x8D9C60: jle     short loc_8D9C89
0x8D9C62: mov     edi, ds:0BA7D98h
0x8D9C68: mov     edx, [edi+14h]
0x8D9C6B: mov     ecx, [edi+28h]
0x8D9C6E: add     ecx, edx
0x8D9C70: mov     edx, [edi+8]
0x8D9C73: cmp     edx, ecx
0x8D9C75: jg      short loc_8D9C7B
0x8D9C77: xor     edx, edx
0x8D9C79: jmp     short loc_8D9C7D
0x8D9C7B: sub     edx, ecx
0x8D9C7D: cmp     eax, edx
0x8D9C7F: jg      loc_8D9E07
0x8D9C85: mov     edi, [esp+28h+arg_0]
0x8D9C89: fld     [esp+28h+arg_8]
0x8D9C8D: mov     eax, [esi+18h]
0x8D9C90: fadd    dword ptr [esi+18h]
0x8D9C93: mov     [esi+14h], eax
0x8D9C96: fst     dword ptr [esi+18h]
0x8D9C99: fld     dword ptr [esi+14h]
0x8D9C9C: fst     [esp+28h+var_10]
0x8D9CA0: fld     st(1)
0x8D9CA2: fstp    [esp+28h+var_C]
0x8D9CA6: fxch    st(1)
0x8D9CA8: fsub    st, st(1)
0x8D9CAA: fstp    [esp+28h+var_8]
0x8D9CAE: fstp    st
0x8D9CB0: fld     dword ptr ds:0A2FAA8h
0x8D9CB6: fld     [esp+28h+var_8]
0x8D9CBA: fucompp
0x8D9CBC: fnstsw  ax
0x8D9CBE: test    ah, 44h
0x8D9CC1: jp      short loc_8D9CCD
0x8D9CC3: mov     [esp+28h+var_4], 0
0x8D9CCB: jmp     short loc_8D9CDB
0x8D9CCD: fld     dword ptr ds:0A2F948h
0x8D9CD3: fdiv    [esp+28h+var_8]
0x8D9CD7: fstp    [esp+28h+var_4]
0x8D9CDB: mov     ecx, [esi+5Ch]
0x8D9CDE: mov     edx, [ecx]
0x8D9CE0: lea     eax, [esp+28h+var_10]
0x8D9CE4: push    eax
0x8D9CE5: push    esi
0x8D9CE6: call    dword ptr [edx+0Ch]
0x8D9CE9: mov     ecx, [esi+14h]
0x8D9CEC: lea     edx, [esp+28h+var_10]
0x8D9CF0: push    edx
0x8D9CF1: mov     [esi+0Ch], ecx
0x8D9CF4: mov     ecx, [esp+2Ch+var_18]
0x8D9CF8: push    esi
0x8D9CF9: call    sub_8D6E40
0x8D9CFE: mov     ecx, [esp+28h+var_18]
0x8D9D02: lea     eax, [esp+28h+var_10]
0x8D9D06: push    eax
0x8D9D07: push    esi
0x8D9D08: call    sub_8D7920
0x8D9D0D: mov     ecx, ds:0BA7D98h
0x8D9D13: cmp     dword ptr [ecx+4], 1
0x8D9D17: jz      loc_8D9E54
0x8D9D1D: fld     dword ptr [esi+18h]
0x8D9D20: fcomp   dword ptr [esi+10h]
0x8D9D23: fnstsw  ax
0x8D9D25: test    ah, 5
0x8D9D28: jnp     loc_8D9C10
0x8D9D2E: mov     eax, [esi+10h]
0x8D9D31: mov     [esi+0Ch], eax
0x8D9D34: mov     eax, [ebx+ebp*4]
0x8D9D37: mov     ecx, [eax+1A4h]
0x8D9D3D: cmp     ecx, [eax+1A8h]
0x8D9D43: jnb     short loc_8D9D69
0x8D9D45: mov     edi, eax
0x8D9D47: mov     ecx, [edi+1A4h]
0x8D9D4D: mov     dword ptr [ecx], offset aTtpostsimulate; "TtPostSimulateCb"
0x8D9D53: rdtsc
0x8D9D55: mov     [esp+28h+arg_8], eax
0x8D9D59: mov     edx, [esp+28h+arg_8]
0x8D9D5D: mov     [ecx+4], edx
0x8D9D60: add     ecx, 0Ch
0x8D9D63: mov     [edi+1A4h], ecx
0x8D9D69: mov     eax, [esi+10h]
0x8D9D6C: fld     dword ptr [esi+10h]
0x8D9D6F: fsub    [esp+28h+arg_4]
0x8D9D73: push    eax; float
0x8D9D74: push    ecx
0x8D9D75: lea     ecx, [esp+30h+var_10]
0x8D9D79: fstp    [esp+30h+var_30]; int
0x8D9D7C: call    sub_8D2C90
0x8D9D81: lea     ecx, [esp+28h+var_10]
0x8D9D85: push    ecx
0x8D9D86: push    esi
0x8D9D87: call    sub_8DCD60
0x8D9D8C: mov     eax, [ebx+ebp*4]
0x8D9D8F: mov     edx, [eax+1A4h]
0x8D9D95: mov     ecx, [eax+1A8h]
0x8D9D9B: add     esp, 8
0x8D9D9E: cmp     edx, ecx
0x8D9DA0: jnb     short loc_8D9DC6
0x8D9DA2: mov     esi, eax
0x8D9DA4: mov     ecx, [esi+1A4h]
0x8D9DAA: mov     dword ptr [ecx], offset aEt; "Et"
0x8D9DB0: rdtsc
0x8D9DB2: mov     [esp+28h+arg_8], eax
0x8D9DB6: mov     eax, [esp+28h+arg_8]
0x8D9DBA: mov     [ecx+4], eax
0x8D9DBD: add     ecx, 0Ch
0x8D9DC0: mov     [esi+1A4h], ecx
0x8D9DC6: mov     eax, [ebx+ebp*4]
0x8D9DC9: mov     ecx, [eax+1A4h]
0x8D9DCF: cmp     ecx, [eax+1A8h]
0x8D9DD5: jnb     short loc_8D9DFB
0x8D9DD7: mov     esi, eax
0x8D9DD9: mov     ecx, [esi+1A4h]
0x8D9DDF: mov     dword ptr [ecx], offset aEt; "Et"
0x8D9DE5: rdtsc
0x8D9DE7: mov     [esp+28h+arg_8], eax
0x8D9DEB: mov     edx, [esp+28h+arg_8]
0x8D9DEF: mov     [ecx+4], edx
0x8D9DF2: add     ecx, 0Ch
0x8D9DF5: mov     [esi+1A4h], ecx
0x8D9DFB: pop     edi
0x8D9DFC: pop     esi
0x8D9DFD: pop     ebp
0x8D9DFE: xor     eax, eax
0x8D9E00: pop     ebx
0x8D9E01: add     esp, 18h
0x8D9E04: retn    0Ch
0x8D9E07: mov     eax, [ebx+ebp*4]
0x8D9E0A: mov     dword ptr [edi+4], 1
0x8D9E11: mov     edx, [eax+1A4h]
0x8D9E17: cmp     edx, [eax+1A8h]
0x8D9E1D: jnb     short loc_8D9E45
0x8D9E1F: mov     esi, [esp+28h+arg_0]
0x8D9E23: mov     ecx, [esi+1A4h]
0x8D9E29: mov     dword ptr [ecx], offset aEt; "Et"
0x8D9E2F: rdtsc
0x8D9E31: mov     [esp+28h+arg_8], eax
0x8D9E35: mov     eax, [esp+28h+arg_8]
0x8D9E39: mov     [ecx+4], eax
0x8D9E3C: add     ecx, 0Ch
0x8D9E3F: mov     [esi+1A4h], ecx
0x8D9E45: pop     edi
0x8D9E46: pop     esi
0x8D9E47: pop     ebp
0x8D9E48: mov     eax, 1
0x8D9E4D: pop     ebx
0x8D9E4E: add     esp, 18h
0x8D9E51: retn    0Ch
0x8D9E54: mov     ebx, [ebx+ebp*4]
0x8D9E57: mov     ecx, [ebx+1A4h]
0x8D9E5D: cmp     ecx, [ebx+1A8h]
0x8D9E63: jnb     short loc_8D9E87
0x8D9E65: mov     ecx, [edi+1A4h]
0x8D9E6B: mov     dword ptr [ecx], offset aEt; "Et"
0x8D9E71: rdtsc
0x8D9E73: mov     [esp+28h+arg_8], eax
0x8D9E77: mov     edx, [esp+28h+arg_8]
0x8D9E7B: mov     [ecx+4], edx
0x8D9E7E: add     ecx, 0Ch
0x8D9E81: mov     [edi+1A4h], ecx
0x8D9E87: pop     edi
0x8D9E88: pop     esi
0x8D9E89: pop     ebp
0x8D9E8A: mov     eax, 2
0x8D9E8F: pop     ebx
0x8D9E90: add     esp, 18h
0x8D9E93: retn    0Ch
