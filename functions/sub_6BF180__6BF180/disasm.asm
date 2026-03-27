0x6BF180: push    0FFFFFFFFh
0x6BF182: push    offset SEH_6CED50
0x6BF187: mov     eax, large fs:0
0x6BF18D: push    eax
0x6BF18E: sub     esp, 8
0x6BF191: push    ebx
0x6BF192: push    ebp
0x6BF193: push    esi
0x6BF194: push    edi
0x6BF195: mov     eax, ds:0B30AACh
0x6BF19A: xor     eax, esp
0x6BF19C: push    eax
0x6BF19D: lea     eax, [esp+28h+var_C]
0x6BF1A1: mov     large fs:0, eax
0x6BF1A7: mov     edi, [esp+28h+arg_8]
0x6BF1AB: fld     [esp+28h+arg_0]
0x6BF1AF: mov     eax, [esp+28h+arg_4]
0x6BF1B3: mov     edx, [edi]
0x6BF1B5: mov     ebp, [eax]
0x6BF1B7: push    8; char
0x6BF1B9: lea     ecx, [esp+2Ch+var_14]
0x6BF1BD: push    ecx; int
0x6BF1BE: push    edx; int
0x6BF1BF: push    ebp; int
0x6BF1C0: push    ecx
0x6BF1C1: fstp    [esp+3Ch+var_3C]; float
0x6BF1C4: call    sub_6D31B0
0x6BF1C9: add     esp, 14h
0x6BF1CC: test    al, al
0x6BF1CE: jz      loc_6BF2E1
0x6BF1D4: mov     esi, [edi]
0x6BF1D6: add     esi, 1
0x6BF1D9: xor     ecx, ecx
0x6BF1DB: mov     eax, esi
0x6BF1DD: mov     edx, 8
0x6BF1E2: mul     edx
0x6BF1E4: seto    cl
0x6BF1E7: neg     ecx
0x6BF1E9: or      ecx, eax
0x6BF1EB: xor     eax, eax
0x6BF1ED: add     ecx, 4
0x6BF1F0: setb    al
0x6BF1F3: neg     eax
0x6BF1F5: or      eax, ecx
0x6BF1F7: push    eax; Size
0x6BF1F8: call    FormHeapAlloc
0x6BF1FD: add     esp, 4
0x6BF200: mov     [esp+28h+var_10], eax
0x6BF204: test    eax, eax
0x6BF206: mov     [esp+28h+var_4], 0
0x6BF20E: jz      short loc_6BF22C
0x6BF210: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6BF215: push    offset sub_7616D0; a4
0x6BF21A: push    esi; size
0x6BF21B: lea     ebx, [eax+4]
0x6BF21E: push    8; a2
0x6BF220: push    ebx; a1
0x6BF221: mov     [eax], esi
0x6BF223: call    ArrayConstructor
0x6BF228: mov     esi, ebx
0x6BF22A: jmp     short loc_6BF22E
0x6BF22C: xor     esi, esi
0x6BF22E: mov     ecx, [esp+28h+var_14]
0x6BF232: lea     edx, ds:0[ecx*8]
0x6BF239: push    edx; Size
0x6BF23A: push    ebp; Src
0x6BF23B: push    esi; Dst
0x6BF23C: mov     [esp+34h+var_4], 0FFFFFFFFh
0x6BF244: call    _memcpy
0x6BF249: mov     eax, [edi]
0x6BF24B: mov     ecx, [esp+34h+var_14]
0x6BF24F: add     esp, 0Ch
0x6BF252: cmp     eax, ecx
0x6BF254: jbe     short loc_6BF271
0x6BF256: sub     eax, ecx
0x6BF258: add     eax, eax
0x6BF25A: add     eax, eax
0x6BF25C: add     eax, eax
0x6BF25E: push    eax; Size
0x6BF25F: lea     eax, [ebp+ecx*8+0]
0x6BF263: push    eax; Src
0x6BF264: lea     ecx, [esi+ecx*8+8]
0x6BF268: push    ecx; Dst
0x6BF269: call    _memcpy
0x6BF26E: add     esp, 0Ch
0x6BF271: mov     edx, [edi]
0x6BF273: fld     [esp+28h+arg_0]
0x6BF277: push    8; char
0x6BF279: push    edx; int
0x6BF27A: push    1; int
0x6BF27C: push    ebp; int
0x6BF27D: push    ecx
0x6BF27E: fstp    [esp+3Ch+var_3C]; float
0x6BF281: call    sub_6BB4D0
0x6BF286: mov     eax, [esp+3Ch+var_14]
0x6BF28A: fstp    [esp+3Ch+var_10]
0x6BF28E: fld     [esp+3Ch+arg_0]
0x6BF292: lea     eax, [esi+eax*8]
0x6BF295: fstp    dword ptr [eax]
0x6BF297: add     esp, 14h
0x6BF29A: fld     [esp+28h+var_10]
0x6BF29E: fstp    dword ptr [eax+4]
0x6BF2A1: add     dword ptr [edi], 1
0x6BF2A4: test    ebp, ebp
0x6BF2A6: jz      short loc_6BF2C5
0x6BF2A8: mov     ecx, [ebp-4]
0x6BF2AB: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; void (__thiscall *)(void *)
0x6BF2B0: lea     edi, [ebp-4]
0x6BF2B3: push    ecx; int
0x6BF2B4: push    8; unsigned int
0x6BF2B6: push    ebp; void *
0x6BF2B7: call    $LN21
0x6BF2BC: push    edi
0x6BF2BD: call    FormHeapFree
0x6BF2C2: add     esp, 4
0x6BF2C5: mov     edx, [esp+28h+arg_4]
0x6BF2C9: mov     [edx], esi
0x6BF2CB: mov     al, 1
0x6BF2CD: mov     ecx, [esp+28h+var_C]
0x6BF2D1: mov     large fs:0, ecx
0x6BF2D8: pop     ecx
0x6BF2D9: pop     edi
0x6BF2DA: pop     esi
0x6BF2DB: pop     ebp
0x6BF2DC: pop     ebx
0x6BF2DD: add     esp, 14h
0x6BF2E0: retn
0x6BF2E1: xor     al, al
0x6BF2E3: mov     ecx, [esp+28h+var_C]
0x6BF2E7: mov     large fs:0, ecx
0x6BF2EE: pop     ecx
0x6BF2EF: pop     edi
0x6BF2F0: pop     esi
0x6BF2F1: pop     ebp
0x6BF2F2: pop     ebx
0x6BF2F3: add     esp, 14h
0x6BF2F6: retn
