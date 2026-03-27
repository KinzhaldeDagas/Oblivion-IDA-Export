0x6DBDB0: sub     esp, 8
0x6DBDB3: push    ebx
0x6DBDB4: mov     ebx, ecx
0x6DBDB6: mov     al, [ebx+0Ch]
0x6DBDB9: shr     al, 4
0x6DBDBC: test    al, 1
0x6DBDBE: push    esi
0x6DBDBF: mov     [esp+10h+var_4], ebx
0x6DBDC3: jz      short loc_6DBDF0
0x6DBDC5: mov     ecx, [esp+10h+arg_C]
0x6DBDC9: fld     [esp+10h+arg_0]
0x6DBDCD: mov     edx, [esp+10h+arg_8]
0x6DBDD1: mov     esi, [esp+10h+arg_4]
0x6DBDD5: push    ecx; int
0x6DBDD6: push    edx; int
0x6DBDD7: push    esi; int
0x6DBDD8: push    ecx
0x6DBDD9: mov     ecx, ebx
0x6DBDDB: fstp    [esp+20h+var_20]; float
0x6DBDDE: call    sub_6DBBE0
0x6DBDE3: mov     eax, [esi]
0x6DBDE5: pop     esi
0x6DBDE6: mov     [ebx+10h], eax
0x6DBDE9: pop     ebx
0x6DBDEA: add     esp, 8
0x6DBDED: retn    10h
0x6DBDF0: mov     eax, [ebx+18h]
0x6DBDF3: push    edi
0x6DBDF4: xor     edi, edi
0x6DBDF6: test    eax, eax
0x6DBDF8: jz      short loc_6DBE09
0x6DBDFA: mov     esi, [eax+8]
0x6DBDFD: mov     cl, [eax+14h]
0x6DBE00: mov     edi, [eax+0Ch]
0x6DBE03: mov     [esp+14h+var_8], esi
0x6DBE07: jmp     short loc_6DBE11
0x6DBE09: mov     [esp+14h+var_8], edi
0x6DBE0D: xor     cl, cl
0x6DBE0F: mov     esi, edi
0x6DBE11: fld     [esp+14h+arg_0]
0x6DBE15: fld     dword ptr [edi]
0x6DBE17: fcomp   st(1)
0x6DBE19: fnstsw  ax
0x6DBE1B: test    ah, 1
0x6DBE1E: jnz     short loc_6DBE47
0x6DBE20: mov     ecx, [esp+14h+arg_4]
0x6DBE24: fstp    st
0x6DBE26: mov     edx, [esp+14h+arg_8]
0x6DBE2A: fldz
0x6DBE2C: mov     eax, [esp+14h+arg_C]
0x6DBE30: pop     edi
0x6DBE31: mov     dword ptr [ecx], 0
0x6DBE37: pop     esi
0x6DBE38: mov     dword ptr [edx], 1
0x6DBE3E: fstp    dword ptr [eax]
0x6DBE40: pop     ebx
0x6DBE41: add     esp, 8
0x6DBE44: retn    10h
0x6DBE47: movzx   edx, cl
0x6DBE4A: push    ebp
0x6DBE4B: lea     ebp, [esi-1]
0x6DBE4E: mov     ecx, edx
0x6DBE50: imul    ecx, ebp
0x6DBE53: fld     dword ptr [ecx+edi]
0x6DBE56: fcomp   st(1)
0x6DBE58: fnstsw  ax
0x6DBE5A: test    ah, 41h
0x6DBE5D: jp      short loc_6DBE82
0x6DBE5F: mov     edx, [esp+18h+arg_4]
0x6DBE63: fstp    st
0x6DBE65: mov     eax, [esp+18h+arg_8]
0x6DBE69: fld1
0x6DBE6B: mov     ecx, [esp+18h+arg_C]
0x6DBE6F: add     esi, 0FFFFFFFEh
0x6DBE72: mov     [edx], esi
0x6DBE74: mov     [eax], ebp
0x6DBE76: fstp    dword ptr [ecx]
0x6DBE78: pop     ebp
0x6DBE79: pop     edi
0x6DBE7A: pop     esi
0x6DBE7B: pop     ebx
0x6DBE7C: add     esp, 8
0x6DBE7F: retn    10h
0x6DBE82: mov     eax, [esp+18h+var_4]
0x6DBE86: mov     ecx, [eax+10h]
0x6DBE89: cmp     ecx, ebp
0x6DBE8B: mov     bl, 1
0x6DBE8D: jnb     short loc_6DBEDE
0x6DBE8F: mov     eax, edx
0x6DBE91: fld     st
0x6DBE93: imul    eax, ecx
0x6DBE96: fld     dword ptr [eax+edi]
0x6DBE99: fucompp
0x6DBE9B: lea     esi, [eax+edi]
0x6DBE9E: fnstsw  ax
0x6DBEA0: test    ah, 44h
0x6DBEA3: jnp     short loc_6DBF12
0x6DBEA5: fld     dword ptr [esi]
0x6DBEA7: fcomp   st(1)
0x6DBEA9: fnstsw  ax
0x6DBEAB: test    ah, 5
0x6DBEAE: jp      short loc_6DBEC2
0x6DBEB0: lea     eax, [ecx+1]
0x6DBEB3: imul    eax, edx
0x6DBEB6: fld     dword ptr [eax+edi]
0x6DBEB9: fcomp   st(1)
0x6DBEBB: fnstsw  ax
0x6DBEBD: test    ah, 41h
0x6DBEC0: jz      short loc_6DBF12
0x6DBEC2: mov     eax, [esp+18h+var_8]
0x6DBEC6: add     eax, 0FFFFFFFEh
0x6DBEC9: cmp     ecx, eax
0x6DBECB: jnz     short loc_6DBED7
0x6DBECD: test    bl, bl
0x6DBECF: jz      short loc_6DBED7
0x6DBED1: xor     ecx, ecx
0x6DBED3: xor     bl, bl
0x6DBED5: jmp     short loc_6DBEDA
0x6DBED7: add     ecx, 1
0x6DBEDA: cmp     ecx, ebp
0x6DBEDC: jb      short loc_6DBE8F
0x6DBEDE: mov     eax, [esp+18h+arg_C]
0x6DBEE2: mov     esi, edx
0x6DBEE4: imul    esi, ecx
0x6DBEE7: fsub    dword ptr [esi+edi]
0x6DBEEA: add     esi, edi
0x6DBEEC: imul    edx, eax
0x6DBEEF: pop     ebp
0x6DBEF0: fld     dword ptr [edx+edi]
0x6DBEF3: mov     edx, [esp+14h+arg_C]
0x6DBEF7: fsub    dword ptr [esi]
0x6DBEF9: pop     edi
0x6DBEFA: pop     esi
0x6DBEFB: pop     ebx
0x6DBEFC: fdivp   st(1), st
0x6DBEFE: fstp    dword ptr [edx]
0x6DBF00: mov     edx, [esp+8+arg_4]
0x6DBF04: mov     [edx], ecx
0x6DBF06: mov     ecx, [esp+8+arg_8]
0x6DBF0A: mov     [ecx], eax
0x6DBF0C: add     esp, 8
0x6DBF0F: retn    10h
0x6DBF12: mov     eax, [esp+18h+var_4]
0x6DBF16: mov     [eax+10h], ecx
0x6DBF19: lea     eax, [ecx+1]
0x6DBF1C: jmp     short loc_6DBEE2
