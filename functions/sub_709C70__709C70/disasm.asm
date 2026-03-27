0x709C70: push    0FFFFFFFFh
0x709C72: push    offset SEH_8C62B0
0x709C77: mov     eax, large fs:0
0x709C7D: push    eax
0x709C7E: push    ecx
0x709C7F: push    esi
0x709C80: mov     eax, ds:0B30AACh
0x709C85: xor     eax, esp
0x709C87: push    eax
0x709C88: lea     eax, [esp+18h+var_C]
0x709C8C: mov     large fs:0, eax
0x709C92: push    0C0h ; 'À'; Size
0x709C97: call    FormHeapAlloc
0x709C9C: mov     esi, eax
0x709C9E: add     esp, 4
0x709CA1: mov     [esp+18h+var_10], esi
0x709CA5: xor     eax, eax
0x709CA7: cmp     esi, eax
0x709CA9: mov     [esp+18h+var_4], eax
0x709CAD: jz      short loc_709CBE
0x709CAF: mov     ecx, esi
0x709CB1: call    sub_717590
0x709CB6: mov     dword ptr [esi], offset ??_7NiScreenElements@@6B@; const NiScreenElements::`vftable'
0x709CBC: mov     eax, esi
0x709CBE: mov     ecx, [esp+18h+var_C]
0x709CC2: mov     large fs:0, ecx
0x709CC9: pop     ecx
0x709CCA: pop     esi
0x709CCB: add     esp, 10h
0x709CCE: retn
