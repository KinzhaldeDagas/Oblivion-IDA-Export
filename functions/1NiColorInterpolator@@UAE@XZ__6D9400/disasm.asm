0x6D9400: push    0FFFFFFFFh
0x6D9402: push    offset ??1NiPoint3Interpolator@@UAE@XZ_SEH
0x6D9407: mov     eax, large fs:0
0x6D940D: push    eax
0x6D940E: push    ecx
0x6D940F: push    esi
0x6D9410: push    edi
0x6D9411: mov     eax, ds:0B30AACh
0x6D9416: xor     eax, esp
0x6D9418: push    eax
0x6D9419: lea     eax, [esp+1Ch+var_C]
0x6D941D: mov     large fs:0, eax
0x6D9423: mov     edi, ecx
0x6D9425: mov     [esp+1Ch+var_10], edi
0x6D9429: mov     esi, [edi+1Ch]
0x6D942C: test    esi, esi
0x6D942E: mov     [esp+1Ch+var_4], 0
0x6D9436: jz      short loc_6D9454
0x6D9438: lea     eax, [esi+4]
0x6D943B: push    eax; lpAddend
0x6D943C: call    dword ptr ds:0A2807Ch
0x6D9442: test    eax, eax
0x6D9444: jnz     short loc_6D9454
0x6D9446: test    esi, esi
0x6D9448: jz      short loc_6D9454
0x6D944A: mov     edx, [esi]
0x6D944C: mov     eax, [edx]
0x6D944E: push    1
0x6D9450: mov     ecx, esi
0x6D9452: call    eax
0x6D9454: mov     ecx, edi
0x6D9456: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6D945E: call    sub_6EC250
0x6D9463: mov     ecx, dword ptr [esp+1Ch+var_C]
0x6D9467: mov     large fs:0, ecx
0x6D946E: pop     ecx
0x6D946F: pop     edi
0x6D9470: pop     esi
0x6D9471: add     esp, 10h
0x6D9474: retn
