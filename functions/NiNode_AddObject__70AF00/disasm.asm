0x70AF00: push    0FFFFFFFFh; Adds child to this NiNode after reference protection and reparent/detach. firstAvailableSlot selects hole reuse versus append/grow behavior.
0x70AF02: push    offset SEH_70AF00
0x70AF07: mov     eax, large fs:0
0x70AF0D: push    eax
0x70AF0E: push    ebx
0x70AF0F: push    ebp
0x70AF10: push    esi
0x70AF11: push    edi
0x70AF12: mov     eax, ds:0B30AACh
0x70AF17: xor     eax, esp
0x70AF19: push    eax
0x70AF1A: lea     eax, [esp+20h+var_C]
0x70AF1E: mov     large fs:0, eax
0x70AF24: mov     ebx, ecx
0x70AF26: mov     esi, [esp+20h+child]
0x70AF2A: test    esi, esi
0x70AF2C: jz      loc_70AFDB
0x70AF32: mov     ebp, ds:0A28078h
0x70AF38: lea     edi, [esi+4]
0x70AF3B: push    edi; lpAddend
0x70AF3C: call    ebp ; InterlockedIncrement
0x70AF3E: push    ebx; newParent
0x70AF3F: mov     ecx, esi; this
0x70AF41: call    NiAVObject_SetParentAndDetachFromOld; MEF PERF 2026-10-08: PERF-16 mutation boundary: SetParentAndDetachFromOld executes BEFORE AddFirstEmpty70AF67, and may alter the relevant array (especially same-parent reattach). A pre-detach density check or blanket firstAvailableSlot=false substitution is not equivalent. Preserve AddObject temporary child references and old-parent callbacks.
0x70AF46: cmp     [esp+20h+firstAvailableSlot], 0
0x70AF4B: push    edi; lpAddend
0x70AF4C: mov     dword ptr [esp+24h+firstAvailableSlot], esi
0x70AF50: jz      short loc_70AF6E
0x70AF52: call    ebp ; InterlockedIncrement
0x70AF54: lea     eax, [esp+20h+firstAvailableSlot]
0x70AF58: push    eax; element
0x70AF59: lea     ecx, [ebx+0ACh]; self
0x70AF5F: mov     [esp+24h+var_4], 0
0x70AF67: call    NiTObjectArray_AddFirstEmpty; MEF PERF 2026-10-08: PERF-16 concrete child-array route: nonzero firstAvailableSlot passes parent+AC array to4B3680; zero flag uses native append path70AF70..A6. Optimization belongs at actual hole-search decision with current metadata; it must not skip parent detachment.
0x70AF6C: jmp     short loc_70AFAB
0x70AF6E: call    ebp ; InterlockedIncrement
0x70AF70: movzx   ebp, word ptr [ebx+0B6h]
0x70AF77: movzx   ecx, word ptr [ebx+0B4h]
0x70AF7E: add     ebx, 0ACh ; '¬'
0x70AF84: cmp     ebp, ecx
0x70AF86: mov     [esp+20h+var_4], 1
0x70AF8E: jb      short loc_70AF9E
0x70AF90: movzx   edx, word ptr [ebx+0Eh]
0x70AF94: add     edx, ebp
0x70AF96: push    edx; capacity
0x70AF97: mov     ecx, ebx; self
0x70AF99: call    NiTObjectArray_Resize16
0x70AF9E: lea     eax, [esp+20h+firstAvailableSlot]
0x70AFA2: push    eax; element
0x70AFA3: push    ebp; index
0x70AFA4: mov     ecx, ebx; self
0x70AFA6: call    NiTObjectArray_SetAt
0x70AFAB: mov     ebx, ds:0A2807Ch
0x70AFB1: push    edi; lpAddend
0x70AFB2: mov     [esp+24h+var_4], 0FFFFFFFFh
0x70AFBA: call    ebx ; InterlockedDecrement
0x70AFBC: test    eax, eax
0x70AFBE: jnz     short loc_70AFCA
0x70AFC0: mov     edx, [esi]
0x70AFC2: mov     eax, [edx]
0x70AFC4: push    1
0x70AFC6: mov     ecx, esi
0x70AFC8: call    eax
0x70AFCA: push    edi; lpAddend
0x70AFCB: call    ebx ; InterlockedDecrement
0x70AFCD: test    eax, eax
0x70AFCF: jnz     short loc_70AFDB
0x70AFD1: mov     edx, [esi]
0x70AFD3: mov     eax, [edx]
0x70AFD5: push    1
0x70AFD7: mov     ecx, esi
0x70AFD9: call    eax
0x70AFDB: mov     ecx, dword ptr [esp+20h+var_C]
0x70AFDF: mov     large fs:0, ecx
0x70AFE6: pop     ecx
0x70AFE7: pop     edi
0x70AFE8: pop     esi
0x70AFE9: pop     ebp
0x70AFEA: pop     ebx
0x70AFEB: add     esp, 0Ch
0x70AFEE: retn    8
0x9C9930: lea     ecx, [ebp+8]; slot
0x9C9933: jmp     NiPointerSlot_Release
0x9C9938: lea     ecx, [ebp+8]; slot
0x9C993B: jmp     NiPointerSlot_Release
0x9C9940: mov     edx, dword ptr [esp+firstAvailableSlot]
0x9C9944: lea     eax, [edx-10h]
0x9C9947: mov     ecx, [edx-14h]
0x9C994A: xor     ecx, eax
0x9C994C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C9951: mov     eax, offset stru_AF21A4
0x9C9956: jmp     ___CxxFrameHandler3
