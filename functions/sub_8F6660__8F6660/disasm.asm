0x8F6660: push    esi
0x8F6661: mov     esi, [esp+4+arg_0]
0x8F6665: mov     eax, [esi]
0x8F6667: push    edi
0x8F6668: mov     edi, ecx
0x8F666A: push    edi
0x8F666B: push    8
0x8F666D: push    offset aBvtreeagt3; "BvTreeAgt3"
0x8F6672: mov     ecx, esi
0x8F6674: call    dword ptr [eax]
0x8F6676: mov     eax, [edi+38h]
0x8F6679: add     edi, 30h ; '0'
0x8F667C: test    eax, eax
0x8F667E: js      short loc_8F66A1
0x8F6680: mov     ecx, [edi]
0x8F6682: mov     edx, [esi]
0x8F6684: and     eax, 3FFFFFFFh
0x8F6689: shl     eax, 2
0x8F668C: push    eax
0x8F668D: mov     eax, [edi+4]
0x8F6690: shl     eax, 2
0x8F6693: push    eax
0x8F6694: push    ecx
0x8F6695: push    8
0x8F6697: push    offset aSectorptrs; "SectorPtrs"
0x8F669C: mov     ecx, esi
0x8F669E: call    dword ptr [edx+4]
0x8F66A1: push    esi
0x8F66A2: push    edi
0x8F66A3: call    sub_925E30
0x8F66A8: add     esp, 8
0x8F66AB: pop     edi
0x8F66AC: pop     esi
0x8F66AD: retn    4
