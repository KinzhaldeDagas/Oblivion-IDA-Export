0x50EC90: mov     ecx, ds:0B36094h
0x50EC96: test    ecx, ecx
0x50EC98: jz      short loc_50ECD7
0x50EC9A: mov     al, [ecx+18h]
0x50EC9D: not     al
0x50EC9F: and     al, 1
0x50ECA1: jz      short loc_50ECAA
0x50ECA3: or      word ptr [ecx+18h], 1
0x50ECA8: jmp     short loc_50ECB0
0x50ECAA: and     word ptr [ecx+18h], 0FFFEh
0x50ECB0: test    al, al
0x50ECB2: setz    cl
0x50ECB5: test    al, al
0x50ECB7: mov     ds:0B09AE4h, cl
0x50ECBD: jz      short loc_50ECDA
0x50ECBF: call    sub_7C4D90
0x50ECC4: mov     eax, offset aDisabled__0; "Disabled."
0x50ECC9: push    eax
0x50ECCA: push    offset aGrassDisplayS; "Grass Display %s"
0x50ECCF: call    Interface_ConsolePrint
0x50ECD4: add     esp, 8
0x50ECD7: mov     al, 1
0x50ECD9: retn
0x50ECDA: mov     edx, ds:0B333CCh
0x50ECE0: mov     ecx, [edx+0DCh]
0x50ECE6: test    ecx, ecx
0x50ECE8: jz      short loc_50ED36
0x50ECEA: fldz
0x50ECEC: mov     edx, ds:0B3F9A8h
0x50ECF2: sub     esp, 10h
0x50ECF5: fstp    [esp+10h+var_4]; float
0x50ECF9: mov     eax, esp
0x50ECFB: mov     [eax], edx
0x50ECFD: mov     edx, ds:0B3F9ACh
0x50ED03: mov     [eax+4], edx
0x50ED06: mov     edx, ds:0B3F9B0h
0x50ED0C: mov     [eax+8], edx
0x50ED0F: mov     edx, [ecx+88h]
0x50ED15: lea     eax, [ecx+88h]
0x50ED1B: sub     esp, 0Ch
0x50ED1E: mov     ecx, esp
0x50ED20: mov     [ecx], edx
0x50ED22: mov     edx, [eax+4]
0x50ED25: mov     eax, [eax+8]
0x50ED28: mov     [ecx+4], edx
0x50ED2B: mov     [ecx+8], eax
0x50ED2E: call    DrawGrassPass?
0x50ED33: add     esp, 1Ch
0x50ED36: mov     eax, offset aEnabled__0; "Enabled."
0x50ED3B: push    eax
0x50ED3C: push    offset aGrassDisplayS; "Grass Display %s"
0x50ED41: call    Interface_ConsolePrint
0x50ED46: add     esp, 8
0x50ED49: mov     al, 1
0x50ED4B: retn
