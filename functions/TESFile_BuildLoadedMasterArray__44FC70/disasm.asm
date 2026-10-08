0x44FC70: push    ecx; MEF v56 indexed master resolver: zero-initialized output, checked allocation, first-wins candidate index for >=8 masters in default CRT locale. Other locales/long names/aux OOM use original comparator search. Locale rechecked after indexed lookup; diagnostics invalidate snapshot. Missing/null or inconsistent lists returnfalse safely. Supersedes44FCBF interior hook while retaining its signature.
0x44FC71: push    ebp
0x44FC72: push    esi
0x44FC73: mov     esi, ecx
0x44FC75: mov     eax, [esi+3F4h]
0x44FC7B: test    eax, eax
0x44FC7D: push    edi
0x44FC7E: mov     edi, [esi+3F0h]
0x44FC84: lea     ebp, [esi+3E0h]
0x44FC8A: jz      short loc_44FC95
0x44FC8C: push    eax
0x44FC8D: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x44FC92: add     esp, 4
0x44FC95: test    edi, edi
0x44FC97: mov     dword ptr [esi+3F4h], 0
0x44FCA1: jnz     short loc_44FCAC
0x44FCA3: pop     edi
0x44FCA4: pop     esi
0x44FCA5: mov     al, 1
0x44FCA7: pop     ebp
0x44FCA8: pop     ecx
0x44FCA9: retn    8
0x44FCAC: xor     ecx, ecx
0x44FCAE: mov     eax, edi
0x44FCB0: mov     edx, 4
0x44FCB5: mul     edx
0x44FCB7: seto    cl
0x44FCBA: neg     ecx
0x44FCBC: or      ecx, eax
0x44FCBE: push    ecx; Size
0x44FCBF: call    FormHeapAlloc; MEF v51 bridge-stack audit confirms v45 guard: replacement CALL entry has injected return at [ESP] and pending size at [ESP+4]. Failure removes both, restores EDI/ESI/EBP and the saved ECX/local slot, returns false with retn 8.
0x44FCC4: add     esp, 4
0x44FCC7: test    ebp, ebp
0x44FCC9: mov     [esi+3F4h], eax
0x44FCCF: mov     [esp+10h+var_1], 1
0x44FCD4: jz      short loc_44FD4C
0x44FCD6: push    ebx
0x44FCD7: mov     ebx, eax; Oblivion masterFiles array is allocated for masterCount entries and populated one slot per MAST list occurrence. The loaded-file search restarts for every slot.
0x44FCD9: lea     esp, [esp+0]
0x44FCE0: cmp     dword ptr [ebp+0], 0
0x44FCE4: jz      short loc_44FD4B
0x44FCE6: mov     edi, [esp+14h+arg_0]; MEF PERF 2026-09-08: PERF-5 repeated inner lookup reloads EDI from the same candidate-list argument for each master. Full-function indexed replacement must preserve first matching TESFile pointer in list order, locale-aware equality, master order, missing-master diagnostics/AL result and thiscall RET8.
0x44FCEA: test    edi, edi
0x44FCEC: jz      short loc_44FD41
0x44FCEE: mov     edi, edi
0x44FCF0: mov     esi, [edi]
0x44FCF2: test    esi, esi
0x44FCF4: jz      short loc_44FD41; MEF PERF 2026-09-08: PERF-5 correctness prerequisite: null initial candidate/list data branches to next master before initializing its result slot; ordinary end-of-search path44FD1B instead writesNULL and clears success. Performance replacement must define missing-master behavior safely; do not preserve uninitialized-pointer publication as an optimization contract.
0x44FCF6: mov     eax, [ebp+0]
0x44FCF9: lea     ecx, [esi+1Ch]
0x44FCFC: push    ecx; right
0x44FCFD: push    eax; left
0x44FCFE: call    CRT_StricmpLocaleDispatch
0x44FD03: add     esp, 8
0x44FD06: test    eax, eax
0x44FD08: jz      short loc_44FD3F; Each ordered MAST slot restarts a case-insensitive loaded-file scan; comparison uses the MAST list pointer as a C string and the first matching TESFile is stored at 0x44FD3F. Duplicate MAST entries remain distinct pointer slots. The MAST reader at 0x451C00 uses an exact-length allocation and maxSize=0 read without adding NUL, so unterminated names may overread.
0x44FD0A: mov     edi, [edi+4]
0x44FD0D: test    edi, edi
0x44FD0F: jz      short loc_44FD16
0x44FD11: cmp     dword ptr [edi], 0
0x44FD14: jnz     short loc_44FD39
0x44FD16: cmp     [esp+14h+arg_4], 0
0x44FD1B: mov     dword ptr [ebx], 0
0x44FD21: jz      short loc_44FD34
0x44FD23: mov     edx, [ebp+0]
0x44FD26: push    edx; ArgList
0x44FD27: push    offset aMissingMasterf; "Missing Masterfile: %s"
0x44FD2C: call    PrintError
0x44FD31: add     esp, 8
0x44FD34: mov     [esp+14h+var_1], 0
0x44FD39: test    edi, edi
0x44FD3B: jnz     short loc_44FCF0
0x44FD3D: jmp     short loc_44FD41
0x44FD3F: mov     [ebx], esi; Stores the resolved first-match TESFile pointer into this MAST slot, then advances the pointer slot while iterating the original MAST list. Duplicate list entries are preserved, not collapsed.
0x44FD41: mov     ebp, [ebp+4]
0x44FD44: add     ebx, 4
0x44FD47: test    ebp, ebp
0x44FD49: jnz     short loc_44FCE0
0x44FD4B: pop     ebx
0x44FD4C: mov     al, [esp+10h+var_1]
0x44FD50: pop     edi
0x44FD51: pop     esi
0x44FD52: pop     ebp
0x44FD53: pop     ecx
0x44FD54: retn    8
