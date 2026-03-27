0x6B8050: push    0FFFFFFFFh
0x6B8052: push    offset SEH_5A3F40
0x6B8057: mov     eax, large fs:0
0x6B805D: push    eax
0x6B805E: push    ecx
0x6B805F: push    esi
0x6B8060: push    edi
0x6B8061: mov     eax, ds:0B30AACh
0x6B8066: xor     eax, esp
0x6B8068: push    eax
0x6B8069: lea     eax, [esp+1Ch+var_C]
0x6B806D: mov     large fs:0, eax
0x6B8073: mov     esi, ecx
0x6B8075: mov     eax, [esi+10h]
0x6B8078: push    eax
0x6B8079: call    FormHeapFree
0x6B807E: xor     edi, edi
0x6B8080: mov     [esi+10h], edi
0x6B8083: mov     [esi+16h], di
0x6B8087: mov     [esi+14h], di
0x6B808B: mov     eax, [esi]
0x6B808D: push    eax
0x6B808E: call    FormHeapFree
0x6B8093: add     esp, 8
0x6B8096: mov     [esi], edi
0x6B8098: mov     [esi+6], di
0x6B809C: mov     [esi+4], di
0x6B80A0: mov     ecx, [esp+1Ch+var_C]
0x6B80A4: mov     large fs:0, ecx
0x6B80AB: pop     ecx
0x6B80AC: pop     edi
0x6B80AD: pop     esi
0x6B80AE: add     esp, 10h
0x6B80B1: retn
