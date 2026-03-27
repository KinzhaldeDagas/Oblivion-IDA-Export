0x88A870: push    ebx
0x88A871: push    esi
0x88A872: mov     esi, [esp+8+arg_4]
0x88A876: push    edi
0x88A877: mov     edi, [esp+0Ch+arg_0]
0x88A87B: mov     ebx, [edi+10h]
0x88A87E: test    ebx, ebx
0x88A880: jz      loc_88A950
0x88A886: cmp     dword ptr [esi+18h], 0
0x88A88A: jz      short loc_88A893
0x88A88C: or      word ptr [edi+0Ch], 40h
0x88A891: jmp     short loc_88A899
0x88A893: and     word ptr [edi+0Ch], 0FFBFh
0x88A899: push    edi
0x88A89A: push    offset dword_BA7A20
0x88A89F: call    NiRTTI_Cast
0x88A8A4: add     esp, 8
0x88A8A7: test    eax, eax
0x88A8A9: jz      short loc_88A8BF
0x88A8AB: cmp     dword ptr [esi+14h], 0
0x88A8AF: jnz     short loc_88A8B9
0x88A8B1: or      word ptr [eax+0Ch], 100h
0x88A8B7: jmp     short loc_88A8BF
0x88A8B9: and     word ptr [eax+0Ch], 0FEFFh
0x88A8BF: mov     al, [esi+0Ch]
0x88A8C2: and     al, 1
0x88A8C4: jz      loc_88A95C
0x88A8CA: or      word ptr [edi+0Ch], 4
0x88A8CF: movzx   eax, word ptr [edi+0Ch]
0x88A8D3: or      eax, 8
0x88A8D6: mov     [edi+0Ch], ax
0x88A8DA: cmp     byte ptr ds:0B2E2D8h, 0
0x88A8E1: jz      short loc_88A8ED
0x88A8E3: push    esi
0x88A8E4: push    ebx
0x88A8E5: call    sub_889C20
0x88A8EA: add     esp, 8
0x88A8ED: mov     ecx, [esi]
0x88A8EF: mov     edx, [ecx]
0x88A8F1: mov     eax, [edx+58h]
0x88A8F4: push    ebp
0x88A8F5: call    eax
0x88A8F7: mov     edx, [ebx]
0x88A8F9: mov     ebp, eax
0x88A8FB: mov     eax, [edx+58h]
0x88A8FE: mov     ecx, ebx
0x88A900: call    eax
0x88A902: cmp     eax, ebp
0x88A904: pop     ebp
0x88A905: jz      short loc_88A92D
0x88A907: mov     ecx, [esi]
0x88A909: test    ecx, ecx
0x88A90B: jz      short loc_88A914
0x88A90D: mov     edx, [ecx]
0x88A90F: mov     eax, [edx+58h]
0x88A912: call    eax
0x88A914: mov     edx, [ebx]
0x88A916: mov     eax, [esi]
0x88A918: mov     edx, [edx+5Ch]
0x88A91B: push    eax
0x88A91C: mov     ecx, ebx
0x88A91E: call    edx
0x88A920: mov     ecx, [esi]
0x88A922: test    ecx, ecx
0x88A924: jz      short loc_88A92D
0x88A926: mov     eax, [ecx]
0x88A928: mov     edx, [eax+58h]
0x88A92B: call    edx
0x88A92D: mov     ecx, edi
0x88A92F: call    sub_452A60
0x88A934: mov     edx, [eax]
0x88A936: mov     ecx, eax
0x88A938: mov     eax, [edx+74h]
0x88A93B: call    eax
0x88A93D: mov     ecx, [esi]
0x88A93F: cmp     byte ptr [ecx+1Ah], 0
0x88A943: jz      short loc_88A950
0x88A945: mov     edx, [edi]
0x88A947: mov     eax, [edx+7Ch]
0x88A94A: push    1
0x88A94C: mov     ecx, edi
0x88A94E: call    eax
0x88A950: and     dword ptr [esi+0Ch], 0FFFFFFFEh
0x88A954: add     dword ptr [esi+14h], 1
0x88A958: pop     edi
0x88A959: pop     esi
0x88A95A: pop     ebx
0x88A95B: retn
0x88A95C: and     word ptr [edi+0Ch], 0FFFBh
0x88A962: jmp     loc_88A8DA
