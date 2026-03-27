0x7B8440: push    esi
0x7B8441: push    edi
0x7B8442: mov     edi, [esp+8+arg_0]
0x7B8446: push    4
0x7B8448: mov     ecx, edi
0x7B844A: call    NiNode_GetNiPropertyByID
0x7B844F: mov     esi, eax
0x7B8451: test    esi, esi
0x7B8453: jz      short loc_7B848C
0x7B8455: mov     eax, [esi]
0x7B8457: mov     edx, [eax+54h]
0x7B845A: mov     ecx, esi
0x7B845C: call    edx
0x7B845E: cmp     eax, 1
0x7B8461: jl      short loc_7B8478
0x7B8463: mov     eax, [esi]
0x7B8465: mov     edx, [eax+54h]
0x7B8468: mov     ecx, esi
0x7B846A: call    edx
0x7B846C: cmp     eax, 0Ah
0x7B846F: jg      short loc_7B8478
0x7B8471: mov     eax, 1
0x7B8476: jmp     short loc_7B847A
0x7B8478: xor     eax, eax
0x7B847A: neg     eax
0x7B847C: sbb     eax, eax
0x7B847E: and     eax, esi
0x7B8480: jz      short loc_7B848C
0x7B8482: fld     [esp+8+arg_4]
0x7B8486: fstp    dword ptr [eax+94h]
0x7B848C: mov     eax, [edi]
0x7B848E: mov     edx, [eax+8]
0x7B8491: mov     ecx, edi
0x7B8493: call    edx
0x7B8495: test    eax, eax
0x7B8497: jz      short loc_7B84D6
0x7B8499: movzx   eax, word ptr [edi+0B6h]
0x7B84A0: xor     esi, esi
0x7B84A2: test    eax, eax
0x7B84A4: jbe     short loc_7B84D6
0x7B84A6: cmp     eax, esi
0x7B84A8: jbe     short loc_7B84C8
0x7B84AA: mov     eax, [edi+0B0h]
0x7B84B0: mov     eax, [eax+esi*4]
0x7B84B3: test    eax, eax
0x7B84B5: jz      short loc_7B84C8
0x7B84B7: fld     [esp+8+arg_4]
0x7B84BB: push    ecx
0x7B84BC: fstp    [esp+0Ch+var_C]; float
0x7B84BF: push    eax; int
0x7B84C0: call    sub_7B8440
0x7B84C5: add     esp, 8
0x7B84C8: movzx   eax, word ptr [edi+0B6h]
0x7B84CF: add     esi, 1
0x7B84D2: cmp     eax, esi
0x7B84D4: ja      short loc_7B84AA
0x7B84D6: pop     edi
0x7B84D7: pop     esi
0x7B84D8: retn
