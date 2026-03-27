0x6E6170: push    0FFFFFFFFh
0x6E6172: push    offset SEH_8C8970
0x6E6177: mov     eax, large fs:0
0x6E617D: push    eax
0x6E617E: push    ecx
0x6E617F: push    esi
0x6E6180: push    edi
0x6E6181: mov     eax, ds:0B30AACh
0x6E6186: xor     eax, esp
0x6E6188: push    eax
0x6E6189: lea     eax, [esp+1Ch+var_C]
0x6E618D: mov     large fs:0, eax
0x6E6193: mov     edi, ecx
0x6E6195: push    2Ch ; ','; Size
0x6E6197: call    FormHeapAlloc
0x6E619C: mov     esi, eax
0x6E619E: add     esp, 4
0x6E61A1: mov     [esp+1Ch+var_10], esi
0x6E61A5: test    esi, esi
0x6E61A7: mov     [esp+1Ch+var_4], 0
0x6E61AF: jz      short loc_6E61DB
0x6E61B1: push    0; int
0x6E61B3: push    0FFFFh; int
0x6E61B8: push    0; int
0x6E61BA: mov     ecx, esi; this
0x6E61BC: call    sub_6E5490
0x6E61C1: mov     dword ptr [esi], offset ??_7NiBSplineCompFloatInterpolator@@6B@; const NiBSplineCompFloatInterpolator::`vftable'
0x6E61C7: fld     dword ptr ds:0A7DEB4h
0x6E61CD: fstp    dword ptr [esi+24h]
0x6E61D0: fld     dword ptr ds:0A7DEB4h
0x6E61D6: fstp    dword ptr [esi+28h]
0x6E61D9: jmp     short loc_6E61DD
0x6E61DB: xor     esi, esi
0x6E61DD: mov     eax, [esp+1Ch+arg_0]
0x6E61E1: push    eax
0x6E61E2: push    esi
0x6E61E3: mov     ecx, edi
0x6E61E5: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6E61ED: call    sub_6E5520
0x6E61F2: fld     dword ptr [edi+24h]
0x6E61F5: fstp    dword ptr [esi+24h]
0x6E61F8: mov     eax, esi
0x6E61FA: fld     dword ptr [edi+28h]
0x6E61FD: fstp    dword ptr [esi+28h]
0x6E6200: mov     ecx, [esp+1Ch+var_C]
0x6E6204: mov     large fs:0, ecx
0x6E620B: pop     ecx
0x6E620C: pop     edi
0x6E620D: pop     esi
0x6E620E: add     esp, 10h
0x6E6211: retn    4
