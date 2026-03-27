0x51CB80: mov     eax, [ecx+28h]
0x51CB83: sub     esp, 8
0x51CB86: shr     eax, 7
0x51CB89: test    al, 1
0x51CB8B: push    ebx
0x51CB8C: mov     bl, [ecx+106h]
0x51CB92: jz      short loc_51CBED
0x51CB94: add     ecx, 24h ; '$'
0x51CB97: call    TESActorBaseData_GetLevel
0x51CB9C: movzx   eax, ax
0x51CB9F: cmp     ax, 1
0x51CBA3: jge     short loc_51CBAA
0x51CBA5: mov     eax, 1
0x51CBAA: fld     dword ptr ds:0B362ACh
0x51CBB0: movsx   ecx, ax
0x51CBB3: mov     [esp+0Ch+var_8], ecx
0x51CBB7: movzx   edx, bl
0x51CBBA: fild    [esp+0Ch+var_8]
0x51CBBE: mov     [esp+0Ch+var_8], edx
0x51CBC2: pop     ebx
0x51CBC3: fmulp   st(1), st
0x51CBC5: fild    [esp+8+var_8]
0x51CBC8: fnstcw  word ptr [esp+8+var_8]
0x51CBCB: movzx   eax, word ptr [esp+8+var_8]
0x51CBCF: faddp   st(1), st
0x51CBD1: or      eax, 0C00h
0x51CBD6: mov     [esp+8+var_4], eax
0x51CBDA: fldcw   word ptr [esp+8+var_4]
0x51CBDE: fistp   [esp+8+var_4]
0x51CBE2: mov     al, byte ptr [esp+8+var_4]
0x51CBE6: fldcw   word ptr [esp+8+var_8]
0x51CBE9: add     esp, 8
0x51CBEC: retn
0x51CBED: mov     al, bl
0x51CBEF: pop     ebx
0x51CBF0: add     esp, 8
0x51CBF3: retn
