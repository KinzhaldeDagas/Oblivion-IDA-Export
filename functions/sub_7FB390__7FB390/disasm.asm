0x7FB390: push    esi
0x7FB391: push    edi
0x7FB392: mov     edi, ecx
0x7FB394: cmp     dword ptr [edi+24h], 0
0x7FB398: jz      short loc_7FB3BC
0x7FB39A: xor     esi, esi
0x7FB39C: lea     esp, [esp+0]
0x7FB3A0: mov     ecx, ds:dword_B47288[esi]
0x7FB3A6: test    ecx, ecx
0x7FB3A8: jz      short loc_7FB3B1
0x7FB3AA: mov     eax, [ecx]
0x7FB3AC: mov     edx, [eax+5Ch]
0x7FB3AF: call    edx
0x7FB3B1: add     esi, 4
0x7FB3B4: cmp     esi, 80h ; '€'
0x7FB3BA: jb      short loc_7FB3A0
0x7FB3BC: xor     esi, esi
0x7FB3BE: mov     edi, edi
0x7FB3C0: mov     ecx, ds:dword_B46ED8[esi]
0x7FB3C6: test    ecx, ecx
0x7FB3C8: jz      short loc_7FB3D1
0x7FB3CA: mov     eax, [ecx]
0x7FB3CC: mov     edx, [eax+44h]
0x7FB3CF: call    edx
0x7FB3D1: mov     ecx, ds:dword_B46C20[esi]
0x7FB3D7: test    ecx, ecx
0x7FB3D9: jz      short loc_7FB3E2
0x7FB3DB: mov     eax, [ecx]
0x7FB3DD: mov     edx, [eax+44h]
0x7FB3E0: call    edx
0x7FB3E2: add     esi, 4
0x7FB3E5: cmp     esi, 9Ch ; 'œ'
0x7FB3EB: jb      short loc_7FB3C0
0x7FB3ED: mov     ecx, edi
0x7FB3EF: pop     edi
0x7FB3F0: pop     esi
0x7FB3F1: jmp     sub_77A4A0
