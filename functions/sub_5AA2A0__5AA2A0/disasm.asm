0x5AA2A0: mov     eax, [esp+arg_0]
0x5AA2A4: mov     ecx, [esp+arg_4]
0x5AA2A8: push    esi
0x5AA2A9: mov     esi, [eax]
0x5AA2AB: push    edi
0x5AA2AC: mov     edi, [ecx]
0x5AA2AE: mov     ecx, esi
0x5AA2B0: call    sub_485150
0x5AA2B5: mov     edx, [esi+8]
0x5AA2B8: mov     [esp+8+arg_0], eax
0x5AA2BC: push    edx
0x5AA2BD: lea     eax, [esp+0Ch+arg_0]
0x5AA2C1: push    eax
0x5AA2C2: call    sub_5AA210
0x5AA2C7: add     esp, 8
0x5AA2CA: mov     ecx, edi
0x5AA2CC: call    sub_485150
0x5AA2D1: mov     ecx, [edi+8]
0x5AA2D4: push    ecx
0x5AA2D5: lea     edx, [esp+0Ch+arg_4]
0x5AA2D9: push    edx
0x5AA2DA: mov     [esp+10h+arg_4], eax
0x5AA2DE: call    sub_5AA210
0x5AA2E3: mov     eax, [esp+10h+arg_0]
0x5AA2E7: mov     ecx, [esp+10h+arg_4]
0x5AA2EB: add     esp, 8
0x5AA2EE: cmp     eax, ecx
0x5AA2F0: jg      short loc_5AA347
0x5AA2F2: jge     short loc_5AA2FA
0x5AA2F4: pop     edi
0x5AA2F5: or      eax, 0FFFFFFFFh
0x5AA2F8: pop     esi
0x5AA2F9: retn
0x5AA2FA: push    edi
0x5AA2FB: push    esi
0x5AA2FC: mov     ecx, offset byte_B3B3DB
0x5AA301: call    sub_584500
0x5AA306: test    eax, eax
0x5AA308: jg      short loc_5AA347
0x5AA30A: jl      short loc_5AA2F4
0x5AA30C: push    0
0x5AA30E: push    0
0x5AA310: push    0
0x5AA312: push    1
0x5AA314: mov     ecx, esi
0x5AA316: call    ContainerEntryExtraData_GetHealthFracOrUses
0x5AA31B: fstp    [esp+8+arg_4]
0x5AA31F: push    0
0x5AA321: push    0
0x5AA323: push    0
0x5AA325: push    1
0x5AA327: mov     ecx, edi
0x5AA329: call    ContainerEntryExtraData_GetHealthFracOrUses
0x5AA32E: fstp    [esp+8+arg_0]
0x5AA332: fld     [esp+8+arg_0]
0x5AA336: fld     [esp+8+arg_4]
0x5AA33A: fcom    st(1)
0x5AA33C: fnstsw  ax
0x5AA33E: test    ah, 5
0x5AA341: jp      short loc_5AA34F
0x5AA343: fstp    st(1)
0x5AA345: fstp    st
0x5AA347: pop     edi
0x5AA348: mov     eax, 1
0x5AA34D: pop     esi
0x5AA34E: retn
0x5AA34F: fcompp
0x5AA351: fnstsw  ax
0x5AA353: test    ah, 41h
0x5AA356: jz      short loc_5AA2F4
0x5AA358: push    0
0x5AA35A: mov     ecx, esi
0x5AA35C: call    ContainerEntryExtraData_HasWorn
0x5AA361: test    al, al
0x5AA363: jnz     short loc_5AA372
0x5AA365: push    0
0x5AA367: mov     ecx, edi
0x5AA369: call    ContainerEntryExtraData_HasWorn
0x5AA36E: test    al, al
0x5AA370: jnz     short loc_5AA347
0x5AA372: push    0
0x5AA374: mov     ecx, esi
0x5AA376: call    ContainerEntryExtraData_HasWorn
0x5AA37B: test    al, al
0x5AA37D: jz      short loc_5AA390
0x5AA37F: push    0
0x5AA381: mov     ecx, edi
0x5AA383: call    ContainerEntryExtraData_HasWorn
0x5AA388: test    al, al
0x5AA38A: jz      loc_5AA2F4
0x5AA390: pop     edi
0x5AA391: xor     eax, eax
0x5AA393: pop     esi
0x5AA394: retn
