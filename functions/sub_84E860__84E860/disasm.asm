0x84E860: push    0FFFFFFFFh
0x84E862: push    offset SEH_879360
0x84E867: mov     eax, large fs:0
0x84E86D: push    eax
0x84E86E: push    ecx
0x84E86F: push    ebx
0x84E870: push    ebp
0x84E871: push    esi
0x84E872: push    edi
0x84E873: mov     eax, ds:0B30AACh
0x84E878: xor     eax, esp
0x84E87A: push    eax
0x84E87B: lea     eax, [esp+24h+var_C]
0x84E87F: mov     large fs:0, eax
0x84E885: mov     edi, ecx
0x84E887: mov     eax, ds:0B46538h
0x84E88C: mov     ecx, ds:0B4653Ch
0x84E892: mov     edx, ds:0B46540h
0x84E898: mov     esi, ds:0B45664h
0x84E89E: mov     ds:0B46528h, eax
0x84E8A3: mov     eax, ds:0B46544h
0x84E8A8: mov     ds:0B4652Ch, ecx
0x84E8AE: mov     ecx, [esp+24h+arg_8]
0x84E8B2: mov     ds:0B46530h, edx
0x84E8B8: mov     ds:0B46534h, eax
0x84E8BD: mov     eax, [ecx+10h]
0x84E8C0: push    eax
0x84E8C1: mov     ecx, edi
0x84E8C3: call    sub_848C40
0x84E8C8: mov     edx, [esi+24h]
0x84E8CB: mov     ebp, [esp+24h+arg_C]
0x84E8CF: mov     ebx, [edx]
0x84E8D1: mov     eax, [ebp+0]
0x84E8D4: mov     edx, [eax+8Ch]
0x84E8DA: push    0
0x84E8DC: mov     ecx, ebp
0x84E8DE: mov     [esp+28h+var_10], ebx
0x84E8E2: call    edx
0x84E8E4: test    eax, eax
0x84E8E6: jz      short loc_84E8FD
0x84E8E8: mov     eax, [ebp+0]
0x84E8EB: mov     edx, [eax+8Ch]
0x84E8F1: push    0
0x84E8F3: mov     ecx, ebp
0x84E8F5: call    edx
0x84E8F7: mov     [esp+24h+arg_8], eax
0x84E8FB: jmp     short loc_84E91B
0x84E8FD: test    dword ptr [ebp+1Ch], 80h
0x84E904: jbe     short loc_84E911
0x84E906: mov     eax, ds:0B430F0h
0x84E90B: mov     [esp+24h+arg_8], eax
0x84E90F: jmp     short loc_84E91B
0x84E911: mov     ecx, ds:0B430DCh
0x84E917: mov     [esp+24h+arg_8], ecx
0x84E91B: mov     ebx, [ebx+4]
0x84E91E: cmp     ebx, [esp+24h+arg_8]
0x84E922: jz      short loc_84E95F
0x84E924: test    ebx, ebx
0x84E926: jz      short loc_84E944
0x84E928: lea     edx, [ebx+4]
0x84E92B: push    edx; lpAddend
0x84E92C: call    dword ptr ds:0A2807Ch
0x84E932: test    eax, eax
0x84E934: jnz     short loc_84E944
0x84E936: test    ebx, ebx
0x84E938: jz      short loc_84E944
0x84E93A: mov     eax, [ebx]
0x84E93C: mov     edx, [eax]
0x84E93E: push    1
0x84E940: mov     ecx, ebx
0x84E942: call    edx
0x84E944: mov     eax, [esp+24h+arg_8]
0x84E948: test    eax, eax
0x84E94A: mov     ebx, [esp+24h+var_10]
0x84E94E: mov     [ebx+4], eax
0x84E951: jz      short loc_84E963
0x84E953: add     eax, 4
0x84E956: push    eax; lpAddend
0x84E957: call    dword ptr ds:0A28078h
0x84E95D: jmp     short loc_84E963
0x84E95F: mov     ebx, [esp+24h+var_10]
0x84E963: test    ebx, ebx
0x84E965: jz      short loc_84E982
0x84E967: cmp     byte ptr ds:0B42CDDh, 0
0x84E96E: jz      short loc_84E982
0x84E970: mov     eax, [ebp+0]
0x84E973: mov     edx, [eax+78h]
0x84E976: mov     ecx, ebp
0x84E978: call    edx
0x84E97A: push    eax
0x84E97B: mov     ecx, ebx
0x84E97D: call    sub_7715E0
0x84E982: mov     ebx, 1
0x84E987: add     [esi+60h], ebx
0x84E98A: mov     [esp+24h+arg_8], esi
0x84E98E: mov     ecx, [edi+38h]
0x84E991: lea     eax, [esp+24h+arg_8]
0x84E995: push    eax
0x84E996: push    ecx
0x84E997: lea     ecx, [edi+40h]
0x84E99A: mov     [esp+2Ch+var_4], 0
0x84E9A2: call    sub_76CE40
0x84E9A7: or      eax, 0FFFFFFFFh
0x84E9AA: add     [esi+60h], eax
0x84E9AD: mov     [esp+24h+var_4], eax
0x84E9B1: jnz     short loc_84E9BA
0x84E9B3: mov     ecx, esi
0x84E9B5: call    sub_7604D0
0x84E9BA: add     [edi+38h], ebx
0x84E9BD: mov     ecx, dword ptr [esp+24h+var_C]
0x84E9C1: mov     large fs:0, ecx
0x84E9C8: pop     ecx
0x84E9C9: pop     edi
0x84E9CA: pop     esi
0x84E9CB: pop     ebp
0x84E9CC: pop     ebx
0x84E9CD: add     esp, 10h
0x84E9D0: retn    10h
