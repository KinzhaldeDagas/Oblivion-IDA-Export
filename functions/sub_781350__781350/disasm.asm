0x781350: mov     eax, [esp+arg_0]
0x781354: test    eax, eax
0x781356: push    esi
0x781357: mov     esi, [esp+4+arg_10]
0x78135B: push    edi; ArgList
0x78135C: mov     edi, [esp+8+arg_14]
0x781360: mov     dword ptr [esi], 0
0x781366: mov     dword ptr [edi], 0
0x78136C: jz      loc_78149A
0x781372: mov     edx, [esp+8+arg_4]
0x781376: test    edx, edx
0x781378: jz      loc_78149A
0x78137E: mov     ecx, [ecx+4]
0x781381: or      ecx, ds:0B428BCh
0x781387: push    ebx
0x781388: mov     ebx, [esp+0Ch+arg_18]
0x78138C: push    ebp
0x78138D: mov     ebp, dword ptr [esp+10h+ArgList]
0x781391: push    ebx
0x781392: lea     ebx, [esp+14h+arg_14]
0x781396: push    ebx
0x781397: lea     ebx, [esp+18h+arg_10]
0x78139B: push    ebx
0x78139C: push    ecx
0x78139D: mov     ecx, [esp+20h+arg_C]
0x7813A1: push    ecx
0x7813A2: push    ebp
0x7813A3: push    0
0x7813A5: push    0
0x7813A7: push    edx
0x7813A8: push    eax
0x7813A9: call    D3DXCompileShader_0
0x7813AE: test    eax, eax
0x7813B0: jge     loc_781441
0x7813B6: mov     eax, [esp+10h+arg_14]
0x7813BA: xor     esi, esi
0x7813BC: test    eax, eax
0x7813BE: jz      short loc_78140D
0x7813C0: mov     edx, [eax]
0x7813C2: push    eax
0x7813C3: mov     eax, [edx+0Ch]
0x7813C6: call    eax
0x7813C8: mov     ebx, eax
0x7813CA: test    ebx, ebx
0x7813CC: jz      short loc_7813FF
0x7813CE: mov     eax, [esp+0Ch+arg_18]
0x7813D2: mov     ecx, [eax]
0x7813D4: mov     edx, [ecx+10h]
0x7813D7: push    eax
0x7813D8: call    edx
0x7813DA: mov     edi, eax
0x7813DC: push    edi; Size
0x7813DD: call    FormHeapAlloc
0x7813E2: push    ebx; Src
0x7813E3: mov     esi, eax
0x7813E5: push    edi; SizeInBytes
0x7813E6: push    esi; Dst
0x7813E7: call    sub_434900
0x7813EC: push    esi
0x7813ED: push    ebp; ArgList
0x7813EE: push    offset aFailedToAssemb; "Failed to assemble shader %s from memor"...
0x7813F3: push    0; int
0x7813F5: push    1; int
0x7813F7: call    sub_738460
0x7813FC: add     esp, 24h
0x7813FF: mov     eax, [esp+0Ch+arg_18]
0x781403: mov     ecx, [eax]
0x781405: mov     edx, [ecx+8]
0x781408: push    eax
0x781409: call    edx
0x78140B: jmp     short loc_78141F
0x78140D: push    ebp; ArgList
0x78140E: push    offset aFailedToAsse_0; "Failed to assemble shader %s from memor"...
0x781413: push    0; int
0x781415: push    1; int
0x781417: call    sub_738460
0x78141C: add     esp, 10h
0x78141F: push    esi
0x781420: call    FormHeapFree
0x781425: mov     eax, [esp+14h+arg_10]
0x781429: add     esp, 4
0x78142C: test    eax, eax
0x78142E: jz      short loc_781438
0x781430: mov     ecx, [eax]
0x781432: mov     edx, [ecx+8]
0x781435: push    eax
0x781436: call    edx
0x781438: pop     ebp
0x781439: pop     ebx
0x78143A: pop     edi
0x78143B: xor     al, al
0x78143D: pop     esi
0x78143E: retn    1Ch
0x781441: mov     eax, [esp+10h+arg_10]
0x781445: mov     ecx, [eax]
0x781447: mov     edx, [ecx+10h]
0x78144A: push    eax
0x78144B: call    edx
0x78144D: push    eax; Size
0x78144E: mov     [edi], eax
0x781450: call    FormHeapAlloc
0x781455: mov     [esi], eax
0x781457: mov     eax, [esp+14h+arg_10]
0x78145B: mov     ecx, [eax]
0x78145D: mov     edx, [ecx+0Ch]
0x781460: mov     edi, [edi]
0x781462: add     esp, 4
0x781465: push    eax
0x781466: call    edx
0x781468: push    edi; Size
0x781469: push    eax; Src
0x78146A: mov     eax, [esi]
0x78146C: push    eax; Dst
0x78146D: call    _memcpy
0x781472: mov     eax, [esp+1Ch+arg_10]
0x781476: mov     ecx, [eax]
0x781478: mov     edx, [ecx+8]
0x78147B: add     esp, 0Ch
0x78147E: push    eax
0x78147F: call    edx
0x781481: mov     eax, [esp+10h+arg_14]
0x781485: test    eax, eax
0x781487: jz      short loc_781491
0x781489: mov     ecx, [eax]
0x78148B: mov     edx, [ecx+8]
0x78148E: push    eax
0x78148F: call    edx
0x781491: pop     ebp
0x781492: pop     ebx
0x781493: pop     edi
0x781494: mov     al, 1
0x781496: pop     esi
0x781497: retn    1Ch
0x78149A: push    offset aInvalidShaderB; "Invalid shader buffer\n"
0x78149F: push    0; int
0x7814A1: push    1; int
0x7814A3: call    sub_738460
0x7814A8: add     esp, 0Ch
0x7814AB: pop     edi
0x7814AC: xor     al, al
0x7814AE: pop     esi
0x7814AF: retn    1Ch
