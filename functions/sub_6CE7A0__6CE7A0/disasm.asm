0x6CE7A0: sub     esp, 24h
0x6CE7A3: push    ebp
0x6CE7A4: mov     ebp, ecx
0x6CE7A6: cmp     byte ptr [ebp+0Eh], 1
0x6CE7AA: push    esi
0x6CE7AB: mov     [esp+2Ch+var_24], 0
0x6CE7B3: jnz     short loc_6CE7FE
0x6CE7B5: push    ebx
0x6CE7B6: mov     bl, [ebp+0Fh]
0x6CE7B9: cmp     byte ptr [esp+30h+arg_4], bl
0x6CE7BD: jnz     short loc_6CE7FD
0x6CE7BF: push    edi
0x6CE7C0: lea     edi, [ebp+30h]
0x6CE7C3: mov     ecx, edi
0x6CE7C5: call    sub_6CBC10
0x6CE7CA: test    al, al
0x6CE7CC: jnz     short loc_6CE7FC
0x6CE7CE: mov     ecx, [ebp+50h]
0x6CE7D1: movzx   eax, bl
0x6CE7D4: imul    eax, 68h ; 'h'
0x6CE7D7: lea     esi, [eax+ecx+4]
0x6CE7DB: mov     ecx, esi
0x6CE7DD: call    sub_6CBC10
0x6CE7E2: test    al, al
0x6CE7E4: jnz     short loc_6CE7FC
0x6CE7E6: push    esi
0x6CE7E7: lea     edx, [esp+38h+var_20]
0x6CE7EB: push    edx
0x6CE7EC: mov     ecx, edi
0x6CE7EE: call    sub_6CB640
0x6CE7F3: mov     ecx, 8
0x6CE7F8: mov     esi, eax
0x6CE7FA: rep movsd
0x6CE7FC: pop     edi
0x6CE7FD: pop     ebx
0x6CE7FE: mov     eax, [esp+2Ch+arg_4]
0x6CE802: mov     esi, [esp+2Ch+arg_0]
0x6CE806: push    eax
0x6CE807: push    esi
0x6CE808: mov     ecx, ebp
0x6CE80A: call    sub_6CC6E0
0x6CE80F: cmp     byte ptr [ebp+0Eh], 1
0x6CE813: jnz     short loc_6CE82D
0x6CE815: cmp     dword ptr [esi], 0
0x6CE818: jz      short loc_6CE82D
0x6CE81A: movzx   ecx, byte ptr [ebp+0Fh]
0x6CE81E: imul    ecx, 68h ; 'h'
0x6CE821: add     ecx, [ebp+50h]
0x6CE824: mov     byte ptr [ebp+54h], 1
0x6CE828: call    sub_6C3500
0x6CE82D: mov     eax, esi
0x6CE82F: pop     esi
0x6CE830: pop     ebp
0x6CE831: add     esp, 24h
0x6CE834: retn    8
