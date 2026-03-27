0x95D920: push    ebx
0x95D921: push    esi
0x95D922: mov     esi, [esp+8+arg_4]
0x95D926: mov     eax, [esi]
0x95D928: mov     edx, [eax+0Ch]
0x95D92B: push    edi
0x95D92C: mov     ecx, esi
0x95D92E: call    edx
0x95D930: mov     edi, [esp+0Ch+arg_C]
0x95D934: lea     ebx, [eax+eax*2]
0x95D937: mov     eax, [edi]
0x95D939: mov     edx, [eax+0Ch]
0x95D93C: mov     ecx, edi
0x95D93E: add     ebx, ebx
0x95D940: call    edx
0x95D942: mov     ecx, ds:0BA9AA0h
0x95D948: add     eax, ebx
0x95D94A: mov     eax, [ecx+eax*4]
0x95D94D: test    eax, eax
0x95D94F: jz      short loc_95D96E
0x95D951: mov     edx, [esp+0Ch+arg_10]
0x95D955: fld     [esp+0Ch+arg_0]
0x95D959: mov     ecx, [esp+0Ch+arg_8]
0x95D95D: push    edx
0x95D95E: push    edi
0x95D95F: push    ecx
0x95D960: push    esi
0x95D961: push    ecx
0x95D962: fstp    [esp+20h+var_20]
0x95D965: call    eax
0x95D967: add     esp, 14h
0x95D96A: pop     edi
0x95D96B: pop     esi
0x95D96C: pop     ebx
0x95D96D: retn
0x95D96E: mov     edx, [edi]
0x95D970: mov     eax, [edx+0Ch]
0x95D973: mov     ecx, edi
0x95D975: call    eax
0x95D977: mov     edx, [esi]
0x95D979: lea     ebx, [eax+eax*2]
0x95D97C: mov     eax, [edx+0Ch]
0x95D97F: mov     ecx, esi
0x95D981: add     ebx, ebx
0x95D983: call    eax
0x95D985: fld     [esp+0Ch+arg_0]
0x95D989: mov     ecx, ds:0BA9AA0h
0x95D98F: mov     edx, [esp+0Ch+arg_8]
0x95D993: push    edx
0x95D994: add     eax, ebx
0x95D996: mov     eax, [ecx+eax*4]
0x95D999: mov     ecx, [esp+10h+arg_10]
0x95D99D: push    esi
0x95D99E: push    ecx
0x95D99F: push    edi
0x95D9A0: push    ecx
0x95D9A1: fstp    [esp+20h+var_20]
0x95D9A4: call    eax
0x95D9A6: add     esp, 14h
0x95D9A9: pop     edi
0x95D9AA: pop     esi
0x95D9AB: pop     ebx
0x95D9AC: retn
