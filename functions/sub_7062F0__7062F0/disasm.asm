0x7062F0: push    0FFFFFFFFh
0x7062F2: push    offset SEH_8C8970
0x7062F7: mov     eax, large fs:0
0x7062FD: push    eax
0x7062FE: push    ecx
0x7062FF: push    esi
0x706300: push    edi
0x706301: mov     eax, ds:0B30AACh
0x706306: xor     eax, esp
0x706308: push    eax
0x706309: lea     eax, [esp+1Ch+var_C]
0x70630D: mov     large fs:0, eax
0x706313: mov     edi, ecx
0x706315: push    30h ; '0'; Size
0x706317: call    FormHeapAlloc
0x70631C: add     esp, 4
0x70631F: mov     [esp+1Ch+var_10], eax
0x706323: xor     esi, esi
0x706325: cmp     eax, esi
0x706327: mov     [esp+1Ch+var_4], esi
0x70632B: jz      short loc_706336
0x70632D: mov     ecx, eax
0x70632F: call    NiTexturingProperty__NiTexturingProperty
0x706334: mov     esi, eax
0x706336: mov     eax, [esp+1Ch+arg_0]
0x70633A: push    eax
0x70633B: push    esi
0x70633C: mov     ecx, edi
0x70633E: mov     [esp+24h+var_4], 0FFFFFFFFh
0x706346: call    sub_705860
0x70634B: mov     eax, esi
0x70634D: mov     ecx, [esp+1Ch+var_C]
0x706351: mov     large fs:0, ecx
0x706358: pop     ecx
0x706359: pop     edi
0x70635A: pop     esi
0x70635B: add     esp, 10h
0x70635E: retn    4
