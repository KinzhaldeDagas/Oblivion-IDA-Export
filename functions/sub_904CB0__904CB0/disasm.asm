0x904CB0: push    ebp
0x904CB1: mov     ebp, esp
0x904CB3: and     esp, 0FFFFFFF0h
0x904CB6: sub     esp, 0C4h
0x904CBC: mov     ecx, ds:0BA7D98h
0x904CC2: mov     eax, [ecx]
0x904CC4: push    ebx
0x904CC5: push    esi
0x904CC6: push    edi
0x904CC7: push    1Ch
0x904CC9: push    10h
0x904CCB: call    dword ptr [eax+10h]
0x904CCE: mov     ecx, [ebp+arg_C]
0x904CD1: mov     edi, [ebp+arg_4]
0x904CD4: mov     esi, eax
0x904CD6: mov     [esi+8], ecx
0x904CD9: mov     word ptr [esi+4], 10h
0x904CDF: mov     word ptr [esi+6], 1
0x904CE5: mov     dword ptr [esi], offset off_A9BD4C
0x904CEB: mov     eax, [edi]
0x904CED: mov     ebx, [eax+0Ch]
0x904CF0: mov     eax, [edi+8]
0x904CF3: push    eax
0x904CF4: lea     ecx, [esp+0D4h+var_B0]
0x904CF8: call    sub_903FA0
0x904CFD: mov     eax, [edi]
0x904CFF: add     eax, 20h ; ' '
0x904D02: push    eax
0x904D03: mov     eax, [edi+8]
0x904D06: push    eax
0x904D07: lea     ecx, [esp+0D8h+var_B0]
0x904D0B: call    sub_8B1F70
0x904D10: mov     [esp+0D0h+var_B4], edi
0x904D14: lea     edx, [esp+0D0h+var_B0]
0x904D18: mov     [esp+0D0h+var_B8], edx
0x904D1C: mov     eax, [edi+4]
0x904D1F: mov     edi, [ebp+arg_8]
0x904D22: mov     ecx, [edi]
0x904D24: mov     [esp+0D0h+var_BC], eax
0x904D28: mov     [esp+0D0h+var_C0], ebx
0x904D2C: mov     edx, [ebx]
0x904D2E: mov     [esp+0D0h+var_C4], ecx
0x904D32: mov     ecx, ebx
0x904D34: call    dword ptr [edx+8]
0x904D37: mov     ebx, eax
0x904D39: mov     eax, [ebp+arg_0]
0x904D3C: mov     ecx, [eax]
0x904D3E: mov     edx, [ecx]
0x904D40: call    dword ptr [edx+8]
0x904D43: mov     cl, [edi+0Ch]
0x904D46: test    cl, cl
0x904D48: mov     ecx, [esp+0D0h+var_C4]
0x904D4C: jz      short loc_904D56
0x904D4E: add     ecx, 590h
0x904D54: jmp     short loc_904D5C
0x904D56: add     ecx, 190h
0x904D5C: mov     edx, [ebp+arg_C]
0x904D5F: shl     ebx, 5
0x904D62: add     ebx, ecx
0x904D64: movzx   eax, byte ptr [ebx+eax]
0x904D68: mov     ecx, [esp+0D0h+var_C4]
0x904D6C: push    edx
0x904D6D: lea     eax, [eax+eax*4]
0x904D70: mov     eax, [ecx+eax*4+990h]
0x904D77: mov     ecx, [ebp+arg_0]
0x904D7A: push    edi
0x904D7B: push    ecx
0x904D7C: lea     edx, [esp+0DCh+var_C0]
0x904D80: push    edx
0x904D81: call    eax
0x904D83: add     esp, 10h
0x904D86: mov     [esi+0Ch], eax
0x904D89: pop     edi
0x904D8A: mov     dword ptr [esi], offset off_A9BD8C
0x904D90: mov     eax, esi
0x904D92: pop     esi
0x904D93: pop     ebx
0x904D94: mov     esp, ebp
0x904D96: pop     ebp
0x904D97: retn
