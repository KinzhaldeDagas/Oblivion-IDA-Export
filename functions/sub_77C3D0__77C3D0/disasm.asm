0x77C3D0: sub     esp, 108h
0x77C3D6: mov     eax, ds:0B30AACh
0x77C3DB: xor     eax, esp
0x77C3DD: mov     [esp+108h+var_4], eax
0x77C3E4: push    esi
0x77C3E5: mov     esi, [esp+10Ch+arg_0]
0x77C3EC: test    esi, esi
0x77C3EE: push    edi
0x77C3EF: mov     edi, ecx
0x77C3F1: jz      short loc_77C428
0x77C3F3: mov     eax, [esp+110h+arg_4]
0x77C3FA: push    eax
0x77C3FB: mov     ecx, esi
0x77C3FD: call    sub_452A60
0x77C402: push    eax; ArgList
0x77C403: push    offset aSD_5; "%s%d"
0x77C408: lea     ecx, [esp+11Ch+DstBuf]
0x77C40C: push    104h; SizeInBytes
0x77C411: push    ecx; DstBuf
0x77C412: call    sub_6C5D40
0x77C417: mov     ecx, [edi+18h]
0x77C41A: add     esp, 14h
0x77C41D: push    esi
0x77C41E: lea     edx, [esp+114h+DstBuf]
0x77C422: push    edx
0x77C423: call    sub_412D30
0x77C428: mov     ecx, [esp+110h+var_4]
0x77C42F: pop     edi
0x77C430: pop     esi
0x77C431: xor     ecx, esp
0x77C433: call    @__security_check_cookie@4; __security_check_cookie(x)
0x77C438: add     esp, 108h
0x77C43E: retn    8
