0x55C6E0: push    0FFFFFFFFh
0x55C6E2: push    offset SEH_55C6E0
0x55C6E7: mov     eax, large fs:0
0x55C6ED: push    eax
0x55C6EE: sub     esp, 10h
0x55C6F1: push    ebx
0x55C6F2: push    ebp
0x55C6F3: push    esi
0x55C6F4: push    edi
0x55C6F5: mov     eax, ds:0B30AACh
0x55C6FA: xor     eax, esp
0x55C6FC: push    eax
0x55C6FD: lea     eax, [esp+30h+var_C]
0x55C701: mov     large fs:0, eax
0x55C707: mov     esi, ecx
0x55C709: mov     [esp+30h+var_1C], esi
0x55C70D: call    sub_721350
0x55C712: mov     edi, [esp+30h+arg_0]
0x55C716: xor     ebx, ebx
0x55C718: cmp     edi, ebx
0x55C71A: mov     [esp+30h+var_4], ebx
0x55C71E: mov     dword ptr [esi], offset ??_7BSFaceGenBaseMorphExtraData@@6B@; const BSFaceGenBaseMorphExtraData::`vftable'
0x55C724: mov     [esp+30h+outVertices.data], ebx
0x55C728: mov     [esp+30h+outVertices.stride], ebx
0x55C72C: mov     [esp+30h+outVertices.unknown08], bl
0x55C730: jz      loc_55C821
0x55C736: mov     ecx, [edi+0B4h]; self
0x55C73C: cmp     ecx, ebx
0x55C73E: jz      loc_55C821
0x55C744: push    1; writeAccess
0x55C746: call    NiGeometryData_LockVertexStream; Returns false immediately for an already-locked stream. Otherwise records bool argument at +0x3D and sets locked byte +0x3C. Additional-data branch: true argument invokes sub_7261D0 at acquisition; false invokes sub_726190 and later sub_7261D0 on unlock. Do not infer operation semantics from old writeAccess label alone.
0x55C74B: test    al, al
0x55C74D: jz      short loc_55C75F
0x55C74F: mov     ecx, [edi+0B4h]; self
0x55C755: lea     eax, [esp+30h+outVertices]
0x55C759: push    eax; outVertices
0x55C75A: call    NiGeometryData_GetLockedVertexStream; Return the locked vertex pointer and stride. Additional geometry may provide an alternate writable stream that does not alias m_pkVertex; otherwise the function returns m_pkVertex with 12-byte stride.
0x55C75F: cmp     [esp+30h+outVertices.data], ebx
0x55C763: jz      loc_55C821
0x55C769: mov     ecx, [edi+0B4h]
0x55C76F: movzx   eax, word ptr [ecx+8]
0x55C773: mov     ebp, [esp+30h+Src]
0x55C777: cmp     ebp, ebx
0x55C779: mov     edi, [esp+30h+arg_8]
0x55C77D: mov     [esi+14h], eax
0x55C780: mov     [esi+10h], eax
0x55C783: jz      short loc_55C78E
0x55C785: cmp     edi, ebx
0x55C787: jz      short loc_55C78E
0x55C789: add     eax, edi
0x55C78B: mov     [esi+10h], eax
0x55C78E: mov     eax, [esi+10h]
0x55C791: xor     ecx, ecx
0x55C793: mov     edx, 0Ch
0x55C798: mul     edx
0x55C79A: seto    cl
0x55C79D: neg     ecx
0x55C79F: or      ecx, eax
0x55C7A1: push    ecx; Size
0x55C7A2: call    FormHeapAlloc
0x55C7A7: add     esp, 4
0x55C7AA: xor     edx, edx
0x55C7AC: cmp     [esi+14h], ebx
0x55C7AF: mov     [esi+0Ch], eax
0x55C7B2: mov     ecx, eax
0x55C7B4: jbe     short loc_55C7EA
0x55C7B6: jmp     short loc_55C7C0
0x55C7C0: mov     eax, [esp+30h+outVertices.stride]
0x55C7C4: imul    eax, edx
0x55C7C7: add     eax, [esp+30h+outVertices.data]
0x55C7CB: add     edx, 1
0x55C7CE: mov     ebp, [eax]
0x55C7D0: mov     [ecx], ebp
0x55C7D2: mov     ebp, [eax+4]
0x55C7D5: mov     [ecx+4], ebp
0x55C7D8: mov     eax, [eax+8]
0x55C7DB: mov     [ecx+8], eax
0x55C7DE: add     ecx, 0Ch
0x55C7E1: cmp     edx, [esi+14h]
0x55C7E4: jb      short loc_55C7C0
0x55C7E6: mov     ebp, [esp+30h+Src]
0x55C7EA: cmp     ebp, ebx
0x55C7EC: jz      short loc_55C810
0x55C7EE: cmp     edi, ebx
0x55C7F0: jz      short loc_55C810
0x55C7F2: mov     eax, [esi+14h]
0x55C7F5: lea     ecx, [edi+edi*2]
0x55C7F8: add     ecx, ecx
0x55C7FA: add     ecx, ecx
0x55C7FC: push    ecx; byteCount
0x55C7FD: lea     edx, [eax+eax*2]
0x55C800: mov     eax, [esi+0Ch]
0x55C803: lea     ecx, [eax+edx*4]
0x55C806: push    ebp; source
0x55C807: push    ecx; destination
0x55C808: call    _memcpy;
0x55C80D: add     esp, 0Ch
0x55C810: mov     edx, [esp+30h+arg_0]
0x55C814: mov     ecx, [edx+0B4h]; self
0x55C81A: call    NiGeometryData_UnlockVertexStream; Corrected audit: if locked, checks additional-data virtual predicate +0x4C; calls sub_7261D0(additional,0) only when saved lock-mode byte +0x3D is ZERO, then clears locked byte +0x3C. Earlier description as committing a write lock was unsupported/opposite to this branch. Exact additional-data operation remains unresolved.
0x55C81F: jmp     short loc_55C82A
0x55C821: mov     [esi+0Ch], ebx
0x55C824: mov     [esi+14h], ebx
0x55C827: mov     [esi+10h], ebx
0x55C82A: mov     eax, esi
0x55C82C: mov     ecx, [esp+30h+var_C]
0x55C830: mov     large fs:0, ecx
0x55C837: pop     ecx
0x55C838: pop     edi
0x55C839: pop     esi
0x55C83A: pop     ebp
0x55C83B: pop     ebx
0x55C83C: add     esp, 1Ch
0x55C83F: retn    0Ch
0x9BCAA0: mov     ecx, [ebp-1Ch]
0x9BCAA3: jmp     NiExtraData_dtor
0x9BCAA8: mov     edx, [esp+Src]
0x9BCAAC: lea     eax, [edx-20h]
0x9BCAAF: mov     ecx, [edx-24h]
0x9BCAB2: xor     ecx, eax
0x9BCAB4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BCAB9: mov     eax, offset stru_AE663C
0x9BCABE: jmp     ___CxxFrameHandler3
