0x8A5600: sub     esp, 0Ch
0x8A5603: push    ebx
0x8A5604: push    ebp
0x8A5605: push    esi
0x8A5606: push    edi
0x8A5607: mov     [esp+1Ch+var_C], 0
0x8A560F: lea     ebp, [ecx+10h]
0x8A5612: test    ebp, ebp
0x8A5614: jz      short loc_8A5630
0x8A5616: lea     eax, [esp+1Ch+var_8]
0x8A561A: push    eax
0x8A561B: mov     ecx, ebp
0x8A561D: call    sub_677C70
0x8A5622: or      [esp+1Ch+var_C], 1
0x8A5627: cmp     dword ptr [eax], 0
0x8A562A: jz      short loc_8A5630
0x8A562C: mov     bl, 1
0x8A562E: jmp     short loc_8A5632
0x8A5630: xor     bl, bl
0x8A5632: test    byte ptr [esp+1Ch+var_C], 1
0x8A5637: jz      short loc_8A5662
0x8A5639: mov     esi, [esp+1Ch+var_8]
0x8A563D: and     [esp+1Ch+var_C], 0FFFFFFFEh
0x8A5642: test    esi, esi
0x8A5644: jz      short loc_8A5662
0x8A5646: lea     ecx, [esi+4]
0x8A5649: push    ecx; lpAddend
0x8A564A: call    dword ptr ds:0A2807Ch
0x8A5650: test    eax, eax
0x8A5652: jnz     short loc_8A5662
0x8A5654: test    esi, esi
0x8A5656: jz      short loc_8A5662
0x8A5658: mov     edx, [esi]
0x8A565A: mov     eax, [edx]
0x8A565C: push    1
0x8A565E: mov     ecx, esi
0x8A5660: call    eax
0x8A5662: test    bl, bl
0x8A5664: jz      loc_8A570C
0x8A566A: lea     ecx, [esp+1Ch+var_4]
0x8A566E: push    ecx
0x8A566F: mov     ecx, ebp
0x8A5671: call    sub_677C70
0x8A5676: mov     esi, [eax]
0x8A5678: mov     eax, [esp+1Ch+var_4]
0x8A567C: test    eax, eax
0x8A567E: jz      short loc_8A569E
0x8A5680: mov     edi, eax
0x8A5682: add     eax, 4
0x8A5685: push    eax; lpAddend
0x8A5686: call    dword ptr ds:0A2807Ch
0x8A568C: test    eax, eax
0x8A568E: jnz     short loc_8A569E
0x8A5690: test    edi, edi
0x8A5692: jz      short loc_8A569E
0x8A5694: mov     edx, [edi]
0x8A5696: mov     eax, [edx]
0x8A5698: push    1
0x8A569A: mov     ecx, edi
0x8A569C: call    eax
0x8A569E: test    esi, esi
0x8A56A0: jz      short loc_8A5700
0x8A56A2: mov     edx, [esi]
0x8A56A4: mov     eax, [edx+4]
0x8A56A7: mov     ecx, esi
0x8A56A9: call    eax
0x8A56AB: test    eax, eax
0x8A56AD: jz      short loc_8A56BE
0x8A56AF: nop
0x8A56B0: cmp     eax, offset stru_BA7D50
0x8A56B5: jz      short loc_8A56EA
0x8A56B7: mov     eax, [eax+4]
0x8A56BA: test    eax, eax
0x8A56BC: jnz     short loc_8A56B0
0x8A56BE: mov     edx, [esi]
0x8A56C0: mov     eax, [edx+4]
0x8A56C3: mov     ecx, esi
0x8A56C5: call    eax
0x8A56C7: test    eax, eax
0x8A56C9: jz      short loc_8A5700
0x8A56CB: jmp     short loc_8A56D0
0x8A56CD: align 10h
0x8A56D0: cmp     eax, offset dword_BA7D04
0x8A56D5: jz      short loc_8A56EA
0x8A56D7: mov     eax, [eax+4]
0x8A56DA: test    eax, eax
0x8A56DC: jnz     short loc_8A56D0
0x8A56DE: mov     ecx, ebp
0x8A56E0: call    sub_67A850
0x8A56E5: jmp     loc_8A5612
0x8A56EA: mov     edx, [esi]
0x8A56EC: mov     eax, [edx+58h]
0x8A56EF: mov     ecx, esi
0x8A56F1: call    eax
0x8A56F3: test    eax, eax
0x8A56F5: jz      short loc_8A5700
0x8A56F7: mov     edx, [esi]
0x8A56F9: mov     eax, [edx+60h]
0x8A56FC: mov     ecx, esi
0x8A56FE: call    eax
0x8A5700: mov     ecx, ebp
0x8A5702: call    sub_67A850
0x8A5707: jmp     loc_8A5612
0x8A570C: pop     edi
0x8A570D: pop     esi
0x8A570E: pop     ebp
0x8A570F: pop     ebx
0x8A5710: add     esp, 0Ch
0x8A5713: retn
