0x7716E0: cmp     [esp+arg_0], 0
0x7716E5: push    esi
0x7716E6: mov     esi, ecx
0x7716E8: jz      loc_771781
0x7716EE: mov     ecx, ds:0B42754h
0x7716F4: mov     eax, [ecx]
0x7716F6: mov     edx, [eax+54h]
0x7716F9: call    edx
0x7716FB: test    al, 8
0x7716FD: jnz     loc_771781
0x771703: mov     ecx, ds:0B42754h
0x771709: mov     eax, [ecx]
0x77170B: mov     edx, [eax+54h]
0x77170E: call    edx
0x771710: test    al, 4
0x771712: jz      short loc_771781
0x771714: mov     ecx, ds:0B42758h
0x77171A: mov     eax, [ecx]
0x77171C: mov     edx, [esi]
0x77171E: mov     eax, [eax+0D0h]
0x771724: push    edi
0x771725: push    0
0x771727: push    3
0x771729: push    1
0x77172B: push    edx
0x77172C: call    eax
0x77172E: mov     ecx, ds:0B42758h
0x771734: mov     edx, [ecx]
0x771736: mov     eax, [esi]
0x771738: mov     edx, [edx+0D0h]
0x77173E: push    0
0x771740: push    3
0x771742: push    2
0x771744: push    eax
0x771745: call    edx
0x771747: mov     esi, 0C6h ; 'Æ'
0x77174C: mov     edi, 8
0x771751: mov     ecx, ds:0B42758h
0x771757: mov     eax, [ecx]
0x771759: mov     eax, [eax+64h]
0x77175C: push    0
0x77175E: push    0
0x771760: lea     edx, [esi-46h]
0x771763: push    edx
0x771764: call    eax
0x771766: mov     ecx, ds:0B42758h
0x77176C: mov     edx, [ecx]
0x77176E: mov     eax, [edx+64h]
0x771771: push    0
0x771773: push    0
0x771775: push    esi
0x771776: call    eax
0x771778: add     esi, 1
0x77177B: sub     edi, 1
0x77177E: jnz     short loc_771751
0x771780: pop     edi
0x771781: pop     esi
0x771782: retn    4
