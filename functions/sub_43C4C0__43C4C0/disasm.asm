0x43C4C0: push    ecx
0x43C4C1: push    ebx
0x43C4C2: push    edi
0x43C4C3: mov     ebx, ecx
0x43C4C5: xor     edi, edi
0x43C4C7: cmp     [ebx], edi
0x43C4C9: jbe     short loc_43C513
0x43C4CB: push    esi
0x43C4CC: lea     esp, [esp+0]
0x43C4D0: mov     eax, [ebx+8]
0x43C4D3: mov     ecx, [eax+edi*8+4]
0x43C4D7: mov     [esp+10h+var_4], ecx
0x43C4DB: mov     edx, [esp+10h+var_4]
0x43C4DF: mov     [esp+10h+var_4], edx
0x43C4E3: mov     eax, [esp+10h+var_4]
0x43C4E7: test    eax, eax
0x43C4E9: jz      short loc_43C50B
0x43C4EB: mov     esi, [esp+10h+var_4]
0x43C4EF: cmp     dword ptr [esi+20h], 0
0x43C4F3: jz      short loc_43C502
0x43C4F5: mov     ecx, esi
0x43C4F7: call    sub_43A3F0
0x43C4FC: cmp     dword ptr [esi+20h], 0
0x43C500: jnz     short loc_43C4F5
0x43C502: push    esi
0x43C503: call    FormHeapFree
0x43C508: add     esp, 4
0x43C50B: add     edi, 1
0x43C50E: cmp     edi, [ebx]
0x43C510: jb      short loc_43C4D0
0x43C512: pop     esi
0x43C513: mov     ecx, [ebx+8]
0x43C516: push    ecx
0x43C517: call    FormHeapFree
0x43C51C: mov     edx, [ebx+4]
0x43C51F: add     esp, 4
0x43C522: push    edx; dwTlsIndex
0x43C523: call    ds:TlsFree
0x43C529: pop     edi
0x43C52A: pop     ebx
0x43C52B: pop     ecx
0x43C52C: retn
