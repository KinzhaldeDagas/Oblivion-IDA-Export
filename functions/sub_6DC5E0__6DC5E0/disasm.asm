0x6DC5E0: push    0FFFFFFFFh
0x6DC5E2: push    offset SEH_8C8900
0x6DC5E7: mov     eax, large fs:0
0x6DC5ED: push    eax
0x6DC5EE: push    ecx
0x6DC5EF: mov     eax, ds:0B30AACh
0x6DC5F4: xor     eax, esp
0x6DC5F6: push    eax
0x6DC5F7: lea     eax, [esp+14h+var_C]
0x6DC5FB: mov     large fs:0, eax
0x6DC601: push    5Ch ; '\'; Size
0x6DC603: call    FormHeapAlloc
0x6DC608: add     esp, 4
0x6DC60B: mov     [esp+14h+var_10], eax
0x6DC60F: test    eax, eax
0x6DC611: mov     [esp+14h+var_4], 0
0x6DC619: jz      short loc_6DC636
0x6DC61B: push    0
0x6DC61D: push    0
0x6DC61F: mov     ecx, eax; this
0x6DC621: call    ??0NiPathInterpolator@@QAE@XZ; NiPathInterpolator::NiPathInterpolator(void)
0x6DC626: mov     ecx, [esp+14h+var_C]
0x6DC62A: mov     large fs:0, ecx
0x6DC631: pop     ecx
0x6DC632: add     esp, 10h
0x6DC635: retn
0x6DC636: xor     eax, eax
0x6DC638: mov     ecx, [esp+14h+var_C]
0x6DC63C: mov     large fs:0, ecx
0x6DC643: pop     ecx
0x6DC644: add     esp, 10h
0x6DC647: retn
