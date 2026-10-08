0x462080: push    0FFFFFFFFh; MEF v56 reset wrapper invalidates indices before/after native reset, including same-pointer/same-capacity contents changes. Header readback alone is insufficient. Generic array setter/resize entries are also intercepted; no cache mutex held across native reset callbacks.
0x462082: push    offset SEH_5F94B0
0x462087: mov     eax, large fs:0
0x46208D: push    eax
0x46208E: push    ecx
0x46208F: push    ebx
0x462090: push    esi
0x462091: push    edi
0x462092: mov     eax, ds:0B30AACh
0x462097: xor     eax, esp
0x462099: push    eax
0x46209A: lea     eax, [esp+20h+var_C]
0x46209E: mov     large fs:0, eax
0x4620A4: mov     esi, ecx
0x4620A6: mov     ecx, [esi+8]
0x4620A9: xor     ebx, ebx
0x4620AB: cmp     ecx, ebx
0x4620AD: jz      short loc_4620B7
0x4620AF: mov     eax, [ecx]
0x4620B1: mov     edx, [eax]
0x4620B3: push    1
0x4620B5: call    edx
0x4620B7: push    10h; Size
0x4620B9: call    FormHeapAlloc
0x4620BE: add     esp, 4
0x4620C1: mov     [esp+20h+value], eax
0x4620C5: cmp     eax, ebx
0x4620C7: mov     [esp+20h+var_4], ebx
0x4620CB: jz      short loc_4620D6
0x4620CD: mov     ecx, eax; self
0x4620CF: call    InteriorCellNewReferencesMap_ctor;
0x4620D4: jmp     short loc_4620D8
0x4620D6: xor     eax, eax
0x4620D8: mov     ecx, [esi+0Ch]
0x4620DB: or      edi, 0FFFFFFFFh
0x4620DE: cmp     ecx, ebx
0x4620E0: mov     [esp+20h+var_4], edi
0x4620E4: mov     [esi+8], eax
0x4620E7: jz      short loc_4620F1
0x4620E9: mov     eax, [ecx]
0x4620EB: mov     edx, [eax]
0x4620ED: push    1
0x4620EF: call    edx
0x4620F1: push    10h; Size
0x4620F3: call    FormHeapAlloc
0x4620F8: add     esp, 4
0x4620FB: mov     [esp+20h+value], eax
0x4620FF: cmp     eax, ebx
0x462101: mov     [esp+20h+var_4], 1
0x462109: jz      short loc_462114
0x46210B: mov     ecx, eax; self
0x46210D: call    ExteriorCellNewReferencesMap_ctor;
0x462112: jmp     short loc_462116
0x462114: xor     eax, eax
0x462116: mov     ecx, [esi+10h]
0x462119: cmp     ecx, ebx
0x46211B: mov     [esp+20h+var_4], edi
0x46211F: mov     [esi+0Ch], eax
0x462122: jz      short loc_46212C
0x462124: mov     eax, [ecx]
0x462126: mov     edx, [eax]
0x462128: push    1
0x46212A: call    edx
0x46212C: push    10h; Size
0x46212E: call    FormHeapAlloc
0x462133: add     esp, 4
0x462136: mov     [esp+20h+value], eax
0x46213A: cmp     eax, ebx
0x46213C: mov     [esp+20h+var_4], 2
0x462144: jz      short loc_46214F
0x462146: mov     ecx, eax; self
0x462148: call    ExteriorCellNewReferencesMap_ctor;
0x46214D: jmp     short loc_462151
0x46214F: xor     eax, eax
0x462151: mov     [esi+10h], eax
0x462154: cmp     [esi+24h], ebx
0x462157: mov     [esp+20h+var_4], edi
0x46215B: jz      short loc_462176
0x46215D: lea     ecx, [ecx+0]
0x462160: mov     eax, [esi+24h]
0x462163: mov     edi, [eax+4]
0x462166: push    eax
0x462167: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x46216C: add     esp, 4
0x46216F: cmp     edi, ebx
0x462171: mov     [esi+24h], edi
0x462174: jnz     short loc_462160
0x462176: mov     ecx, esi
0x462178: mov     [esi+20h], ebx
0x46217B: call    SaveLoad_ClearCreatedObjList??
0x462180: mov     eax, [esi+74h]; MEF PERF 2026-09-08: PERF-3 invalidation boundary: reset clears owner+74h slots and used/nonzero counts, then inserts zero at index0; owner+78h reset follows4621C8. Storage/capacity may remain unchanged. Cache keyed only by owner/data pointer or current length is insufficient to detect all resets.
0x462183: xor     ecx, ecx
0x462185: cmp     [eax+0Ch], ebx
0x462188: jbe     short loc_46219E
0x46218A: lea     ebx, [ebx+0]
0x462190: mov     edx, [eax+4]
0x462193: mov     [edx+ecx*4], ebx
0x462196: add     ecx, 1
0x462199: cmp     ecx, [eax+0Ch]
0x46219C: jb      short loc_462190
0x46219E: mov     [eax+0Ch], ebx
0x4621A1: mov     [eax+10h], ebx
0x4621A4: mov     edi, [esi+74h]
0x4621A7: cmp     [edi+8], ebx
0x4621AA: mov     [esp+20h+value], ebx
0x4621AE: ja      short loc_4621BB
0x4621B0: mov     eax, [edi+14h]
0x4621B3: push    eax
0x4621B4: mov     ecx, edi
0x4621B6: call    NiTLargeArray_Resize32
0x4621BB: lea     ecx, [esp+20h+value]
0x4621BF: push    ecx; value
0x4621C0: push    ebx; index
0x4621C1: mov     ecx, edi; self
0x4621C3: call    NiTLargeArray32_SetSlot
0x4621C8: mov     eax, [esi+78h]
0x4621CB: xor     ecx, ecx
0x4621CD: cmp     [eax+0Ch], ebx
0x4621D0: jbe     short loc_4621E0
0x4621D2: mov     edx, [eax+4]
0x4621D5: mov     [edx+ecx*4], ebx
0x4621D8: add     ecx, 1
0x4621DB: cmp     ecx, [eax+0Ch]
0x4621DE: jb      short loc_4621D2
0x4621E0: mov     [eax+0Ch], ebx
0x4621E3: mov     [eax+10h], ebx
0x4621E6: mov     esi, [esi+78h]
0x4621E9: cmp     [esi+8], ebx
0x4621EC: mov     [esp+20h+value], ebx
0x4621F0: ja      short loc_4621FD
0x4621F2: mov     eax, [esi+14h]
0x4621F5: push    eax
0x4621F6: mov     ecx, esi
0x4621F8: call    NiTLargeArray_Resize32
0x4621FD: lea     ecx, [esp+20h+value]
0x462201: push    ecx; value
0x462202: push    ebx; index
0x462203: mov     ecx, esi; self
0x462205: call    NiTLargeArray32_SetSlot
0x46220A: mov     ecx, [esp+20h+var_C]
0x46220E: mov     large fs:0, ecx
0x462215: pop     ecx
0x462216: pop     edi
0x462217: pop     esi
0x462218: pop     ebx
0x462219: add     esp, 10h
0x46221C: retn
0x9C2A70: mov     eax, [ebp-10h]
0x9C2A73: push    eax
0x9C2A74: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C2A79: pop     ecx
0x9C2A7A: retn
0x9C2A7B: mov     eax, [ebp-10h]
0x9C2A7E: push    eax
0x9C2A7F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C2A84: pop     ecx
0x9C2A85: retn
0x9C2A86: mov     eax, [ebp-10h]
0x9C2A89: push    eax
0x9C2A8A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C2A8F: pop     ecx
0x9C2A90: retn
0x9C2A91: mov     edx, [esp+arg_4]
0x9C2A95: lea     eax, [edx-10h]
0x9C2A98: mov     ecx, [edx-14h]
0x9C2A9B: xor     ecx, eax
0x9C2A9D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C2AA2: mov     eax, offset stru_AEB830
0x9C2AA7: jmp     ___CxxFrameHandler3
