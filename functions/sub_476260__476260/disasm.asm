0x476260: push    esi
0x476261: push    edi
0x476262: mov     edi, [esp+8+arg_0]
0x476266: cmp     di, 0FFh
0x47626B: mov     esi, ecx
0x47626D: jz      short loc_4762A4
0x47626F: mov     ecx, [esi+9Ch]
0x476275: lea     eax, [esp+8+arg_0]
0x476279: push    eax
0x47627A: push    edi
0x47627B: call    sub_470960
0x476280: test    al, al
0x476282: jz      short loc_4762A4
0x476284: mov     ecx, [esp+8+arg_0]
0x476288: mov     edx, [ecx]
0x47628A: mov     eax, [edx+10h]
0x47628D: push    0FFFFFFFFh
0x47628F: call    eax
0x476291: mov     ecx, [esp+8+arg_4]
0x476295: push    ecx
0x476296: push    edi
0x476297: push    eax
0x476298: mov     ecx, esi
0x47629A: call    sub_474530
0x47629F: pop     edi
0x4762A0: pop     esi
0x4762A1: retn    8
0x4762A4: pop     edi
0x4762A5: xor     eax, eax
0x4762A7: pop     esi
0x4762A8: retn    8
