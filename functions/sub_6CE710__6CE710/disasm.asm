0x6CE710: push    ebx
0x6CE711: push    ebp
0x6CE712: push    edi
0x6CE713: mov     edi, [esp+0Ch+arg_0]
0x6CE717: push    edi
0x6CE718: mov     ebp, ecx
0x6CE71A: call    sub_6CDC10
0x6CE71F: xor     bl, bl
0x6CE721: cmp     [ebp+0Dh], bl
0x6CE724: jbe     short loc_6CE754
0x6CE726: push    esi
0x6CE727: movzx   esi, bl
0x6CE72A: imul    esi, 68h ; 'h'
0x6CE72D: add     esi, [ebp+50h]
0x6CE730: push    edi
0x6CE731: lea     ecx, [esi+4]
0x6CE734: call    sub_6CBA90
0x6CE739: push    edi
0x6CE73A: lea     ecx, [esi+24h]
0x6CE73D: call    sub_6CBA90
0x6CE742: push    edi
0x6CE743: lea     ecx, [esi+44h]
0x6CE746: call    sub_711BF0
0x6CE74B: add     bl, 1
0x6CE74E: cmp     bl, [ebp+0Dh]
0x6CE751: jb      short loc_6CE727
0x6CE753: pop     esi
0x6CE754: push    edi
0x6CE755: lea     ecx, [ebp+30h]
0x6CE758: call    sub_6CBA90
0x6CE75D: pop     edi
0x6CE75E: pop     ebp
0x6CE75F: pop     ebx
0x6CE760: retn    4
