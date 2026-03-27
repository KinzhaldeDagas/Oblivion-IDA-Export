0x77C4D0: sub     esp, 108h
0x77C4D6: mov     eax, ds:0B30AACh
0x77C4DB: xor     eax, esp
0x77C4DD: mov     [esp+108h+var_4], eax
0x77C4E4: mov     eax, dword ptr [esp+108h+ArgList]
0x77C4EB: push    esi
0x77C4EC: mov     esi, ecx
0x77C4EE: mov     ecx, [esp+10Ch+arg_4]
0x77C4F5: push    ecx
0x77C4F6: push    eax; ArgList
0x77C4F7: push    offset aSD_5; "%s%d"
0x77C4FC: lea     edx, [esp+118h+DstBuf]
0x77C500: push    104h; SizeInBytes
0x77C505: push    edx; DstBuf
0x77C506: call    sub_6C5D40
0x77C50B: mov     ecx, [esi+18h]
0x77C50E: add     esp, 14h
0x77C511: lea     eax, [esp+10Ch+DstBuf]
0x77C515: push    eax
0x77C516: call    NiTMap_RemoveAt
0x77C51B: mov     ecx, [esp+10Ch+var_4]
0x77C522: pop     esi
0x77C523: xor     ecx, esp
0x77C525: call    @__security_check_cookie@4; __security_check_cookie(x)
0x77C52A: add     esp, 108h
0x77C530: retn    8
