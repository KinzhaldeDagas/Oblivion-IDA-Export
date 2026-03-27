0x6B6B20: mov     eax, [ecx+40h]
0x6B6B23: fild    dword ptr [ecx+40h]
0x6B6B26: sub     esp, 8
0x6B6B29: test    eax, eax
0x6B6B2B: jge     short loc_6B6B33
0x6B6B2D: fadd    dword ptr ds:0A2FC78h
0x6B6B33: fmul    [esp+8+arg_0]
0x6B6B37: fnstcw  word ptr [esp+8+arg_0]
0x6B6B3B: movzx   eax, word ptr [esp+8+arg_0]
0x6B6B40: or      eax, 0C00h
0x6B6B45: mov     dword ptr [esp+8+var_8], eax
0x6B6B48: fldcw   word ptr [esp+8+var_8]
0x6B6B4B: fistp   [esp+8+var_8]
0x6B6B4E: mov     edx, dword ptr [esp+8+var_8]
0x6B6B51: lea     eax, [edx-64h]
0x6B6B54: cmp     eax, 30CDCh
0x6B6B59: fldcw   word ptr [esp+8+arg_0]
0x6B6B5D: ja      short loc_6B6B77
0x6B6B5F: cmp     dword ptr [ecx+50h], 0
0x6B6B63: jz      short loc_6B6B77
0x6B6B65: mov     eax, [ecx+50h]
0x6B6B68: mov     ecx, [eax]
0x6B6B6A: push    edx
0x6B6B6B: mov     edx, [ecx+44h]
0x6B6B6E: push    eax
0x6B6B6F: call    edx
0x6B6B71: add     esp, 8
0x6B6B74: retn    4
0x6B6B77: mov     eax, 80004005h
0x6B6B7C: add     esp, 8
0x6B6B7F: retn    4
