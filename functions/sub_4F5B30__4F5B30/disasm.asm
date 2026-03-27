0x4F5B30: push    esi
0x4F5B31: push    edi
0x4F5B32: mov     edi, [esp+8+arg_0]
0x4F5B36: xor     esi, esi
0x4F5B38: test    edi, edi
0x4F5B3A: jz      short loc_4F5B4E
0x4F5B3C: mov     eax, [edi]
0x4F5B3E: mov     edx, [eax+190h]
0x4F5B44: mov     ecx, edi
0x4F5B46: call    edx
0x4F5B48: test    al, al
0x4F5B4A: jz      short loc_4F5B4E
0x4F5B4C: mov     esi, edi
0x4F5B4E: test    esi, esi
0x4F5B50: fldz
0x4F5B52: mov     edi, [esp+8+arg_C]
0x4F5B56: fstp    qword ptr [edi]
0x4F5B58: jz      short loc_4F5BAA
0x4F5B5A: mov     ecx, esi
0x4F5B5C: call    sub_4DB760
0x4F5B61: test    al, al
0x4F5B63: jz      short loc_4F5B69
0x4F5B65: fld1
0x4F5B67: fstp    qword ptr [edi]
0x4F5B69: cmp     byte ptr ds:0B361ACh, 0
0x4F5B70: jz      short loc_4F5BAA
0x4F5B72: fldz
0x4F5B74: mov     ecx, esi; this
0x4F5B76: fcomp   qword ptr [edi]
0x4F5B78: fnstsw  ax
0x4F5B7A: test    ah, 44h
0x4F5B7D: jnp     short loc_4F5B97
0x4F5B7F: call    TESObjectREFR_GetName
0x4F5B84: push    eax
0x4F5B85: push    offset aSIsEvil; "%s  is evil "
0x4F5B8A: call    Interface_ConsolePrint
0x4F5B8F: add     esp, 8
0x4F5B92: pop     edi
0x4F5B93: mov     al, 1
0x4F5B95: pop     esi
0x4F5B96: retn
0x4F5B97: call    TESObjectREFR_GetName
0x4F5B9C: push    eax
0x4F5B9D: push    offset aSIsNotEvil; "%s  is not evil "
0x4F5BA2: call    Interface_ConsolePrint
0x4F5BA7: add     esp, 8
0x4F5BAA: pop     edi
0x4F5BAB: mov     al, 1
0x4F5BAD: pop     esi
0x4F5BAE: retn
