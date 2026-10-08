0x78B0C0: mov     ecx, [ecx]; CSpeedTreeRT::DeleteTransientData tiny thunk. If CTreeEngine+0x21 says transient data is intact, tail-jumps to CTreeEngine::FreeTransientData 0x7A2620; otherwise reports stock no-transient-data error.
0x78B0C2: cmp     byte ptr [ecx+21h], 0
0x78B0C6: jz      short loc_78B0CD
0x78B0C8: jmp     OB_CTreeEngine_FreeTransientData_010201A0; CTreeEngine::FreeTransientData. Releases compact trunk branch, leaf LOD vectors, branch-info arrays, and related transient generator state, then clears CTreeEngine+0x21.
0x78B0CD: push    3Ah ; ':'; count
0x78B0CF: push    offset aDeletetransien; "DeleteTransientData() called with no in"...
0x78B0D4: mov     ecx, offset OB_g_strError_010201A0; this
0x78B0D9: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x78B0DE: retn
