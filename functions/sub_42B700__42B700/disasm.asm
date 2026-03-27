0x42B700: push    ebp
0x42B701: mov     ebp, esp
0x42B703: and     esp, 0FFFFFFC0h
0x42B706: sub     esp, 34h
0x42B709: push    ebx
0x42B70A: push    esi
0x42B70B: mov     esi, ecx
0x42B70D: mov     eax, [esi]
0x42B70F: mov     ecx, [ebp+arg_0]; this
0x42B712: push    edi; ArgList
0x42B713: push    0FFFFFFFFh; a2
0x42B715: mov     dword ptr [esp+44h+ArgList], eax
0x42B719: call    TESForm_GetOverrideFile
0x42B71E: push    eax; a2
0x42B71F: lea     ecx, [esp+44h+ArgList]
0x42B723: push    ecx; a1
0x42B724: call    TESForm_ResolveFormID
0x42B729: mov     edx, dword ptr [esp+48h+ArgList]
0x42B72D: add     esp, 8
0x42B730: push    0; int
0x42B732: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x42B737: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x42B73C: push    0; int
0x42B73E: push    edx; a1
0x42B73F: call    TESForm_LookupByFormID
0x42B744: add     esp, 4
0x42B747: push    eax; void *
0x42B748: call    OblivionDynamicCast
0x42B74D: add     esp, 14h
0x42B750: test    eax, eax
0x42B752: mov     [esi], eax
0x42B754: jnz     short loc_42B773
0x42B756: mov     eax, dword ptr [esp+40h+ArgList]
0x42B75A: push    eax; ArgList
0x42B75B: push    offset aCouldNotFindLi; "Could not find linked door (%08X) in te"...
0x42B760: call    PrintError
0x42B765: add     esp, 8
0x42B768: xor     al, al
0x42B76A: pop     edi
0x42B76B: pop     esi
0x42B76C: pop     ebx
0x42B76D: mov     esp, ebp
0x42B76F: pop     ebp
0x42B770: retn    4
0x42B773: mov     edx, [eax]
0x42B775: mov     ecx, eax
0x42B777: mov     eax, [edx+170h]
0x42B77D: call    eax
0x42B77F: cmp     byte ptr [eax+4], 18h
0x42B783: jz      short loc_42B7F6
0x42B785: mov     ecx, [esi]
0x42B787: mov     edx, [ecx]
0x42B789: mov     eax, [edx+170h]
0x42B78F: call    eax
0x42B791: mov     ecx, [esi]
0x42B793: mov     edx, [ecx]
0x42B795: mov     edi, eax
0x42B797: mov     eax, [edx+170h]
0x42B79D: call    eax
0x42B79F: mov     ecx, [eax+0Ch]
0x42B7A2: mov     [esp+40h+var_4], ecx
0x42B7A6: mov     ecx, [esi]
0x42B7A8: mov     edx, [ecx]
0x42B7AA: mov     eax, [edx+170h]
0x42B7B0: call    eax
0x42B7B2: mov     ecx, [esp+40h+var_4]
0x42B7B6: mov     edx, [edi]
0x42B7B8: movzx   ebx, byte ptr [eax+4]
0x42B7BC: mov     eax, [edx+0D4h]
0x42B7C2: push    ecx
0x42B7C3: mov     ecx, edi
0x42B7C5: call    eax
0x42B7C7: push    eax
0x42B7C8: mov     eax, dword ptr [esp+48h+ArgList]
0x42B7CC: lea     ecx, [ebx+ebx*2]
0x42B7CF: mov     edx, off_B05E04[ecx*4]; "NONE"
0x42B7D6: push    edx
0x42B7D7: push    eax; ArgList
0x42B7D8: push    offset aLinkedDoor08xI; "Linked door (%08X) in teleport data poi"...
0x42B7DD: call    PrintError
0x42B7E2: add     esp, 14h
0x42B7E5: mov     dword ptr [esi], 0
0x42B7EB: xor     al, al
0x42B7ED: pop     edi
0x42B7EE: pop     esi
0x42B7EF: pop     ebx
0x42B7F0: mov     esp, ebp
0x42B7F2: pop     ebp
0x42B7F3: retn    4
0x42B7F6: fld     dword ptr [esi+4]
0x42B7F9: sub     esp, 8
0x42B7FC: fstp    [esp+48h+X+4]; X
0x42B7FF: call    __finite
0x42B804: add     esp, 8
0x42B807: test    eax, eax
0x42B809: jz      short loc_42B874
0x42B80B: fld     dword ptr [esi+8]
0x42B80E: sub     esp, 8
0x42B811: fstp    [esp+48h+X+4]; X
0x42B814: call    __finite
0x42B819: add     esp, 8
0x42B81C: test    eax, eax
0x42B81E: jz      short loc_42B874
0x42B820: fld     dword ptr [esi+0Ch]
0x42B823: sub     esp, 8
0x42B826: fstp    [esp+48h+X+4]; X
0x42B829: call    __finite
0x42B82E: add     esp, 8
0x42B831: test    eax, eax
0x42B833: jz      short loc_42B874
0x42B835: fld     dword ptr [esi+4]
0x42B838: sub     esp, 8
0x42B83B: fstp    [esp+48h+X+4]; X
0x42B83E: call    __isnan
0x42B843: add     esp, 8
0x42B846: test    eax, eax
0x42B848: jnz     short loc_42B874
0x42B84A: fld     dword ptr [esi+8]
0x42B84D: sub     esp, 8
0x42B850: fstp    [esp+48h+X+4]; X
0x42B853: call    __isnan
0x42B858: add     esp, 8
0x42B85B: test    eax, eax
0x42B85D: jnz     short loc_42B874
0x42B85F: fld     dword ptr [esi+0Ch]
0x42B862: sub     esp, 8
0x42B865: fstp    [esp+48h+X+4]; X
0x42B868: call    __isnan
0x42B86D: add     esp, 8
0x42B870: test    eax, eax
0x42B872: jz      short loc_42B89B
0x42B874: push    offset aCorruptLocatio; "Corrupt location found in teleport data"...
0x42B879: call    PrintError
0x42B87E: mov     ecx, dword ptr Vector3_InitValue?
0x42B884: mov     [esi+4], ecx
0x42B887: mov     edx, dword ptr Vector3_InitValue?+4
0x42B88D: mov     [esi+8], edx
0x42B890: mov     eax, dword_B3F9B0
0x42B895: add     esp, 4
0x42B898: mov     [esi+0Ch], eax
0x42B89B: fld     dword ptr [esi+10h]
0x42B89E: sub     esp, 8
0x42B8A1: fstp    [esp+48h+X+4]; X
0x42B8A4: call    __finite
0x42B8A9: add     esp, 8
0x42B8AC: test    eax, eax
0x42B8AE: jz      short loc_42B919
0x42B8B0: fld     dword ptr [esi+14h]
0x42B8B3: sub     esp, 8
0x42B8B6: fstp    [esp+48h+X+4]; X
0x42B8B9: call    __finite
0x42B8BE: add     esp, 8
0x42B8C1: test    eax, eax
0x42B8C3: jz      short loc_42B919
0x42B8C5: fld     dword ptr [esi+18h]
0x42B8C8: sub     esp, 8
0x42B8CB: fstp    [esp+48h+X+4]; X
0x42B8CE: call    __finite
0x42B8D3: add     esp, 8
0x42B8D6: test    eax, eax
0x42B8D8: jz      short loc_42B919
0x42B8DA: fld     dword ptr [esi+10h]
0x42B8DD: sub     esp, 8
0x42B8E0: fstp    [esp+48h+X+4]; X
0x42B8E3: call    __isnan
0x42B8E8: add     esp, 8
0x42B8EB: test    eax, eax
0x42B8ED: jnz     short loc_42B919
0x42B8EF: fld     dword ptr [esi+14h]
0x42B8F2: sub     esp, 8
0x42B8F5: fstp    [esp+48h+X+4]; X
0x42B8F8: call    __isnan
0x42B8FD: add     esp, 8
0x42B900: test    eax, eax
0x42B902: jnz     short loc_42B919
0x42B904: fld     dword ptr [esi+18h]
0x42B907: sub     esp, 8
0x42B90A: fstp    [esp+48h+X+4]; X
0x42B90D: call    __isnan
0x42B912: add     esp, 8
0x42B915: test    eax, eax
0x42B917: jz      short loc_42B940
0x42B919: push    offset aCorruptAngleFo; "Corrupt angle found in teleport data, s"...
0x42B91E: call    PrintError
0x42B923: mov     ecx, dword ptr Vector3_InitValue?
0x42B929: mov     [esi+10h], ecx
0x42B92C: mov     edx, dword ptr Vector3_InitValue?+4
0x42B932: mov     [esi+14h], edx
0x42B935: mov     eax, dword_B3F9B0
0x42B93A: add     esp, 4
0x42B93D: mov     [esi+18h], eax
0x42B940: pop     edi
0x42B941: pop     esi
0x42B942: mov     al, 1
0x42B944: pop     ebx
0x42B945: mov     esp, ebp
0x42B947: pop     ebp
0x42B948: retn    4
