0x68D9B5: mov     ecx, [esi+2Ch]
0x68D9B8: add     esp, 4
0x68D9BB: test    ecx, ecx
0x68D9BD: jz      short ??1ActiveEffect@@UAE@XZ___Done
0x68D9BF: push    edi
0x68D9C0: call    sub_6B7240
0x68D9C5: mov     edi, [esi+2Ch]
0x68D9C8: test    edi, edi
0x68D9CA: jz      short loc_68D9DC
0x68D9CC: mov     ecx, edi; this
0x68D9CE: call    sub_6B73E0
0x68D9D3: push    edi
0x68D9D4: call    FormHeapFree
0x68D9D9: add     esp, 4
0x68D9DC: mov     dword ptr [esi+2Ch], 0
0x68D9E3: pop     edi
