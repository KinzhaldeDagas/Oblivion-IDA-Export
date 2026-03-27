0x43E4E0: push    0FFFFFFFFh
0x43E4E2: push    offset ??1?$LockFreeCaseInsensitiveStringMap@PAVModel@@@@UAE@XZ_SEH
0x43E4E7: mov     eax, large fs:0
0x43E4ED: push    eax
0x43E4EE: push    ecx
0x43E4EF: push    esi
0x43E4F0: mov     eax, ___security_cookie
0x43E4F5: xor     eax, esp
0x43E4F7: push    eax
0x43E4F8: lea     eax, [esp+18h+var_C]
0x43E4FC: mov     large fs:0, eax
0x43E502: mov     esi, ecx
0x43E504: mov     [esp+18h+var_10], esi
0x43E508: mov     dword ptr [esi], offset ??_7?$LockFreeStringMap@PAVModel@@@@6B@; const LockFreeStringMap<Model *>::`vftable'
0x43E50E: push    1; a2
0x43E510: mov     [esp+1Ch+var_4], 0
0x43E518: call    sub_55F3C0
0x43E51D: push    1; a2
0x43E51F: mov     ecx, esi; this
0x43E521: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x43E529: mov     dword ptr [esi], offset ??_7?$LockFreeMap@PBDPAVModel@@@@6B@; const LockFreeMap<char const *,Model *>::`vftable'
0x43E52F: call    sub_55F3C0
0x43E534: mov     eax, [esi+0Ch]
0x43E537: push    eax
0x43E538: call    FormHeapFree
0x43E53D: mov     ecx, [esi+4]
0x43E540: mov     [esp+1Ch+var_10], ecx
0x43E544: mov     edx, [esp+1Ch+var_10]
0x43E548: push    edx
0x43E549: call    FormHeapFree
0x43E54E: add     esp, 8
0x43E551: mov     ecx, [esp+18h+var_C]
0x43E555: mov     large fs:0, ecx
0x43E55C: pop     ecx
0x43E55D: pop     esi
0x43E55E: add     esp, 10h
0x43E561: retn
