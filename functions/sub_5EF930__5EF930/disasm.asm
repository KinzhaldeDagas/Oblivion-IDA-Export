0x5EF930: push    esi
0x5EF931: push    edi
0x5EF932: mov     edi, ecx
0x5EF934: mov     esi, [edi+58h]
0x5EF937: test    esi, esi
0x5EF939: jz      short loc_5EF974
0x5EF93B: mov     eax, [esi]
0x5EF93D: mov     edx, [eax+33Ch]
0x5EF943: push    0
0x5EF945: mov     ecx, esi
0x5EF947: call    edx
0x5EF949: test    eax, eax
0x5EF94B: jz      short loc_5EF974
0x5EF94D: mov     eax, [esi]
0x5EF94F: mov     edx, [eax+344h]
0x5EF955: push    0
0x5EF957: mov     ecx, esi
0x5EF959: call    edx
0x5EF95B: mov     eax, [esi]
0x5EF95D: mov     edx, [eax+204h]
0x5EF963: push    0
0x5EF965: mov     ecx, esi
0x5EF967: call    edx
0x5EF969: mov     ecx, ds:0B333C4h
0x5EF96F: call    sub_65DA10
0x5EF974: cmp     dword ptr [edi+58h], 0
0x5EF978: jz      short loc_5EF9A9
0x5EF97A: mov     ecx, [edi+58h]
0x5EF97D: mov     eax, [ecx]
0x5EF97F: mov     edx, [eax+0E8h]
0x5EF985: push    edi
0x5EF986: call    edx
0x5EF988: test    eax, eax
0x5EF98A: jz      short loc_5EF9A9
0x5EF98C: mov     edx, [eax]
0x5EF98E: fld     dword ptr ds:0A41328h
0x5EF994: push    0
0x5EF996: push    1
0x5EF998: push    1
0x5EF99A: push    1
0x5EF99C: push    0
0x5EF99E: push    ecx
0x5EF99F: mov     ecx, eax
0x5EF9A1: fstp    [esp+20h+var_20]
0x5EF9A4: mov     eax, [edx+78h]
0x5EF9A7: call    eax
0x5EF9A9: pop     edi
0x5EF9AA: pop     esi
0x5EF9AB: retn
