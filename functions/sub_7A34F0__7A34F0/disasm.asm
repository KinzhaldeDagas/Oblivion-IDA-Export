0x7A34F0: push    0FFFFFFFFh; Oblivion binary evidence: deep-copies the incoming 28-byte st_string through a temporary, assigns it to CTreeEngine +0x24, then destroys the temporary. Parse calls it with the parsed branch-texture filename. After that observation, SpeedTreeRT 4.1 TreeEngine.h SetBranchTexture(const st_string&) and TreeEngine.cpp Parse corroborate the identity; this is distinct from the public const char* filename setter.
0x7A34F2: push    offset SEH_7A34F0
0x7A34F7: mov     eax, large fs:0
0x7A34FD: push    eax
0x7A34FE: sub     esp, 1Ch
0x7A3501: push    esi
0x7A3502: mov     eax, ds:0B30AACh
0x7A3507: xor     eax, esp
0x7A3509: push    eax
0x7A350A: lea     eax, [esp+30h+var_C]
0x7A350E: mov     large fs:0, eax
0x7A3514: mov     esi, ecx
0x7A3516: mov     eax, [esp+30h+filename]
0x7A351A: push    0FFFFFFFFh; count
0x7A351C: push    0; offset
0x7A351E: push    eax; source
0x7A351F: lea     ecx, [esp+3Ch+source]; this
0x7A3523: mov     [esp+3Ch+source.capacity], 0Fh
0x7A352B: mov     [esp+3Ch+source.size], 0
0x7A3533: mov     byte ptr [esp+3Ch+source.storage], 0
0x7A3538: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x7A353D: push    0FFFFFFFFh; count
0x7A353F: push    0; offset
0x7A3541: lea     ecx, [esp+38h+source]
0x7A3545: push    ecx; source
0x7A3546: lea     ecx, [esi+24h]; this
0x7A3549: mov     [esp+3Ch+var_4], 0
0x7A3551: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x7A3556: cmp     [esp+30h+source.capacity], 10h
0x7A355B: jb      short loc_7A356A
0x7A355D: mov     edx, dword ptr [esp+30h+source.storage]
0x7A3561: push    edx
0x7A3562: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A3567: add     esp, 4
0x7A356A: mov     ecx, [esp+30h+var_C]
0x7A356E: mov     large fs:0, ecx
0x7A3575: pop     ecx
0x7A3576: pop     esi
0x7A3577: add     esp, 28h
0x7A357A: retn    4
0x9CC890: lea     ecx, [ebp-28h]; this
0x9CC893: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CC898: mov     edx, [esp+arg_4]
0x9CC89C: lea     eax, [edx-20h]
0x9CC89F: mov     ecx, [edx-24h]
0x9CC8A2: xor     ecx, eax
0x9CC8A4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CC8A9: mov     eax, offset stru_AF5C2C
0x9CC8AE: jmp     ___CxxFrameHandler3
