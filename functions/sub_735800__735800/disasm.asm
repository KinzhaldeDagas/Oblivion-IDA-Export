0x735800: push    ecx
0x735801: push    ebx
0x735802: push    esi
0x735803: mov     esi, [esp+0Ch+arg_4]
0x735807: mov     bl, [esi]
0x735809: test    bl, bl
0x73580B: mov     [esp+0Ch+var_4], 0
0x735813: jz      short loc_73587B
0x735815: mov     edx, [esp+0Ch+arg_0]
0x735819: push    ebp
0x73581A: mov     bp, word ptr [esp+10h+var_4]
0x73581F: push    edi
0x735820: mov     edi, [esp+14h+arg_8]
0x735824: cmp     bp, [ecx+100h]
0x73582B: jz      short loc_735879
0x73582D: mov     al, bl
0x73582F: add     esi, 1
0x735832: and     al, 7Fh
0x735834: test    bl, bl
0x735836: jns     short loc_735851
0x735838: test    al, al
0x73583A: jz      short loc_73586A
0x73583C: lea     esp, [esp+0]
0x735840: mov     bl, [esi]
0x735842: add     al, 0FFh
0x735844: mov     [edx], bl
0x735846: add     esi, 1
0x735849: add     edx, edi
0x73584B: test    al, al
0x73584D: jnz     short loc_735840
0x73584F: jmp     short loc_73586A
0x735851: mov     bl, [esi]
0x735853: add     esi, 1
0x735856: test    al, al
0x735858: jz      short loc_73586A
0x73585A: lea     ebx, [ebx+0]
0x735860: add     al, 0FFh
0x735862: mov     [edx], bl
0x735864: add     edx, edi
0x735866: test    al, al
0x735868: jnz     short loc_735860
0x73586A: mov     bl, [esi]
0x73586C: sub     al, 1
0x73586E: movzx   ax, al
0x735872: add     bp, ax
0x735875: test    bl, bl
0x735877: jnz     short loc_735824
0x735879: pop     edi
0x73587A: pop     ebp
0x73587B: pop     esi
0x73587C: pop     ebx
0x73587D: pop     ecx
0x73587E: retn    0Ch
