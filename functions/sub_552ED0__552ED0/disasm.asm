0x552ED0: push    0FFFFFFFFh
0x552ED2: push    offset SEH_552ED0
0x552ED7: mov     eax, large fs:0
0x552EDD: push    eax
0x552EDE: push    ecx
0x552EDF: push    esi
0x552EE0: mov     eax, ds:0B30AACh
0x552EE5: xor     eax, esp
0x552EE7: push    eax
0x552EE8: lea     eax, [esp+18h+var_C]
0x552EEC: mov     large fs:0, eax
0x552EF2: mov     esi, ecx
0x552EF4: push    offset FaceGenMatrix_Destruct; a5
0x552EF9: push    offset FaceGenMatrix_Construct; a4
0x552EFE: push    4; size
0x552F00: push    18h; a2
0x552F02: lea     eax, [esi+8]
0x552F05: push    eax; a1
0x552F06: call    ArrayConstructor
0x552F0B: xor     eax, eax
0x552F0D: mov     [esi+6Ch], eax
0x552F10: mov     [esi+70h], eax
0x552F13: mov     [esi+74h], eax
0x552F16: mov     [esi+7Ch], eax
0x552F19: mov     [esi+80h], eax
0x552F1F: mov     [esi+84h], eax
0x552F25: mov     eax, esi
0x552F27: mov     ecx, [esp+18h+var_C]
0x552F2B: mov     large fs:0, ecx
0x552F32: pop     ecx
0x552F33: pop     esi
0x552F34: add     esp, 10h
0x552F37: retn
0x552E90: push    esi
0x552E91: mov     esi, ecx
0x552E93: mov     eax, [esi+4]
0x552E96: test    eax, eax
0x552E98: jz      short loc_552EB2
0x552E9A: mov     ecx, [esi+8]
0x552E9D: push    ecx
0x552E9E: push    eax
0x552E9F: mov     ecx, esi
0x552EA1: call    sub_552D60
0x552EA6: mov     edx, [esi+4]
0x552EA9: push    edx
0x552EAA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x552EAF: add     esp, 4
0x552EB2: mov     dword ptr [esi+4], 0
0x552EB9: mov     dword ptr [esi+8], 0
0x552EC0: mov     dword ptr [esi+0Ch], 0
0x552EC7: pop     esi
0x552EC8: retn
0x9BBE30: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x9BBE35: push    4; int
0x9BBE37: push    18h; unsigned int
0x9BBE39: mov     eax, [ebp-10h]
0x9BBE3C: add     eax, 8
0x9BBE3F: push    eax; void *
0x9BBE40: call    $LN21
0x9BBE45: retn
0x9BBE46: mov     ecx, [ebp-10h]
0x9BBE49: add     ecx, 68h ; 'h'
0x9BBE4C: jmp     loc_552E90
0x9BBE51: mov     edx, [esp+arg_4]
0x9BBE55: lea     eax, [edx-8]
0x9BBE58: mov     ecx, [edx-0Ch]
0x9BBE5B: xor     ecx, eax
0x9BBE5D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BBE62: mov     eax, offset stru_AE5B04
0x9BBE67: jmp     ___CxxFrameHandler3
