0x6FEA60: sub     esp, 0Ch
0x6FEA63: push    esi
0x6FEA64: mov     esi, ecx
0x6FEA66: push    edi
0x6FEA67: movzx   edi, word ptr [esi+62h]
0x6FEA6B: test    edi, edi
0x6FEA6D: jz      short loc_6FEAD1
0x6FEA6F: call    _rand
0x6FEA74: mov     [esp+14h+var_C], eax
0x6FEA78: fild    [esp+14h+var_C]
0x6FEA7C: mov     eax, edi
0x6FEA7E: test    eax, eax
0x6FEA80: mov     dword ptr [esp+14h+var_8], eax
0x6FEA84: fdiv    qword ptr ds:0A3D5A8h
0x6FEA8A: fstp    [esp+14h+var_C]
0x6FEA8E: fld     [esp+14h+var_C]
0x6FEA92: fild    dword ptr [esp+14h+var_8]
0x6FEA96: jge     short loc_6FEA9E
0x6FEA98: fadd    dword ptr ds:0A2FC78h
0x6FEA9E: fnstcw  word ptr [esp+14h+var_C]
0x6FEAA2: movzx   eax, word ptr [esp+14h+var_C]
0x6FEAA7: fmulp   st(1), st
0x6FEAA9: or      eax, 0C00h
0x6FEAAE: mov     dword ptr [esp+14h+var_8], eax
0x6FEAB2: fldcw   word ptr [esp+14h+var_8]
0x6FEAB6: fistp   [esp+14h+var_8]
0x6FEABA: mov     eax, dword ptr [esp+14h+var_8]
0x6FEABE: cmp     eax, edi
0x6FEAC0: fldcw   word ptr [esp+14h+var_C]
0x6FEAC4: jnz     short loc_6FEAC9
0x6FEAC6: sub     eax, 1
0x6FEAC9: mov     ecx, [esi+5Ch]
0x6FEACC: mov     eax, [ecx+eax*4]
0x6FEACF: jmp     short loc_6FEAD3
0x6FEAD1: xor     eax, eax
0x6FEAD3: cmp     dword ptr [esi+54h], 0
0x6FEAD7: mov     edx, [esp+14h+arg_4]
0x6FEADB: mov     ecx, [esp+14h+arg_0]
0x6FEADF: push    edx
0x6FEAE0: push    ecx
0x6FEAE1: push    eax
0x6FEAE2: mov     ecx, esi
0x6FEAE4: jz      short loc_6FEAF3
0x6FEAE6: call    sub_6FE3C0
0x6FEAEB: pop     edi
0x6FEAEC: pop     esi
0x6FEAED: add     esp, 0Ch
0x6FEAF0: retn    8
0x6FEAF3: call    sub_6FE5A0
0x6FEAF8: pop     edi
0x6FEAF9: pop     esi
0x6FEAFA: add     esp, 0Ch
0x6FEAFD: retn    8
