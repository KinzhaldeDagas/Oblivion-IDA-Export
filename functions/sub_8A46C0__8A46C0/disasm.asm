0x8A46C0: push    esi
0x8A46C1: mov     esi, [esp+4+arg_0]
0x8A46C5: test    esi, esi
0x8A46C7: push    edi
0x8A46C8: mov     edi, ecx
0x8A46CA: jz      short loc_8A472E
0x8A46CC: mov     eax, [esi]
0x8A46CE: mov     edx, [eax+4]
0x8A46D1: mov     ecx, esi
0x8A46D3: call    edx
0x8A46D5: test    eax, eax
0x8A46D7: jz      short loc_8A46EE
0x8A46D9: lea     esp, [esp+0]
0x8A46E0: cmp     eax, offset stru_BA7D50
0x8A46E5: jz      short loc_8A4713
0x8A46E7: mov     eax, [eax+4]
0x8A46EA: test    eax, eax
0x8A46EC: jnz     short loc_8A46E0
0x8A46EE: mov     eax, [esi]
0x8A46F0: mov     edx, [eax+4]
0x8A46F3: mov     ecx, esi
0x8A46F5: call    edx
0x8A46F7: test    eax, eax
0x8A46F9: jz      short loc_8A472E
0x8A46FB: jmp     short loc_8A4700
0x8A46FD: align 10h
0x8A4700: cmp     eax, offset dword_BA7D04
0x8A4705: jz      short loc_8A4713
0x8A4707: mov     eax, [eax+4]
0x8A470A: test    eax, eax
0x8A470C: jnz     short loc_8A4700
0x8A470E: pop     edi
0x8A470F: pop     esi
0x8A4710: retn    4
0x8A4713: push    ecx
0x8A4714: mov     eax, esp
0x8A4716: mov     [eax], esi
0x8A4718: mov     [esp+0Ch+arg_0], esp
0x8A471C: add     esi, 4
0x8A471F: push    esi; lpAddend
0x8A4720: call    dword ptr ds:0A28078h
0x8A4726: lea     ecx, [edi+10h]
0x8A4729: call    sub_8A4070
0x8A472E: pop     edi
0x8A472F: pop     esi
0x8A4730: retn    4
