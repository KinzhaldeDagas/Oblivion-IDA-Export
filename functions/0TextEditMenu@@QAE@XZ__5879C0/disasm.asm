0x5879C0: push    0FFFFFFFFh
0x5879C2: push    offset ??0TextEditMenu@@QAE@XZ_SEH
0x5879C7: mov     eax, large fs:0
0x5879CD: push    eax
0x5879CE: push    ecx
0x5879CF: push    esi
0x5879D0: push    edi
0x5879D1: mov     eax, ds:0B30AACh
0x5879D6: xor     eax, esp
0x5879D8: push    eax
0x5879D9: lea     eax, [esp+1Ch+var_C]
0x5879DD: mov     large fs:0, eax
0x5879E3: mov     esi, ecx
0x5879E5: mov     [esp+1Ch+var_10], esi
0x5879E9: call    ??0Menu@@QAE@XZ; Menu::Menu(void)
0x5879EE: xor     edi, edi
0x5879F0: lea     ecx, [esi+34h]
0x5879F3: mov     [esp+1Ch+var_4], edi
0x5879F7: mov     dword ptr [esi], offset ??_7TextEditMenu@@6B@; const TextEditMenu::`vftable'
0x5879FD: call    sub_57FE70
0x587A02: xor     eax, eax
0x587A04: mov     [esi+28h], eax
0x587A07: mov     [esi+2Ch], eax
0x587A0A: mov     [esi+30h], eax
0x587A0D: mov     eax, ds:0B3B738h
0x587A12: push    eax
0x587A13: call    FormHeapFree
0x587A18: add     esp, 4
0x587A1B: mov     ds:0B3B738h, edi
0x587A21: mov     ds:0B3B73Eh, di
0x587A28: mov     ds:0B3B73Ch, di
0x587A2F: mov     eax, esi
0x587A31: mov     ecx, [esp+1Ch+var_C]
0x587A35: mov     large fs:0, ecx
0x587A3C: pop     ecx
0x587A3D: pop     edi
0x587A3E: pop     esi
0x587A3F: add     esp, 10h
0x587A42: retn
