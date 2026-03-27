0x6D4470: push    esi
0x6D4471: mov     esi, ecx
0x6D4473: mov     al, [esi+8]
0x6D4476: shr     al, 5
0x6D4479: test    al, 1
0x6D447B: jz      short loc_6D4488
0x6D447D: fld     dword ptr ds:0A7A164h
0x6D4483: fstp    dword ptr [esi+28h]
0x6D4486: jmp     short loc_6D44AE
0x6D4488: fld     [esp+4+arg_0]
0x6D448C: push    ecx
0x6D448D: fstp    [esp+8+var_8]; float
0x6D4490: call    sub_6C36B0
0x6D4495: test    al, al
0x6D4497: jz      short loc_6D44AE
0x6D4499: mov     ecx, [esi+3Ch]
0x6D449C: test    ecx, ecx
0x6D449E: jz      short loc_6D44E9
0x6D44A0: mov     edx, [ecx]
0x6D44A2: mov     eax, [edx+94h]
0x6D44A8: call    eax
0x6D44AA: test    al, al
0x6D44AC: jz      short loc_6D44E9
0x6D44AE: mov     ecx, [esi+3Ch]
0x6D44B1: test    ecx, ecx
0x6D44B3: jz      short loc_6D44E9
0x6D44B5: mov     edx, [ecx]
0x6D44B7: fld     dword ptr [esi+28h]
0x6D44BA: mov     edx, [edx+60h]
0x6D44BD: lea     eax, [esp+4+arg_0]
0x6D44C1: push    eax
0x6D44C2: mov     eax, [esi+30h]
0x6D44C5: push    eax
0x6D44C6: push    ecx
0x6D44C7: fstp    [esp+10h+var_10]
0x6D44CA: call    edx
0x6D44CC: test    al, al
0x6D44CE: jz      short loc_6D44E9
0x6D44D0: cmp     byte ptr [esp+4+arg_0], 0
0x6D44D5: mov     esi, [esi+30h]
0x6D44D8: jnz     short loc_6D44E3
0x6D44DA: or      word ptr [esi+18h], 1
0x6D44DF: pop     esi
0x6D44E0: retn    4
0x6D44E3: and     word ptr [esi+18h], 0FFFEh
0x6D44E9: pop     esi
0x6D44EA: retn    4
