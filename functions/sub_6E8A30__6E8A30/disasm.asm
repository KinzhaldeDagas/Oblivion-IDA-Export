0x6E8A30: sub     esp, 8
0x6E8A33: push    ebx
0x6E8A34: mov     ebx, [esp+0Ch+a2]
0x6E8A38: push    esi
0x6E8A39: push    edi
0x6E8A3A: push    ebx; a2
0x6E8A3B: mov     edi, ecx
0x6E8A3D: call    sub_7008A0
0x6E8A42: mov     eax, [ebx+21Ch]
0x6E8A48: push    1
0x6E8A4A: lea     ecx, [esp+18h+var_8]
0x6E8A4E: push    ecx
0x6E8A4F: push    4
0x6E8A51: lea     edx, [esp+20h+a2]
0x6E8A55: push    edx
0x6E8A56: push    eax
0x6E8A57: mov     eax, [eax+4]
0x6E8A5A: mov     esi, 5
0x6E8A5F: mov     [esp+28h+var_8], 4
0x6E8A67: call    eax
0x6E8A69: add     esp, 14h
0x6E8A6C: cmp     [esp+14h+a2], 0
0x6E8A71: jbe     short loc_6E8AE7
0x6E8A73: cmp     dword ptr [ebx+0D8h], 0A010068h
0x6E8A7D: jb      short loc_6E8AA8
0x6E8A7F: mov     eax, [ebx+21Ch]
0x6E8A85: push    1
0x6E8A87: lea     ecx, [esp+18h+var_8]
0x6E8A8B: push    ecx
0x6E8A8C: push    4
0x6E8A8E: lea     edx, [esp+20h+var_4]
0x6E8A92: push    edx
0x6E8A93: push    eax
0x6E8A94: mov     eax, [eax+4]
0x6E8A97: mov     [esp+28h+var_8], 4
0x6E8A9F: call    eax
0x6E8AA1: mov     esi, [esp+28h+var_4]
0x6E8AA5: add     esp, 14h
0x6E8AA8: mov     edx, [esp+14h+a2]
0x6E8AAC: mov     cl, ds:byte_B3D406[esi]
0x6E8AB2: push    edx
0x6E8AB3: mov     [edi+14h], cl
0x6E8AB6: mov     eax, ds:0B3D100h[esi*4]
0x6E8ABD: push    ebx
0x6E8ABE: call    eax ; dword_B3D100
0x6E8AC0: mov     ecx, [esp+1Ch+a2]
0x6E8AC4: mov     edx, ds:0B3D488h[esi*4]
0x6E8ACB: mov     ebx, eax
0x6E8ACD: movzx   eax, byte ptr [edi+14h]
0x6E8AD1: push    eax
0x6E8AD2: push    ecx
0x6E8AD3: push    ebx
0x6E8AD4: call    edx
0x6E8AD6: mov     eax, [esp+28h+a2]
0x6E8ADA: add     esp, 14h
0x6E8ADD: push    esi
0x6E8ADE: push    eax
0x6E8ADF: push    ebx
0x6E8AE0: mov     ecx, edi
0x6E8AE2: call    sub_6E88C0
0x6E8AE7: pop     edi
0x6E8AE8: pop     esi
0x6E8AE9: pop     ebx
0x6E8AEA: add     esp, 8
0x6E8AED: retn    4
