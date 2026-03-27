0x434550: push    0FFFFFFFFh
0x434552: push    offset ??1IOManager@@UAE@XZ_SEH
0x434557: mov     eax, large fs:0
0x43455D: push    eax
0x43455E: push    ecx
0x43455F: push    esi
0x434560: push    edi
0x434561: mov     eax, ___security_cookie
0x434566: xor     eax, esp
0x434568: push    eax
0x434569: lea     eax, [esp+1Ch+var_C]
0x43456D: mov     large fs:0, eax
0x434573: mov     edi, ecx
0x434575: mov     [esp+1Ch+var_10], edi
0x434579: mov     dword ptr [edi], offset ??_7IOManager@@6B@; const IOManager::`vftable'
0x43457F: mov     esi, [edi+34h]
0x434582: test    esi, esi
0x434584: mov     [esp+1Ch+var_4], 0
0x43458C: jz      short loc_4345B7
0x43458E: push    1; a2
0x434590: mov     ecx, esi; this
0x434592: mov     dword ptr [esi], offset ??_7?$LockFreeQueue@V?$NiPointer@VIOTask@@@@@@6B@; const LockFreeQueue<NiPointer<IOTask>>::`vftable'
0x434598: call    sub_43D510
0x43459D: mov     eax, [esi+10h]
0x4345A0: mov     [esp+1Ch+var_10], eax
0x4345A4: mov     ecx, [esp+1Ch+var_10]
0x4345A8: push    ecx
0x4345A9: call    FormHeapFree
0x4345AE: push    esi
0x4345AF: call    FormHeapFree
0x4345B4: add     esp, 8
0x4345B7: mov     ecx, edi; this
0x4345B9: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4345C1: call    sub_4343C0
0x4345C6: mov     ecx, [esp+1Ch+var_C]
0x4345CA: mov     large fs:0, ecx
0x4345D1: pop     ecx
0x4345D2: pop     edi
0x4345D3: pop     esi
0x4345D4: add     esp, 10h
0x4345D7: retn
