0x4F5A00: fldz
0x4F5A02: push    ebx
0x4F5A03: mov     ebx, [esp+4+arg_C]
0x4F5A07: fstp    qword ptr [ebx]
0x4F5A09: push    esi
0x4F5A0A: mov     esi, [esp+8+arg_0]
0x4F5A0E: push    edi
0x4F5A0F: xor     edi, edi
0x4F5A11: test    esi, esi
0x4F5A13: jz      short loc_4F5A36
0x4F5A15: mov     eax, [esi]
0x4F5A17: mov     edx, [eax+190h]
0x4F5A1D: mov     ecx, esi
0x4F5A1F: call    edx
0x4F5A21: test    al, al
0x4F5A23: jz      short loc_4F5A36
0x4F5A25: mov     ecx, esi
0x4F5A27: mov     edi, esi
0x4F5A29: call    sub_5E8870
0x4F5A2E: test    al, al
0x4F5A30: jz      short loc_4F5A36
0x4F5A32: fld1
0x4F5A34: fstp    qword ptr [ebx]
0x4F5A36: cmp     byte ptr ds:0B361ACh, 0
0x4F5A3D: jz      short loc_4F5A6B
0x4F5A3F: fldz
0x4F5A41: push    edi
0x4F5A42: fcomp   qword ptr [ebx]
0x4F5A44: fnstsw  ax
0x4F5A46: test    ah, 44h
0x4F5A49: jnp     short loc_4F5A5E
0x4F5A4B: push    offset aSIsOfferingSer; "%s  is offering services"
0x4F5A50: call    Interface_ConsolePrint
0x4F5A55: add     esp, 8
0x4F5A58: pop     edi
0x4F5A59: pop     esi
0x4F5A5A: mov     al, 1
0x4F5A5C: pop     ebx
0x4F5A5D: retn
0x4F5A5E: push    offset aSIsNotOffering; "%s is not offering services"
0x4F5A63: call    Interface_ConsolePrint
0x4F5A68: add     esp, 8
0x4F5A6B: pop     edi
0x4F5A6C: pop     esi
0x4F5A6D: mov     al, 1
0x4F5A6F: pop     ebx
0x4F5A70: retn
