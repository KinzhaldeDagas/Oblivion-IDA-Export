0x7C17D0: push    0FFFFFFFFh; Generic refcounted NiT pointer-list RemovePosition helper handling head, tail and middle nodes while returning a strong payload reference and preserving list links/count.
0x7C17D2: push    offset SEH_7C17D0
0x7C17D7: mov     eax, large fs:0
0x7C17DD: push    eax
0x7C17DE: push    ecx
0x7C17DF: push    ebp
0x7C17E0: push    esi
0x7C17E1: push    edi
0x7C17E2: mov     eax, ds:0B30AACh
0x7C17E7: xor     eax, esp
0x7C17E9: push    eax
0x7C17EA: lea     eax, [esp+20h+var_C]
0x7C17EE: mov     large fs:0, eax
0x7C17F4: mov     esi, ecx
0x7C17F6: mov     [esp+20h+var_10], 0
0x7C17FE: mov     ecx, [esp+20h+position]
0x7C1802: mov     ebp, [ecx]
0x7C1804: cmp     ebp, [esi+4]
0x7C1807: jnz     short loc_7C1831
0x7C1809: mov     eax, [ebp+0]
0x7C180C: mov     edi, [esp+20h+result]
0x7C1810: mov     [ecx], eax
0x7C1812: push    edi; result
0x7C1813: mov     ecx, esi; self
0x7C1815: call    NiTRefPointerList__RemoveHead; MEF v57 VERIFY 2026-10-08: VERIFIED native composite removal: RemovePosition has already written caller position=node.next at7C1810 before invoking RemoveHead. Both entrypoints are wrapped by v57. The isolated nested_light_removal_fixture executes that same wrapper composition and confirms outer serial mismatch discards the otherwise updated cache. Direct position->head plus a lookup after each removal:128 initial nodes/64 removals =>65 builds vs1 for middle removals. Native unlink/ref work is mocked; no game timing claim.
0x7C181A: mov     eax, edi
0x7C181C: mov     ecx, [esp+20h+var_C]
0x7C1820: mov     large fs:0, ecx
0x7C1827: pop     ecx
0x7C1828: pop     edi
0x7C1829: pop     esi
0x7C182A: pop     ebp
0x7C182B: add     esp, 10h
0x7C182E: retn    8
0x7C1831: cmp     ebp, [esi+8]
0x7C1834: jnz     short loc_7C185F
0x7C1836: mov     edi, [esp+20h+result]
0x7C183A: mov     dword ptr [ecx], 0; MEF v57 VERIFY 2026-10-08: V57-LIST-1 corrective plan: make RemovePosition->Head/Tail observation composition-aware without weakening guards for pressure, unrelated reentry or exceptions. See analysis/2026-10-08-implemented-perf-verification/PATCH_PLAN.md. Current production unchanged.
0x7C1840: push    edi; result
0x7C1841: mov     ecx, esi; self
0x7C1843: call    NiTRefPointerList__RemoveTail; MEF v57 VERIFY 2026-10-08: VERIFIED native composite removal: RemovePosition sets caller position=NULL at7C183A then invokes RemoveTail. v57's outer and inner V57BeginListEdit increment the same cache serial; outer V57EndListEdit rejects the inner serial and drops readiness. Isolated actual-wrapper reproduction:64 tail removals from128 nodes with intervening lookup =>64 invalidations/65 builds/6240 derived build-node visits; middle=0/1/128. Return refs and links pass. Hot reverse-removal gameplay trigger remains UNKNOWN; forward orphan/stale cleanup only delegates tail on its final node.
0x7C1848: mov     eax, edi
0x7C184A: mov     ecx, [esp+20h+var_C]
0x7C184E: mov     large fs:0, ecx
0x7C1855: pop     ecx
0x7C1856: pop     edi
0x7C1857: pop     esi
0x7C1858: pop     ebp
0x7C1859: add     esp, 10h
0x7C185C: retn    8
0x7C185F: mov     edx, [ebp+4]
0x7C1862: test    edx, edx
0x7C1864: mov     eax, [ebp+0]
0x7C1867: mov     [ecx], eax
0x7C1869: jz      short loc_7C186D
0x7C186B: mov     [edx], eax
0x7C186D: test    eax, eax
0x7C186F: jz      short loc_7C1874
0x7C1871: mov     [eax+4], edx
0x7C1874: mov     edi, [ebp+8]
0x7C1877: test    edi, edi
0x7C1879: mov     [esp+20h+position], edi
0x7C187D: jz      short loc_7C1889
0x7C187F: lea     ecx, [edi+4]
0x7C1882: push    ecx; lpAddend
0x7C1883: call    dword ptr ds:0A28078h
0x7C1889: mov     edx, [esi]
0x7C188B: mov     eax, [edx+8]
0x7C188E: push    ebp
0x7C188F: mov     ecx, esi
0x7C1891: mov     [esp+24h+var_4], 1
0x7C1899: call    eax
0x7C189B: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x7C189F: test    edi, edi
0x7C18A1: mov     esi, [esp+20h+result]
0x7C18A5: mov     [esi], edi
0x7C18A7: jz      short loc_7C18B3
0x7C18A9: lea     ecx, [edi+4]
0x7C18AC: push    ecx; lpAddend
0x7C18AD: call    dword ptr ds:0A28078h
0x7C18B3: test    edi, edi
0x7C18B5: mov     [esp+20h+var_10], 1
0x7C18BD: mov     byte ptr [esp+20h+var_4], 0
0x7C18C2: jz      short loc_7C18DC
0x7C18C4: lea     edx, [edi+4]
0x7C18C7: push    edx; lpAddend
0x7C18C8: call    dword ptr ds:0A2807Ch
0x7C18CE: test    eax, eax
0x7C18D0: jnz     short loc_7C18DC
0x7C18D2: mov     eax, [edi]
0x7C18D4: mov     edx, [eax]
0x7C18D6: push    1
0x7C18D8: mov     ecx, edi
0x7C18DA: call    edx
0x7C18DC: mov     eax, esi
0x7C18DE: mov     ecx, [esp+20h+var_C]
0x7C18E2: mov     large fs:0, ecx
0x7C18E9: pop     ecx
0x7C18EA: pop     edi
0x7C18EB: pop     esi
0x7C18EC: pop     ebp
0x7C18ED: add     esp, 10h
0x7C18F0: retn    8
0x9CE1A0: mov     eax, [ebp-10h]
0x9CE1A3: and     eax, 1
0x9CE1A6: jz      locret_9CE1B8
0x9CE1AC: and     dword ptr [ebp-10h], 0FFFFFFFEh
0x9CE1B0: mov     ecx, [ebp+4]; slot
0x9CE1B3: jmp     NiPointerSlot_Release
0x9CE1B8: retn
0x9CE1B9: lea     ecx, [ebp+8]; slot
0x9CE1BC: jmp     NiPointerSlot_Release
0x9CE1C1: mov     edx, [esp+arg_4]
0x9CE1C5: lea     eax, [edx-10h]
0x9CE1C8: mov     ecx, [edx-14h]
0x9CE1CB: xor     ecx, eax
0x9CE1CD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CE1D2: mov     eax, offset stru_AF71EC
0x9CE1D7: jmp     ___CxxFrameHandler3
