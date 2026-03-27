0x8AF3F0: push    0FFFFFFFFh
0x8AF3F2: push    offset SEH_8C8970
0x8AF3F7: mov     eax, large fs:0
0x8AF3FD: push    eax
0x8AF3FE: push    ecx
0x8AF3FF: push    esi
0x8AF400: push    edi
0x8AF401: mov     eax, ds:0B30AACh
0x8AF406: xor     eax, esp
0x8AF408: push    eax
0x8AF409: lea     eax, [esp+1Ch+var_C]
0x8AF40D: mov     large fs:0, eax
0x8AF413: mov     esi, ecx
0x8AF415: push    offset stru_BA7C80; lpCriticalSection
0x8AF41A: call    dword ptr ds:0A2806Ch
0x8AF420: call    dword ptr ds:0A2808Ch
0x8AF426: add     dword ptr ds:0BA7CFCh, 1
0x8AF42D: push    14h; Size
0x8AF42F: mov     ds:0BA7CF8h, eax
0x8AF434: call    FormHeapAlloc
0x8AF439: add     esp, 4
0x8AF43C: mov     [esp+1Ch+var_10], eax
0x8AF440: test    eax, eax
0x8AF442: mov     [esp+1Ch+var_4], 0
0x8AF44A: jz      short loc_8AF457
0x8AF44C: mov     ecx, eax
0x8AF44E: call    sub_8AF2C0
0x8AF453: mov     edi, eax
0x8AF455: jmp     short loc_8AF459
0x8AF457: xor     edi, edi
0x8AF459: mov     ecx, [esp+1Ch+arg_0]
0x8AF45D: mov     eax, [esi]
0x8AF45F: mov     edx, [eax+80h]
0x8AF465: push    ecx
0x8AF466: push    edi
0x8AF467: mov     ecx, esi
0x8AF469: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8AF471: call    edx
0x8AF473: sub     dword ptr ds:0BA7CFCh, 1
0x8AF47A: jnz     short loc_8AF486
0x8AF47C: mov     dword ptr ds:0BA7CF8h, 0
0x8AF486: push    offset stru_BA7C80; lpCriticalSection
0x8AF48B: call    dword ptr ds:0A28074h
0x8AF491: mov     eax, edi
0x8AF493: mov     ecx, dword ptr [esp+1Ch+var_C]
0x8AF497: mov     large fs:0, ecx
0x8AF49E: pop     ecx
0x8AF49F: pop     edi
0x8AF4A0: pop     esi
0x8AF4A1: add     esp, 10h
0x8AF4A4: retn    4
