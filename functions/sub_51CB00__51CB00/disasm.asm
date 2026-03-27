0x51CB00: mov     eax, [ecx+28h]
0x51CB03: sub     esp, 8
0x51CB06: shr     eax, 7
0x51CB09: test    al, 1
0x51CB0B: push    ebx
0x51CB0C: mov     bl, [ecx+107h]
0x51CB12: jz      short loc_51CB6D
0x51CB14: add     ecx, 24h ; '$'
0x51CB17: call    TESActorBaseData_GetLevel
0x51CB1C: movzx   eax, ax
0x51CB1F: cmp     ax, 1
0x51CB23: jge     short loc_51CB2A
0x51CB25: mov     eax, 1
0x51CB2A: fld     dword ptr ds:0B362B4h
0x51CB30: movsx   ecx, ax
0x51CB33: mov     [esp+0Ch+var_8], ecx
0x51CB37: movzx   edx, bl
0x51CB3A: fild    [esp+0Ch+var_8]
0x51CB3E: mov     [esp+0Ch+var_8], edx
0x51CB42: pop     ebx
0x51CB43: fmulp   st(1), st
0x51CB45: fild    [esp+8+var_8]
0x51CB48: fnstcw  word ptr [esp+8+var_8]
0x51CB4B: movzx   eax, word ptr [esp+8+var_8]
0x51CB4F: faddp   st(1), st
0x51CB51: or      eax, 0C00h
0x51CB56: mov     [esp+8+var_4], eax
0x51CB5A: fldcw   word ptr [esp+8+var_4]
0x51CB5E: fistp   [esp+8+var_4]
0x51CB62: mov     al, byte ptr [esp+8+var_4]
0x51CB66: fldcw   word ptr [esp+8+var_8]
0x51CB69: add     esp, 8
0x51CB6C: retn
0x51CB6D: mov     al, bl
0x51CB6F: pop     ebx
0x51CB70: add     esp, 8
0x51CB73: retn
