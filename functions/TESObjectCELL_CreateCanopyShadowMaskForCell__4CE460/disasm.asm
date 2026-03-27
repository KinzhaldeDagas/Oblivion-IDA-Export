0x4CE460: push    ebp
0x4CE461: mov     ebp, [esp+4+arg_0]
0x4CE465: test    ebp, ebp
0x4CE467: push    esi
0x4CE468: mov     esi, [esp+8+arg_4]
0x4CE46C: mov     dword ptr [esi], 0
0x4CE472: jz      loc_4CE535
0x4CE478: test    byte ptr [ebp+24h], 1
0x4CE47C: jnz     loc_4CE535
0x4CE482: cmp     dword ptr ds:0B350D8h, 0
0x4CE489: jz      loc_4CE535
0x4CE48F: mov     eax, ds:0B3F928h
0x4CE494: push    edi
0x4CE495: push    offset stru_B27534; a4
0x4CE49A: push    eax; a3
0x4CE49B: push    40h ; '@'; a2
0x4CE49D: push    40h ; '@'; a1
0x4CE49F: mov     byte ptr ds:0B3FF00h, 1
0x4CE4A6: mov     dword ptr ds:0B2752Ch, 32h ; '2'
0x4CE4B0: mov     byte ptr ds:0B27530h, 0
0x4CE4B7: call    CreateNiRenderedTexture
0x4CE4BC: mov     edi, [esp+1Ch+arg_8]
0x4CE4C0: add     esp, 10h
0x4CE4C3: mov     [esi], eax
0x4CE4C5: mov     byte ptr ds:0B3FF00h, 0
0x4CE4CC: mov     byte ptr ds:0B27530h, 1
0x4CE4D3: mov     ecx, [esi]
0x4CE4D5: push    edi
0x4CE4D6: push    ecx
0x4CE4D7: push    1
0x4CE4D9: lea     ecx, [ebp+28h]
0x4CE4DC: call    sub_424440
0x4CE4E1: push    3
0x4CE4E3: call    nullsub_returnTrue_0arg
0x4CE4E8: mov     edx, [esi]
0x4CE4EA: mov     ecx, [edx+24h]
0x4CE4ED: mov     eax, [ecx]
0x4CE4EF: mov     edx, [eax+14h]
0x4CE4F2: add     esp, 4
0x4CE4F5: call    edx
0x4CE4F7: mov     edx, [edi]
0x4CE4F9: mov     ecx, [eax]
0x4CE4FB: push    0
0x4CE4FD: push    0
0x4CE4FF: push    edx
0x4CE500: push    0
0x4CE502: push    eax
0x4CE503: mov     eax, [ecx+4Ch]
0x4CE506: call    eax
0x4CE508: mov     ecx, [esi]
0x4CE50A: mov     edx, [ecx]
0x4CE50C: mov     eax, [edx+50h]
0x4CE50F: mov     edi, [edi]
0x4CE511: call    eax
0x4CE513: imul    eax, [edi]
0x4CE516: mov     ecx, [edi+4]
0x4CE519: push    eax
0x4CE51A: push    0
0x4CE51C: push    ecx
0x4CE51D: call    __memset
0x4CE522: push    2
0x4CE524: call    nullsub_returnTrue_0arg
0x4CE529: add     esp, 10h
0x4CE52C: pop     edi
0x4CE52D: pop     esi
0x4CE52E: mov     eax, 1
0x4CE533: pop     ebp
0x4CE534: retn
0x4CE535: pop     esi
0x4CE536: xor     eax, eax
0x4CE538: pop     ebp
0x4CE539: retn
