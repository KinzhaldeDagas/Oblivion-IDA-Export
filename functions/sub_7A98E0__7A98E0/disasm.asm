0x7A98E0: push    0FFFFFFFFh
0x7A98E2: push    offset SEH_7A98E0
0x7A98E7: mov     eax, large fs:0
0x7A98ED: push    eax
0x7A98EE: sub     esp, 34h
0x7A98F1: mov     eax, ds:0B30AACh
0x7A98F6: xor     eax, esp
0x7A98F8: push    eax
0x7A98F9: lea     eax, [esp+44h+var_C]
0x7A98FD: mov     large fs:0, eax
0x7A9903: fld     dword ptr ds:0A30634h
0x7A9909: push    1Ch; Size
0x7A990B: fst     [esp+48h+var_3C]
0x7A990F: fst     [esp+48h+var_38]
0x7A9913: fld     dword ptr ds:0A2FAACh
0x7A9919: fst     [esp+48h+var_34]
0x7A991D: fld1
0x7A991F: fst     [esp+48h+var_30]
0x7A9923: fst     [esp+48h+var_24]
0x7A9927: fst     [esp+48h+var_20]
0x7A992B: fstp    [esp+48h+var_14]
0x7A992F: fxch    st(1)
0x7A9931: fst     [esp+48h+var_2C]
0x7A9935: fstp    [esp+48h+var_18]
0x7A9939: fst     [esp+48h+var_28]
0x7A993D: fst     [esp+48h+var_1C]
0x7A9941: fstp    [esp+48h+var_10]
0x7A9945: call    FormHeapAlloc
0x7A994A: add     esp, 4
0x7A994D: mov     [esp+44h+var_40], eax
0x7A9951: test    eax, eax
0x7A9953: mov     [esp+44h+var_4], 0
0x7A995B: jz      short loc_7A997F
0x7A995D: push    0
0x7A995F: push    0
0x7A9961: lea     ecx, [esp+4Ch+var_3C]
0x7A9965: push    ecx
0x7A9966: push    4
0x7A9968: mov     ecx, eax; this
0x7A996A: call    ??0NiScreenPolygon@@QAE@XZ; NiScreenPolygon::NiScreenPolygon(void)
0x7A996F: mov     ecx, [esp+44h+var_C]
0x7A9973: mov     large fs:0, ecx
0x7A997A: pop     ecx
0x7A997B: add     esp, 40h
0x7A997E: retn
0x7A997F: xor     eax, eax
0x7A9981: mov     ecx, [esp+44h+var_C]
0x7A9985: mov     large fs:0, ecx
0x7A998C: pop     ecx
0x7A998D: add     esp, 40h
0x7A9990: retn
