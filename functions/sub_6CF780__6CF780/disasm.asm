0x6CF780: push    ecx
0x6CF781: push    esi
0x6CF782: mov     esi, ecx
0x6CF784: mov     cl, [esi+0Eh]
0x6CF787: xor     al, al
0x6CF789: cmp     cl, 1
0x6CF78C: jnz     short loc_6CF7B3
0x6CF78E: mov     eax, [esp+8+arg_8]
0x6CF792: fld     [esp+8+arg_0]
0x6CF796: mov     ecx, [esp+8+arg_4]
0x6CF79A: push    eax; int
0x6CF79B: push    ecx; int
0x6CF79C: push    ecx
0x6CF79D: mov     ecx, esi
0x6CF79F: fstp    [esp+14h+var_14]; float
0x6CF7A2: call    sub_6CF630
0x6CF7A7: fld     [esp+8+arg_0]
0x6CF7AB: fstp    dword ptr [esi+8]
0x6CF7AE: pop     esi
0x6CF7AF: pop     ecx
0x6CF7B0: retn    0Ch
0x6CF7B3: test    cl, cl
0x6CF7B5: jbe     loc_6CF853
0x6CF7BB: push    ebx
0x6CF7BC: push    edi
0x6CF7BD: mov     ecx, esi
0x6CF7BF: call    sub_6CD0F0
0x6CF7C4: mov     edi, [esp+10h+arg_4]
0x6CF7C8: xor     bl, bl
0x6CF7CA: cmp     [esi+0Dh], bl
0x6CF7CD: mov     [esp+10h+var_4], bl
0x6CF7D1: jbe     short loc_6CF83C
0x6CF7D3: fld     [esp+10h+arg_0]
0x6CF7D7: movzx   eax, bl
0x6CF7DA: lea     edx, [eax+eax*2]
0x6CF7DD: fstp    [esp+10h+arg_4]
0x6CF7E1: mov     eax, [esi+14h]
0x6CF7E4: cmp     dword ptr [eax+edx*8], 0
0x6CF7E8: lea     ecx, [eax+edx*8]
0x6CF7EB: jz      short loc_6CF830
0x6CF7ED: fldz
0x6CF7EF: fcomp   dword ptr [ecx+8]
0x6CF7F2: fnstsw  ax
0x6CF7F4: test    ah, 44h
0x6CF7F7: jnp     short loc_6CF830
0x6CF7F9: test    byte ptr [esi+0Ch], 1
0x6CF7FD: jz      short loc_6CF806
0x6CF7FF: fld     dword ptr [ecx+14h]
0x6CF802: fstp    [esp+10h+arg_4]
0x6CF806: fld     [esp+10h+arg_4]
0x6CF80A: fld     st
0x6CF80C: fld     dword ptr ds:0A79F00h
0x6CF812: fucompp
0x6CF814: fnstsw  ax
0x6CF816: test    ah, 44h
0x6CF819: jnp     short loc_6CF82E
0x6CF81B: push    edi; int
0x6CF81C: push    ecx
0x6CF81D: mov     ecx, dword ptr [esp+18h+var_4]
0x6CF821: fstp    [esp+18h+var_18]; float
0x6CF824: push    ecx; char
0x6CF825: mov     ecx, esi
0x6CF827: call    sub_6CEF80
0x6CF82C: jmp     short loc_6CF830
0x6CF82E: fstp    st
0x6CF830: add     bl, 1
0x6CF833: cmp     bl, [esi+0Dh]
0x6CF836: mov     [esp+10h+var_4], bl
0x6CF83A: jb      short loc_6CF7D3
0x6CF83C: mov     edx, [esp+10h+arg_8]
0x6CF840: fld     [esp+10h+arg_0]
0x6CF844: push    edx
0x6CF845: push    edi
0x6CF846: push    ecx
0x6CF847: mov     ecx, esi
0x6CF849: fstp    [esp+1Ch+var_1C]
0x6CF84C: call    sub_6CE840
0x6CF851: pop     edi
0x6CF852: pop     ebx
0x6CF853: fld     [esp+8+arg_0]
0x6CF857: fstp    dword ptr [esi+8]
0x6CF85A: pop     esi
0x6CF85B: pop     ecx
0x6CF85C: retn    0Ch
