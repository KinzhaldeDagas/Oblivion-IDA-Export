0x8978D0: sub     esp, 0A4h
0x8978D6: push    ebx
0x8978D7: push    esi
0x8978D8: mov     esi, ecx
0x8978DA: mov     [esp+0ACh+var_A0], esi
0x8978DE: call    sub_452A60
0x8978E3: mov     ebx, eax
0x8978E5: test    ebx, ebx
0x8978E7: jz      loc_897A10
0x8978ED: mov     cl, [esi+0Ch]
0x8978F0: mov     eax, [ebx+1Ch]
0x8978F3: push    ebp
0x8978F4: mov     ebp, [esp+0B0h+arg_0]
0x8978FB: shr     cl, 3
0x8978FE: test    cl, 1
0x897901: push    edi
0x897902: jz      short loc_89795B
0x897904: test    eax, eax
0x897906: jz      short loc_89792B
0x897908: lea     edx, [esp+0B4h+var_68]
0x89790C: push    edx
0x89790D: lea     ecx, [eax+64h]
0x897910: call    sub_718A80
0x897915: push    ebp
0x897916: lea     eax, [esp+0B8h+var_34]
0x89791D: push    eax
0x89791E: lea     ecx, [esp+0BCh+var_68]
0x897922: call    sub_53D7A0
0x897927: mov     esi, eax
0x897929: jmp     short loc_89792D
0x89792B: mov     esi, ebp
0x89792D: mov     ecx, 0Dh
0x897932: lea     edi, [esp+0B4h+var_9C]
0x897936: rep movsd
0x897938: mov     edx, [esp+0B4h+var_74]
0x89793C: mov     eax, [esp+0B4h+var_70]
0x897940: lea     edi, [ebx+30h]
0x897943: mov     ecx, 9
0x897948: lea     esi, [esp+0B4h+var_9C]
0x89794C: rep movsd
0x89794E: mov     ecx, [esp+0B4h+var_78]
0x897952: mov     [ebx+54h], ecx
0x897955: mov     [ebx+58h], edx
0x897958: mov     [ebx+5Ch], eax
0x89795B: cmp     byte ptr ds:0BA7A90h, 0
0x897962: mov     [esp+0B4h+var_A4], 0
0x89796A: jz      short loc_897976
0x89796C: mov     [esp+0B4h+var_A4], 3
0x897974: jmp     short loc_8979C6
0x897976: fld     dword ptr ds:0A37080h
0x89797C: push    ecx
0x89797D: fstp    [esp+0B8h+var_B8]; float
0x897980: lea     ecx, [ebx+64h]
0x897983: push    ebp; int
0x897984: push    ecx; int
0x897985: call    sub_897490
0x89798A: add     esp, 0Ch
0x89798D: test    al, al
0x89798F: jnz     short loc_897999
0x897991: mov     [esp+0B4h+var_A4], 2
0x897999: fld     dword ptr ds:0A34BA0h
0x89799F: push    ecx
0x8979A0: lea     edx, [ebp+24h]
0x8979A3: fstp    [esp+0B8h+var_B8]; float
0x8979A6: push    edx; int
0x8979A7: lea     eax, [ebx+88h]
0x8979AD: push    eax; int
0x8979AE: call    sub_8904E0
0x8979B3: add     esp, 0Ch
0x8979B6: test    al, al
0x8979B8: jnz     short loc_8979BF
0x8979BA: or      [esp+0B4h+var_A4], 1
0x8979BF: cmp     [esp+0B4h+var_A4], 0
0x8979C4: jz      short loc_897A0E
0x8979C6: lea     eax, [ebp+24h]
0x8979C9: lea     edi, [ebx+64h]
0x8979CC: mov     ecx, 9
0x8979D1: mov     esi, ebp
0x8979D3: rep movsd
0x8979D5: mov     ecx, [eax]
0x8979D7: add     ebx, 88h ; 'ˆ'
0x8979DD: mov     [ebx], ecx
0x8979DF: mov     edx, [eax+4]
0x8979E2: mov     [ebx+4], edx
0x8979E5: mov     eax, [eax+8]
0x8979E8: mov     [ebx+8], eax
0x8979EB: mov     eax, ds:0BA7A88h
0x8979F0: test    eax, eax
0x8979F2: jz      short loc_897A0E
0x8979F4: mov     ecx, [esp+0B4h+var_A0]
0x8979F8: mov     dl, [ecx+0Ch]
0x8979FB: shr     dl, 2
0x8979FE: test    dl, 1
0x897A01: jz      short loc_897A0E
0x897A03: mov     edx, [esp+0B4h+var_A4]
0x897A07: push    edx
0x897A08: push    ecx
0x897A09: call    eax ; dword_BA7A88
0x897A0B: add     esp, 8
0x897A0E: pop     edi
0x897A0F: pop     ebp
0x897A10: pop     esi
0x897A11: pop     ebx
0x897A12: add     esp, 0A4h
0x897A18: retn    4
