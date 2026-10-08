0x552C10: push    0FFFFFFFFh; Computes the NPC-persisted delta = adjusted absolute parameters - race base for each active matrix. Prettier Faces 1.19.7 audit: curation must score actual post-projection race-relative coefficients. Applying soft compression again only to score/history (without applying it to output) understates real tails/spikes. Candidate capture limits once; scoring now measures the resulting coefficients directly.
0x552C12: push    offset SEH_552C10
0x552C17: mov     eax, large fs:0
0x552C1D: push    eax
0x552C1E: sub     esp, 20h
0x552C21: push    ebx
0x552C22: push    ebp
0x552C23: push    esi
0x552C24: push    edi
0x552C25: mov     eax, ds:0B30AACh
0x552C2A: xor     eax, esp
0x552C2C: push    eax
0x552C2D: lea     eax, [esp+40h+var_C]
0x552C31: mov     large fs:0, eax
0x552C37: mov     edi, [esp+40h+raceParameters]
0x552C3B: test    edi, edi
0x552C3D: jz      loc_552D20
0x552C43: mov     ebp, [esp+40h+absoluteParameters]
0x552C47: test    ebp, ebp
0x552C49: jz      loc_552D20
0x552C4F: mov     eax, [esp+40h+outDelta]
0x552C53: test    eax, eax
0x552C55: jz      loc_552D20
0x552C5B: mov     ebx, edi
0x552C5D: sub     ebx, eax
0x552C5F: mov     [esp+40h+var_28], ebx
0x552C63: sub     ebp, edi
0x552C65: lea     esi, [eax+4]
0x552C68: mov     [esp+40h+var_2C], 2
0x552C70: mov     [esp+40h+raceParameters], 2
0x552C78: mov     eax, [edi]
0x552C7A: fldz
0x552C7C: test    eax, eax
0x552C7E: jz      short loc_552CE9
0x552C80: mov     ecx, [ebx+esi]
0x552C83: test    ecx, ecx
0x552C85: jz      short loc_552CE9
0x552C87: lea     ebx, [esi-4]
0x552C8A: mov     [ebx], eax
0x552C8C: imul    eax, ecx
0x552C8F: push    ecx
0x552C90: mov     [esi], ecx
0x552C92: lea     ecx, [esi+4]; int
0x552C95: fstp    [esp+44h+var_44]; int
0x552C98: push    eax; int
0x552C99: call    FaceGenFloatVector_ResizeFill; Vector resize: retain existing prefix, erase surplus elements when shrinking, fill only newly inserted elements when growing. Equal size does not overwrite coefficients. Matrix dimension products must already be valid; no recovery from rows*columns overflow.
0x552C9E: push    edi; right
0x552C9F: lea     eax, [esp+44h+outDifference]
0x552CA3: push    eax; outDifference
0x552CA4: lea     ecx, [edi+ebp]; this
0x552CA7: call    FaceGenMatrix_Subtract; Subtracts the race matrix from the adjusted randomized absolute matrix. This delta space is what TESNPC persists.
0x552CAC: push    eax; source
0x552CAD: mov     ecx, ebx; this
0x552CAF: mov     [esp+44h+var_4], 0
0x552CB7: call    FaceGenMatrix_Assign; Assigns the temporary matrix difference into the corresponding output delta slot.
0x552CBC: mov     eax, [esp+40h+outDifference.begin]
0x552CC0: xor     ebx, ebx
0x552CC2: cmp     eax, ebx
0x552CC4: mov     [esp+40h+var_4], 0FFFFFFFFh
0x552CCC: jz      short loc_552CD7
0x552CCE: push    eax
0x552CCF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x552CD4: add     esp, 4
0x552CD7: mov     [esp+40h+outDifference.begin], ebx
0x552CDB: mov     [esp+40h+outDifference.end], ebx
0x552CDF: mov     [esp+40h+outDifference.capacityEnd], ebx
0x552CE3: mov     ebx, [esp+40h+var_28]
0x552CE7: jmp     short loc_552D04
0x552CE9: push    ecx
0x552CEA: fstp    [esp+44h+var_44]; int
0x552CED: push    0; int
0x552CEF: lea     ecx, [esi+4]; int
0x552CF2: mov     dword ptr [esi-4], 0
0x552CF9: mov     dword ptr [esi], 0
0x552CFF: call    FaceGenFloatVector_ResizeFill; Vector resize: retain existing prefix, erase surplus elements when shrinking, fill only newly inserted elements when growing. Equal size does not overwrite coefficients. Matrix dimension products must already be valid; no recovery from rows*columns overflow.
0x552D04: add     edi, 18h
0x552D07: add     esi, 18h
0x552D0A: sub     [esp+40h+raceParameters], 1
0x552D0F: jnz     loc_552C78
0x552D15: sub     [esp+40h+var_2C], 1
0x552D1A: jnz     loc_552C70
0x552D20: mov     ecx, [esp+40h+var_C]
0x552D24: mov     large fs:0, ecx
0x552D2B: pop     ecx
0x552D2C: pop     edi
0x552D2D: pop     esi
0x552D2E: pop     ebp
0x552D2F: pop     ebx
0x552D30: add     esp, 2Ch
0x552D33: retn
0x9BBD90: lea     ecx, [ebp-24h]; this
0x9BBD93: jmp     FaceGenMatrix_Destruct; Destroys a FaceGenMatrix by freeing the coefficient allocation at +0x0C, then clears begin/end/capacity-end.
0x9BBD98: mov     edx, [esp+absoluteParameters]
0x9BBD9C: lea     eax, [edx-30h]
0x9BBD9F: mov     ecx, [edx-34h]
0x9BBDA2: xor     ecx, eax
0x9BBDA4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BBDA9: mov     eax, offset stru_AE5A94
0x9BBDAE: jmp     ___CxxFrameHandler3
