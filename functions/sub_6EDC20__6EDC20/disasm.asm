0x6EDC20: push    0FFFFFFFFh
0x6EDC22: push    offset SEH_6EDC20
0x6EDC27: mov     eax, large fs:0
0x6EDC2D: push    eax
0x6EDC2E: push    ecx
0x6EDC2F: push    esi
0x6EDC30: push    edi
0x6EDC31: mov     eax, ds:0B30AACh
0x6EDC36: xor     eax, esp
0x6EDC38: push    eax
0x6EDC39: lea     eax, [esp+1Ch+var_C]
0x6EDC3D: mov     large fs:0, eax
0x6EDC43: mov     esi, ecx
0x6EDC45: mov     [esp+1Ch+var_10], esi
0x6EDC49: mov     edi, [esp+1Ch+arg_0]
0x6EDC4D: push    edi
0x6EDC4E: call    sub_552160
0x6EDC53: xor     eax, eax
0x6EDC55: push    0FFFFFFFFh
0x6EDC57: lea     ecx, [esi+18h]
0x6EDC5A: push    eax
0x6EDC5B: add     edi, 18h
0x6EDC5E: mov     dword ptr [ecx+18h], 0Fh
0x6EDC65: mov     [ecx+14h], eax
0x6EDC68: push    edi
0x6EDC69: mov     [esp+28h+var_4], eax
0x6EDC6D: mov     [ecx+4], al
0x6EDC70: call    sub_414420
0x6EDC75: mov     eax, esi
0x6EDC77: mov     ecx, [esp+1Ch+var_C]
0x6EDC7B: mov     large fs:0, ecx
0x6EDC82: pop     ecx
0x6EDC83: pop     edi
0x6EDC84: pop     esi
0x6EDC85: add     esp, 10h
0x6EDC88: retn    4
