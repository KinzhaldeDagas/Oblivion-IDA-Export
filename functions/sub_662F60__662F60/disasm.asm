0x662F60: mov     eax, [ecx]
0x662F62: mov     edx, [eax+170h]
0x662F68: push    ebx
0x662F69: push    ebp
0x662F6A: push    esi
0x662F6B: push    edi
0x662F6C: call    edx
0x662F6E: mov     ebp, eax
0x662F70: mov     ecx, [ebp+0E8h]
0x662F76: test    ecx, ecx
0x662F78: jz      short loc_662F9F
0x662F7A: push    0
0x662F7C: call    sub_52BDB0
0x662F81: test    eax, eax
0x662F83: jz      short loc_662F9F
0x662F85: mov     eax, [ebp+0ACh]
0x662F8B: mov     edx, ds:0B38B68h
0x662F91: mov     eax, [eax+18h]
0x662F94: lea     ecx, [ebp+0ACh]
0x662F9A: push    edx
0x662F9B: call    eax
0x662F9D: jmp     short loc_662FB6
0x662F9F: mov     edx, [ebp+0ACh]
0x662FA5: mov     eax, ds:0B38B70h
0x662FAA: mov     edx, [edx+18h]
0x662FAD: lea     ecx, [ebp+0ACh]
0x662FB3: push    eax
0x662FB4: call    edx
0x662FB6: mov     eax, ds:0B36BB8h
0x662FBB: mov     ecx, ds:0B33A1Ch
0x662FC1: push    1; int
0x662FC3: push    eax; char *
0x662FC4: call    sub_435830
0x662FC9: mov     edi, [esp+10h+arg_4]
0x662FCD: mov     ebx, [esp+10h+arg_0]
0x662FD1: mov     ecx, ds:0B33A1Ch
0x662FD7: push    0
0x662FD9: push    edi
0x662FDA: mov     esi, eax
0x662FDC: push    ebx
0x662FDD: push    esi
0x662FDE: call    sub_43BDA0
0x662FE3: push    esi
0x662FE4: call    FormHeapFree
0x662FE9: mov     ecx, ds:0B36BB8h
0x662FEF: add     esp, 4
0x662FF2: push    0
0x662FF4: push    1
0x662FF6: push    0
0x662FF8: push    0
0x662FFA: push    edi
0x662FFB: push    ebx
0x662FFC: push    ecx
0x662FFD: mov     ecx, ds:0B33A1Ch
0x663003: lea     edx, [esp+2Ch+arg_4]
0x663007: push    edx
0x663008: call    sub_43B420
0x66300D: mov     eax, [esp+10h+arg_4]
0x663011: test    eax, eax
0x663013: jz      short loc_663033
0x663015: mov     esi, eax
0x663017: add     eax, 8
0x66301A: push    eax; lpAddend
0x66301B: call    dword ptr ds:0A2807Ch
0x663021: test    eax, eax
0x663023: jnz     short loc_663033
0x663025: test    esi, esi
0x663027: jz      short loc_663033
0x663029: mov     eax, [esi]
0x66302B: mov     edx, [eax]
0x66302D: push    1
0x66302F: mov     ecx, esi
0x663031: call    edx
0x663033: push    1; int
0x663035: push    ebp
0x663036: call    GetFormModelPAth
0x66303B: mov     ecx, ds:0B33A1Ch
0x663041: add     esp, 4
0x663044: push    eax; char *
0x663045: call    sub_435830
0x66304A: mov     ecx, ds:0B33A1Ch
0x663050: push    0
0x663052: push    edi
0x663053: mov     esi, eax
0x663055: push    ebx
0x663056: push    esi
0x663057: call    sub_43BDA0
0x66305C: push    esi
0x66305D: call    FormHeapFree
0x663062: add     esp, 4
0x663065: pop     edi
0x663066: pop     esi
0x663067: pop     ebp
0x663068: pop     ebx
0x663069: retn    8
