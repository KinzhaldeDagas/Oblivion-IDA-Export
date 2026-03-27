0x6B6DC0: mov     edx, [esp+arg_8]
0x6B6DC4: fldz
0x6B6DC6: xor     eax, eax
0x6B6DC8: fnstcw  word ptr [esp+arg_8]
0x6B6DCC: mov     [ecx+50h], eax
0x6B6DCF: fst     dword ptr [ecx+2Ch]
0x6B6DD2: mov     [ecx+54h], eax
0x6B6DD5: fstp    dword ptr [ecx+30h]
0x6B6DD8: mov     [ecx+4Ch], eax
0x6B6DDB: mov     [ecx+40h], eax
0x6B6DDE: mov     [ecx+1Ch], ax
0x6B6DE2: mov     [ecx+44h], ax
0x6B6DE6: mov     [ecx+46h], ax
0x6B6DEA: mov     [ecx+4Ah], al
0x6B6DED: mov     [ecx+4Bh], al
0x6B6DF0: mov     [ecx+34h], eax
0x6B6DF3: movzx   eax, word ptr [esp+arg_8]
0x6B6DF8: push    esi
0x6B6DF9: mov     esi, [esp+4+arg_4]
0x6B6DFD: or      eax, 0C00h
0x6B6E02: test    edx, 4000h
0x6B6E08: mov     [ecx+0Ch], esi
0x6B6E0B: mov     [esp+4+arg_4], eax
0x6B6E0F: mov     [ecx], edx
0x6B6E11: mov     byte ptr [ecx+10h], 0FFh
0x6B6E15: mov     byte ptr [ecx+11h], 2
0x6B6E19: mov     dword ptr [ecx+38h], 3B9ACA00h
0x6B6E20: pop     esi
0x6B6E21: fld     dword ptr ds:0B23C58h
0x6B6E27: fmul    qword ptr ds:0A309F0h
0x6B6E2D: fldcw   word ptr [esp+arg_4]
0x6B6E31: fistp   [esp+arg_4]
0x6B6E35: mov     ax, word ptr [esp+arg_4]
0x6B6E3A: mov     [ecx+48h], ax
0x6B6E3E: mov     eax, 1
0x6B6E43: fldcw   word ptr [esp+arg_8]
0x6B6E47: jz      short loc_6B6E4F
0x6B6E49: add     ds:0B3C20Ch, eax
0x6B6E4F: fld1
0x6B6E51: add     ds:0B3C210h, eax
0x6B6E57: fstp    dword ptr [ecx+3Ch]
0x6B6E5A: mov     eax, ecx
0x6B6E5C: retn    0Ch
