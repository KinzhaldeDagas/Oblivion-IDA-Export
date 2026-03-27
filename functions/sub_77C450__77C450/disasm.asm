0x77C450: sub     esp, 10Ch
0x77C456: mov     eax, ds:0B30AACh
0x77C45B: xor     eax, esp
0x77C45D: mov     [esp+10Ch+var_4], eax
0x77C464: mov     eax, dword ptr [esp+10Ch+ArgList]
0x77C46B: push    esi
0x77C46C: mov     esi, ecx
0x77C46E: mov     ecx, [esp+110h+arg_4]
0x77C475: push    ecx
0x77C476: push    eax; ArgList
0x77C477: push    offset aSD_5; "%s%d"
0x77C47C: lea     edx, [esp+11Ch+DstBuf]
0x77C480: push    104h; SizeInBytes
0x77C485: push    edx; DstBuf
0x77C486: mov     [esp+124h+var_10C], 0
0x77C48E: call    sub_6C5D40
0x77C493: add     esp, 14h
0x77C496: lea     eax, [esp+110h+var_10C]
0x77C49A: push    eax
0x77C49B: lea     ecx, [esp+114h+DstBuf]
0x77C49F: push    ecx
0x77C4A0: mov     ecx, [esi+18h]
0x77C4A3: call    NiTMap_GetAt
0x77C4A8: mov     ecx, [esp+110h+var_4]
0x77C4AF: neg     al
0x77C4B1: pop     esi
0x77C4B2: sbb     eax, eax
0x77C4B4: and     eax, [esp+10Ch+var_10C]
0x77C4B7: xor     ecx, esp
0x77C4B9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x77C4BE: add     esp, 10Ch
0x77C4C4: retn    8
