0x6D9C90: push    0FFFFFFFFh
0x6D9C92: push    offset SEH_7F1810
0x6D9C97: mov     eax, large fs:0
0x6D9C9D: push    eax
0x6D9C9E: push    ecx
0x6D9C9F: push    esi
0x6D9CA0: mov     eax, ds:0B30AACh
0x6D9CA5: xor     eax, esp
0x6D9CA7: push    eax
0x6D9CA8: lea     eax, [esp+18h+var_C]
0x6D9CAC: mov     large fs:0, eax
0x6D9CB2: mov     esi, ecx
0x6D9CB4: mov     [esp+18h+var_10], esi
0x6D9CB8: mov     dword ptr [esi], offset ??_7NiPosData@@6B@; const NiPosData::`vftable'
0x6D9CBE: mov     eax, [esi+0Ch]
0x6D9CC1: test    eax, eax
0x6D9CC3: mov     [esp+18h+var_4], 0
0x6D9CCB: jz      short loc_6D9CDD
0x6D9CCD: mov     ecx, [esi+10h]
0x6D9CD0: mov     ecx, ds:0B3D2E0h[ecx*4]
0x6D9CD7: push    eax
0x6D9CD8: call    ecx ; dword_B3D2E0
0x6D9CDA: add     esp, 4
0x6D9CDD: mov     ecx, esi
0x6D9CDF: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6D9CE7: call    NiRefObject_destr
0x6D9CEC: mov     ecx, [esp+18h+var_C]
0x6D9CF0: mov     large fs:0, ecx
0x6D9CF7: pop     ecx
0x6D9CF8: pop     esi
0x6D9CF9: add     esp, 10h
0x6D9CFC: retn
