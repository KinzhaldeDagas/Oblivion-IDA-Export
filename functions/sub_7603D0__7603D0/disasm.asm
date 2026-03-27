0x7603D0: mov     ecx, ds:0B42044h
0x7603D6: test    ecx, ecx
0x7603D8: push    esi
0x7603D9: mov     esi, ecx
0x7603DB: jz      short loc_7603EB
0x7603DD: call    sub_75E0A0
0x7603E2: push    esi
0x7603E3: call    FormHeapFree
0x7603E8: add     esp, 4
0x7603EB: mov     dword ptr ds:0B42044h, 0
0x7603F5: pop     esi
0x7603F6: retn
