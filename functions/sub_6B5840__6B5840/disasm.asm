0x6B5840: push    ecx
0x6B5841: push    esi
0x6B5842: push    edi
0x6B5843: mov     edi, ecx
0x6B5845: mov     eax, [edi+1004h]
0x6B584B: cmp     eax, 0Fh; switch 16 cases
0x6B584E: mov     esi, [edi+1000h]
0x6B5854: ja      def_6B585C
0x6B585A: push    ebx
0x6B585B: push    ebp
0x6B585C: jmp     ds:jpt_6B585C[eax*4]; switch jump
0x6B5863: mov     ebp, [esp+14h+arg_0]; jumptable 006B585C case 0
0x6B5867: mov     ebx, offset unk_A77C20
0x6B586C: mov     [esp+14h+arg_0], 20h ; ' '
0x6B5874: fld     dword ptr [ebx-4]
0x6B5877: push    ecx
0x6B5878: fmul    dword ptr [esi+3Ch]
0x6B587B: mov     ecx, edi
0x6B587D: fld     dword ptr [ebx-8]
0x6B5880: fmul    dword ptr [esi]
0x6B5882: faddp   st(1), st
0x6B5884: fld     dword ptr [esi+38h]
0x6B5887: fmul    dword ptr [ebx]
0x6B5889: faddp   st(1), st
0x6B588B: fld     dword ptr [ebx+4]
0x6B588E: fmul    dword ptr [esi+34h]
0x6B5891: faddp   st(1), st
0x6B5893: fld     dword ptr [ebx+8]
0x6B5896: fmul    dword ptr [esi+30h]
0x6B5899: faddp   st(1), st
0x6B589B: fld     dword ptr [ebx+0Ch]
0x6B589E: fmul    dword ptr [esi+2Ch]
0x6B58A1: faddp   st(1), st
0x6B58A3: fld     dword ptr [ebx+10h]
0x6B58A6: fmul    dword ptr [esi+28h]
0x6B58A9: faddp   st(1), st
0x6B58AB: fld     dword ptr [ebx+14h]
0x6B58AE: fmul    dword ptr [esi+24h]
0x6B58B1: faddp   st(1), st
0x6B58B3: fld     dword ptr [ebx+18h]
0x6B58B6: fmul    dword ptr [esi+20h]
0x6B58B9: faddp   st(1), st
0x6B58BB: fld     dword ptr [ebx+1Ch]
0x6B58BE: fmul    dword ptr [esi+1Ch]
0x6B58C1: faddp   st(1), st
0x6B58C3: fld     dword ptr [ebx+20h]
0x6B58C6: fmul    dword ptr [esi+18h]
0x6B58C9: faddp   st(1), st
0x6B58CB: fld     dword ptr [ebx+24h]
0x6B58CE: fmul    dword ptr [esi+14h]
0x6B58D1: faddp   st(1), st
0x6B58D3: fld     dword ptr [ebx+28h]
0x6B58D6: fmul    dword ptr [esi+10h]
0x6B58D9: faddp   st(1), st
0x6B58DB: fld     dword ptr [ebx+2Ch]
0x6B58DE: fmul    dword ptr [esi+0Ch]
0x6B58E1: faddp   st(1), st
0x6B58E3: fld     dword ptr [ebx+30h]
0x6B58E6: fmul    dword ptr [esi+8]
0x6B58E9: faddp   st(1), st
0x6B58EB: fld     dword ptr [ebx+34h]
0x6B58EE: fmul    dword ptr [esi+4]
0x6B58F1: faddp   st(1), st
0x6B58F3: fmul    dword ptr [edi+108Ch]
0x6B58F9: fstp    [esp+18h+var_4]
0x6B58FD: fld     [esp+18h+var_4]
0x6B5901: fstp    [esp+18h+var_18]; float
0x6B5904: call    sub_6B57E0
0x6B5909: mov     ecx, [ebp+0]
0x6B590C: mov     edx, [ebp+4]
0x6B590F: mov     [edx+ecx*2], ax
0x6B5913: mov     eax, [ebp+0]
0x6B5916: add     eax, 1
0x6B5919: cdq
0x6B591A: mov     ecx, 480h
0x6B591F: idiv    ecx
0x6B5921: add     ebx, 40h ; '@'
0x6B5924: add     esi, 40h ; '@'
0x6B5927: sub     [esp+14h+arg_0], 1
0x6B592C: mov     [ebp+0], edx
0x6B592F: jnz     loc_6B5874
0x6B5935: pop     ebp
0x6B5936: pop     ebx
0x6B5937: pop     edi
0x6B5938: pop     esi
0x6B5939: pop     ecx
0x6B593A: retn    4
0x6B593D: mov     ebp, [esp+14h+arg_0]; jumptable 006B585C case 1
0x6B5941: mov     ebx, offset unk_A77C20
0x6B5946: mov     [esp+14h+arg_0], 20h ; ' '
0x6B594E: mov     edi, edi
0x6B5950: fld     dword ptr [ebx-8]
0x6B5953: push    ecx
0x6B5954: fmul    dword ptr [esi+4]
0x6B5957: mov     ecx, edi
0x6B5959: fld     dword ptr [ebx-4]
0x6B595C: fmul    dword ptr [esi]
0x6B595E: faddp   st(1), st
0x6B5960: fld     dword ptr [esi+3Ch]
0x6B5963: fmul    dword ptr [ebx]
0x6B5965: faddp   st(1), st
0x6B5967: fld     dword ptr [ebx+4]
0x6B596A: fmul    dword ptr [esi+38h]
0x6B596D: faddp   st(1), st
0x6B596F: fld     dword ptr [ebx+8]
0x6B5972: fmul    dword ptr [esi+34h]
0x6B5975: faddp   st(1), st
0x6B5977: fld     dword ptr [ebx+0Ch]
0x6B597A: fmul    dword ptr [esi+30h]
0x6B597D: faddp   st(1), st
0x6B597F: fld     dword ptr [ebx+10h]
0x6B5982: fmul    dword ptr [esi+2Ch]
0x6B5985: faddp   st(1), st
0x6B5987: fld     dword ptr [ebx+14h]
0x6B598A: fmul    dword ptr [esi+28h]
0x6B598D: faddp   st(1), st
0x6B598F: fld     dword ptr [ebx+18h]
0x6B5992: fmul    dword ptr [esi+24h]
0x6B5995: faddp   st(1), st
0x6B5997: fld     dword ptr [ebx+1Ch]
0x6B599A: fmul    dword ptr [esi+20h]
0x6B599D: faddp   st(1), st
0x6B599F: fld     dword ptr [ebx+20h]
0x6B59A2: fmul    dword ptr [esi+1Ch]
0x6B59A5: faddp   st(1), st
0x6B59A7: fld     dword ptr [ebx+24h]
0x6B59AA: fmul    dword ptr [esi+18h]
0x6B59AD: faddp   st(1), st
0x6B59AF: fld     dword ptr [ebx+28h]
0x6B59B2: fmul    dword ptr [esi+14h]
0x6B59B5: faddp   st(1), st
0x6B59B7: fld     dword ptr [ebx+2Ch]
0x6B59BA: fmul    dword ptr [esi+10h]
0x6B59BD: faddp   st(1), st
0x6B59BF: fld     dword ptr [ebx+30h]
0x6B59C2: fmul    dword ptr [esi+0Ch]
0x6B59C5: faddp   st(1), st
0x6B59C7: fld     dword ptr [ebx+34h]
0x6B59CA: fmul    dword ptr [esi+8]
0x6B59CD: faddp   st(1), st
0x6B59CF: fmul    dword ptr [edi+108Ch]
0x6B59D5: fstp    [esp+18h+var_4]
0x6B59D9: fld     [esp+18h+var_4]
0x6B59DD: fstp    [esp+18h+var_18]; float
0x6B59E0: call    sub_6B57E0
0x6B59E5: mov     edx, [ebp+0]
0x6B59E8: mov     ecx, [ebp+4]
0x6B59EB: mov     [ecx+edx*2], ax
0x6B59EF: mov     eax, [ebp+0]
0x6B59F2: add     eax, 1
0x6B59F5: cdq
0x6B59F6: mov     ecx, 480h
0x6B59FB: idiv    ecx
0x6B59FD: add     ebx, 40h ; '@'
0x6B5A00: add     esi, 40h ; '@'
0x6B5A03: sub     [esp+14h+arg_0], 1
0x6B5A08: mov     [ebp+0], edx
0x6B5A0B: jnz     loc_6B5950
0x6B5A11: pop     ebp
0x6B5A12: pop     ebx
0x6B5A13: pop     edi
0x6B5A14: pop     esi
0x6B5A15: pop     ecx
0x6B5A16: retn    4
0x6B5A19: mov     ebp, [esp+14h+arg_0]; jumptable 006B585C case 2
0x6B5A1D: mov     ebx, offset unk_A77C20
0x6B5A22: mov     [esp+14h+arg_0], 20h ; ' '
0x6B5A2A: lea     ebx, [ebx+0]
0x6B5A30: fld     dword ptr [ebx-8]
0x6B5A33: push    ecx
0x6B5A34: fmul    dword ptr [esi+8]
0x6B5A37: mov     ecx, edi
0x6B5A39: fld     dword ptr [ebx-4]
0x6B5A3C: fmul    dword ptr [esi+4]
0x6B5A3F: faddp   st(1), st
0x6B5A41: fld     dword ptr [esi]
0x6B5A43: fmul    dword ptr [ebx]
0x6B5A45: faddp   st(1), st
0x6B5A47: fld     dword ptr [ebx+4]
0x6B5A4A: fmul    dword ptr [esi+3Ch]
0x6B5A4D: faddp   st(1), st
0x6B5A4F: fld     dword ptr [ebx+8]
0x6B5A52: fmul    dword ptr [esi+38h]
0x6B5A55: faddp   st(1), st
0x6B5A57: fld     dword ptr [ebx+0Ch]
0x6B5A5A: fmul    dword ptr [esi+34h]
0x6B5A5D: faddp   st(1), st
0x6B5A5F: fld     dword ptr [ebx+10h]
0x6B5A62: fmul    dword ptr [esi+30h]
0x6B5A65: faddp   st(1), st
0x6B5A67: fld     dword ptr [ebx+14h]
0x6B5A6A: fmul    dword ptr [esi+2Ch]
0x6B5A6D: faddp   st(1), st
0x6B5A6F: fld     dword ptr [ebx+18h]
0x6B5A72: fmul    dword ptr [esi+28h]
0x6B5A75: faddp   st(1), st
0x6B5A77: fld     dword ptr [ebx+1Ch]
0x6B5A7A: fmul    dword ptr [esi+24h]
0x6B5A7D: faddp   st(1), st
0x6B5A7F: fld     dword ptr [ebx+20h]
0x6B5A82: fmul    dword ptr [esi+20h]
0x6B5A85: faddp   st(1), st
0x6B5A87: fld     dword ptr [ebx+24h]
0x6B5A8A: fmul    dword ptr [esi+1Ch]
0x6B5A8D: faddp   st(1), st
0x6B5A8F: fld     dword ptr [ebx+28h]
0x6B5A92: fmul    dword ptr [esi+18h]
0x6B5A95: faddp   st(1), st
0x6B5A97: fld     dword ptr [ebx+2Ch]
0x6B5A9A: fmul    dword ptr [esi+14h]
0x6B5A9D: faddp   st(1), st
0x6B5A9F: fld     dword ptr [ebx+30h]
0x6B5AA2: fmul    dword ptr [esi+10h]
0x6B5AA5: faddp   st(1), st
0x6B5AA7: fld     dword ptr [ebx+34h]
0x6B5AAA: fmul    dword ptr [esi+0Ch]
0x6B5AAD: faddp   st(1), st
0x6B5AAF: fmul    dword ptr [edi+108Ch]
0x6B5AB5: fstp    [esp+18h+var_4]
0x6B5AB9: fld     [esp+18h+var_4]
0x6B5ABD: fstp    [esp+18h+var_18]; float
0x6B5AC0: call    sub_6B57E0
0x6B5AC5: mov     edx, [ebp+0]
0x6B5AC8: mov     ecx, [ebp+4]
0x6B5ACB: mov     [ecx+edx*2], ax
0x6B5ACF: mov     eax, [ebp+0]
0x6B5AD2: add     eax, 1
0x6B5AD5: cdq
0x6B5AD6: mov     ecx, 480h
0x6B5ADB: idiv    ecx
0x6B5ADD: add     ebx, 40h ; '@'
0x6B5AE0: add     esi, 40h ; '@'
0x6B5AE3: sub     [esp+14h+arg_0], 1
0x6B5AE8: mov     [ebp+0], edx
0x6B5AEB: jnz     loc_6B5A30
0x6B5AF1: pop     ebp
0x6B5AF2: pop     ebx
0x6B5AF3: pop     edi
0x6B5AF4: pop     esi
0x6B5AF5: pop     ecx
0x6B5AF6: retn    4
0x6B5AF9: mov     ebp, [esp+14h+arg_0]; jumptable 006B585C case 3
0x6B5AFD: mov     ebx, offset unk_A77C20
0x6B5B02: mov     [esp+14h+arg_0], 20h ; ' '
0x6B5B0A: lea     ebx, [ebx+0]
0x6B5B10: fld     dword ptr [ebx-8]
0x6B5B13: push    ecx
0x6B5B14: fmul    dword ptr [esi+0Ch]
0x6B5B17: mov     ecx, edi
0x6B5B19: fld     dword ptr [ebx-4]
0x6B5B1C: fmul    dword ptr [esi+8]
0x6B5B1F: faddp   st(1), st
0x6B5B21: fld     dword ptr [esi+4]
0x6B5B24: fmul    dword ptr [ebx]
0x6B5B26: faddp   st(1), st
0x6B5B28: fld     dword ptr [ebx+4]
0x6B5B2B: fmul    dword ptr [esi]
0x6B5B2D: faddp   st(1), st
0x6B5B2F: fld     dword ptr [ebx+8]
0x6B5B32: fmul    dword ptr [esi+3Ch]
0x6B5B35: faddp   st(1), st
0x6B5B37: fld     dword ptr [ebx+0Ch]
0x6B5B3A: fmul    dword ptr [esi+38h]
0x6B5B3D: faddp   st(1), st
0x6B5B3F: fld     dword ptr [ebx+10h]
0x6B5B42: fmul    dword ptr [esi+34h]
0x6B5B45: faddp   st(1), st
0x6B5B47: fld     dword ptr [ebx+14h]
0x6B5B4A: fmul    dword ptr [esi+30h]
0x6B5B4D: faddp   st(1), st
0x6B5B4F: fld     dword ptr [ebx+18h]
0x6B5B52: fmul    dword ptr [esi+2Ch]
0x6B5B55: faddp   st(1), st
0x6B5B57: fld     dword ptr [ebx+1Ch]
0x6B5B5A: fmul    dword ptr [esi+28h]
0x6B5B5D: faddp   st(1), st
0x6B5B5F: fld     dword ptr [ebx+20h]
0x6B5B62: fmul    dword ptr [esi+24h]
0x6B5B65: faddp   st(1), st
0x6B5B67: fld     dword ptr [ebx+24h]
0x6B5B6A: fmul    dword ptr [esi+20h]
0x6B5B6D: faddp   st(1), st
0x6B5B6F: fld     dword ptr [ebx+28h]
0x6B5B72: fmul    dword ptr [esi+1Ch]
0x6B5B75: faddp   st(1), st
0x6B5B77: fld     dword ptr [ebx+2Ch]
0x6B5B7A: fmul    dword ptr [esi+18h]
0x6B5B7D: faddp   st(1), st
0x6B5B7F: fld     dword ptr [ebx+30h]
0x6B5B82: fmul    dword ptr [esi+14h]
0x6B5B85: faddp   st(1), st
0x6B5B87: fld     dword ptr [ebx+34h]
0x6B5B8A: fmul    dword ptr [esi+10h]
0x6B5B8D: faddp   st(1), st
0x6B5B8F: fmul    dword ptr [edi+108Ch]
0x6B5B95: fstp    [esp+18h+var_4]
0x6B5B99: fld     [esp+18h+var_4]
0x6B5B9D: fstp    [esp+18h+var_18]; float
0x6B5BA0: call    sub_6B57E0
0x6B5BA5: mov     edx, [ebp+0]
0x6B5BA8: mov     ecx, [ebp+4]
0x6B5BAB: mov     [ecx+edx*2], ax
0x6B5BAF: mov     eax, [ebp+0]
0x6B5BB2: add     eax, 1
0x6B5BB5: cdq
0x6B5BB6: mov     ecx, 480h
0x6B5BBB: idiv    ecx
0x6B5BBD: add     ebx, 40h ; '@'
0x6B5BC0: add     esi, 40h ; '@'
0x6B5BC3: sub     [esp+14h+arg_0], 1
0x6B5BC8: mov     [ebp+0], edx
0x6B5BCB: jnz     loc_6B5B10
0x6B5BD1: pop     ebp
0x6B5BD2: pop     ebx
0x6B5BD3: pop     edi
0x6B5BD4: pop     esi
0x6B5BD5: pop     ecx
0x6B5BD6: retn    4
0x6B5BD9: mov     ebp, [esp+14h+arg_0]; jumptable 006B585C case 4
0x6B5BDD: mov     ebx, offset unk_A77C20
0x6B5BE2: mov     [esp+14h+arg_0], 20h ; ' '
0x6B5BEA: lea     ebx, [ebx+0]
0x6B5BF0: fld     dword ptr [ebx-8]
0x6B5BF3: push    ecx
0x6B5BF4: fmul    dword ptr [esi+10h]
0x6B5BF7: mov     ecx, edi
0x6B5BF9: fld     dword ptr [ebx-4]
0x6B5BFC: fmul    dword ptr [esi+0Ch]
0x6B5BFF: faddp   st(1), st
0x6B5C01: fld     dword ptr [esi+8]
0x6B5C04: fmul    dword ptr [ebx]
0x6B5C06: faddp   st(1), st
0x6B5C08: fld     dword ptr [ebx+4]
0x6B5C0B: fmul    dword ptr [esi+4]
0x6B5C0E: faddp   st(1), st
0x6B5C10: fld     dword ptr [ebx+8]
0x6B5C13: fmul    dword ptr [esi]
0x6B5C15: faddp   st(1), st
0x6B5C17: fld     dword ptr [ebx+0Ch]
0x6B5C1A: fmul    dword ptr [esi+3Ch]
0x6B5C1D: faddp   st(1), st
0x6B5C1F: fld     dword ptr [ebx+10h]
0x6B5C22: fmul    dword ptr [esi+38h]
0x6B5C25: faddp   st(1), st
0x6B5C27: fld     dword ptr [ebx+14h]
0x6B5C2A: fmul    dword ptr [esi+34h]
0x6B5C2D: faddp   st(1), st
0x6B5C2F: fld     dword ptr [ebx+18h]
0x6B5C32: fmul    dword ptr [esi+30h]
0x6B5C35: faddp   st(1), st
0x6B5C37: fld     dword ptr [ebx+1Ch]
0x6B5C3A: fmul    dword ptr [esi+2Ch]
0x6B5C3D: faddp   st(1), st
0x6B5C3F: fld     dword ptr [ebx+20h]
0x6B5C42: fmul    dword ptr [esi+28h]
0x6B5C45: faddp   st(1), st
0x6B5C47: fld     dword ptr [ebx+24h]
0x6B5C4A: fmul    dword ptr [esi+24h]
0x6B5C4D: faddp   st(1), st
0x6B5C4F: fld     dword ptr [ebx+28h]
0x6B5C52: fmul    dword ptr [esi+20h]
0x6B5C55: faddp   st(1), st
0x6B5C57: fld     dword ptr [ebx+2Ch]
0x6B5C5A: fmul    dword ptr [esi+1Ch]
0x6B5C5D: faddp   st(1), st
0x6B5C5F: fld     dword ptr [ebx+30h]
0x6B5C62: fmul    dword ptr [esi+18h]
0x6B5C65: faddp   st(1), st
0x6B5C67: fld     dword ptr [ebx+34h]
0x6B5C6A: fmul    dword ptr [esi+14h]
0x6B5C6D: faddp   st(1), st
0x6B5C6F: fmul    dword ptr [edi+108Ch]
0x6B5C75: fstp    [esp+18h+var_4]
0x6B5C79: fld     [esp+18h+var_4]
0x6B5C7D: fstp    [esp+18h+var_18]; float
0x6B5C80: call    sub_6B57E0
0x6B5C85: mov     edx, [ebp+0]
0x6B5C88: mov     ecx, [ebp+4]
0x6B5C8B: mov     [ecx+edx*2], ax
0x6B5C8F: mov     eax, [ebp+0]
0x6B5C92: add     eax, 1
0x6B5C95: cdq
0x6B5C96: mov     ecx, 480h
0x6B5C9B: idiv    ecx
0x6B5C9D: add     ebx, 40h ; '@'
0x6B5CA0: add     esi, 40h ; '@'
0x6B5CA3: sub     [esp+14h+arg_0], 1
0x6B5CA8: mov     [ebp+0], edx
0x6B5CAB: jnz     loc_6B5BF0
0x6B5CB1: pop     ebp
0x6B5CB2: pop     ebx
0x6B5CB3: pop     edi
0x6B5CB4: pop     esi
0x6B5CB5: pop     ecx
0x6B5CB6: retn    4
0x6B5CB9: mov     ebp, [esp+14h+arg_0]; jumptable 006B585C case 5
0x6B5CBD: mov     ebx, offset unk_A77C20
0x6B5CC2: mov     [esp+14h+arg_0], 20h ; ' '
0x6B5CCA: lea     ebx, [ebx+0]
0x6B5CD0: fld     dword ptr [ebx-8]
0x6B5CD3: push    ecx
0x6B5CD4: fmul    dword ptr [esi+14h]
0x6B5CD7: mov     ecx, edi
0x6B5CD9: fld     dword ptr [ebx-4]
0x6B5CDC: fmul    dword ptr [esi+10h]
0x6B5CDF: faddp   st(1), st
0x6B5CE1: fld     dword ptr [esi+0Ch]
0x6B5CE4: fmul    dword ptr [ebx]
0x6B5CE6: faddp   st(1), st
0x6B5CE8: fld     dword ptr [ebx+4]
0x6B5CEB: fmul    dword ptr [esi+8]
0x6B5CEE: faddp   st(1), st
0x6B5CF0: fld     dword ptr [ebx+8]
0x6B5CF3: fmul    dword ptr [esi+4]
0x6B5CF6: faddp   st(1), st
0x6B5CF8: fld     dword ptr [ebx+0Ch]
0x6B5CFB: fmul    dword ptr [esi]
0x6B5CFD: faddp   st(1), st
0x6B5CFF: fld     dword ptr [ebx+10h]
0x6B5D02: fmul    dword ptr [esi+3Ch]
0x6B5D05: faddp   st(1), st
0x6B5D07: fld     dword ptr [ebx+14h]
0x6B5D0A: fmul    dword ptr [esi+38h]
0x6B5D0D: faddp   st(1), st
0x6B5D0F: fld     dword ptr [ebx+18h]
0x6B5D12: fmul    dword ptr [esi+34h]
0x6B5D15: faddp   st(1), st
0x6B5D17: fld     dword ptr [ebx+1Ch]
0x6B5D1A: fmul    dword ptr [esi+30h]
0x6B5D1D: faddp   st(1), st
0x6B5D1F: fld     dword ptr [ebx+20h]
0x6B5D22: fmul    dword ptr [esi+2Ch]
0x6B5D25: faddp   st(1), st
0x6B5D27: fld     dword ptr [ebx+24h]
0x6B5D2A: fmul    dword ptr [esi+28h]
0x6B5D2D: faddp   st(1), st
0x6B5D2F: fld     dword ptr [ebx+28h]
0x6B5D32: fmul    dword ptr [esi+24h]
0x6B5D35: faddp   st(1), st
0x6B5D37: fld     dword ptr [ebx+2Ch]
0x6B5D3A: fmul    dword ptr [esi+20h]
0x6B5D3D: faddp   st(1), st
0x6B5D3F: fld     dword ptr [ebx+30h]
0x6B5D42: fmul    dword ptr [esi+1Ch]
0x6B5D45: faddp   st(1), st
0x6B5D47: fld     dword ptr [ebx+34h]
0x6B5D4A: fmul    dword ptr [esi+18h]
0x6B5D4D: faddp   st(1), st
0x6B5D4F: fmul    dword ptr [edi+108Ch]
0x6B5D55: fstp    [esp+18h+var_4]
0x6B5D59: fld     [esp+18h+var_4]
0x6B5D5D: fstp    [esp+18h+var_18]; float
0x6B5D60: call    sub_6B57E0
0x6B5D65: mov     edx, [ebp+0]
0x6B5D68: mov     ecx, [ebp+4]
0x6B5D6B: mov     [ecx+edx*2], ax
0x6B5D6F: mov     eax, [ebp+0]
0x6B5D72: add     eax, 1
0x6B5D75: cdq
0x6B5D76: mov     ecx, 480h
0x6B5D7B: idiv    ecx
0x6B5D7D: add     ebx, 40h ; '@'
0x6B5D80: add     esi, 40h ; '@'
0x6B5D83: sub     [esp+14h+arg_0], 1
0x6B5D88: mov     [ebp+0], edx
0x6B5D8B: jnz     loc_6B5CD0
0x6B5D91: pop     ebp
0x6B5D92: pop     ebx
0x6B5D93: pop     edi
0x6B5D94: pop     esi
0x6B5D95: pop     ecx
0x6B5D96: retn    4
0x6B5D99: mov     ebp, [esp+14h+arg_0]; jumptable 006B585C case 6
0x6B5D9D: mov     ebx, offset unk_A77C20
0x6B5DA2: mov     [esp+14h+arg_0], 20h ; ' '
0x6B5DAA: lea     ebx, [ebx+0]
0x6B5DB0: fld     dword ptr [ebx-8]
0x6B5DB3: push    ecx
0x6B5DB4: fmul    dword ptr [esi+18h]
0x6B5DB7: mov     ecx, edi
0x6B5DB9: fld     dword ptr [ebx-4]
0x6B5DBC: fmul    dword ptr [esi+14h]
0x6B5DBF: faddp   st(1), st
0x6B5DC1: fld     dword ptr [esi+10h]
0x6B5DC4: fmul    dword ptr [ebx]
0x6B5DC6: faddp   st(1), st
0x6B5DC8: fld     dword ptr [ebx+4]
0x6B5DCB: fmul    dword ptr [esi+0Ch]
0x6B5DCE: faddp   st(1), st
0x6B5DD0: fld     dword ptr [ebx+8]
0x6B5DD3: fmul    dword ptr [esi+8]
0x6B5DD6: faddp   st(1), st
0x6B5DD8: fld     dword ptr [ebx+0Ch]
0x6B5DDB: fmul    dword ptr [esi+4]
0x6B5DDE: faddp   st(1), st
0x6B5DE0: fld     dword ptr [ebx+10h]
0x6B5DE3: fmul    dword ptr [esi]
0x6B5DE5: faddp   st(1), st
0x6B5DE7: fld     dword ptr [ebx+14h]
0x6B5DEA: fmul    dword ptr [esi+3Ch]
0x6B5DED: faddp   st(1), st
0x6B5DEF: fld     dword ptr [ebx+18h]
0x6B5DF2: fmul    dword ptr [esi+38h]
0x6B5DF5: faddp   st(1), st
0x6B5DF7: fld     dword ptr [ebx+1Ch]
0x6B5DFA: fmul    dword ptr [esi+34h]
0x6B5DFD: faddp   st(1), st
0x6B5DFF: fld     dword ptr [ebx+20h]
0x6B5E02: fmul    dword ptr [esi+30h]
0x6B5E05: faddp   st(1), st
0x6B5E07: fld     dword ptr [ebx+24h]
0x6B5E0A: fmul    dword ptr [esi+2Ch]
0x6B5E0D: faddp   st(1), st
0x6B5E0F: fld     dword ptr [ebx+28h]
0x6B5E12: fmul    dword ptr [esi+28h]
0x6B5E15: faddp   st(1), st
0x6B5E17: fld     dword ptr [ebx+2Ch]
0x6B5E1A: fmul    dword ptr [esi+24h]
0x6B5E1D: faddp   st(1), st
0x6B5E1F: fld     dword ptr [ebx+30h]
0x6B5E22: fmul    dword ptr [esi+20h]
0x6B5E25: faddp   st(1), st
0x6B5E27: fld     dword ptr [ebx+34h]
0x6B5E2A: fmul    dword ptr [esi+1Ch]
0x6B5E2D: faddp   st(1), st
0x6B5E2F: fmul    dword ptr [edi+108Ch]
0x6B5E35: fstp    [esp+18h+var_4]
0x6B5E39: fld     [esp+18h+var_4]
0x6B5E3D: fstp    [esp+18h+var_18]; float
0x6B5E40: call    sub_6B57E0
0x6B5E45: mov     edx, [ebp+0]
0x6B5E48: mov     ecx, [ebp+4]
0x6B5E4B: mov     [ecx+edx*2], ax
0x6B5E4F: mov     eax, [ebp+0]
0x6B5E52: add     eax, 1
0x6B5E55: cdq
0x6B5E56: mov     ecx, 480h
0x6B5E5B: idiv    ecx
0x6B5E5D: add     ebx, 40h ; '@'
0x6B5E60: add     esi, 40h ; '@'
0x6B5E63: sub     [esp+14h+arg_0], 1
0x6B5E68: mov     [ebp+0], edx
0x6B5E6B: jnz     loc_6B5DB0
0x6B5E71: pop     ebp
0x6B5E72: pop     ebx
0x6B5E73: pop     edi
0x6B5E74: pop     esi
0x6B5E75: pop     ecx
0x6B5E76: retn    4
0x6B5E79: mov     ebp, [esp+14h+arg_0]; jumptable 006B585C case 7
0x6B5E7D: mov     ebx, offset unk_A77C20
0x6B5E82: mov     [esp+14h+arg_0], 20h ; ' '
0x6B5E8A: lea     ebx, [ebx+0]
0x6B5E90: fld     dword ptr [ebx-8]
0x6B5E93: push    ecx
0x6B5E94: fmul    dword ptr [esi+1Ch]
0x6B5E97: mov     ecx, edi
0x6B5E99: fld     dword ptr [ebx-4]
0x6B5E9C: fmul    dword ptr [esi+18h]
0x6B5E9F: faddp   st(1), st
0x6B5EA1: fld     dword ptr [esi+14h]
0x6B5EA4: fmul    dword ptr [ebx]
0x6B5EA6: faddp   st(1), st
0x6B5EA8: fld     dword ptr [ebx+4]
0x6B5EAB: fmul    dword ptr [esi+10h]
0x6B5EAE: faddp   st(1), st
0x6B5EB0: fld     dword ptr [ebx+8]
0x6B5EB3: fmul    dword ptr [esi+0Ch]
0x6B5EB6: faddp   st(1), st
0x6B5EB8: fld     dword ptr [ebx+0Ch]
0x6B5EBB: fmul    dword ptr [esi+8]
0x6B5EBE: faddp   st(1), st
0x6B5EC0: fld     dword ptr [ebx+10h]
0x6B5EC3: fmul    dword ptr [esi+4]
0x6B5EC6: faddp   st(1), st
0x6B5EC8: fld     dword ptr [ebx+14h]
0x6B5ECB: fmul    dword ptr [esi]
0x6B5ECD: faddp   st(1), st
0x6B5ECF: fld     dword ptr [ebx+18h]
0x6B5ED2: fmul    dword ptr [esi+3Ch]
0x6B5ED5: faddp   st(1), st
0x6B5ED7: fld     dword ptr [ebx+1Ch]
0x6B5EDA: fmul    dword ptr [esi+38h]
0x6B5EDD: faddp   st(1), st
0x6B5EDF: fld     dword ptr [ebx+20h]
0x6B5EE2: fmul    dword ptr [esi+34h]
0x6B5EE5: faddp   st(1), st
0x6B5EE7: fld     dword ptr [ebx+24h]
0x6B5EEA: fmul    dword ptr [esi+30h]
0x6B5EED: faddp   st(1), st
0x6B5EEF: fld     dword ptr [ebx+28h]
0x6B5EF2: fmul    dword ptr [esi+2Ch]
0x6B5EF5: faddp   st(1), st
0x6B5EF7: fld     dword ptr [ebx+2Ch]
0x6B5EFA: fmul    dword ptr [esi+28h]
0x6B5EFD: faddp   st(1), st
0x6B5EFF: fld     dword ptr [ebx+30h]
0x6B5F02: fmul    dword ptr [esi+24h]
0x6B5F05: faddp   st(1), st
0x6B5F07: fld     dword ptr [ebx+34h]
0x6B5F0A: fmul    dword ptr [esi+20h]
0x6B5F0D: faddp   st(1), st
0x6B5F0F: fmul    dword ptr [edi+108Ch]
0x6B5F15: fstp    [esp+18h+var_4]
0x6B5F19: fld     [esp+18h+var_4]
0x6B5F1D: fstp    [esp+18h+var_18]; float
0x6B5F20: call    sub_6B57E0
0x6B5F25: mov     edx, [ebp+0]
0x6B5F28: mov     ecx, [ebp+4]
0x6B5F2B: mov     [ecx+edx*2], ax
0x6B5F2F: mov     eax, [ebp+0]
0x6B5F32: add     eax, 1
0x6B5F35: cdq
0x6B5F36: mov     ecx, 480h
0x6B5F3B: idiv    ecx
0x6B5F3D: add     ebx, 40h ; '@'
0x6B5F40: add     esi, 40h ; '@'
0x6B5F43: sub     [esp+14h+arg_0], 1
0x6B5F48: mov     [ebp+0], edx
0x6B5F4B: jnz     loc_6B5E90
0x6B5F51: pop     ebp
0x6B5F52: pop     ebx
0x6B5F53: pop     edi
0x6B5F54: pop     esi
0x6B5F55: pop     ecx
0x6B5F56: retn    4
0x6B5F59: mov     ebp, [esp+14h+arg_0]; jumptable 006B585C case 8
0x6B5F5D: mov     ebx, offset unk_A77C20
0x6B5F62: mov     [esp+14h+arg_0], 20h ; ' '
0x6B5F6A: lea     ebx, [ebx+0]
0x6B5F70: fld     dword ptr [ebx-8]
0x6B5F73: push    ecx
0x6B5F74: fmul    dword ptr [esi+20h]
0x6B5F77: mov     ecx, edi
0x6B5F79: fld     dword ptr [ebx-4]
0x6B5F7C: fmul    dword ptr [esi+1Ch]
0x6B5F7F: faddp   st(1), st
0x6B5F81: fld     dword ptr [esi+18h]
0x6B5F84: fmul    dword ptr [ebx]
0x6B5F86: faddp   st(1), st
0x6B5F88: fld     dword ptr [ebx+4]
0x6B5F8B: fmul    dword ptr [esi+14h]
0x6B5F8E: faddp   st(1), st
0x6B5F90: fld     dword ptr [ebx+8]
0x6B5F93: fmul    dword ptr [esi+10h]
0x6B5F96: faddp   st(1), st
0x6B5F98: fld     dword ptr [ebx+0Ch]
0x6B5F9B: fmul    dword ptr [esi+0Ch]
0x6B5F9E: faddp   st(1), st
0x6B5FA0: fld     dword ptr [ebx+10h]
0x6B5FA3: fmul    dword ptr [esi+8]
0x6B5FA6: faddp   st(1), st
0x6B5FA8: fld     dword ptr [ebx+14h]
0x6B5FAB: fmul    dword ptr [esi+4]
0x6B5FAE: faddp   st(1), st
0x6B5FB0: fld     dword ptr [ebx+18h]
0x6B5FB3: fmul    dword ptr [esi]
0x6B5FB5: faddp   st(1), st
0x6B5FB7: fld     dword ptr [ebx+1Ch]
0x6B5FBA: fmul    dword ptr [esi+3Ch]
0x6B5FBD: faddp   st(1), st
0x6B5FBF: fld     dword ptr [ebx+20h]
0x6B5FC2: fmul    dword ptr [esi+38h]
0x6B5FC5: faddp   st(1), st
0x6B5FC7: fld     dword ptr [ebx+24h]
0x6B5FCA: fmul    dword ptr [esi+34h]
0x6B5FCD: faddp   st(1), st
0x6B5FCF: fld     dword ptr [ebx+28h]
0x6B5FD2: fmul    dword ptr [esi+30h]
0x6B5FD5: faddp   st(1), st
0x6B5FD7: fld     dword ptr [ebx+2Ch]
0x6B5FDA: fmul    dword ptr [esi+2Ch]
0x6B5FDD: faddp   st(1), st
0x6B5FDF: fld     dword ptr [ebx+30h]
0x6B5FE2: fmul    dword ptr [esi+28h]
0x6B5FE5: faddp   st(1), st
0x6B5FE7: fld     dword ptr [ebx+34h]
0x6B5FEA: fmul    dword ptr [esi+24h]
0x6B5FED: faddp   st(1), st
0x6B5FEF: fmul    dword ptr [edi+108Ch]
0x6B5FF5: fstp    [esp+18h+var_4]
0x6B5FF9: fld     [esp+18h+var_4]
0x6B5FFD: fstp    [esp+18h+var_18]; float
0x6B6000: call    sub_6B57E0
0x6B6005: mov     edx, [ebp+0]
0x6B6008: mov     ecx, [ebp+4]
0x6B600B: mov     [ecx+edx*2], ax
0x6B600F: mov     eax, [ebp+0]
0x6B6012: add     eax, 1
0x6B6015: cdq
0x6B6016: mov     ecx, 480h
0x6B601B: idiv    ecx
0x6B601D: add     ebx, 40h ; '@'
0x6B6020: add     esi, 40h ; '@'
0x6B6023: sub     [esp+14h+arg_0], 1
0x6B6028: mov     [ebp+0], edx
0x6B602B: jnz     loc_6B5F70
0x6B6031: pop     ebp
0x6B6032: pop     ebx
0x6B6033: pop     edi
0x6B6034: pop     esi
0x6B6035: pop     ecx
0x6B6036: retn    4
0x6B6039: mov     ebp, [esp+14h+arg_0]; jumptable 006B585C case 9
0x6B603D: mov     ebx, offset unk_A77C20
0x6B6042: mov     [esp+14h+arg_0], 20h ; ' '
0x6B604A: lea     ebx, [ebx+0]
0x6B6050: fld     dword ptr [ebx-8]
0x6B6053: push    ecx
0x6B6054: fmul    dword ptr [esi+24h]
0x6B6057: mov     ecx, edi
0x6B6059: fld     dword ptr [ebx-4]
0x6B605C: fmul    dword ptr [esi+20h]
0x6B605F: faddp   st(1), st
0x6B6061: fld     dword ptr [esi+1Ch]
0x6B6064: fmul    dword ptr [ebx]
0x6B6066: faddp   st(1), st
0x6B6068: fld     dword ptr [ebx+4]
0x6B606B: fmul    dword ptr [esi+18h]
0x6B606E: faddp   st(1), st
0x6B6070: fld     dword ptr [ebx+8]
0x6B6073: fmul    dword ptr [esi+14h]
0x6B6076: faddp   st(1), st
0x6B6078: fld     dword ptr [ebx+0Ch]
0x6B607B: fmul    dword ptr [esi+10h]
0x6B607E: faddp   st(1), st
0x6B6080: fld     dword ptr [ebx+10h]
0x6B6083: fmul    dword ptr [esi+0Ch]
0x6B6086: faddp   st(1), st
0x6B6088: fld     dword ptr [ebx+14h]
0x6B608B: fmul    dword ptr [esi+8]
0x6B608E: faddp   st(1), st
0x6B6090: fld     dword ptr [ebx+18h]
0x6B6093: fmul    dword ptr [esi+4]
0x6B6096: faddp   st(1), st
0x6B6098: fld     dword ptr [ebx+1Ch]
0x6B609B: fmul    dword ptr [esi]
0x6B609D: faddp   st(1), st
0x6B609F: fld     dword ptr [ebx+20h]
0x6B60A2: fmul    dword ptr [esi+3Ch]
0x6B60A5: faddp   st(1), st
0x6B60A7: fld     dword ptr [ebx+24h]
0x6B60AA: fmul    dword ptr [esi+38h]
0x6B60AD: faddp   st(1), st
0x6B60AF: fld     dword ptr [ebx+28h]
0x6B60B2: fmul    dword ptr [esi+34h]
0x6B60B5: faddp   st(1), st
0x6B60B7: fld     dword ptr [ebx+2Ch]
0x6B60BA: fmul    dword ptr [esi+30h]
0x6B60BD: faddp   st(1), st
0x6B60BF: fld     dword ptr [ebx+30h]
0x6B60C2: fmul    dword ptr [esi+2Ch]
0x6B60C5: faddp   st(1), st
0x6B60C7: fld     dword ptr [ebx+34h]
0x6B60CA: fmul    dword ptr [esi+28h]
0x6B60CD: faddp   st(1), st
0x6B60CF: fmul    dword ptr [edi+108Ch]
0x6B60D5: fstp    [esp+18h+var_4]
0x6B60D9: fld     [esp+18h+var_4]
0x6B60DD: fstp    [esp+18h+var_18]; float
0x6B60E0: call    sub_6B57E0
0x6B60E5: mov     edx, [ebp+0]
0x6B60E8: mov     ecx, [ebp+4]
0x6B60EB: mov     [ecx+edx*2], ax
0x6B60EF: mov     eax, [ebp+0]
0x6B60F2: add     eax, 1
0x6B60F5: cdq
0x6B60F6: mov     ecx, 480h
0x6B60FB: idiv    ecx
0x6B60FD: add     ebx, 40h ; '@'
0x6B6100: add     esi, 40h ; '@'
0x6B6103: sub     [esp+14h+arg_0], 1
0x6B6108: mov     [ebp+0], edx
0x6B610B: jnz     loc_6B6050
0x6B6111: pop     ebp
0x6B6112: pop     ebx
0x6B6113: pop     edi
0x6B6114: pop     esi
0x6B6115: pop     ecx
0x6B6116: retn    4
0x6B6119: mov     ebp, [esp+14h+arg_0]; jumptable 006B585C case 10
0x6B611D: mov     ebx, offset unk_A77C20
0x6B6122: mov     [esp+14h+arg_0], 20h ; ' '
0x6B612A: lea     ebx, [ebx+0]
0x6B6130: fld     dword ptr [ebx-8]
0x6B6133: push    ecx
0x6B6134: fmul    dword ptr [esi+28h]
0x6B6137: mov     ecx, edi
0x6B6139: fld     dword ptr [ebx-4]
0x6B613C: fmul    dword ptr [esi+24h]
0x6B613F: faddp   st(1), st
0x6B6141: fld     dword ptr [esi+20h]
0x6B6144: fmul    dword ptr [ebx]
0x6B6146: faddp   st(1), st
0x6B6148: fld     dword ptr [ebx+4]
0x6B614B: fmul    dword ptr [esi+1Ch]
0x6B614E: faddp   st(1), st
0x6B6150: fld     dword ptr [ebx+8]
0x6B6153: fmul    dword ptr [esi+18h]
0x6B6156: faddp   st(1), st
0x6B6158: fld     dword ptr [ebx+0Ch]
0x6B615B: fmul    dword ptr [esi+14h]
0x6B615E: faddp   st(1), st
0x6B6160: fld     dword ptr [ebx+10h]
0x6B6163: fmul    dword ptr [esi+10h]
0x6B6166: faddp   st(1), st
0x6B6168: fld     dword ptr [ebx+14h]
0x6B616B: fmul    dword ptr [esi+0Ch]
0x6B616E: faddp   st(1), st
0x6B6170: fld     dword ptr [ebx+18h]
0x6B6173: fmul    dword ptr [esi+8]
0x6B6176: faddp   st(1), st
0x6B6178: fld     dword ptr [ebx+1Ch]
0x6B617B: fmul    dword ptr [esi+4]
0x6B617E: faddp   st(1), st
0x6B6180: fld     dword ptr [ebx+20h]
0x6B6183: fmul    dword ptr [esi]
0x6B6185: faddp   st(1), st
0x6B6187: fld     dword ptr [ebx+24h]
0x6B618A: fmul    dword ptr [esi+3Ch]
0x6B618D: faddp   st(1), st
0x6B618F: fld     dword ptr [ebx+28h]
0x6B6192: fmul    dword ptr [esi+38h]
0x6B6195: faddp   st(1), st
0x6B6197: fld     dword ptr [ebx+2Ch]
0x6B619A: fmul    dword ptr [esi+34h]
0x6B619D: faddp   st(1), st
0x6B619F: fld     dword ptr [ebx+30h]
0x6B61A2: fmul    dword ptr [esi+30h]
0x6B61A5: faddp   st(1), st
0x6B61A7: fld     dword ptr [ebx+34h]
0x6B61AA: fmul    dword ptr [esi+2Ch]
0x6B61AD: faddp   st(1), st
0x6B61AF: fmul    dword ptr [edi+108Ch]
0x6B61B5: fstp    [esp+18h+var_4]
0x6B61B9: fld     [esp+18h+var_4]
0x6B61BD: fstp    [esp+18h+var_18]; float
0x6B61C0: call    sub_6B57E0
0x6B61C5: mov     edx, [ebp+0]
0x6B61C8: mov     ecx, [ebp+4]
0x6B61CB: mov     [ecx+edx*2], ax
0x6B61CF: mov     eax, [ebp+0]
0x6B61D2: add     eax, 1
0x6B61D5: cdq
0x6B61D6: mov     ecx, 480h
0x6B61DB: idiv    ecx
0x6B61DD: add     ebx, 40h ; '@'
0x6B61E0: add     esi, 40h ; '@'
0x6B61E3: sub     [esp+14h+arg_0], 1
0x6B61E8: mov     [ebp+0], edx
0x6B61EB: jnz     loc_6B6130
0x6B61F1: pop     ebp
0x6B61F2: pop     ebx
0x6B61F3: pop     edi
0x6B61F4: pop     esi
0x6B61F5: pop     ecx
0x6B61F6: retn    4
0x6B61F9: mov     ebp, [esp+14h+arg_0]; jumptable 006B585C case 11
0x6B61FD: mov     ebx, offset unk_A77C20
0x6B6202: mov     [esp+14h+arg_0], 20h ; ' '
0x6B620A: lea     ebx, [ebx+0]
0x6B6210: fld     dword ptr [ebx-8]
0x6B6213: push    ecx
0x6B6214: fmul    dword ptr [esi+2Ch]
0x6B6217: mov     ecx, edi
0x6B6219: fld     dword ptr [ebx-4]
0x6B621C: fmul    dword ptr [esi+28h]
0x6B621F: faddp   st(1), st
0x6B6221: fld     dword ptr [esi+24h]
0x6B6224: fmul    dword ptr [ebx]
0x6B6226: faddp   st(1), st
0x6B6228: fld     dword ptr [ebx+4]
0x6B622B: fmul    dword ptr [esi+20h]
0x6B622E: faddp   st(1), st
0x6B6230: fld     dword ptr [ebx+8]
0x6B6233: fmul    dword ptr [esi+1Ch]
0x6B6236: faddp   st(1), st
0x6B6238: fld     dword ptr [ebx+0Ch]
0x6B623B: fmul    dword ptr [esi+18h]
0x6B623E: faddp   st(1), st
0x6B6240: fld     dword ptr [ebx+10h]
0x6B6243: fmul    dword ptr [esi+14h]
0x6B6246: faddp   st(1), st
0x6B6248: fld     dword ptr [ebx+14h]
0x6B624B: fmul    dword ptr [esi+10h]
0x6B624E: faddp   st(1), st
0x6B6250: fld     dword ptr [ebx+18h]
0x6B6253: fmul    dword ptr [esi+0Ch]
0x6B6256: faddp   st(1), st
0x6B6258: fld     dword ptr [ebx+1Ch]
0x6B625B: fmul    dword ptr [esi+8]
0x6B625E: faddp   st(1), st
0x6B6260: fld     dword ptr [ebx+20h]
0x6B6263: fmul    dword ptr [esi+4]
0x6B6266: faddp   st(1), st
0x6B6268: fld     dword ptr [ebx+24h]
0x6B626B: fmul    dword ptr [esi]
0x6B626D: faddp   st(1), st
0x6B626F: fld     dword ptr [ebx+28h]
0x6B6272: fmul    dword ptr [esi+3Ch]
0x6B6275: faddp   st(1), st
0x6B6277: fld     dword ptr [ebx+2Ch]
0x6B627A: fmul    dword ptr [esi+38h]
0x6B627D: faddp   st(1), st
0x6B627F: fld     dword ptr [ebx+30h]
0x6B6282: fmul    dword ptr [esi+34h]
0x6B6285: faddp   st(1), st
0x6B6287: fld     dword ptr [ebx+34h]
0x6B628A: fmul    dword ptr [esi+30h]
0x6B628D: faddp   st(1), st
0x6B628F: fmul    dword ptr [edi+108Ch]
0x6B6295: fstp    [esp+18h+var_4]
0x6B6299: fld     [esp+18h+var_4]
0x6B629D: fstp    [esp+18h+var_18]; float
0x6B62A0: call    sub_6B57E0
0x6B62A5: mov     edx, [ebp+0]
0x6B62A8: mov     ecx, [ebp+4]
0x6B62AB: mov     [ecx+edx*2], ax
0x6B62AF: mov     eax, [ebp+0]
0x6B62B2: add     eax, 1
0x6B62B5: cdq
0x6B62B6: mov     ecx, 480h
0x6B62BB: idiv    ecx
0x6B62BD: add     ebx, 40h ; '@'
0x6B62C0: add     esi, 40h ; '@'
0x6B62C3: sub     [esp+14h+arg_0], 1
0x6B62C8: mov     [ebp+0], edx
0x6B62CB: jnz     loc_6B6210
0x6B62D1: pop     ebp
0x6B62D2: pop     ebx
0x6B62D3: pop     edi
0x6B62D4: pop     esi
0x6B62D5: pop     ecx
0x6B62D6: retn    4
0x6B62D9: mov     ebp, [esp+14h+arg_0]; jumptable 006B585C case 12
0x6B62DD: mov     ebx, offset unk_A77C20
0x6B62E2: mov     [esp+14h+arg_0], 20h ; ' '
0x6B62EA: lea     ebx, [ebx+0]
0x6B62F0: fld     dword ptr [ebx-8]
0x6B62F3: push    ecx
0x6B62F4: fmul    dword ptr [esi+30h]
0x6B62F7: mov     ecx, edi
0x6B62F9: fld     dword ptr [ebx-4]
0x6B62FC: fmul    dword ptr [esi+2Ch]
0x6B62FF: faddp   st(1), st
0x6B6301: fld     dword ptr [esi+28h]
0x6B6304: fmul    dword ptr [ebx]
0x6B6306: faddp   st(1), st
0x6B6308: fld     dword ptr [ebx+4]
0x6B630B: fmul    dword ptr [esi+24h]
0x6B630E: faddp   st(1), st
0x6B6310: fld     dword ptr [ebx+8]
0x6B6313: fmul    dword ptr [esi+20h]
0x6B6316: faddp   st(1), st
0x6B6318: fld     dword ptr [ebx+0Ch]
0x6B631B: fmul    dword ptr [esi+1Ch]
0x6B631E: faddp   st(1), st
0x6B6320: fld     dword ptr [ebx+10h]
0x6B6323: fmul    dword ptr [esi+18h]
0x6B6326: faddp   st(1), st
0x6B6328: fld     dword ptr [ebx+14h]
0x6B632B: fmul    dword ptr [esi+14h]
0x6B632E: faddp   st(1), st
0x6B6330: fld     dword ptr [ebx+18h]
0x6B6333: fmul    dword ptr [esi+10h]
0x6B6336: faddp   st(1), st
0x6B6338: fld     dword ptr [ebx+1Ch]
0x6B633B: fmul    dword ptr [esi+0Ch]
0x6B633E: faddp   st(1), st
0x6B6340: fld     dword ptr [ebx+20h]
0x6B6343: fmul    dword ptr [esi+8]
0x6B6346: faddp   st(1), st
0x6B6348: fld     dword ptr [ebx+24h]
0x6B634B: fmul    dword ptr [esi+4]
0x6B634E: faddp   st(1), st
0x6B6350: fld     dword ptr [ebx+28h]
0x6B6353: fmul    dword ptr [esi]
0x6B6355: faddp   st(1), st
0x6B6357: fld     dword ptr [ebx+2Ch]
0x6B635A: fmul    dword ptr [esi+3Ch]
0x6B635D: faddp   st(1), st
0x6B635F: fld     dword ptr [ebx+30h]
0x6B6362: fmul    dword ptr [esi+38h]
0x6B6365: faddp   st(1), st
0x6B6367: fld     dword ptr [ebx+34h]
0x6B636A: fmul    dword ptr [esi+34h]
0x6B636D: faddp   st(1), st
0x6B636F: fmul    dword ptr [edi+108Ch]
0x6B6375: fstp    [esp+18h+var_4]
0x6B6379: fld     [esp+18h+var_4]
0x6B637D: fstp    [esp+18h+var_18]; float
0x6B6380: call    sub_6B57E0
0x6B6385: mov     edx, [ebp+0]
0x6B6388: mov     ecx, [ebp+4]
0x6B638B: mov     [ecx+edx*2], ax
0x6B638F: mov     eax, [ebp+0]
0x6B6392: add     eax, 1
0x6B6395: cdq
0x6B6396: mov     ecx, 480h
0x6B639B: idiv    ecx
0x6B639D: add     ebx, 40h ; '@'
0x6B63A0: add     esi, 40h ; '@'
0x6B63A3: sub     [esp+14h+arg_0], 1
0x6B63A8: mov     [ebp+0], edx
0x6B63AB: jnz     loc_6B62F0
0x6B63B1: pop     ebp
0x6B63B2: pop     ebx
0x6B63B3: pop     edi
0x6B63B4: pop     esi
0x6B63B5: pop     ecx
0x6B63B6: retn    4
0x6B63B9: mov     ebp, [esp+14h+arg_0]; jumptable 006B585C case 13
0x6B63BD: mov     ebx, offset unk_A77C20
0x6B63C2: mov     [esp+14h+arg_0], 20h ; ' '
0x6B63CA: lea     ebx, [ebx+0]
0x6B63D0: fld     dword ptr [ebx-8]
0x6B63D3: push    ecx
0x6B63D4: fmul    dword ptr [esi+34h]
0x6B63D7: mov     ecx, edi
0x6B63D9: fld     dword ptr [ebx-4]
0x6B63DC: fmul    dword ptr [esi+30h]
0x6B63DF: faddp   st(1), st
0x6B63E1: fld     dword ptr [esi+2Ch]
0x6B63E4: fmul    dword ptr [ebx]
0x6B63E6: faddp   st(1), st
0x6B63E8: fld     dword ptr [ebx+4]
0x6B63EB: fmul    dword ptr [esi+28h]
0x6B63EE: faddp   st(1), st
0x6B63F0: fld     dword ptr [ebx+8]
0x6B63F3: fmul    dword ptr [esi+24h]
0x6B63F6: faddp   st(1), st
0x6B63F8: fld     dword ptr [ebx+0Ch]
0x6B63FB: fmul    dword ptr [esi+20h]
0x6B63FE: faddp   st(1), st
0x6B6400: fld     dword ptr [ebx+10h]
0x6B6403: fmul    dword ptr [esi+1Ch]
0x6B6406: faddp   st(1), st
0x6B6408: fld     dword ptr [ebx+14h]
0x6B640B: fmul    dword ptr [esi+18h]
0x6B640E: faddp   st(1), st
0x6B6410: fld     dword ptr [ebx+18h]
0x6B6413: fmul    dword ptr [esi+14h]
0x6B6416: faddp   st(1), st
0x6B6418: fld     dword ptr [ebx+1Ch]
0x6B641B: fmul    dword ptr [esi+10h]
0x6B641E: faddp   st(1), st
0x6B6420: fld     dword ptr [ebx+20h]
0x6B6423: fmul    dword ptr [esi+0Ch]
0x6B6426: faddp   st(1), st
0x6B6428: fld     dword ptr [ebx+24h]
0x6B642B: fmul    dword ptr [esi+8]
0x6B642E: faddp   st(1), st
0x6B6430: fld     dword ptr [ebx+28h]
0x6B6433: fmul    dword ptr [esi+4]
0x6B6436: faddp   st(1), st
0x6B6438: fld     dword ptr [ebx+2Ch]
0x6B643B: fmul    dword ptr [esi]
0x6B643D: faddp   st(1), st
0x6B643F: fld     dword ptr [ebx+30h]
0x6B6442: fmul    dword ptr [esi+3Ch]
0x6B6445: faddp   st(1), st
0x6B6447: fld     dword ptr [ebx+34h]
0x6B644A: fmul    dword ptr [esi+38h]
0x6B644D: faddp   st(1), st
0x6B644F: fmul    dword ptr [edi+108Ch]
0x6B6455: fstp    [esp+18h+var_4]
0x6B6459: fld     [esp+18h+var_4]
0x6B645D: fstp    [esp+18h+var_18]; float
0x6B6460: call    sub_6B57E0
0x6B6465: mov     edx, [ebp+0]
0x6B6468: mov     ecx, [ebp+4]
0x6B646B: mov     [ecx+edx*2], ax
0x6B646F: mov     eax, [ebp+0]
0x6B6472: add     eax, 1
0x6B6475: cdq
0x6B6476: mov     ecx, 480h
0x6B647B: idiv    ecx
0x6B647D: add     ebx, 40h ; '@'
0x6B6480: add     esi, 40h ; '@'
0x6B6483: sub     [esp+14h+arg_0], 1
0x6B6488: mov     [ebp+0], edx
0x6B648B: jnz     loc_6B63D0
0x6B6491: pop     ebp
0x6B6492: pop     ebx
0x6B6493: pop     edi
0x6B6494: pop     esi
0x6B6495: pop     ecx
0x6B6496: retn    4
0x6B6499: mov     ebp, [esp+14h+arg_0]; jumptable 006B585C case 14
0x6B649D: mov     ebx, offset unk_A77C20
0x6B64A2: mov     [esp+14h+arg_0], 20h ; ' '
0x6B64AA: lea     ebx, [ebx+0]
0x6B64B0: fld     dword ptr [ebx-8]
0x6B64B3: push    ecx
0x6B64B4: fmul    dword ptr [esi+38h]
0x6B64B7: mov     ecx, edi
0x6B64B9: fld     dword ptr [ebx-4]
0x6B64BC: fmul    dword ptr [esi+34h]
0x6B64BF: faddp   st(1), st
0x6B64C1: fld     dword ptr [esi+30h]
0x6B64C4: fmul    dword ptr [ebx]
0x6B64C6: faddp   st(1), st
0x6B64C8: fld     dword ptr [ebx+4]
0x6B64CB: fmul    dword ptr [esi+2Ch]
0x6B64CE: faddp   st(1), st
0x6B64D0: fld     dword ptr [ebx+8]
0x6B64D3: fmul    dword ptr [esi+28h]
0x6B64D6: faddp   st(1), st
0x6B64D8: fld     dword ptr [ebx+0Ch]
0x6B64DB: fmul    dword ptr [esi+24h]
0x6B64DE: faddp   st(1), st
0x6B64E0: fld     dword ptr [ebx+10h]
0x6B64E3: fmul    dword ptr [esi+20h]
0x6B64E6: faddp   st(1), st
0x6B64E8: fld     dword ptr [ebx+14h]
0x6B64EB: fmul    dword ptr [esi+1Ch]
0x6B64EE: faddp   st(1), st
0x6B64F0: fld     dword ptr [ebx+18h]
0x6B64F3: fmul    dword ptr [esi+18h]
0x6B64F6: faddp   st(1), st
0x6B64F8: fld     dword ptr [ebx+1Ch]
0x6B64FB: fmul    dword ptr [esi+14h]
0x6B64FE: faddp   st(1), st
0x6B6500: fld     dword ptr [ebx+20h]
0x6B6503: fmul    dword ptr [esi+10h]
0x6B6506: faddp   st(1), st
0x6B6508: fld     dword ptr [ebx+24h]
0x6B650B: fmul    dword ptr [esi+0Ch]
0x6B650E: faddp   st(1), st
0x6B6510: fld     dword ptr [ebx+28h]
0x6B6513: fmul    dword ptr [esi+8]
0x6B6516: faddp   st(1), st
0x6B6518: fld     dword ptr [ebx+2Ch]
0x6B651B: fmul    dword ptr [esi+4]
0x6B651E: faddp   st(1), st
0x6B6520: fld     dword ptr [ebx+30h]
0x6B6523: fmul    dword ptr [esi]
0x6B6525: faddp   st(1), st
0x6B6527: fld     dword ptr [ebx+34h]
0x6B652A: fmul    dword ptr [esi+3Ch]
0x6B652D: faddp   st(1), st
0x6B652F: fmul    dword ptr [edi+108Ch]
0x6B6535: fstp    [esp+18h+var_4]
0x6B6539: fld     [esp+18h+var_4]
0x6B653D: fstp    [esp+18h+var_18]; float
0x6B6540: call    sub_6B57E0
0x6B6545: mov     edx, [ebp+0]
0x6B6548: mov     ecx, [ebp+4]
0x6B654B: mov     [ecx+edx*2], ax
0x6B654F: mov     eax, [ebp+0]
0x6B6552: add     eax, 1
0x6B6555: cdq
0x6B6556: mov     ecx, 480h
0x6B655B: idiv    ecx
0x6B655D: add     ebx, 40h ; '@'
0x6B6560: add     esi, 40h ; '@'
0x6B6563: sub     [esp+14h+arg_0], 1
0x6B6568: mov     [ebp+0], edx
0x6B656B: jnz     loc_6B64B0
0x6B6571: pop     ebp
0x6B6572: pop     ebx
0x6B6573: pop     edi
0x6B6574: pop     esi
0x6B6575: pop     ecx
0x6B6576: retn    4
0x6B6579: mov     ebp, [esp+14h+arg_0]; jumptable 006B585C case 15
0x6B657D: mov     ebx, offset unk_A77C20
0x6B6582: mov     [esp+14h+arg_0], 20h ; ' '
0x6B658A: lea     ebx, [ebx+0]
0x6B6590: fld     dword ptr [ebx-8]
0x6B6593: push    ecx
0x6B6594: fmul    dword ptr [esi+3Ch]
0x6B6597: mov     ecx, edi
0x6B6599: fld     dword ptr [ebx-4]
0x6B659C: fmul    dword ptr [esi+38h]
0x6B659F: faddp   st(1), st
0x6B65A1: fld     dword ptr [esi+34h]
0x6B65A4: fmul    dword ptr [ebx]
0x6B65A6: faddp   st(1), st
0x6B65A8: fld     dword ptr [ebx+4]
0x6B65AB: fmul    dword ptr [esi+30h]
0x6B65AE: faddp   st(1), st
0x6B65B0: fld     dword ptr [ebx+8]
0x6B65B3: fmul    dword ptr [esi+2Ch]
0x6B65B6: faddp   st(1), st
0x6B65B8: fld     dword ptr [ebx+0Ch]
0x6B65BB: fmul    dword ptr [esi+28h]
0x6B65BE: faddp   st(1), st
0x6B65C0: fld     dword ptr [ebx+10h]
0x6B65C3: fmul    dword ptr [esi+24h]
0x6B65C6: faddp   st(1), st
0x6B65C8: fld     dword ptr [ebx+14h]
0x6B65CB: fmul    dword ptr [esi+20h]
0x6B65CE: faddp   st(1), st
0x6B65D0: fld     dword ptr [ebx+18h]
0x6B65D3: fmul    dword ptr [esi+1Ch]
0x6B65D6: faddp   st(1), st
0x6B65D8: fld     dword ptr [ebx+1Ch]
0x6B65DB: fmul    dword ptr [esi+18h]
0x6B65DE: faddp   st(1), st
0x6B65E0: fld     dword ptr [ebx+20h]
0x6B65E3: fmul    dword ptr [esi+14h]
0x6B65E6: faddp   st(1), st
0x6B65E8: fld     dword ptr [ebx+24h]
0x6B65EB: fmul    dword ptr [esi+10h]
0x6B65EE: faddp   st(1), st
0x6B65F0: fld     dword ptr [ebx+28h]
0x6B65F3: fmul    dword ptr [esi+0Ch]
0x6B65F6: faddp   st(1), st
0x6B65F8: fld     dword ptr [ebx+2Ch]
0x6B65FB: fmul    dword ptr [esi+8]
0x6B65FE: faddp   st(1), st
0x6B6600: fld     dword ptr [ebx+30h]
0x6B6603: fmul    dword ptr [esi+4]
0x6B6606: faddp   st(1), st
0x6B6608: fld     dword ptr [ebx+34h]
0x6B660B: fmul    dword ptr [esi]
0x6B660D: faddp   st(1), st
0x6B660F: fmul    dword ptr [edi+108Ch]
0x6B6615: fstp    [esp+18h+var_4]
0x6B6619: fld     [esp+18h+var_4]
0x6B661D: fstp    [esp+18h+var_18]; float
0x6B6620: call    sub_6B57E0
0x6B6625: mov     edx, [ebp+0]
0x6B6628: mov     ecx, [ebp+4]
0x6B662B: mov     [ecx+edx*2], ax
0x6B662F: mov     eax, [ebp+0]
0x6B6632: add     eax, 1
0x6B6635: cdq
0x6B6636: mov     ecx, 480h
0x6B663B: idiv    ecx
0x6B663D: add     ebx, 40h ; '@'
0x6B6640: add     esi, 40h ; '@'
0x6B6643: sub     [esp+14h+arg_0], 1
0x6B6648: mov     [ebp+0], edx
0x6B664B: jnz     loc_6B6590
0x6B6651: pop     ebp
0x6B6652: pop     ebx
