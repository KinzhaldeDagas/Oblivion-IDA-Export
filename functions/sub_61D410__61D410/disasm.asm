0x61D410: push    esi
0x61D411: mov     esi, ecx
0x61D413: cmp     dword ptr [esi+6Ch], 6
0x61D417: jnz     loc_61D4A4
0x61D41D: fld     dword ptr [esi+44h]
0x61D420: mov     eax, [esi+3Ch]
0x61D423: fsub    dword ptr [esi+0D4h]
0x61D429: push    edi
0x61D42A: fld     dword ptr [esi+0D8h]
0x61D430: mov     edi, [eax+58h]
0x61D433: fcompp
0x61D435: fnstsw  ax
0x61D437: test    ah, 5
0x61D43A: jp      short loc_61D480
0x61D43C: push    0
0x61D43E: call    sub_619920
0x61D443: mov     dword ptr [esi+12Ch], 0
0x61D44D: mov     edx, [edi]
0x61D44F: mov     eax, [edx+174h]
0x61D455: mov     ecx, edi
0x61D457: call    eax
0x61D459: test    eax, eax
0x61D45B: jz      short loc_61D4A3
0x61D45D: mov     edx, [edi]
0x61D45F: mov     eax, [edx+174h]
0x61D465: mov     ecx, edi
0x61D467: call    eax
0x61D469: cmp     byte ptr [eax+20h], 0Ch
0x61D46D: jz      short loc_61D4A3
0x61D46F: mov     edx, [edi]
0x61D471: mov     eax, [edx+178h]
0x61D477: push    0
0x61D479: mov     ecx, edi
0x61D47B: call    eax
0x61D47D: pop     edi
0x61D47E: pop     esi
0x61D47F: retn
0x61D480: mov     edx, [edi]
0x61D482: mov     eax, [edx+184h]
0x61D488: mov     ecx, edi
0x61D48A: call    eax
0x61D48C: cmp     eax, esi
0x61D48E: jnz     short loc_61D4A3
0x61D490: push    0
0x61D492: mov     ecx, esi
0x61D494: call    sub_619920
0x61D499: mov     dword ptr [esi+12Ch], 0
0x61D4A3: pop     edi
0x61D4A4: pop     esi
0x61D4A5: retn
