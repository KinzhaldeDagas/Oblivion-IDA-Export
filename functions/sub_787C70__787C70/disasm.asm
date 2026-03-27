0x787C70: push    ecx
0x787C71: fld     dword ptr ds:0A30634h
0x787C77: fcomp   [esp+4+arg_0]
0x787C7B: fnstsw  ax
0x787C7D: test    ah, 44h
0x787C80: jp      short loc_787C9F
0x787C82: mov     eax, [ecx+34h]
0x787C85: test    eax, eax
0x787C87: jz      short loc_787C8E
0x787C89: fld     dword ptr [eax+10h]
0x787C8C: jmp     short loc_787C93
0x787C8E: mov     eax, [ecx]
0x787C90: fld     dword ptr [eax+14h]
0x787C93: fstp    [esp+4+arg_0]
0x787C97: fld     [esp+4+arg_0]
0x787C9B: fstp    [esp+4+arg_0]
0x787C9F: fld     [esp+4+arg_0]
0x787CA3: push    esi
0x787CA4: movzx   esi, word ptr [ecx+64h]
0x787CA8: fld1
0x787CAA: fsubrp  st(1), st
0x787CAC: mov     [esp+8+var_4], esi
0x787CB0: fimul   [esp+8+var_4]
0x787CB4: call    Double_To_SInt32
0x787CB9: movzx   eax, ax
0x787CBC: movsx   ecx, ax
0x787CBF: cmp     ecx, esi
0x787CC1: pop     esi
0x787CC2: jnz     short loc_787CC7
0x787CC4: sub     eax, 1
0x787CC7: pop     ecx
0x787CC8: retn    4
