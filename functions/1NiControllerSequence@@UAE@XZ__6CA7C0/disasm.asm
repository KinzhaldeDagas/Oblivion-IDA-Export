0x6CA7C0: push    0FFFFFFFFh
0x6CA7C2: push    offset ??1NiControllerSequence@@UAE@XZ_SEH
0x6CA7C7: mov     eax, large fs:0
0x6CA7CD: push    eax
0x6CA7CE: push    ecx
0x6CA7CF: push    ebx
0x6CA7D0: push    esi
0x6CA7D1: push    edi
0x6CA7D2: mov     eax, ds:0B30AACh
0x6CA7D7: xor     eax, esp
0x6CA7D9: push    eax
0x6CA7DA: lea     eax, [esp+20h+var_C]
0x6CA7DE: mov     large fs:0, eax
0x6CA7E4: mov     esi, ecx
0x6CA7E6: mov     [esp+20h+var_10], esi
0x6CA7EA: mov     dword ptr [esi], offset ??_7NiControllerSequence@@6B@; const NiControllerSequence::`vftable'
0x6CA7F0: cmp     dword ptr [esi+44h], 0
0x6CA7F4: mov     [esp+20h+var_4], 2
0x6CA7FC: jz      short loc_6CA80B
0x6CA7FE: fldz
0x6CA800: push    0; char
0x6CA802: push    ecx
0x6CA803: fstp    [esp+28h+var_28]; float
0x6CA806: call    sub_6C9CB0
0x6CA80B: mov     eax, [esi+8]
0x6CA80E: push    eax
0x6CA80F: call    FormHeapFree
0x6CA814: mov     eax, [esi+14h]
0x6CA817: add     esp, 4
0x6CA81A: test    eax, eax
0x6CA81C: jz      short loc_6CA83B
0x6CA81E: mov     ecx, [eax-4]
0x6CA821: lea     edi, [eax-4]
0x6CA824: push    offset sub_6C64C0; void (__thiscall *)(void *)
0x6CA829: push    ecx; int
0x6CA82A: push    10h; unsigned int
0x6CA82C: push    eax; void *
0x6CA82D: call    $LN21
0x6CA832: push    edi
0x6CA833: call    FormHeapFree
0x6CA838: add     esp, 4
0x6CA83B: mov     eax, [esi+18h]
0x6CA83E: test    eax, eax
0x6CA840: jz      short loc_6CA85F
0x6CA842: mov     edx, [eax-4]
0x6CA845: lea     edi, [eax-4]
0x6CA848: push    offset sub_7016A0; void (__thiscall *)(void *)
0x6CA84D: push    edx; int
0x6CA84E: push    10h; unsigned int
0x6CA850: push    eax; void *
0x6CA851: call    $LN21
0x6CA856: push    edi
0x6CA857: call    FormHeapFree
0x6CA85C: add     esp, 4
0x6CA85F: mov     eax, [esi+5Ch]
0x6CA862: push    eax
0x6CA863: call    FormHeapFree
0x6CA868: mov     edi, [esi+64h]
0x6CA86B: mov     ebx, ds:0A2807Ch
0x6CA871: add     esp, 4
0x6CA874: test    edi, edi
0x6CA876: mov     byte ptr [esp+20h+var_4], 1
0x6CA87B: jz      short loc_6CA895
0x6CA87D: lea     eax, [edi+4]
0x6CA880: push    eax; lpAddend
0x6CA881: call    ebx ; InterlockedDecrement
0x6CA883: test    eax, eax
0x6CA885: jnz     short loc_6CA895
0x6CA887: test    edi, edi
0x6CA889: jz      short loc_6CA895
0x6CA88B: mov     edx, [edi]
0x6CA88D: mov     eax, [edx]
0x6CA88F: push    1
0x6CA891: mov     ecx, edi
0x6CA893: call    eax
0x6CA895: mov     edi, [esi+20h]
0x6CA898: test    edi, edi
0x6CA89A: mov     byte ptr [esp+20h+var_4], 0
0x6CA89F: jz      short loc_6CA8B9
0x6CA8A1: lea     ecx, [edi+4]
0x6CA8A4: push    ecx; lpAddend
0x6CA8A5: call    ebx ; InterlockedDecrement
0x6CA8A7: test    eax, eax
0x6CA8A9: jnz     short loc_6CA8B9
0x6CA8AB: test    edi, edi
0x6CA8AD: jz      short loc_6CA8B9
0x6CA8AF: mov     edx, [edi]
0x6CA8B1: mov     eax, [edx]
0x6CA8B3: push    1
0x6CA8B5: mov     ecx, edi
0x6CA8B7: call    eax
0x6CA8B9: mov     ecx, esi
0x6CA8BB: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6CA8C3: call    NiRefObject_destr
0x6CA8C8: mov     ecx, [esp+20h+var_C]
0x6CA8CC: mov     large fs:0, ecx
0x6CA8D3: pop     ecx
0x6CA8D4: pop     edi
0x6CA8D5: pop     esi
0x6CA8D6: pop     ebx
0x6CA8D7: add     esp, 10h
0x6CA8DA: retn
