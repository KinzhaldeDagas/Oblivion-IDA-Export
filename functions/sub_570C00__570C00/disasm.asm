0x570C00: push    esi
0x570C01: push    edi
0x570C02: mov     edi, ecx
0x570C04: mov     eax, [edi+18h]
0x570C07: mov     esi, [eax+0Ch]
0x570C0A: test    esi, esi
0x570C0C: jz      loc_570C98
0x570C12: mov     edx, [esi]
0x570C14: mov     eax, [edx+4]
0x570C17: mov     ecx, esi
0x570C19: call    eax
0x570C1B: test    eax, eax
0x570C1D: jz      short loc_570C2E
0x570C1F: nop
0x570C20: cmp     eax, offset stru_B3CAC0
0x570C25: jz      short loc_570C92
0x570C27: mov     eax, [eax+4]
0x570C2A: test    eax, eax
0x570C2C: jnz     short loc_570C20
0x570C2E: xor     al, al
0x570C30: neg     al
0x570C32: sbb     eax, eax
0x570C34: and     eax, esi
0x570C36: jz      short loc_570C98
0x570C38: mov     edx, [esp+8+arg_0]
0x570C3C: lea     ecx, [esp+8+arg_0]
0x570C40: push    ecx
0x570C41: push    edx
0x570C42: lea     ecx, [eax+58h]
0x570C45: call    NiTMap_GetAt
0x570C4A: test    al, al
0x570C4C: jz      short loc_570C98
0x570C4E: mov     esi, [esp+8+arg_0]
0x570C52: test    esi, esi
0x570C54: jz      short loc_570C98
0x570C56: fldz
0x570C58: push    0; int
0x570C5A: push    0; int
0x570C5C: sub     esp, 8
0x570C5F: fstp    [esp+18h+var_14]; float
0x570C63: mov     ecx, esi
0x570C65: fld1
0x570C67: fstp    [esp+18h+var_18]; float
0x570C6A: push    0; char
0x570C6C: push    0; int
0x570C6E: call    sub_6C9BA0
0x570C73: fld     dword ptr [esi+30h]
0x570C76: fstp    [esp+8+arg_0]
0x570C7A: fld     [esp+8+arg_0]
0x570C7E: fld     dword ptr [edi+8]
0x570C81: fcomp   st(1)
0x570C83: fnstsw  ax
0x570C85: test    ah, 5
0x570C88: jp      short loc_570C96
0x570C8A: fstp    dword ptr [edi+8]
0x570C8D: pop     edi
0x570C8E: pop     esi
0x570C8F: retn    4
0x570C92: mov     al, 1
0x570C94: jmp     short loc_570C30
0x570C96: fstp    st
0x570C98: pop     edi
0x570C99: pop     esi
0x570C9A: retn    4
