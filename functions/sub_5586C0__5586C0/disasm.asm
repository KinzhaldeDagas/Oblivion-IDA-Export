0x5586C0: push    0FFFFFFFFh
0x5586C2: push    offset SEH_5586C0
0x5586C7: mov     eax, large fs:0
0x5586CD: push    eax
0x5586CE: push    ecx
0x5586CF: mov     eax, ds:0B30AACh
0x5586D4: xor     eax, esp
0x5586D6: push    eax
0x5586D7: lea     eax, [esp+14h+var_C]
0x5586DB: mov     large fs:0, eax
0x5586E1: mov     eax, ecx
0x5586E3: xor     ecx, ecx
0x5586E5: mov     [eax+4], ecx
0x5586E8: mov     [eax+8], ecx
0x5586EB: mov     [eax+0Ch], ecx
0x5586EE: mov     [eax+14h], ecx
0x5586F1: mov     [eax+18h], ecx
0x5586F4: mov     [eax+1Ch], ecx
0x5586F7: mov     [eax+24h], ecx
0x5586FA: mov     [eax+28h], ecx
0x5586FD: mov     [eax+2Ch], ecx
0x558700: mov     [eax+34h], ecx
0x558703: mov     [eax+38h], ecx
0x558706: mov     [eax+3Ch], ecx
0x558709: mov     [eax+44h], ecx
0x55870C: mov     [eax+48h], ecx
0x55870F: mov     [eax+4Ch], ecx
0x558712: mov     [eax+54h], ecx
0x558715: mov     [eax+58h], ecx
0x558718: mov     [eax+5Ch], ecx
0x55871B: mov     [eax+64h], ecx
0x55871E: mov     [eax+68h], ecx
0x558721: mov     [eax+6Ch], ecx
0x558724: mov     [eax+74h], ecx
0x558727: mov     [eax+78h], ecx
0x55872A: mov     [eax+7Ch], ecx
0x55872D: mov     [eax+84h], ecx
0x558733: mov     [eax+88h], ecx
0x558739: mov     [eax+8Ch], ecx
0x55873F: mov     [eax+94h], ecx
0x558745: mov     [eax+98h], ecx
0x55874B: mov     [eax+9Ch], ecx
0x558751: mov     ecx, [esp+14h+var_C]
0x558755: mov     large fs:0, ecx
0x55875C: pop     ecx
0x55875D: add     esp, 10h
0x558760: retn
