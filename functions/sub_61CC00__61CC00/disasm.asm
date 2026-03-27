0x61CC00: sub     esp, 10h
0x61CC03: push    esi
0x61CC04: mov     esi, ecx
0x61CC06: mov     ecx, [esi+6Ch]
0x61CC09: cmp     ecx, 0Eh
0x61CC0C: jz      short loc_61CC17
0x61CC0E: cmp     ecx, 10h
0x61CC11: jnz     loc_61CE37
0x61CC17: fld     dword ptr [esi+44h]
0x61CC1A: push    ebx
0x61CC1B: fsub    dword ptr [esi+0D4h]
0x61CC21: fld     dword ptr [esi+0D8h]
0x61CC27: fcompp
0x61CC29: fnstsw  ax
0x61CC2B: test    ah, 5
0x61CC2E: jp      short loc_61CC34
0x61CC30: mov     bl, 1
0x61CC32: jmp     short loc_61CC36
0x61CC34: xor     bl, bl
0x61CC36: cmp     ecx, 10h
0x61CC39: push    edi; a5
0x61CC3A: mov     edi, [esi+3Ch]; a1
0x61CC3D: jnz     loc_61CD92
0x61CC43: fldz
0x61CC45: fcomp   dword ptr [esi+184h]
0x61CC4B: fnstsw  ax
0x61CC4D: test    ah, 41h
0x61CC50: jnz     short loc_61CC6B
0x61CC52: push    0; a4
0x61CC54: mov     ecx, esi
0x61CC56: call    sub_6135F0
0x61CC5B: push    eax; a3
0x61CC5C: push    edi; a2
0x61CC5D: call    TESObjectREFR_GetDistanceBetween?
0x61CC62: fstp    dword ptr [esi+184h]
0x61CC68: add     esp, 0Ch
0x61CC6B: fld     dword ptr [esi+184h]
0x61CC71: fld     dword ptr [esi+170h]
0x61CC77: fcompp
0x61CC79: fnstsw  ax
0x61CC7B: test    ah, 41h
0x61CC7E: jnp     loc_61CDE8
0x61CC84: cmp     byte ptr ds:0B333B8h, 0
0x61CC8B: jnz     short loc_61CD00
0x61CC8D: mov     ecx, [esi+3Ch]
0x61CC90: mov     eax, [ecx]
0x61CC92: mov     edx, [eax+174h]
0x61CC98: call    edx
0x61CC9A: fld     dword ptr [esi+198h]
0x61CCA0: fsub    dword ptr [eax]
0x61CCA2: fstp    dword ptr [esp+1Ch+var_C]
0x61CCA6: fld     dword ptr [esi+19Ch]
0x61CCAC: fsub    dword ptr [eax+4]
0x61CCAF: fstp    dword ptr [esp+1Ch+var_C+4]
0x61CCB3: fld     dword ptr [esi+1A0h]
0x61CCB9: fsub    dword ptr [eax+8]
0x61CCBC: fstp    [esp+1Ch+var_4]
0x61CCC0: fld     dword ptr [esp+1Ch+var_C+4]
0x61CCC4: fld     dword ptr [esp+1Ch+var_C]
0x61CCC8: fld     [esp+1Ch+var_4]
0x61CCCC: fld     dword ptr ds:0B372C8h
0x61CCD2: fld     st(2)
0x61CCD4: fmulp   st(3), st
0x61CCD6: fld     st(3)
0x61CCD8: fmulp   st(4), st
0x61CCDA: fxch    st(2)
0x61CCDC: faddp   st(3), st
0x61CCDE: fmul    st, st
0x61CCE0: faddp   st(2), st
0x61CCE2: fxch    st(1)
0x61CCE4: fstp    [esp+1Ch+var_10]
0x61CCE8: fld     [esp+1Ch+var_10]
0x61CCEC: fld     st(1)
0x61CCEE: fmulp   st(2), st
0x61CCF0: fcompp
0x61CCF2: fnstsw  ax
0x61CCF4: test    ah, 1
0x61CCF7: jnz     short loc_61CD00
0x61CCF9: mov     ecx, esi
0x61CCFB: call    sub_614BB0
0x61CD00: test    bl, bl
0x61CD02: jnz     short loc_61CD16
0x61CD04: mov     al, [esi+192h]
0x61CD0A: shr     al, 1
0x61CD0C: not     al
0x61CD0E: test    al, 1
0x61CD10: jnz     loc_61CE35
0x61CD16: mov     cl, [esi+192h]
0x61CD1C: shr     cl, 1
0x61CD1E: not     cl
0x61CD20: test    cl, 1
0x61CD23: jnz     short loc_61CD38
0x61CD25: mov     edx, [edi]
0x61CD27: mov     eax, [edx+330h]
0x61CD2D: mov     ecx, edi
0x61CD2F: call    eax
0x61CD31: mov     ecx, eax
0x61CD33: call    sub_6160B0
0x61CD38: fld     dword ptr [esi+0DCh]
0x61CD3E: mov     ecx, [esi+3Ch]
0x61CD41: fstp    [esp+1Ch+var_10]
0x61CD45: push    7
0x61CD47: fld     [esp+20h+var_10]
0x61CD4B: fstp    [esp+20h+var_C]
0x61CD4F: call    sub_5E5850
0x61CD54: fcomp   [esp+1Ch+var_C]
0x61CD58: fnstsw  ax
0x61CD5A: test    ah, 1
0x61CD5D: jz      loc_61CDE8
0x61CD63: fld     dword ptr [esi+44h]
0x61CD66: push    0Eh
0x61CD68: fstp    dword ptr [esi+0D4h]
0x61CD6E: mov     ecx, esi
0x61CD70: fld     [esp+20h+var_10]
0x61CD74: fstp    dword ptr [esi+0D8h]
0x61CD7A: fld     dword ptr ds:0A30634h
0x61CD80: fstp    dword ptr [esi+0DCh]
0x61CD86: call    sub_619920
0x61CD8B: pop     edi
0x61CD8C: pop     ebx
0x61CD8D: pop     esi
0x61CD8E: add     esp, 10h
0x61CD91: retn
0x61CD92: test    bl, bl
0x61CD94: jz      short loc_61CD9A
0x61CD96: mov     bl, 1
0x61CD98: jmp     short loc_61CDB9
0x61CD9A: mov     ecx, [edi+58h]
0x61CD9D: fld     dword ptr [esi+170h]
0x61CDA3: mov     edx, [ecx]
0x61CDA5: mov     eax, [edx+240h]
0x61CDAB: push    201h
0x61CDB0: push    ecx
0x61CDB1: fstp    [esp+24h+var_24]
0x61CDB4: push    edi
0x61CDB5: call    eax
0x61CDB7: mov     bl, al
0x61CDB9: mov     ecx, [edi+58h]
0x61CDBC: mov     edx, [ecx]
0x61CDBE: mov     eax, [edx+184h]
0x61CDC4: call    eax
0x61CDC6: test    eax, eax
0x61CDC8: jz      short loc_61CE35
0x61CDCA: movsx   eax, byte ptr [eax+20h]
0x61CDCE: cmp     eax, 0Ch
0x61CDD1: jnz     short loc_61CE35
0x61CDD3: test    bl, bl
0x61CDD5: jnz     short loc_61CDE8
0x61CDD7: mov     ecx, [edi+58h]
0x61CDDA: mov     edx, [ecx]
0x61CDDC: mov     eax, [edx+0C8h]
0x61CDE2: call    eax
0x61CDE4: test    al, al
0x61CDE6: jz      short loc_61CE35
0x61CDE8: mov     edx, [edi]
0x61CDEA: mov     eax, [edx+330h]
0x61CDF0: mov     ecx, edi
0x61CDF2: call    eax
0x61CDF4: test    eax, eax
0x61CDF6: jz      short loc_61CE35
0x61CDF8: mov     edx, [edi]
0x61CDFA: mov     eax, [edx+330h]
0x61CE00: push    9
0x61CE02: mov     ecx, edi
0x61CE04: call    eax
0x61CE06: mov     ecx, eax
0x61CE08: call    sub_612DA0
0x61CE0D: mov     edx, [edi]
0x61CE0F: mov     eax, [edx+330h]
0x61CE15: mov     ecx, edi
0x61CE17: call    eax
0x61CE19: mov     ecx, eax
0x61CE1B: call    sub_6160B0
0x61CE20: mov     edx, [edi]
0x61CE22: mov     eax, [edx+330h]
0x61CE28: push    0
0x61CE2A: mov     ecx, edi
0x61CE2C: call    eax
0x61CE2E: mov     ecx, eax
0x61CE30: call    sub_619920
0x61CE35: pop     edi
0x61CE36: pop     ebx
0x61CE37: pop     esi
0x61CE38: add     esp, 10h
0x61CE3B: retn
