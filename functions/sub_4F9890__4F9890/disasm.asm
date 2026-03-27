0x4F9890: push    ebx
0x4F9891: mov     ebx, ecx
0x4F9893: mov     eax, [ebx+8]
0x4F9896: shr     eax, 3
0x4F9899: test    al, 1
0x4F989B: jnz     short loc_4F98F8
0x4F989D: push    edi
0x4F989E: lea     edi, [ebx+2Ch]
0x4F98A1: test    edi, edi
0x4F98A3: jz      short loc_4F98EE
0x4F98A5: push    esi
0x4F98A6: cmp     dword ptr [edi+4], 0
0x4F98AA: jnz     short loc_4F98B1
0x4F98AC: cmp     dword ptr [edi], 0
0x4F98AF: jz      short loc_4F98ED
0x4F98B1: mov     esi, [edi]
0x4F98B3: cmp     dword ptr [esi], 0
0x4F98B6: jz      short loc_4F98CB
0x4F98B8: push    0FFFFFFFFh; a2
0x4F98BA: mov     ecx, ebx; this
0x4F98BC: call    TESForm_GetOverrideFile
0x4F98C1: push    eax; a2
0x4F98C2: push    esi; a1
0x4F98C3: call    TESForm_ResolveFormID
0x4F98C8: add     esp, 8
0x4F98CB: add     esi, 4
0x4F98CE: cmp     dword ptr [esi], 0
0x4F98D1: jz      short loc_4F98E6
0x4F98D3: push    0FFFFFFFFh; a2
0x4F98D5: mov     ecx, ebx; this
0x4F98D7: call    TESForm_GetOverrideFile
0x4F98DC: push    eax; a2
0x4F98DD: push    esi; a1
0x4F98DE: call    TESForm_ResolveFormID
0x4F98E3: add     esp, 8
0x4F98E6: mov     edi, [edi+4]
0x4F98E9: test    edi, edi
0x4F98EB: jnz     short loc_4F98A6
0x4F98ED: pop     esi
0x4F98EE: push    1; a2
0x4F98F0: mov     ecx, ebx; this
0x4F98F2: call    TESForm_SetIsLinked
0x4F98F7: pop     edi
0x4F98F8: pop     ebx
0x4F98F9: retn
