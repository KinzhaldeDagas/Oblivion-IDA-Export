0x724700: mov     eax, [esp+arg_4]
0x724704: push    esi
0x724705: push    edi
0x724706: mov     esi, ecx
0x724708: mov     ecx, [esp+8+arg_0]
0x72470C: push    eax
0x72470D: push    ecx
0x72470E: mov     ecx, esi
0x724710: call    NiNode__AddObject
0x724715: mov     dword ptr [esi+0E8h], 1
0x72471F: movzx   edi, word ptr [esi+0F6h]
0x724726: movzx   edx, word ptr [esi+0F4h]
0x72472D: add     esi, 0ECh ; 'ì'
0x724733: cmp     edi, edx
0x724735: mov     [esp+8+arg_4], 0
0x72473D: jb      short loc_72474D
0x72473F: movzx   eax, word ptr [esi+0Eh]
0x724743: add     eax, edi
0x724745: push    eax
0x724746: mov     ecx, esi
0x724748: call    NiTArray_SetSize
0x72474D: lea     ecx, [esp+8+arg_4]
0x724751: push    ecx
0x724752: push    edi
0x724753: mov     ecx, esi
0x724755: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x72475A: pop     edi
0x72475B: pop     esi
0x72475C: retn    8
