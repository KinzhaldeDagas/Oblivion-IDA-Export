0x7C2F70: push    0FFFFFFFFh
0x7C2F72: push    offset ??1?$NiTList@J@@UAE@XZ_SEH
0x7C2F77: mov     eax, large fs:0
0x7C2F7D: push    eax
0x7C2F7E: push    ecx
0x7C2F7F: push    esi
0x7C2F80: mov     eax, ds:0B30AACh
0x7C2F85: xor     eax, esp
0x7C2F87: push    eax
0x7C2F88: lea     eax, [esp+18h+var_C]
0x7C2F8C: mov     large fs:0, eax
0x7C2F92: mov     esi, ecx
0x7C2F94: mov     [esp+18h+var_10], esi
0x7C2F98: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$DFALL@J@@J@@6B@; const NiTPointerListBase<DFALL<long>,long>::`vftable'
0x7C2F9E: mov     [esp+18h+var_4], 0
0x7C2FA6: call    NiTPointerList__FreeAllNodes
0x7C2FAB: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@J@@J@@6B@; const NiTListBase<DFALL<long>,long>::`vftable'
0x7C2FB1: mov     ecx, [esp+18h+var_C]
0x7C2FB5: mov     large fs:0, ecx
0x7C2FBC: pop     ecx
0x7C2FBD: pop     esi
0x7C2FBE: add     esp, 10h
0x7C2FC1: retn
