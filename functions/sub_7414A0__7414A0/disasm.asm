0x7414A0: push    esi
0x7414A1: push    edi
0x7414A2: mov     edi, [esp+8+arg_0]
0x7414A6: push    edi
0x7414A7: mov     esi, ecx
0x7414A9: call    sub_700AC0
0x7414AE: cmp     dword ptr [edi+0D8h], 0A000102h
0x7414B8: jnb     short loc_7414CD
0x7414BA: movzx   eax, byte ptr [edi+25Ch]
0x7414C1: and     eax, 1
0x7414C4: pop     edi
0x7414C5: mov     [esi+18h], ax
0x7414C9: pop     esi
0x7414CA: retn    4
0x7414CD: mov     eax, [edi+21Ch]
0x7414D3: mov     edx, [eax+4]
0x7414D6: push    1
0x7414D8: lea     ecx, [esp+0Ch+arg_0]
0x7414DC: push    ecx
0x7414DD: push    2
0x7414DF: add     esi, 18h
0x7414E2: push    esi
0x7414E3: push    eax
0x7414E4: mov     [esp+1Ch+arg_0], 2
0x7414EC: call    edx
0x7414EE: add     esp, 14h
0x7414F1: pop     edi
0x7414F2: pop     esi
0x7414F3: retn    4
