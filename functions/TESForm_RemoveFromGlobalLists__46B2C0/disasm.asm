0x46B2C0: push    esi
0x46B2C1: mov     esi, ecx
0x46B2C3: mov     eax, [esi+8]
0x46B2C6: shr     eax, 0Eh
0x46B2C9: test    al, 1
0x46B2CB: jnz     short loc_46B33D
0x46B2CD: mov     ecx, [esi+0Ch]
0x46B2D0: push    ecx
0x46B2D1: mov     ecx, offset TESForm_FormIDMap
0x46B2D6: call    NiTMap_RemoveAt
0x46B2DB: mov     edx, ds:0B06158h
0x46B2E1: xor     eax, eax
0x46B2E3: test    edx, edx
0x46B2E5: jbe     short loc_46B32A
0x46B2E7: mov     ecx, ds:0B06150h
0x46B2ED: lea     ecx, [ecx+0]
0x46B2F0: cmp     [ecx+eax*4], esi
0x46B2F3: jz      short loc_46B2FE
0x46B2F5: add     eax, 1
0x46B2F8: cmp     eax, edx
0x46B2FA: jb      short TESForm_RemoveFromGlobalLists___ActiveFileFormLoop
0x46B2FC: jmp     short loc_46B32A
0x46B2FE: cmp     eax, edx
0x46B300: jnb     short loc_46B32A
0x46B302: mov     edx, [ecx+eax*4]
0x46B305: test    edx, edx
0x46B307: mov     dword ptr [ecx+eax*4], 0
0x46B30E: jz      short loc_46B317
0x46B310: sub     dword ptr ds:0B0615Ch, 1
0x46B317: mov     ecx, ds:0B06158h
0x46B31D: add     ecx, 0FFFFFFFFh
0x46B320: cmp     eax, ecx
0x46B322: jnz     short loc_46B32A
0x46B324: mov     ds:0B06158h, ecx
0x46B32A: mov     ecx, ds:0B33A98h
0x46B330: test    ecx, ecx
0x46B332: jz      short loc_46B33D
0x46B334: mov     edx, [esi+0Ch]
0x46B337: push    edx
0x46B338: call    TESDataHandler_ReleaseFormID
0x46B33D: pop     esi
0x46B33E: retn
