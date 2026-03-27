0x4837C0: mov     eax, ds:0B06A2Ch
0x4837C5: push    ebx
0x4837C6: push    esi
0x4837C7: mov     esi, [ecx+0Ch]
0x4837CA: imul    esi, [esp+8+arg_0]
0x4837CF: add     esi, [esp+8+arg_4]
0x4837D3: shr     eax, 1
0x4837D5: add     eax, ds:0B3441Ch
0x4837DB: shl     esi, 4
0x4837DE: add     esi, [ecx+10h]
0x4837E1: test    eax, eax
0x4837E3: mov     [esp+8+arg_0], eax
0x4837E7: mov     bl, 1
0x4837E9: fild    [esp+8+arg_0]
0x4837ED: jge     short loc_4837F5
0x4837EF: fadd    dword ptr ds:0A2FC78h
0x4837F5: mov     eax, [esi+8]
0x4837F8: fstp    [esp+8+arg_4]
0x4837FC: sub     eax, [ecx+4]
0x4837FF: cdq
0x483800: xor     eax, edx
0x483802: sub     eax, edx
0x483804: mov     [esp+8+arg_0], eax
0x483808: fild    [esp+8+arg_0]
0x48380C: fld     [esp+8+arg_4]
0x483810: fcom    st(1)
0x483812: fnstsw  ax
0x483814: fstp    st(1)
0x483816: test    ah, 5
0x483819: jnp     short loc_48383E
0x48381B: mov     eax, [esi+0Ch]
0x48381E: sub     eax, [ecx+8]
0x483821: cdq
0x483822: xor     eax, edx
0x483824: sub     eax, edx
0x483826: mov     [esp+8+arg_0], eax
0x48382A: fild    [esp+8+arg_0]
0x48382E: fcompp
0x483830: fnstsw  ax
0x483832: test    ah, 41h
0x483835: jz      short loc_483840
0x483837: pop     esi
0x483838: mov     al, bl
0x48383A: pop     ebx
0x48383B: retn    8
0x48383E: fstp    st
0x483840: pop     esi
0x483841: xor     al, al
0x483843: pop     ebx
0x483844: retn    8
