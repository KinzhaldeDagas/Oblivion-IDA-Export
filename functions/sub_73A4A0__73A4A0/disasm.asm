0x73A4A0: push    0FFFFFFFFh
0x73A4A2: push    offset SEH_8C8900
0x73A4A7: mov     eax, large fs:0
0x73A4AD: push    eax
0x73A4AE: push    ecx
0x73A4AF: mov     eax, ds:0B30AACh
0x73A4B4: xor     eax, esp
0x73A4B6: push    eax
0x73A4B7: lea     eax, [esp+14h+var_C]
0x73A4BB: mov     large fs:0, eax
0x73A4C1: push    144h; Size
0x73A4C6: call    FormHeapAlloc
0x73A4CB: add     esp, 4
0x73A4CE: mov     [esp+14h+var_10], eax
0x73A4D2: test    eax, eax
0x73A4D4: mov     [esp+14h+var_4], 0
0x73A4DC: jz      short loc_73A4F5
0x73A4DE: mov     ecx, eax; this
0x73A4E0: call    ??0NiScreenSpaceCamera@@QAE@XZ; NiScreenSpaceCamera::NiScreenSpaceCamera(void)
0x73A4E5: mov     ecx, [esp+14h+var_C]
0x73A4E9: mov     large fs:0, ecx
0x73A4F0: pop     ecx
0x73A4F1: add     esp, 10h
0x73A4F4: retn
0x73A4F5: xor     eax, eax
0x73A4F7: mov     ecx, [esp+14h+var_C]
0x73A4FB: mov     large fs:0, ecx
0x73A502: pop     ecx
0x73A503: add     esp, 10h
0x73A506: retn
