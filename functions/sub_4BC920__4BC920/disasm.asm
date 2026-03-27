0x4BC920: sub     esp, 28h
0x4BC923: push    esi
0x4BC924: mov     esi, [esp+2Ch+arg_0]
0x4BC928: test    esi, esi
0x4BC92A: jz      loc_4BC9F6
0x4BC930: push    ebx
0x4BC931: push    ebp
0x4BC932: push    edi
0x4BC933: jmp     short loc_4BC939
0x4BC935: mov     esi, [esp+38h+arg_0]
0x4BC939: cmp     dword ptr [esi+4], 0
0x4BC93D: jnz     short loc_4BC948
0x4BC93F: cmp     dword ptr [esi], 0
0x4BC942: jz      loc_4BC9F3
0x4BC948: mov     ebp, [esi]
0x4BC94A: mov     eax, [ebp+8]
0x4BC94D: shr     eax, 5
0x4BC950: test    al, 1
0x4BC952: jnz     loc_4BC9E4
0x4BC958: mov     edx, [ebp+0]
0x4BC95B: mov     eax, [edx+170h]
0x4BC961: mov     ecx, ebp
0x4BC963: call    eax
0x4BC965: cmp     byte ptr [eax+4], 29h ; ')'
0x4BC969: jnz     short loc_4BC9E4
0x4BC96B: push    ebp
0x4BC96C: call    sub_4BC7D0
0x4BC971: mov     ebx, eax
0x4BC973: add     esp, 4
0x4BC976: test    ebx, ebx
0x4BC978: jz      short loc_4BC9E4
0x4BC97A: mov     edx, [ebp+0]
0x4BC97D: mov     eax, [edx+174h]
0x4BC983: mov     ecx, ebp
0x4BC985: call    eax
0x4BC987: mov     ecx, [eax]
0x4BC989: mov     [ebx+54h], ecx
0x4BC98C: mov     edx, [eax+4]
0x4BC98F: mov     [ebx+58h], edx
0x4BC992: mov     eax, [eax+8]
0x4BC995: lea     ecx, [esp+38h+var_24]
0x4BC999: push    ecx
0x4BC99A: mov     ecx, ebp
0x4BC99C: mov     [ebx+5Ch], eax
0x4BC99F: call    sub_4D7AF0
0x4BC9A4: mov     esi, eax
0x4BC9A6: lea     edi, [ebx+30h]
0x4BC9A9: mov     ecx, 9
0x4BC9AE: rep movsd
0x4BC9B0: mov     edx, [ebp+0]
0x4BC9B3: mov     eax, [edx+0ECh]
0x4BC9B9: mov     ecx, ebp
0x4BC9BB: call    eax
0x4BC9BD: push    ecx
0x4BC9BE: fabs
0x4BC9C0: fstp    [esp+3Ch+var_28]
0x4BC9C4: fld     [esp+3Ch+var_28]
0x4BC9C8: fstp    dword ptr [ebx+60h]
0x4BC9CB: mov     ecx, ds:0B333A0h
0x4BC9D1: fld     dword ptr ds:0A3D8F0h
0x4BC9D7: fstp    [esp+3Ch+var_3C]; float
0x4BC9DA: push    ebx; int
0x4BC9DB: call    sub_440E60
0x4BC9E0: mov     esi, [esp+38h+arg_0]
0x4BC9E4: mov     esi, [esi+4]
0x4BC9E7: test    esi, esi
0x4BC9E9: mov     [esp+38h+arg_0], esi
0x4BC9ED: jnz     loc_4BC935
0x4BC9F3: pop     edi
0x4BC9F4: pop     ebp
0x4BC9F5: pop     ebx
0x4BC9F6: pop     esi
0x4BC9F7: add     esp, 28h
0x4BC9FA: retn
