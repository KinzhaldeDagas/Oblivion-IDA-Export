0x88E950: push    0FFFFFFFFh
0x88E952: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x88E957: mov     eax, large fs:0
0x88E95D: push    eax
0x88E95E: push    ecx
0x88E95F: push    ebx
0x88E960: push    ebp
0x88E961: push    esi
0x88E962: push    edi
0x88E963: mov     eax, ds:0B30AACh
0x88E968: xor     eax, esp
0x88E96A: push    eax
0x88E96B: lea     eax, [esp+24h+var_C]
0x88E96F: mov     large fs:0, eax
0x88E975: mov     ebp, ecx
0x88E977: push    4Ch ; 'L'; Size
0x88E979: call    FormHeapAlloc
0x88E97E: mov     ebx, eax
0x88E980: add     esp, 4
0x88E983: mov     [esp+24h+var_10], ebx
0x88E987: test    ebx, ebx
0x88E989: mov     [esp+24h+var_4], 0
0x88E991: jz      short loc_88E9B1
0x88E993: mov     ecx, ebx
0x88E995: call    sub_88EB60
0x88E99A: lea     edi, [ebx+28h]
0x88E99D: mov     ecx, 9
0x88E9A2: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x88E9A7: mov     dword ptr [ebx], offset ??_7bhkBlendCollisionObjectAddRotation@@6B@; const bhkBlendCollisionObjectAddRotation::`vftable'
0x88E9AD: rep movsd
0x88E9AF: jmp     short loc_88E9B3
0x88E9B1: xor     ebx, ebx
0x88E9B3: mov     eax, [esp+24h+arg_0]
0x88E9B7: push    eax
0x88E9B8: push    ebx
0x88E9B9: mov     ecx, ebp
0x88E9BB: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x88E9C3: call    sub_88EA90
0x88E9C8: lea     esi, [ebp+28h]
0x88E9CB: lea     edi, [ebx+28h]
0x88E9CE: mov     ecx, 9
0x88E9D3: rep movsd
0x88E9D5: mov     eax, ebx
0x88E9D7: mov     ecx, [esp+24h+var_C]
0x88E9DB: mov     large fs:0, ecx
0x88E9E2: pop     ecx
0x88E9E3: pop     edi
0x88E9E4: pop     esi
0x88E9E5: pop     ebp
0x88E9E6: pop     ebx
0x88E9E7: add     esp, 10h
0x88E9EA: retn    4
