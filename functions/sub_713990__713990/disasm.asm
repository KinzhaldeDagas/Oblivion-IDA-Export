0x713990: cmp     byte ptr [ecx+10h], 0
0x713994: jz      short loc_7139D7
0x713996: push    ebx
0x713997: mov     ebx, [esp+4+Src]
0x71399B: push    esi
0x71399C: mov     eax, ebx
0x71399E: push    edi
0x71399F: lea     edx, [eax+1]
0x7139A2: mov     cl, [eax]
0x7139A4: add     eax, 1
0x7139A7: test    cl, cl
0x7139A9: jnz     short loc_7139A2
0x7139AB: sub     eax, edx
0x7139AD: lea     esi, [eax+1]
0x7139B0: push    esi; Size
0x7139B1: call    FormHeapAlloc
0x7139B6: mov     edi, [esp+10h+arg_0]
0x7139BA: push    ebx; Src
0x7139BB: push    esi; SizeInBytes
0x7139BC: push    eax; Dst
0x7139BD: mov     [edi+4], eax
0x7139C0: call    _strcpy_s
0x7139C5: mov     ax, [esp+1Ch+arg_8]
0x7139CA: add     esp, 10h
0x7139CD: mov     [edi+8], ax
0x7139D1: pop     edi
0x7139D2: pop     esi
0x7139D3: pop     ebx
0x7139D4: retn    0Ch
0x7139D7: mov     eax, [esp+arg_0]
0x7139DB: mov     ecx, [esp+Src]
0x7139DF: mov     dx, [esp+arg_8]
0x7139E4: mov     [eax+4], ecx
0x7139E7: mov     [eax+8], dx
0x7139EB: retn    0Ch
