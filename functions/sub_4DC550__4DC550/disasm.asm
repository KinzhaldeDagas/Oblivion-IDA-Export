0x4DC550: mov     eax, [ecx]
0x4DC552: mov     edx, [eax+164h]
0x4DC558: push    esi
0x4DC559: call    edx
0x4DC55B: mov     esi, eax
0x4DC55D: test    esi, esi
0x4DC55F: jz      short loc_4DC5A0
0x4DC561: push    0
0x4DC563: push    1
0x4DC565: mov     ecx, esi
0x4DC567: call    sub_475440
0x4DC56C: fldz
0x4DC56E: push    ecx
0x4DC56F: fstp    [esp+8+var_8]; float
0x4DC572: push    5; int
0x4DC574: mov     ecx, esi
0x4DC576: call    sub_470FC0
0x4DC57B: fldz
0x4DC57D: push    ecx
0x4DC57E: fstp    [esp+8+var_8]; float
0x4DC581: mov     ecx, [esi+98h]
0x4DC587: call    sub_4715C0
0x4DC58C: mov     eax, [esi+4]
0x4DC58F: push    eax
0x4DC590: call    sub_473120
0x4DC595: add     esp, 4
0x4DC598: mov     ecx, esi
0x4DC59A: pop     esi
0x4DC59B: jmp     sub_4730B0
0x4DC5A0: pop     esi
0x4DC5A1: retn
