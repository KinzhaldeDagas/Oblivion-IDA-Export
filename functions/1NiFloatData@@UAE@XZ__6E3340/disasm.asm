0x6E3340: push    0FFFFFFFFh
0x6E3342: push    offset SEH_7F1810
0x6E3347: mov     eax, large fs:0
0x6E334D: push    eax
0x6E334E: push    ecx
0x6E334F: push    esi
0x6E3350: mov     eax, ds:0B30AACh
0x6E3355: xor     eax, esp
0x6E3357: push    eax
0x6E3358: lea     eax, [esp+18h+var_C]
0x6E335C: mov     large fs:0, eax
0x6E3362: mov     esi, ecx
0x6E3364: mov     [esp+18h+var_10], esi
0x6E3368: mov     dword ptr [esi], offset ??_7NiFloatData@@6B@; const NiFloatData::`vftable'
0x6E336E: mov     eax, [esi+0Ch]
0x6E3371: test    eax, eax
0x6E3373: mov     [esp+18h+var_4], 0
0x6E337B: jz      short loc_6E338D
0x6E337D: mov     ecx, [esi+10h]
0x6E3380: mov     ecx, ds:0B3D2C8h[ecx*4]
0x6E3387: push    eax
0x6E3388: call    ecx ; dword_B3D2C8
0x6E338A: add     esp, 4
0x6E338D: mov     ecx, esi
0x6E338F: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6E3397: call    NiRefObject_destr
0x6E339C: mov     ecx, [esp+18h+var_C]
0x6E33A0: mov     large fs:0, ecx
0x6E33A7: pop     ecx
0x6E33A8: pop     esi
0x6E33A9: add     esp, 10h
0x6E33AC: retn
