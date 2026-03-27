0x4F84F0: push    ebx
0x4F84F1: push    esi
0x4F84F2: push    edi
0x4F84F3: mov     edi, [esp+0Ch+a1]
0x4F84F7: xor     esi, esi
0x4F84F9: test    edi, edi
0x4F84FB: jz      short loc_4F850F
0x4F84FD: mov     eax, [edi]
0x4F84FF: mov     edx, [eax+190h]
0x4F8505: mov     ecx, edi
0x4F8507: call    edx
0x4F8509: test    al, al
0x4F850B: jz      short loc_4F850F
0x4F850D: mov     esi, edi
0x4F850F: test    esi, esi
0x4F8511: fldz
0x4F8513: mov     ebx, [esp+0Ch+arg_C]
0x4F8517: fstp    qword ptr [ebx]
0x4F8519: jz      short loc_4F8567
0x4F851B: mov     ecx, esi; this
0x4F851D: call    TESObjectREFR_GetContainer
0x4F8522: test    eax, eax
0x4F8524: jz      short loc_4F8567
0x4F8526: push    eax
0x4F8527: push    edi; a1
0x4F8528: call    ContainerExtraData_GetContainerExtraDataForRef
0x4F852D: add     esp, 8
0x4F8530: test    eax, eax
0x4F8532: jz      short loc_4F8567
0x4F8534: push    0
0x4F8536: push    2
0x4F8538: mov     ecx, eax
0x4F853A: call    ContainerExtraData_GetEquippedInstance
0x4F853F: test    eax, eax
0x4F8541: jz      short loc_4F8567
0x4F8543: mov     eax, [eax+8]
0x4F8546: test    eax, eax
0x4F8548: jz      short loc_4F8567
0x4F854A: cmp     byte ptr [eax+4], 14h
0x4F854E: jnz     short loc_4F8567
0x4F8550: mov     ecx, eax
0x4F8552: call    TESObjectARMO_ISHeavyArmor
0x4F8557: test    al, al
0x4F8559: jnz     short loc_4F855F
0x4F855B: fld1
0x4F855D: jmp     short loc_4F8565
0x4F855F: fld     qword ptr ds:0A3D0C0h
0x4F8565: fstp    qword ptr [ebx]
0x4F8567: cmp     byte ptr ds:0B361ACh, 0
0x4F856E: jz      short loc_4F8585
0x4F8570: fld     qword ptr [ebx]
0x4F8572: sub     esp, 8
0x4F8575: fstp    [esp+14h+var_14]
0x4F8578: push    offset aArmorRatingUpperBodyIs0_2f; "Armor Rating upper body is %0.2f"
0x4F857D: call    Interface_ConsolePrint
0x4F8582: add     esp, 0Ch
0x4F8585: pop     edi
0x4F8586: pop     esi
0x4F8587: mov     al, 1
0x4F8589: pop     ebx
0x4F858A: retn
