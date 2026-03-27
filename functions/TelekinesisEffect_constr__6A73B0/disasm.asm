0x6A73B0: push    0FFFFFFFFh
0x6A73B2: push    offset TelekinesisEffect_constr_SEH
0x6A73B7: mov     eax, large fs:0
0x6A73BD: push    eax
0x6A73BE: push    ecx
0x6A73BF: push    ebx
0x6A73C0: push    esi
0x6A73C1: push    edi
0x6A73C2: mov     eax, ds:0B30AACh
0x6A73C7: xor     eax, esp
0x6A73C9: push    eax
0x6A73CA: lea     eax, [esp+20h+var_C]
0x6A73CE: mov     large fs:0, eax
0x6A73D4: mov     esi, ecx
0x6A73D6: mov     [esp+20h+var_10], esi
0x6A73DA: mov     eax, [esp+20h+arg_8]
0x6A73DE: mov     ecx, [esp+20h+arg_4]
0x6A73E2: mov     edx, [esp+20h+arg_0]
0x6A73E6: push    eax; int
0x6A73E7: push    ecx; int
0x6A73E8: push    edx; int
0x6A73E9: mov     ecx, esi; this
0x6A73EB: call    ValueModifierEffect_constr
0x6A73F0: xor     ebx, ebx
0x6A73F2: mov     dword ptr [esi], offset ??_7TelekinesisEffect@@6B@; const TelekinesisEffect::`vftable'
0x6A73F8: mov     [esp+20h+var_4], ebx
0x6A73FC: mov     [esi+3Ch], ebx
0x6A73FF: mov     edi, ebx
0x6A7401: cmp     edi, ebx
0x6A7403: mov     byte ptr [esp+20h+var_4], 1
0x6A7408: jz      short loc_6A7429
0x6A740A: lea     eax, [edi+4]
0x6A740D: push    eax; lpAddend
0x6A740E: call    dword ptr ds:0A2807Ch
0x6A7414: test    eax, eax
0x6A7416: jnz     short loc_6A7426
0x6A7418: cmp     edi, ebx
0x6A741A: jz      short loc_6A7426
0x6A741C: mov     edx, [edi]
0x6A741E: mov     eax, [edx]
0x6A7420: push    1
0x6A7422: mov     ecx, edi
0x6A7424: call    eax
0x6A7426: mov     [esi+3Ch], ebx
0x6A7429: fldz
0x6A742B: mov     [esi+48h], ebx
0x6A742E: fst     dword ptr [esi+40h]
0x6A7431: mov     [esi+4Ch], bl
0x6A7434: fstp    dword ptr [esi+44h]
0x6A7437: mov     [esi+4Dh], bl
0x6A743A: mov     eax, esi
0x6A743C: mov     ecx, dword ptr [esp+20h+var_C]
0x6A7440: mov     large fs:0, ecx
0x6A7447: pop     ecx
0x6A7448: pop     edi
0x6A7449: pop     esi
0x6A744A: pop     ebx
0x6A744B: add     esp, 10h
0x6A744E: retn    0Ch
