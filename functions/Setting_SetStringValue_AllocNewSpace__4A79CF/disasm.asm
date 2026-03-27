0x4A79CF: push    esi
0x4A79D0: push    eax; Size
0x4A79D1: call    FormHeapAlloc
0x4A79D6: mov     esi, eax
0x4A79D8: add     esp, 4
0x4A79DB: test    esi, esi
0x4A79DD: jz      short Setting_SetStringValue___Done_
0x4A79DF: lea     ebp, [esi+ebx]
0x4A79E2: mov     edx, ebp
0x4A79E4: mov     eax, edi
0x4A79E6: sub     edx, edi
