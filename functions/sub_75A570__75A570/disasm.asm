0x75A570: push    ecx
0x75A571: push    ebx
0x75A572: mov     ebx, ecx
0x75A574: mov     ecx, [ebx+18h]
0x75A577: test    ecx, ecx
0x75A579: push    esi
0x75A57A: push    edi
0x75A57B: mov     edi, [esp+10h+arg_4]
0x75A57F: jz      short loc_75A58F
0x75A581: cmp     word ptr [edi+48h], 0
0x75A586: jbe     short loc_75A58F
0x75A588: mov     eax, [ecx]
0x75A58A: mov     edx, [eax+54h]
0x75A58D: call    edx
0x75A58F: xor     esi, esi
0x75A591: cmp     [edi+48h], si
0x75A595: jbe     short loc_75A613
0x75A597: jmp     short loc_75A5A0
0x75A599: align 10h
0x75A5A0: mov     eax, [ebx+10h]
0x75A5A3: fld     dword ptr [eax+0E8h]
0x75A5A9: mov     ecx, [ebx+18h]
0x75A5AC: test    ecx, ecx
0x75A5AE: fstp    [esp+10h+var_4]
0x75A5B2: fld     [esp+10h+arg_0]
0x75A5B6: fstp    [esp+10h+arg_4]
0x75A5BA: jz      short loc_75A5EB
0x75A5BC: mov     edx, [ecx]
0x75A5BE: fld     [esp+10h+var_4]
0x75A5C2: mov     edx, [edx+4Ch]
0x75A5C5: push    esi
0x75A5C6: push    edi
0x75A5C7: lea     eax, [esp+18h+arg_4]
0x75A5CB: push    eax
0x75A5CC: push    ecx
0x75A5CD: fstp    [esp+20h+var_20]
0x75A5D0: call    edx
0x75A5D2: test    eax, eax
0x75A5D4: jz      short loc_75A5EB
0x75A5D6: mov     edx, [eax]
0x75A5D8: fld     [esp+10h+arg_0]
0x75A5DC: push    esi
0x75A5DD: push    edi
0x75A5DE: push    ecx
0x75A5DF: mov     ecx, eax
0x75A5E1: fstp    [esp+1Ch+var_1C]
0x75A5E4: mov     eax, [edx+50h]
0x75A5E7: call    eax
0x75A5E9: jmp     short loc_75A5F3
0x75A5EB: fld     [esp+10h+var_4]
0x75A5EF: fstp    [esp+10h+arg_4]
0x75A5F3: mov     edx, [edi+5Ch]
0x75A5F6: fld     [esp+10h+arg_4]
0x75A5FA: movzx   eax, si
0x75A5FD: lea     ecx, ds:0[eax*8]
0x75A604: sub     ecx, eax
0x75A606: add     esi, 1
0x75A609: fstp    dword ptr [edx+ecx*4+14h]
0x75A60D: cmp     si, [edi+48h]
0x75A611: jb      short loc_75A5A0
0x75A613: pop     edi
0x75A614: pop     esi
0x75A615: pop     ebx
0x75A616: pop     ecx
0x75A617: retn    8
