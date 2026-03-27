0x6D4740: push    0FFFFFFFFh
0x6D4742: push    offset SEH_7F1810
0x6D4747: mov     eax, large fs:0
0x6D474D: push    eax
0x6D474E: push    ecx
0x6D474F: push    esi
0x6D4750: mov     eax, ds:0B30AACh
0x6D4755: xor     eax, esp
0x6D4757: push    eax
0x6D4758: lea     eax, [esp+18h+var_C]
0x6D475C: mov     large fs:0, eax
0x6D4762: mov     esi, ecx
0x6D4764: mov     [esp+18h+var_10], esi
0x6D4768: mov     dword ptr [esi], offset ??_7NiUVData@@6B@; const NiUVData::`vftable'
0x6D476E: mov     eax, [esi+0Ch]
0x6D4771: test    eax, eax
0x6D4773: mov     [esp+18h+var_4], 0
0x6D477B: jz      short loc_6D478D
0x6D477D: mov     ecx, [esi+10h]
0x6D4780: mov     ecx, ds:0B3D2C8h[ecx*4]
0x6D4787: push    eax
0x6D4788: call    ecx ; dword_B3D2C8
0x6D478A: add     esp, 4
0x6D478D: mov     eax, [esi+18h]
0x6D4790: test    eax, eax
0x6D4792: jz      short loc_6D47A4
0x6D4794: mov     edx, [esi+1Ch]
0x6D4797: mov     ecx, ds:0B3D2C8h[edx*4]
0x6D479E: push    eax
0x6D479F: call    ecx ; dword_B3D2C8
0x6D47A1: add     esp, 4
0x6D47A4: mov     eax, [esi+24h]
0x6D47A7: test    eax, eax
0x6D47A9: jz      short loc_6D47BB
0x6D47AB: mov     ecx, [esi+28h]
0x6D47AE: mov     ecx, ds:0B3D2C8h[ecx*4]
0x6D47B5: push    eax
0x6D47B6: call    ecx ; dword_B3D2C8
0x6D47B8: add     esp, 4
0x6D47BB: mov     eax, [esi+30h]
0x6D47BE: test    eax, eax
0x6D47C0: jz      short loc_6D47D2
0x6D47C2: mov     edx, [esi+34h]
0x6D47C5: mov     ecx, ds:0B3D2C8h[edx*4]
0x6D47CC: push    eax
0x6D47CD: call    ecx ; dword_B3D2C8
0x6D47CF: add     esp, 4
0x6D47D2: mov     ecx, esi
0x6D47D4: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6D47DC: call    NiRefObject_destr
0x6D47E1: mov     ecx, [esp+18h+var_C]
0x6D47E5: mov     large fs:0, ecx
0x6D47EC: pop     ecx
0x6D47ED: pop     esi
0x6D47EE: add     esp, 10h
0x6D47F1: retn
