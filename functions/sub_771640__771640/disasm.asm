0x771640: sub     esp, 0Ch
0x771643: mov     eax, [esp+0Ch+arg_0]
0x771647: push    esi
0x771648: push    edi
0x771649: lea     esi, [eax+eax*2]
0x77164C: mov     eax, ds:0B420E8h[esi*4]
0x771653: push    0
0x771655: mov     edi, ecx
0x771657: mov     ecx, ds:0B420F0h[esi*4]
0x77165E: mov     [esp+18h+var_C], eax
0x771662: mov     eax, ds:0B420ECh[esi*4]
0x771669: push    0
0x77166B: push    eax
0x77166C: mov     [esp+20h+var_4], ecx
0x771670: mov     ecx, [edi+0Ch]
0x771673: push    5
0x771675: call    sub_773100
0x77167A: mov     eax, ds:0B420E8h[esi*4]
0x771681: mov     ecx, ds:0B420F0h[esi*4]
0x771688: mov     edx, ds:0B420ECh[esi*4]
0x77168F: push    0
0x771691: push    0
0x771693: push    eax
0x771694: mov     [esp+20h+var_4], ecx
0x771698: mov     ecx, [edi+0Ch]
0x77169B: push    6
0x77169D: mov     [esp+24h+var_8], edx
0x7716A1: call    sub_773100
0x7716A6: mov     edx, ds:0B420E8h[esi*4]
0x7716AD: mov     eax, ds:0B420ECh[esi*4]
0x7716B4: mov     esi, ds:0B420F0h[esi*4]
0x7716BB: mov     ecx, [edi+0Ch]
0x7716BE: push    0
0x7716C0: push    0
0x7716C2: push    esi
0x7716C3: push    7
0x7716C5: mov     [esp+24h+var_C], edx
0x7716C9: mov     [esp+24h+var_8], eax
0x7716CD: call    sub_773100
0x7716D2: pop     edi
0x7716D3: pop     esi
0x7716D4: add     esp, 0Ch
0x7716D7: retn    4
