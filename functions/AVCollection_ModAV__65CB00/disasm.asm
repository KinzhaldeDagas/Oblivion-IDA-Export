0x65CB00: push    ebx
0x65CB01: mov     ebx, [esp+4+arg_0]
0x65CB05: push    esi
0x65CB06: push    ebx
0x65CB07: mov     esi, ecx
0x65CB09: call    AVCollection_GetNode
0x65CB0E: fldz
0x65CB10: mov     ecx, eax
0x65CB12: test    ecx, ecx
0x65CB14: jnz     short loc_65CB54
0x65CB16: fcomp   [esp+8+arg_4]
0x65CB1A: fnstsw  ax
0x65CB1C: test    ah, 44h
0x65CB1F: jnp     short loc_65CB75
0x65CB21: push    8; Size
0x65CB23: call    FormHeapAlloc
0x65CB28: add     esp, 4
0x65CB2B: test    eax, eax
0x65CB2D: jz      short loc_65CB45
0x65CB2F: fld     [esp+8+arg_4]
0x65CB33: push    eax
0x65CB34: mov     ecx, esi
0x65CB36: fstp    dword ptr [eax+4]
0x65CB39: mov     [eax], bl
0x65CB3B: call    AVCollection_Add
0x65CB40: pop     esi
0x65CB41: pop     ebx
0x65CB42: retn    8
0x65CB45: xor     eax, eax
0x65CB47: push    eax
0x65CB48: mov     ecx, esi
0x65CB4A: call    AVCollection_Add
0x65CB4F: pop     esi
0x65CB50: pop     ebx
0x65CB51: retn    8
0x65CB54: fld     [esp+8+arg_4]
0x65CB58: fucom   st(1)
0x65CB5A: fnstsw  ax
0x65CB5C: fstp    st(1)
0x65CB5E: test    ah, 44h
0x65CB61: jp      short loc_65CB72
0x65CB63: push    ecx
0x65CB64: fstp    st
0x65CB66: mov     ecx, esi
0x65CB68: call    AVCollection_Remove
0x65CB6D: pop     esi
0x65CB6E: pop     ebx
0x65CB6F: retn    8
0x65CB72: fstp    dword ptr [ecx+4]
0x65CB75: pop     esi
0x65CB76: pop     ebx
0x65CB77: retn    8
