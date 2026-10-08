0x785360: push    ebp; Allocates a 0x30-byte spline-cache node from FormHeap and delegates field/key/value initialization to OB_stBezierSplineCacheNode_Init_010201A0.
0x785361: mov     ebp, esp
0x785363: push    0FFFFFFFFh
0x785365: push    offset SEH_785360
0x78536A: mov     eax, large fs:0
0x785370: push    eax
0x785371: sub     esp, 0Ch
0x785374: push    ebx
0x785375: push    esi
0x785376: push    edi
0x785377: mov     eax, ds:0B30AACh
0x78537C: xor     eax, ebp
0x78537E: push    eax
0x78537F: lea     eax, [ebp+var_C]
0x785382: mov     large fs:0, eax
0x785388: mov     [ebp+var_10], esp
0x78538B: push    30h ; '0'; Size
0x78538D: call    FormHeapAlloc
0x785392: mov     esi, eax
0x785394: add     esp, 4
0x785397: mov     [ebp+var_14], esi
0x78539A: mov     [ebp+var_4], 0
0x7853A1: mov     [ebp+var_18], esi
0x7853A4: test    esi, esi
0x7853A6: mov     byte ptr [ebp+var_4], 1
0x7853AA: jz      short loc_7853C7
0x7853AC: mov     eax, dword ptr [ebp+color]
0x7853AF: mov     ecx, [ebp+value]
0x7853B2: mov     edx, [ebp+right]
0x7853B5: push    eax; color
0x7853B6: mov     eax, [ebp+parent]
0x7853B9: push    ecx; value
0x7853BA: mov     ecx, [ebp+left]
0x7853BD: push    edx; right
0x7853BE: push    eax; parent
0x7853BF: push    ecx; left
0x7853C0: mov     ecx, esi; this
0x7853C2: call    OB_stBezierSplineCacheNode_Init_010201A0; Constructs one 0x30-byte cache-map node: installs left/parent/right links, copies the 28-byte small-string key and stBezierSpline* value from the pair, then writes color and clears isNil.
0x7853C7: mov     eax, esi
0x7853C9: mov     ecx, [ebp+var_C]
0x7853CC: mov     large fs:0, ecx
0x7853D3: pop     ecx
0x7853D4: pop     edi
0x7853D5: pop     esi
0x7853D6: pop     ebx
0x7853D7: mov     esp, ebp
0x7853D9: pop     ebp
0x7853DA: retn    14h
0x7853DD: mov     edx, [ebp+var_14]
0x7853E0: push    edx
0x7853E1: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7853E6: add     esp, 4
0x7853E9: push    0
0x7853EB: push    0
0x7853ED: call    ThrowException??
0x9CB000: mov     eax, [ebp+var_14]
0x9CB003: push    eax
0x9CB004: mov     ecx, [ebp+var_18]; this
0x9CB007: push    ecx
0x9CB008: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9CB00D: add     esp, 8
0x9CB010: retn
0x9CB011: mov     edx, [esp-4+parent]
0x9CB015: lea     eax, [edx+0Ch]
0x9CB018: mov     ecx, [edx-1Ch]
0x9CB01B: xor     ecx, eax
0x9CB01D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB022: mov     eax, offset stru_AF36DC
0x9CB027: jmp     ___CxxFrameHandler3
