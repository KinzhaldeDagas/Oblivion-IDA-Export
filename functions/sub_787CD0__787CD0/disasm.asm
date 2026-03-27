0x787CD0: push    ecx
0x787CD1: fld     dword ptr ds:0A30634h
0x787CD7: fld     [esp+4+arg_0]
0x787CDB: fucom   st(1)
0x787CDD: fnstsw  ax
0x787CDF: fstp    st(1)
0x787CE1: test    ah, 44h
0x787CE4: jp      short loc_787D09
0x787CE6: mov     eax, [ecx+34h]
0x787CE9: fstp    st
0x787CEB: test    eax, eax
0x787CED: jz      short loc_787CF4
0x787CEF: fld     dword ptr [eax+10h]
0x787CF2: jmp     short loc_787CF9
0x787CF4: mov     eax, [ecx]
0x787CF6: fld     dword ptr [eax+14h]
0x787CF9: fstp    [esp+4+arg_0]
0x787CFD: fld     [esp+4+arg_0]
0x787D01: fstp    [esp+4+arg_0]
0x787D05: fld     [esp+4+arg_0]
0x787D09: cmp     byte ptr ds:0B4297Ch, 0
0x787D10: fld1
0x787D12: fsubrp  st(1), st
0x787D14: jz      short loc_787D4B
0x787D16: mov     ecx, [ecx]
0x787D18: movzx   ecx, word ptr [ecx+0C0h]
0x787D1F: add     ecx, 1
0x787D22: mov     [esp+4+arg_0], ecx
0x787D26: fimul   [esp+4+arg_0]
0x787D2A: fnstcw  word ptr [esp+4+arg_0]
0x787D2E: movzx   eax, word ptr [esp+4+arg_0]
0x787D33: or      eax, 0C00h
0x787D38: mov     [esp+4+var_4], eax
0x787D3B: fldcw   word ptr [esp+4+var_4]
0x787D3E: fistp   [esp+4+var_4]
0x787D41: mov     dx, word ptr [esp+4+var_4]
0x787D45: fldcw   word ptr [esp+4+arg_0]
0x787D49: jmp     short loc_787D7B
0x787D4B: mov     eax, [ecx]
0x787D4D: movzx   ecx, word ptr [eax+0C0h]
0x787D54: mov     [esp+4+arg_0], ecx
0x787D58: fimul   [esp+4+arg_0]
0x787D5C: fnstcw  word ptr [esp+4+arg_0]
0x787D60: movzx   eax, word ptr [esp+4+arg_0]
0x787D65: or      eax, 0C00h
0x787D6A: mov     [esp+4+var_4], eax
0x787D6D: fldcw   word ptr [esp+4+var_4]
0x787D70: fistp   [esp+4+var_4]
0x787D73: mov     dx, word ptr [esp+4+var_4]
0x787D77: fldcw   word ptr [esp+4+arg_0]
0x787D7B: movzx   eax, dx
0x787D7E: movzx   edx, ax
0x787D81: cmp     edx, ecx
0x787D83: jnz     short loc_787D8A
0x787D85: add     eax, 0FFFFh
0x787D8A: pop     ecx
0x787D8B: retn    4
