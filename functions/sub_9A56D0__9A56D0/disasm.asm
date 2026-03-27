0x9A56D0: push    ebp
0x9A56D1: mov     ebp, esp
0x9A56D3: and     esp, 0FFFFFFF0h
0x9A56D6: sub     esp, 174h
0x9A56DC: mov     eax, [ebp+arg_4]
0x9A56DF: push    ebx
0x9A56E0: mov     ebx, [eax+10h]
0x9A56E3: lea     eax, [ebx-1]; switch 88 cases
0x9A56E6: cmp     eax, 57h
0x9A56E9: push    esi
0x9A56EA: push    edi
0x9A56EB: mov     edx, ecx
0x9A56ED: mov     [esp+180h+var_164], 0
0x9A56F5: ja      def_9A5702; jumptable 009A5702 default case, cases 69-72,78,79
0x9A56FB: movzx   ecx, ds:byte_9A6168[eax]
0x9A5702: jmp     ds:jpt_9A5702[ecx*4]; switch jump
0x9A5709: xor     al, al; jumptable 009A5702 cases 1,2,13,14
0x9A570B: cmp     ebx, 2
0x9A570E: mov     [esp+180h+var_16E], al
0x9A5712: jz      short loc_9A5719
0x9A5714: cmp     ebx, 0Eh
0x9A5717: jnz     short loc_9A571B
0x9A5719: mov     al, 1
0x9A571B: cmp     ebx, 0Dh
0x9A571E: jz      short loc_9A5725
0x9A5720: cmp     ebx, 0Eh
0x9A5723: jnz     short loc_9A572A
0x9A5725: mov     [esp+180h+var_16E], 1
0x9A572A: mov     esi, [edx+2Ch]
0x9A572D: add     esi, 9C0h
0x9A5733: test    al, al
0x9A5735: mov     ecx, 10h
0x9A573A: lea     edi, [esp+180h+var_140]
0x9A573E: rep movsd
0x9A5740: jz      short loc_9A5751
0x9A5742: lea     edx, [esp+180h+var_140]
0x9A5746: push    edx
0x9A5747: push    0
0x9A5749: mov     eax, edx
0x9A574B: push    eax
0x9A574C: call    D3DXMatrixInverse_0
0x9A5751: cmp     [esp+180h+var_16E], 0
0x9A5756: jz      short loc_9A5765
0x9A5758: lea     ecx, [esp+180h+var_140]
0x9A575C: push    ecx
0x9A575D: mov     edx, ecx
0x9A575F: push    edx
0x9A5760: call    D3DXMatrixTranspose_0
0x9A5765: mov     ecx, [ebp+arg_0]
0x9A5768: mov     eax, [ecx]
0x9A576A: mov     eax, [eax+28h]
0x9A576D: push    0
0x9A576F: lea     edx, [esp+184h+var_140]
0x9A5773: push    edx
0x9A5774: mov     edx, [ebp+arg_4]
0x9A5777: push    edx
0x9A5778: call    eax
0x9A577A: jmp     loc_9A60E4
0x9A577F: xor     al, al; jumptable 009A5702 cases 3,4,15,16
0x9A5781: cmp     ebx, 4
0x9A5784: mov     [esp+180h+var_16E], al
0x9A5788: jz      short loc_9A578F
0x9A578A: cmp     ebx, 10h
0x9A578D: jnz     short loc_9A5791
0x9A578F: mov     al, 1
0x9A5791: cmp     ebx, 0Fh
0x9A5794: jz      short loc_9A579B
0x9A5796: cmp     ebx, 10h
0x9A5799: jnz     short loc_9A57A0
0x9A579B: mov     [esp+180h+var_16E], 1
0x9A57A0: mov     esi, [edx+2Ch]
0x9A57A3: add     esi, 980h
0x9A57A9: test    al, al
0x9A57AB: mov     ecx, 10h
0x9A57B0: lea     edi, [esp+180h+var_140]
0x9A57B4: rep movsd
0x9A57B6: jz      short loc_9A57C7
0x9A57B8: lea     ecx, [esp+180h+var_140]
0x9A57BC: push    ecx
0x9A57BD: push    0
0x9A57BF: mov     edx, ecx
0x9A57C1: push    edx
0x9A57C2: call    D3DXMatrixInverse_0
0x9A57C7: cmp     [esp+180h+var_16E], 0
0x9A57CC: jz      short loc_9A57DB
0x9A57CE: lea     eax, [esp+180h+var_140]
0x9A57D2: push    eax
0x9A57D3: mov     ecx, eax
0x9A57D5: push    ecx
0x9A57D6: call    D3DXMatrixTranspose_0
0x9A57DB: lea     eax, [esp+180h+var_140]
0x9A57DF: jmp     loc_9A60D3
0x9A57E4: xor     al, al; jumptable 009A5702 cases 5,6,17,18
0x9A57E6: cmp     ebx, 6
0x9A57E9: mov     [esp+180h+var_16E], al
0x9A57ED: jz      short loc_9A57F4
0x9A57EF: cmp     ebx, 12h
0x9A57F2: jnz     short loc_9A57F6
0x9A57F4: mov     al, 1
0x9A57F6: cmp     ebx, 11h
0x9A57F9: jz      short loc_9A5800
0x9A57FB: cmp     ebx, 12h
0x9A57FE: jnz     short loc_9A5805
0x9A5800: mov     [esp+180h+var_16E], 1
0x9A5805: mov     esi, [edx+2Ch]
0x9A5808: add     esi, 940h
0x9A580E: mov     ecx, 10h
0x9A5813: lea     edi, [esp+180h+var_140]
0x9A5817: rep movsd
0x9A5819: test    al, al
0x9A581B: jz      short loc_9A582C
0x9A581D: lea     eax, [esp+180h+var_140]
0x9A5821: push    eax
0x9A5822: push    0
0x9A5824: mov     ecx, eax
0x9A5826: push    ecx
0x9A5827: call    D3DXMatrixInverse_0
0x9A582C: cmp     [esp+180h+var_16E], 0
0x9A5831: jz      short loc_9A5840
0x9A5833: lea     edx, [esp+180h+var_140]
0x9A5837: push    edx
0x9A5838: mov     eax, edx
0x9A583A: push    eax
0x9A583B: call    D3DXMatrixTranspose_0
0x9A5840: lea     eax, [esp+180h+var_140]
0x9A5844: jmp     loc_9A60D3
0x9A5849: cmp     ebx, 8; jumptable 009A5702 cases 7,8,19,20
0x9A584C: mov     [esp+180h+var_16E], 0
0x9A5851: mov     [esp+180h+var_16D], 0
0x9A5856: mov     al, 1
0x9A5858: jz      short loc_9A585F
0x9A585A: cmp     ebx, 14h
0x9A585D: jnz     short loc_9A5863
0x9A585F: mov     [esp+180h+var_16E], al
0x9A5863: cmp     ebx, 13h
0x9A5866: jz      short loc_9A586D
0x9A5868: cmp     ebx, 14h
0x9A586B: jnz     short loc_9A5871
0x9A586D: mov     [esp+180h+var_16D], al
0x9A5871: mov     eax, [edx+2Ch]
0x9A5874: lea     esi, [eax+940h]
0x9A587A: mov     ecx, 10h
0x9A587F: lea     edi, [esp+180h+var_C0]
0x9A5886: rep movsd
0x9A5888: lea     esi, [eax+980h]
0x9A588E: mov     ecx, 10h
0x9A5893: lea     edi, [esp+180h+var_80]
0x9A589A: lea     eax, [esp+180h+var_80]
0x9A58A1: rep movsd
0x9A58A3: push    eax
0x9A58A4: lea     ecx, [esp+184h+var_C0]
0x9A58AB: push    ecx
0x9A58AC: lea     edx, [esp+188h+var_140]
0x9A58B0: push    edx
0x9A58B1: call    D3DXMatrixMultiply_0
0x9A58B6: cmp     [esp+180h+var_16E], 0
0x9A58BB: jz      short loc_9A58CC
0x9A58BD: lea     eax, [esp+180h+var_140]
0x9A58C1: push    eax
0x9A58C2: push    0
0x9A58C4: mov     ecx, eax
0x9A58C6: push    ecx
0x9A58C7: call    D3DXMatrixInverse_0
0x9A58CC: cmp     [esp+180h+var_16D], 0
0x9A58D1: jmp     loc_9A5831
0x9A58D6: cmp     ebx, 0Ah; jumptable 009A5702 cases 9,10,21,22
0x9A58D9: mov     [esp+180h+var_16D], 0
0x9A58DE: mov     [esp+180h+var_16E], 0
0x9A58E3: mov     al, 1
0x9A58E5: jz      short loc_9A58EC
0x9A58E7: cmp     ebx, 16h
0x9A58EA: jnz     short loc_9A58F0
0x9A58EC: mov     [esp+180h+var_16D], al
0x9A58F0: cmp     ebx, 15h
0x9A58F3: jz      short loc_9A58FA
0x9A58F5: cmp     ebx, 16h
0x9A58F8: jnz     short loc_9A58FE
0x9A58FA: mov     [esp+180h+var_16E], al
0x9A58FE: mov     eax, [edx+2Ch]
0x9A5901: lea     esi, [eax+980h]
0x9A5907: mov     ecx, 10h
0x9A590C: lea     edi, [esp+180h+var_80]
0x9A5913: rep movsd
0x9A5915: lea     esi, [eax+9C0h]
0x9A591B: mov     ecx, 10h
0x9A5920: lea     edi, [esp+180h+var_C0]
0x9A5927: lea     eax, [esp+180h+var_C0]
0x9A592E: rep movsd
0x9A5930: push    eax
0x9A5931: lea     ecx, [esp+184h+var_80]
0x9A5938: push    ecx
0x9A5939: lea     edx, [esp+188h+var_140]
0x9A593D: push    edx
0x9A593E: call    D3DXMatrixMultiply_0
0x9A5943: cmp     [esp+180h+var_16D], 0
0x9A5948: jmp     loc_9A581B
0x9A594D: cmp     ebx, 0Ch; jumptable 009A5702 cases 11,12,23,24
0x9A5950: mov     [esp+180h+var_16D], 0
0x9A5955: mov     [esp+180h+var_16E], 0
0x9A595A: mov     al, 1
0x9A595C: jz      short loc_9A5963
0x9A595E: cmp     ebx, 18h
0x9A5961: jnz     short loc_9A5967
0x9A5963: mov     [esp+180h+var_16D], al
0x9A5967: cmp     ebx, 17h
0x9A596A: jz      short loc_9A5971
0x9A596C: cmp     ebx, 18h
0x9A596F: jnz     short loc_9A5975
0x9A5971: mov     [esp+180h+var_16E], al
0x9A5975: mov     eax, [edx+2Ch]
0x9A5978: lea     esi, [eax+940h]
0x9A597E: mov     ecx, 10h
0x9A5983: lea     edi, [esp+180h+var_80]
0x9A598A: rep movsd
0x9A598C: lea     esi, [eax+980h]
0x9A5992: mov     ecx, 10h
0x9A5997: lea     edi, [esp+180h+var_C0]
0x9A599E: rep movsd
0x9A59A0: lea     esi, [eax+9C0h]
0x9A59A6: mov     ecx, 10h
0x9A59AB: lea     edi, [esp+180h+var_40]
0x9A59B2: lea     eax, [esp+180h+var_C0]
0x9A59B9: rep movsd
0x9A59BB: push    eax
0x9A59BC: lea     ecx, [esp+184h+var_80]
0x9A59C3: push    ecx
0x9A59C4: lea     edx, [esp+188h+var_100]
0x9A59CB: push    edx
0x9A59CC: call    D3DXMatrixMultiply_0
0x9A59D1: lea     eax, [esp+180h+var_40]
0x9A59D8: push    eax
0x9A59D9: lea     ecx, [esp+184h+var_100]
0x9A59E0: push    ecx
0x9A59E1: lea     edx, [esp+188h+var_140]
0x9A59E5: push    edx
0x9A59E6: call    D3DXMatrixMultiply_0
0x9A59EB: cmp     [esp+180h+var_16D], 0
0x9A59F0: jmp     loc_9A581B
0x9A59F5: mov     eax, [ebp+arg_C]; jumptable 009A5702 cases 25-28,88
0x9A59F8: test    eax, eax
0x9A59FA: jz      def_9A5702; jumptable 009A5702 default case, cases 69-72,78,79
0x9A5A00: cmp     ebx, 58h ; 'X'
0x9A5A03: mov     esi, [eax+28h]
0x9A5A06: mov     ecx, 10h
0x9A5A0B: lea     edi, [esp+180h+var_140]
0x9A5A0F: rep movsd
0x9A5A11: mov     [esp+180h+var_16D], 0
0x9A5A16: mov     [esp+180h+var_16E], 0
0x9A5A1B: mov     al, 1
0x9A5A1D: jnz     short loc_9A5A23
0x9A5A1F: xor     al, al
0x9A5A21: jmp     short loc_9A5A41
0x9A5A23: cmp     ebx, 1Ah
0x9A5A26: jz      short loc_9A5A2D
0x9A5A28: cmp     ebx, 1Ch
0x9A5A2B: jnz     short loc_9A5A32
0x9A5A2D: mov     [esp+180h+var_16D], 1
0x9A5A32: cmp     ebx, 1Bh
0x9A5A35: jz      short loc_9A5A3C
0x9A5A37: cmp     ebx, 1Ch
0x9A5A3A: jnz     short loc_9A5A41
0x9A5A3C: mov     [esp+180h+var_16E], 1
0x9A5A41: mov     esi, [edx+2Ch]
0x9A5A44: add     esi, 980h
0x9A5A4A: test    al, al
0x9A5A4C: mov     ecx, 10h
0x9A5A51: lea     edi, [esp+180h+var_100]
0x9A5A58: rep movsd
0x9A5A5A: jz      short loc_9A5A71
0x9A5A5C: lea     eax, [esp+180h+var_100]
0x9A5A63: push    eax
0x9A5A64: lea     ecx, [esp+184h+var_140]
0x9A5A68: push    ecx
0x9A5A69: mov     edx, ecx
0x9A5A6B: push    edx
0x9A5A6C: call    D3DXMatrixMultiply_0
0x9A5A71: cmp     [esp+180h+var_16D], 0
0x9A5A76: jmp     loc_9A581B
0x9A5A7B: mov     eax, [ebp+arg_C]; jumptable 009A5702 cases 29-32
0x9A5A7E: test    eax, eax
0x9A5A80: jz      def_9A5702; jumptable 009A5702 default case, cases 69-72,78,79
0x9A5A86: cmp     ebx, 1Eh
0x9A5A89: mov     esi, [eax+28h]
0x9A5A8C: mov     ecx, 10h
0x9A5A91: lea     edi, [esp+180h+var_140]
0x9A5A95: rep movsd
0x9A5A97: mov     [esp+180h+var_16D], 0
0x9A5A9C: mov     [esp+180h+var_16E], 0
0x9A5AA1: mov     al, 1
0x9A5AA3: jz      short loc_9A5AAA
0x9A5AA5: cmp     ebx, 20h ; ' '
0x9A5AA8: jnz     short loc_9A5AAE
0x9A5AAA: mov     [esp+180h+var_16D], al
0x9A5AAE: cmp     ebx, 1Fh
0x9A5AB1: jz      short loc_9A5AB8
0x9A5AB3: cmp     ebx, 20h ; ' '
0x9A5AB6: jnz     short loc_9A5ABC
0x9A5AB8: mov     [esp+180h+var_16E], al
0x9A5ABC: mov     eax, [edx+2Ch]
0x9A5ABF: lea     esi, [eax+980h]
0x9A5AC5: mov     ecx, 10h
0x9A5ACA: lea     edi, [esp+180h+var_100]
0x9A5AD1: rep movsd
0x9A5AD3: lea     esi, [eax+9C0h]
0x9A5AD9: mov     ecx, 10h
0x9A5ADE: lea     edi, [esp+180h+var_40]
0x9A5AE5: lea     eax, [esp+180h+var_100]
0x9A5AEC: rep movsd
0x9A5AEE: push    eax
0x9A5AEF: lea     ecx, [esp+184h+var_140]
0x9A5AF3: push    ecx
0x9A5AF4: mov     edx, ecx
0x9A5AF6: push    edx
0x9A5AF7: call    D3DXMatrixMultiply_0
0x9A5AFC: lea     eax, [esp+180h+var_40]
0x9A5B03: jmp     loc_9A5A63
0x9A5B08: mov     eax, [ebp+arg_C]; jumptable 009A5702 cases 33-36
0x9A5B0B: test    eax, eax
0x9A5B0D: jz      def_9A5702; jumptable 009A5702 default case, cases 69-72,78,79
0x9A5B13: mov     edx, [eax+20h]
0x9A5B16: mov     esi, [ebp+arg_10]
0x9A5B19: mov     eax, [eax+24h]
0x9A5B1C: mov     ebx, [esi+4]
0x9A5B1F: mov     ecx, [ebp+arg_0]
0x9A5B22: mov     edi, [ecx]
0x9A5B24: push    ebx
0x9A5B25: push    eax
0x9A5B26: movzx   eax, word ptr [esi+20h]
0x9A5B2A: push    eax
0x9A5B2B: mov     eax, [edi+2Ch]
0x9A5B2E: push    edx
0x9A5B2F: mov     edx, [ebp+arg_4]
0x9A5B32: push    edx
0x9A5B33: call    eax
0x9A5B35: jmp     loc_9A60E4
0x9A5B3A: mov     ecx, [ebp+arg_18]; jumptable 009A5702 cases 37-40
0x9A5B3D: mov     ecx, [ecx+20h]
0x9A5B40: xor     eax, eax
0x9A5B42: test    ecx, ecx
0x9A5B44: mov     byte ptr [esp+180h+var_16C], al
0x9A5B48: mov     byte ptr [esp+180h+var_168], al
0x9A5B4C: jz      short loc_9A5B81
0x9A5B4E: mov     edx, [ecx+20h]
0x9A5B51: mov     ecx, [edx]
0x9A5B53: test    ecx, ecx
0x9A5B55: jz      short loc_9A5B81
0x9A5B57: mov     ecx, [ecx+0Ch]
0x9A5B5A: test    ecx, ecx
0x9A5B5C: jz      short loc_9A5B81
0x9A5B5E: call    sub_76C710
0x9A5B63: cmp     ebx, 26h ; '&'
0x9A5B66: mov     cl, 1
0x9A5B68: jz      short loc_9A5B6F
0x9A5B6A: cmp     ebx, 28h ; '('
0x9A5B6D: jnz     short loc_9A5B73
0x9A5B6F: mov     byte ptr [esp+180h+var_16C], cl
0x9A5B73: cmp     ebx, 27h ; '''
0x9A5B76: jz      short loc_9A5B7D
0x9A5B78: cmp     ebx, 28h ; '('
0x9A5B7B: jnz     short loc_9A5B81
0x9A5B7D: mov     byte ptr [esp+180h+var_168], cl
0x9A5B81: mov     ecx, [esp+180h+var_168]
0x9A5B85: mov     edx, [esp+180h+var_16C]
0x9A5B89: push    ecx
0x9A5B8A: push    edx
0x9A5B8B: push    eax
0x9A5B8C: lea     eax, [esp+18Ch+var_100]
0x9A5B93: push    eax
0x9A5B94: call    sub_9A5510
0x9A5B99: add     esp, 10h
0x9A5B9C: lea     eax, [esp+180h+var_100]
0x9A5BA3: jmp     loc_9A60D3
0x9A5BA8: mov     ecx, [ebp+arg_18]; jumptable 009A5702 cases 41-44
0x9A5BAB: mov     ecx, [ecx+20h]
0x9A5BAE: xor     eax, eax
0x9A5BB0: test    ecx, ecx
0x9A5BB2: mov     byte ptr [esp+180h+var_168], al
0x9A5BB6: mov     byte ptr [esp+180h+var_16C], al
0x9A5BBA: jz      short loc_9A5BF0
0x9A5BBC: mov     edx, [ecx+20h]
0x9A5BBF: mov     ecx, [edx+14h]
0x9A5BC2: test    ecx, ecx
0x9A5BC4: jz      short loc_9A5BF0
0x9A5BC6: mov     ecx, [ecx+0Ch]
0x9A5BC9: test    ecx, ecx
0x9A5BCB: jz      short loc_9A5BF0
0x9A5BCD: call    sub_76C710
0x9A5BD2: cmp     ebx, 2Ah ; '*'
0x9A5BD5: mov     cl, 1
0x9A5BD7: jz      short loc_9A5BDE
0x9A5BD9: cmp     ebx, 2Ch ; ','
0x9A5BDC: jnz     short loc_9A5BE2
0x9A5BDE: mov     byte ptr [esp+180h+var_168], cl
0x9A5BE2: cmp     ebx, 2Bh ; '+'
0x9A5BE5: jz      short loc_9A5BEC
0x9A5BE7: cmp     ebx, 2Ch ; ','
0x9A5BEA: jnz     short loc_9A5BF0
0x9A5BEC: mov     byte ptr [esp+180h+var_16C], cl
0x9A5BF0: mov     ecx, [esp+180h+var_16C]
0x9A5BF4: mov     edx, [esp+180h+var_168]
0x9A5BF8: jmp     short loc_9A5B89
0x9A5BFA: mov     ecx, [ebp+arg_18]; jumptable 009A5702 cases 45-48
0x9A5BFD: mov     ecx, [ecx+20h]
0x9A5C00: xor     eax, eax
0x9A5C02: test    ecx, ecx
0x9A5C04: mov     byte ptr [esp+180h+var_168], al
0x9A5C08: mov     byte ptr [esp+180h+var_16C], al
0x9A5C0C: jz      short loc_9A5C42
0x9A5C0E: mov     edx, [ecx+20h]
0x9A5C11: mov     ecx, [edx+8]
0x9A5C14: test    ecx, ecx
0x9A5C16: jz      short loc_9A5C42
0x9A5C18: mov     ecx, [ecx+0Ch]
0x9A5C1B: test    ecx, ecx
0x9A5C1D: jz      short loc_9A5C42
0x9A5C1F: call    sub_76C710
0x9A5C24: cmp     ebx, 2Eh ; '.'
0x9A5C27: mov     cl, 1
0x9A5C29: jz      short loc_9A5C30
0x9A5C2B: cmp     ebx, 30h ; '0'
0x9A5C2E: jnz     short loc_9A5C34
0x9A5C30: mov     byte ptr [esp+180h+var_168], cl
0x9A5C34: cmp     ebx, 2Fh ; '/'
0x9A5C37: jz      short loc_9A5C3E
0x9A5C39: cmp     ebx, 30h ; '0'
0x9A5C3C: jnz     short loc_9A5C42
0x9A5C3E: mov     byte ptr [esp+180h+var_16C], cl
0x9A5C42: mov     ecx, [esp+180h+var_16C]
0x9A5C46: mov     edx, [esp+180h+var_168]
0x9A5C4A: jmp     loc_9A5B89
0x9A5C4F: mov     ecx, [ebp+arg_18]; jumptable 009A5702 cases 49-52
0x9A5C52: mov     ecx, [ecx+20h]
0x9A5C55: xor     eax, eax
0x9A5C57: test    ecx, ecx
0x9A5C59: mov     byte ptr [esp+180h+var_168], al
0x9A5C5D: mov     byte ptr [esp+180h+var_16C], al
0x9A5C61: jz      short loc_9A5C97
0x9A5C63: mov     edx, [ecx+20h]
0x9A5C66: mov     ecx, [edx+0Ch]
0x9A5C69: test    ecx, ecx
0x9A5C6B: jz      short loc_9A5C97
0x9A5C6D: mov     ecx, [ecx+0Ch]
0x9A5C70: test    ecx, ecx
0x9A5C72: jz      short loc_9A5C97
0x9A5C74: call    sub_76C710
0x9A5C79: cmp     ebx, 32h ; '2'
0x9A5C7C: mov     cl, 1
0x9A5C7E: jz      short loc_9A5C85
0x9A5C80: cmp     ebx, 34h ; '4'
0x9A5C83: jnz     short loc_9A5C89
0x9A5C85: mov     byte ptr [esp+180h+var_168], cl
0x9A5C89: cmp     ebx, 33h ; '3'
0x9A5C8C: jz      short loc_9A5C93
0x9A5C8E: cmp     ebx, 34h ; '4'
0x9A5C91: jnz     short loc_9A5C97
0x9A5C93: mov     byte ptr [esp+180h+var_16C], cl
0x9A5C97: mov     ecx, [esp+180h+var_16C]
0x9A5C9B: mov     edx, [esp+180h+var_168]
0x9A5C9F: jmp     loc_9A5B89
0x9A5CA4: mov     ecx, [ebp+arg_18]; jumptable 009A5702 cases 53-56
0x9A5CA7: mov     ecx, [ecx+20h]
0x9A5CAA: xor     eax, eax
0x9A5CAC: test    ecx, ecx
0x9A5CAE: mov     byte ptr [esp+180h+var_168], al
0x9A5CB2: mov     byte ptr [esp+180h+var_16C], al
0x9A5CB6: jz      short loc_9A5CEC
0x9A5CB8: mov     edx, [ecx+20h]
0x9A5CBB: mov     ecx, [edx+10h]
0x9A5CBE: test    ecx, ecx
0x9A5CC0: jz      short loc_9A5CEC
0x9A5CC2: mov     ecx, [ecx+0Ch]
0x9A5CC5: test    ecx, ecx
0x9A5CC7: jz      short loc_9A5CEC
0x9A5CC9: call    sub_76C710
0x9A5CCE: cmp     ebx, 36h ; '6'
0x9A5CD1: mov     cl, 1
0x9A5CD3: jz      short loc_9A5CDA
0x9A5CD5: cmp     ebx, 38h ; '8'
0x9A5CD8: jnz     short loc_9A5CDE
0x9A5CDA: mov     byte ptr [esp+180h+var_168], cl
0x9A5CDE: cmp     ebx, 37h ; '7'
0x9A5CE1: jz      short loc_9A5CE8
0x9A5CE3: cmp     ebx, 38h ; '8'
0x9A5CE6: jnz     short loc_9A5CEC
0x9A5CE8: mov     byte ptr [esp+180h+var_16C], cl
0x9A5CEC: mov     ecx, [esp+180h+var_16C]
0x9A5CF0: mov     edx, [esp+180h+var_168]
0x9A5CF4: jmp     loc_9A5B89
0x9A5CF9: mov     ecx, [ebp+arg_18]; jumptable 009A5702 cases 57-60
0x9A5CFC: mov     ecx, [ecx+20h]
0x9A5CFF: xor     eax, eax
0x9A5D01: test    ecx, ecx
0x9A5D03: mov     byte ptr [esp+180h+var_168], al
0x9A5D07: mov     byte ptr [esp+180h+var_16C], al
0x9A5D0B: jz      short loc_9A5D41
0x9A5D0D: mov     edx, [ecx+20h]
0x9A5D10: mov     ecx, [edx+14h]
0x9A5D13: test    ecx, ecx
0x9A5D15: jz      short loc_9A5D41
0x9A5D17: mov     ecx, [ecx+0Ch]
0x9A5D1A: test    ecx, ecx
0x9A5D1C: jz      short loc_9A5D41
0x9A5D1E: call    sub_76C710
0x9A5D23: cmp     ebx, 3Ah ; ':'
0x9A5D26: mov     cl, 1
0x9A5D28: jz      short loc_9A5D2F
0x9A5D2A: cmp     ebx, 3Ch ; '<'
0x9A5D2D: jnz     short loc_9A5D33
0x9A5D2F: mov     byte ptr [esp+180h+var_168], cl
0x9A5D33: cmp     ebx, 3Bh ; ';'
0x9A5D36: jz      short loc_9A5D3D
0x9A5D38: cmp     ebx, 3Ch ; '<'
0x9A5D3B: jnz     short loc_9A5D41
0x9A5D3D: mov     byte ptr [esp+180h+var_16C], cl
0x9A5D41: mov     ecx, [esp+180h+var_16C]
0x9A5D45: mov     edx, [esp+180h+var_168]
0x9A5D49: jmp     loc_9A5B89
0x9A5D4E: mov     ecx, [ebp+arg_18]; jumptable 009A5702 cases 61-64
0x9A5D51: mov     ecx, [ecx+20h]
0x9A5D54: xor     eax, eax
0x9A5D56: test    ecx, ecx
0x9A5D58: mov     byte ptr [esp+180h+var_168], al
0x9A5D5C: mov     byte ptr [esp+180h+var_16C], al
0x9A5D60: jz      short loc_9A5D9D
0x9A5D62: mov     edx, [ebp+arg_4]
0x9A5D65: mov     edx, [edx+18h]
0x9A5D68: mov     ecx, [ecx+20h]
0x9A5D6B: mov     ecx, [ecx+edx*4+18h]
0x9A5D6F: test    ecx, ecx
0x9A5D71: jz      short loc_9A5D9D
0x9A5D73: mov     ecx, [ecx+0Ch]
0x9A5D76: test    ecx, ecx
0x9A5D78: jz      short loc_9A5D9D
0x9A5D7A: call    sub_76C710
0x9A5D7F: cmp     ebx, 3Eh ; '>'
0x9A5D82: mov     cl, 1
0x9A5D84: jz      short loc_9A5D8B
0x9A5D86: cmp     ebx, 40h ; '@'
0x9A5D89: jnz     short loc_9A5D8F
0x9A5D8B: mov     byte ptr [esp+180h+var_168], cl
0x9A5D8F: cmp     ebx, 3Fh ; '?'
0x9A5D92: jz      short loc_9A5D99
0x9A5D94: cmp     ebx, 40h ; '@'
0x9A5D97: jnz     short loc_9A5D9D
0x9A5D99: mov     byte ptr [esp+180h+var_16C], cl
0x9A5D9D: mov     edx, [esp+180h+var_16C]
0x9A5DA1: mov     ecx, [esp+180h+var_168]
0x9A5DA5: push    edx
0x9A5DA6: push    ecx
0x9A5DA7: push    eax
0x9A5DA8: lea     edx, [esp+18Ch+var_100]
0x9A5DAF: push    edx
0x9A5DB0: call    sub_9A5510
0x9A5DB5: mov     ecx, [ebp+arg_0]
0x9A5DB8: mov     eax, [ecx]
0x9A5DBA: mov     eax, [eax+28h]
0x9A5DBD: add     esp, 10h
0x9A5DC0: push    0
0x9A5DC2: lea     edx, [esp+184h+var_100]
0x9A5DC9: push    edx
0x9A5DCA: mov     edx, [ebp+arg_4]
0x9A5DCD: push    edx
0x9A5DCE: call    eax
0x9A5DD0: jmp     loc_9A60E4
0x9A5DD5: mov     ecx, [ebp+arg_18]; jumptable 009A5702 cases 65-68
0x9A5DD8: mov     ecx, [ecx+20h]
0x9A5DDB: xor     esi, esi
0x9A5DDD: test    ecx, ecx
0x9A5DDF: mov     byte ptr [esp+180h+var_168], 0
0x9A5DE4: mov     byte ptr [esp+180h+var_16C], 0
0x9A5DE9: jz      short loc_9A5E27
0x9A5DEB: mov     edx, [ebp+arg_4]
0x9A5DEE: mov     eax, [edx+18h]
0x9A5DF1: push    eax
0x9A5DF2: call    sub_6D1920
0x9A5DF7: test    eax, eax
0x9A5DF9: jz      short loc_9A5E27
0x9A5DFB: mov     ecx, [eax+0Ch]
0x9A5DFE: test    ecx, ecx
0x9A5E00: jz      short loc_9A5E27
0x9A5E02: call    sub_76C710
0x9A5E07: cmp     ebx, 42h ; 'B'
0x9A5E0A: mov     esi, eax
0x9A5E0C: mov     al, 1
0x9A5E0E: jz      short loc_9A5E15
0x9A5E10: cmp     ebx, 44h ; 'D'
0x9A5E13: jnz     short loc_9A5E19
0x9A5E15: mov     byte ptr [esp+180h+var_168], al
0x9A5E19: cmp     ebx, 43h ; 'C'
0x9A5E1C: jz      short loc_9A5E23
0x9A5E1E: cmp     ebx, 44h ; 'D'
0x9A5E21: jnz     short loc_9A5E27
0x9A5E23: mov     byte ptr [esp+180h+var_16C], al
0x9A5E27: mov     ecx, [esp+180h+var_16C]
0x9A5E2B: mov     edx, [esp+180h+var_168]
0x9A5E2F: push    ecx
0x9A5E30: push    edx
0x9A5E31: lea     eax, [esp+188h+var_100]
0x9A5E38: push    esi
0x9A5E39: push    eax
0x9A5E3A: call    sub_9A5510
0x9A5E3F: add     esp, 10h
0x9A5E42: lea     eax, [esp+180h+var_100]
0x9A5E49: jmp     loc_9A60D3
0x9A5E4E: mov     eax, [ebp+arg_18]; jumptable 009A5702 case 73
0x9A5E51: mov     eax, [eax+10h]
0x9A5E54: test    eax, eax
0x9A5E56: jz      def_9A5702; jumptable 009A5702 default case, cases 69-72,78,79
0x9A5E5C: fld     dword ptr [eax+28h]
0x9A5E5F: fstp    [esp+180h+var_160]
0x9A5E63: fld     dword ptr [eax+2Ch]
0x9A5E66: fstp    [esp+180h+var_15C]
0x9A5E6A: fld     dword ptr [eax+30h]
0x9A5E6D: fstp    [esp+180h+var_158]
0x9A5E71: fld     dword ptr [eax+50h]
0x9A5E74: fstp    [esp+180h+var_154]
0x9A5E78: jmp     loc_9A60CF
0x9A5E7D: mov     eax, [ebp+arg_18]; jumptable 009A5702 case 74
0x9A5E80: mov     eax, [eax+10h]
0x9A5E83: test    eax, eax
0x9A5E85: jz      def_9A5702; jumptable 009A5702 default case, cases 69-72,78,79
0x9A5E8B: fld     dword ptr [eax+1Ch]
0x9A5E8E: fstp    [esp+180h+var_160]
0x9A5E92: fld     dword ptr [eax+20h]
0x9A5E95: fstp    [esp+180h+var_15C]
0x9A5E99: fld     dword ptr [eax+24h]
0x9A5E9C: fstp    [esp+180h+var_158]
0x9A5EA0: fld     dword ptr [eax+50h]
0x9A5EA3: fstp    [esp+180h+var_154]
0x9A5EA7: jmp     loc_9A60CF
0x9A5EAC: mov     eax, [ebp+arg_18]; jumptable 009A5702 case 75
0x9A5EAF: mov     eax, [eax+10h]
0x9A5EB2: test    eax, eax
0x9A5EB4: jz      def_9A5702; jumptable 009A5702 default case, cases 69-72,78,79
0x9A5EBA: fld     dword ptr [eax+34h]
0x9A5EBD: fstp    [esp+180h+var_160]
0x9A5EC1: fld     dword ptr [eax+38h]
0x9A5EC4: fstp    [esp+180h+var_15C]
0x9A5EC8: fld     dword ptr [eax+3Ch]
0x9A5ECB: fstp    [esp+180h+var_158]
0x9A5ECF: fld     dword ptr [eax+50h]
0x9A5ED2: fstp    [esp+180h+var_154]
0x9A5ED6: jmp     loc_9A60CF
0x9A5EDB: mov     eax, [ebp+arg_18]; jumptable 009A5702 case 76
0x9A5EDE: mov     eax, [eax+10h]
0x9A5EE1: test    eax, eax
0x9A5EE3: jz      def_9A5702; jumptable 009A5702 default case, cases 69-72,78,79
0x9A5EE9: fld     dword ptr [eax+40h]
0x9A5EEC: fstp    [esp+180h+var_160]
0x9A5EF0: fld     dword ptr [eax+44h]
0x9A5EF3: fstp    [esp+180h+var_15C]
0x9A5EF7: fld     dword ptr [eax+48h]
0x9A5EFA: fstp    [esp+180h+var_158]
0x9A5EFE: fld     dword ptr [eax+50h]
0x9A5F01: fstp    [esp+180h+var_154]
0x9A5F05: jmp     loc_9A60CF
0x9A5F0A: mov     eax, [ebp+arg_18]; jumptable 009A5702 case 77
0x9A5F0D: mov     eax, [eax+10h]
0x9A5F10: test    eax, eax
0x9A5F12: jz      def_9A5702; jumptable 009A5702 default case, cases 69-72,78,79
0x9A5F18: fld     dword ptr [eax+4Ch]
0x9A5F1B: fstp    [esp+180h+var_160]
0x9A5F1F: fld     dword ptr [eax+4Ch]
0x9A5F22: fstp    [esp+180h+var_15C]
0x9A5F26: fld     dword ptr [eax+4Ch]
0x9A5F29: fstp    [esp+180h+var_158]
0x9A5F2D: fld     dword ptr [eax+4Ch]
0x9A5F30: fstp    [esp+180h+var_154]
0x9A5F34: jmp     loc_9A60CF
0x9A5F39: mov     ecx, [ebp+arg_0]; jumptable 009A5702 cases 80,81
0x9A5F3C: mov     eax, [ecx]
0x9A5F3E: mov     edx, [ebp+arg_4]
0x9A5F41: mov     eax, [eax+28h]
0x9A5F44: push    0
0x9A5F46: push    0
0x9A5F48: push    edx
0x9A5F49: call    eax
0x9A5F4B: jmp     loc_9A60E4
0x9A5F50: mov     ecx, off_B329E4; jumptable 009A5702 cases 82-86
0x9A5F56: push    ecx
0x9A5F57: mov     ecx, [ebp+arg_8]
0x9A5F5A: call    NiObjectNET_GetExtraData
0x9A5F5F: test    eax, eax
0x9A5F61: jnz     short loc_9A5F6B
0x9A5F63: mov     [esp+180h+var_164], 80000010h
0x9A5F6B: fld     dword ptr [eax+0Ch]
0x9A5F6E: add     ebx, 0FFFFFFAEh; switch 5 cases
0x9A5F71: cmp     ebx, 4
0x9A5F74: fstp    [esp+180h+var_168]
0x9A5F78: ja      def_9A5F7E
0x9A5F7E: jmp     ds:jpt_9A5F7E[ebx*4]; switch jump
0x9A5F85: fld     [esp+180h+var_168]; jumptable 009A5F7E case 82
0x9A5F89: lea     eax, [esp+180h+var_150]
0x9A5F8D: fst     [esp+180h+var_150]
0x9A5F91: fst     [esp+180h+var_14C]
0x9A5F95: fst     [esp+180h+var_148]
0x9A5F99: fstp    [esp+180h+var_144]
0x9A5F9D: jmp     loc_9A60D3
0x9A5FA2: fld     [esp+180h+var_168]; jumptable 009A5F7E case 83
0x9A5FA6: call    __CIsin
0x9A5FAB: fstp    [esp+180h+var_16C]
0x9A5FAF: fld     [esp+180h+var_16C]
0x9A5FB3: fstp    [esp+180h+var_16C]
0x9A5FB7: lea     eax, [esp+180h+var_150]
0x9A5FBB: fld     [esp+180h+var_16C]
0x9A5FBF: fst     [esp+180h+var_150]
0x9A5FC3: fst     [esp+180h+var_14C]
0x9A5FC7: fst     [esp+180h+var_148]
0x9A5FCB: fstp    [esp+180h+var_144]
0x9A5FCF: jmp     loc_9A60D3
0x9A5FD4: fld     [esp+180h+var_168]; jumptable 009A5F7E case 84
0x9A5FD8: call    __CIcos
0x9A5FDD: fstp    [esp+180h+var_16C]
0x9A5FE1: fld     [esp+180h+var_16C]
0x9A5FE5: jmp     short loc_9A5FB3
0x9A5FE7: fld     [esp+180h+var_168]; jumptable 009A5F7E case 85
0x9A5FEB: call    __CItan
0x9A5FF0: fstp    [esp+180h+var_16C]
0x9A5FF4: fld     [esp+180h+var_16C]
0x9A5FF8: jmp     short loc_9A5FB3
0x9A5FFA: fld     [esp+180h+var_168]; jumptable 009A5F7E case 86
0x9A5FFE: fst     [esp+180h+var_150]
0x9A6002: call    __CIsin
0x9A6007: fstp    [esp+180h+var_16C]
0x9A600B: fld     [esp+180h+var_16C]
0x9A600F: fstp    [esp+180h+var_14C]
0x9A6013: fld     [esp+180h+var_168]
0x9A6017: call    __CIcos
0x9A601C: fstp    [esp+180h+var_16C]
0x9A6020: fld     [esp+180h+var_16C]
0x9A6024: fstp    [esp+180h+var_148]
0x9A6028: fld     [esp+180h+var_168]
0x9A602C: call    __CItan
0x9A6031: fstp    [esp+180h+var_16C]
0x9A6035: fld     [esp+180h+var_16C]
0x9A6039: lea     eax, [esp+180h+var_150]
0x9A603D: fstp    [esp+180h+var_144]
0x9A6041: jmp     loc_9A60D3
