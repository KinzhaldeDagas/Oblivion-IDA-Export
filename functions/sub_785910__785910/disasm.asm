0x785910: sub     esp, 8
0x785913: push    ebx
0x785914: push    ebp
0x785915: push    esi
0x785916: push    edi
0x785917: mov     edi, [esp+18h+arg_4]
0x78591B: test    edi, edi
0x78591D: mov     esi, ecx
0x78591F: mov     eax, [esi+4]
0x785922: mov     ebp, [eax]
0x785924: jz      short loc_78592A
0x785926: cmp     edi, esi
0x785928: jz      short loc_78592F
0x78592A: call    __invalid_parameter_noinfo
0x78592F: mov     ebx, [esp+18h+arg_8]
0x785933: cmp     ebx, ebp
0x785935: jnz     short loc_785990
0x785937: mov     eax, [esp+18h+arg_C]
0x78593B: test    eax, eax
0x78593D: mov     ebp, [esi+4]
0x785940: jz      short loc_785946
0x785942: cmp     eax, esi
0x785944: jz      short loc_78594B
0x785946: call    __invalid_parameter_noinfo
0x78594B: cmp     [esp+18h+arg_10], ebp
0x78594F: jnz     short loc_785990
0x785951: mov     ecx, [esi+4]
0x785954: mov     edx, [ecx+4]
0x785957: push    edx
0x785958: mov     ecx, esi
0x78595A: call    sub_784FF0
0x78595F: mov     eax, [esi+4]
0x785962: mov     [eax+4], eax
0x785965: mov     eax, [esi+4]
0x785968: mov     dword ptr [esi+8], 0
0x78596F: mov     [eax], eax
0x785971: mov     eax, [esi+4]
0x785974: mov     [eax+8], eax
0x785977: mov     eax, [esi+4]
0x78597A: mov     ecx, [eax]
0x78597C: mov     eax, [esp+18h+arg_0]
0x785980: pop     edi
0x785981: mov     [eax], esi
0x785983: pop     esi
0x785984: pop     ebp
0x785985: mov     [eax+4], ecx
0x785988: pop     ebx
0x785989: add     esp, 8
0x78598C: retn    14h
0x78598F: align 10h
0x785990: test    edi, edi
0x785992: jz      short loc_78599A
0x785994: cmp     edi, [esp+18h+arg_C]
0x785998: jz      short loc_78599F
0x78599A: call    __invalid_parameter_noinfo
0x78599F: cmp     ebx, [esp+18h+arg_10]
0x7859A3: jz      short loc_7859C6
0x7859A5: lea     ecx, [esp+18h+arg_4]
0x7859A9: call    sub_7846D0
0x7859AE: push    ebx
0x7859AF: push    edi
0x7859B0: lea     edx, [esp+20h+var_8]
0x7859B4: push    edx
0x7859B5: mov     ecx, esi
0x7859B7: call    sub_784C30
0x7859BC: mov     ebx, [esp+18h+arg_8]
0x7859C0: mov     edi, [esp+18h+arg_4]
0x7859C4: jmp     short loc_785990
0x7859C6: mov     eax, [esp+18h+arg_0]
0x7859CA: mov     [eax], edi
0x7859CC: pop     edi
0x7859CD: pop     esi
0x7859CE: pop     ebp
0x7859CF: mov     [eax+4], ebx
0x7859D2: pop     ebx
0x7859D3: add     esp, 8
0x7859D6: retn    14h
