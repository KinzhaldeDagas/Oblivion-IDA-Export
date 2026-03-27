0x9123C0: push    ebp
0x9123C1: mov     ebp, esp
0x9123C3: and     esp, 0FFFFFFF0h
0x9123C6: sub     esp, 28h
0x9123C9: mov     eax, [ebp+arg_0]
0x9123CC: mov     edx, [eax]
0x9123CE: add     edx, 4
0x9123D1: mov     [eax], edx
0x9123D3: mov     eax, edx
0x9123D5: push    esi
0x9123D6: mov     esi, [eax]
0x9123D8: push    edi
0x9123D9: mov     edi, [ebp+arg_C]
0x9123DC: lea     eax, [esi+5]
0x9123DF: shl     eax, 4
0x9123E2: movaps  xmm0, xmmword ptr [eax+edi]
0x9123E6: mov     ecx, edi
0x9123E8: movaps  [esp+30h+var_20], xmm0
0x9123ED: call    sub_912140
0x9123F2: fcom    dword ptr ds:0A2FAA8h
0x9123F8: mov     eax, [ebp+arg_4]
0x9123FB: fst     [esp+30h+var_8]
0x9123FF: mov     ecx, [eax]
0x912401: lea     edx, [ecx+10h]
0x912404: mov     [eax], edx
0x912406: mov     eax, [ecx]
0x912408: mov     [esp+30h+var_10], eax
0x91240C: fnstsw  ax
0x91240E: mov     edx, [ecx+4]
0x912411: test    ah, 5
0x912414: mov     [esp+30h+var_C], edx
0x912418: jp      short loc_912446
0x91241A: fld     dword ptr [ecx+8]
0x91241D: fcomp   dword ptr ds:0A2FAA8h
0x912423: fnstsw  ax
0x912425: test    ah, 41h
0x912428: jnz     short loc_912446
0x91242A: fld     dword ptr [ecx+8]
0x91242D: fsub    st, st(1)
0x91242F: fcomp   dword ptr ds:0A9CD64h
0x912435: fnstsw  ax
0x912437: test    ah, 41h
0x91243A: jnz     short loc_912446
0x91243C: fadd    dword ptr ds:0A46B14h
0x912442: fst     [esp+30h+var_8]
0x912446: fcom    dword ptr ds:0A2FAA8h
0x91244C: fnstsw  ax
0x91244E: test    ah, 41h
0x912451: jnz     short loc_91247F
0x912453: fld     dword ptr [ecx+8]
0x912456: fcomp   dword ptr ds:0A2FAA8h
0x91245C: fnstsw  ax
0x91245E: test    ah, 5
0x912461: jp      short loc_91247F
0x912463: fld     st
0x912465: fsub    dword ptr [ecx+8]
0x912468: fcomp   dword ptr ds:0A9CD64h
0x91246E: fnstsw  ax
0x912470: test    ah, 41h
0x912473: jnz     short loc_91247F
0x912475: fsub    dword ptr ds:0A46B14h
0x91247B: fst     [esp+30h+var_8]
0x91247F: mov     eax, [ebp+arg_14]
0x912482: fstp    dword ptr [ecx+8]
0x912485: mov     ecx, [ebp+arg_10]
0x912488: push    eax
0x912489: push    ecx
0x91248A: lea     edx, [esp+38h+var_20]
0x91248E: push    edx
0x91248F: call    sub_8F1B60
0x912494: mov     eax, [edi+0B8h]
0x91249A: add     esp, 0Ch
0x91249D: inc     eax
0x91249E: mov     [edi+0B8h], eax
0x9124A4: pop     edi
0x9124A5: pop     esi
0x9124A6: mov     esp, ebp
0x9124A8: pop     ebp
0x9124A9: retn    18h
