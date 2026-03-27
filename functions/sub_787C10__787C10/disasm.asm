0x787C10: push    ecx
0x787C11: fld     dword ptr ds:0A30634h
0x787C17: fcomp   [esp+4+arg_0]
0x787C1B: fnstsw  ax
0x787C1D: test    ah, 44h
0x787C20: jp      short loc_787C3F
0x787C22: mov     eax, [ecx+34h]
0x787C25: test    eax, eax
0x787C27: jz      short loc_787C2E
0x787C29: fld     dword ptr [eax+10h]
0x787C2C: jmp     short loc_787C33
0x787C2E: mov     eax, [ecx]
0x787C30: fld     dword ptr [eax+14h]
0x787C33: fstp    [esp+4+arg_0]
0x787C37: fld     [esp+4+arg_0]
0x787C3B: fstp    [esp+4+arg_0]
0x787C3F: mov     ecx, [ecx]
0x787C41: fld     [esp+4+arg_0]
0x787C45: fld1
0x787C47: push    esi
0x787C48: movzx   esi, word ptr [ecx+70h]
0x787C4C: fsubrp  st(1), st
0x787C4E: mov     [esp+8+var_4], esi
0x787C52: fimul   [esp+8+var_4]
0x787C56: call    Double_To_SInt32
0x787C5B: movzx   eax, ax
0x787C5E: movsx   edx, ax
0x787C61: cmp     edx, esi
0x787C63: pop     esi
0x787C64: jnz     short loc_787C69
0x787C66: sub     eax, 1
0x787C69: pop     ecx
0x787C6A: retn    4
