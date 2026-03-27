0x437050: push    0FFFFFFFFh
0x437052: push    offset SEH_437050
0x437057: mov     eax, large fs:0
0x43705D: push    eax
0x43705E: sub     esp, 18h
0x437061: mov     eax, ___security_cookie
0x437066: xor     eax, esp
0x437068: mov     [esp+24h+var_10], eax
0x43706C: push    ebx
0x43706D: push    esi
0x43706E: push    edi
0x43706F: mov     eax, ___security_cookie
0x437074: xor     eax, esp
0x437076: push    eax
0x437077: lea     eax, [esp+34h+var_C]
0x43707B: mov     large fs:0, eax
0x437081: mov     eax, dword ptr [esp+34h+a2]
0x437085: mov     edi, [esp+34h+arg_0]
0x437089: mov     esi, ecx
0x43708B: push    eax; a2
0x43708C: mov     [esp+38h+var_1C], esi
0x437090: call    sub_436500
0x437095: xor     ebx, ebx
0x437097: mov     [esi+18h], ebx
0x43709A: mov     [esi+1Ch], ebx
0x43709D: mov     [esi+20h], ebx
0x4370A0: mov     [esi+24h], ebx
0x4370A3: mov     dword ptr [esi], offset ??_7QueuedTexture@@6B@; const QueuedTexture::`vftable'
0x4370A9: mov     [esp+34h+var_4], ebx
0x4370AD: mov     [esi+28h], ebx
0x4370B0: push    edi
0x4370B1: mov     ecx, esi
0x4370B3: mov     byte ptr [esp+38h+var_4], 1
0x4370B8: call    sub_434600
0x4370BD: mov     edi, [esi+20h]
0x4370C0: cmp     edi, ebx
0x4370C2: jz      short loc_4370EC
0x4370C4: lea     ecx, [esp+34h+var_24]
0x4370C8: push    ecx; int
0x4370C9: lea     edx, [esp+38h+var_18]
0x4370CD: push    edx; int
0x4370CE: push    edi; FullPath
0x4370CF: call    HashFilePAth
0x4370D4: push    edi
0x4370D5: lea     eax, [esp+44h+var_24]
0x4370D9: push    eax
0x4370DA: lea     ecx, [esp+48h+var_18]
0x4370DE: push    ecx
0x4370DF: push    1
0x4370E1: call    ArchiveManager_LazyFileLookup
0x4370E6: add     esp, 1Ch
0x4370E9: mov     [esi+24h], eax
0x4370EC: mov     eax, esi
0x4370EE: mov     ecx, [esp+34h+var_C]
0x4370F2: mov     large fs:0, ecx
0x4370F9: pop     ecx
0x4370FA: pop     edi
0x4370FB: pop     esi
0x4370FC: pop     ebx
0x4370FD: mov     ecx, [esp+24h+var_10]
0x437101: xor     ecx, esp
0x437103: call    @__security_check_cookie@4; __security_check_cookie(x)
0x437108: add     esp, 24h
0x43710B: retn    8
