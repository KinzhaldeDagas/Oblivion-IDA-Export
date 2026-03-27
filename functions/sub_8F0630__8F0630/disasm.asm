0x8F0630: push    ebp
0x8F0631: mov     ebp, esp
0x8F0633: and     esp, 0FFFFFFF0h
0x8F0636: sub     esp, 2Ch
0x8F0639: mov     edx, [ebp+arg_4]
0x8F063C: push    esi
0x8F063D: lea     eax, [esp+30h+var_20]
0x8F0641: push    eax
0x8F0642: mov     eax, [ebp+arg_0]
0x8F0645: mov     esi, ecx
0x8F0647: mov     ecx, [ebp+arg_8]
0x8F064A: push    ecx
0x8F064B: push    edx
0x8F064C: push    eax
0x8F064D: call    sub_8CDF30
0x8F0652: mov     eax, [ebp+arg_C]
0x8F0655: mov     edx, [esi]
0x8F0657: add     esp, 10h
0x8F065A: push    eax
0x8F065B: lea     ecx, [esp+34h+var_20]
0x8F065F: push    ecx
0x8F0660: mov     ecx, esi
0x8F0662: call    dword ptr [edx+24h]
0x8F0665: pop     esi
0x8F0666: mov     esp, ebp
0x8F0668: pop     ebp
0x8F0669: retn    10h
