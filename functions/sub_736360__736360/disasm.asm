0x736360: push    0FFFFFFFFh
0x736362: push    offset SEH_736360
0x736367: mov     eax, large fs:0
0x73636D: push    eax
0x73636E: push    ecx
0x73636F: push    ebx
0x736370: push    esi
0x736371: push    edi
0x736372: mov     eax, ds:0B30AACh
0x736377: xor     eax, esp
0x736379: push    eax
0x73637A: lea     eax, [esp+20h+var_C]
0x73637E: mov     large fs:0, eax
0x736384: mov     ebx, ecx
0x736386: mov     [esp+20h+var_10], ebx
0x73638A: lea     eax, [ebx+80h]
0x736390: mov     dword ptr [ebx], offset ??_7NiImageReader@@6B@; const NiImageReader::`vftable'
0x736396: xor     esi, esi
0x736398: push    eax; lpCriticalSection
0x736399: mov     [eax+78h], esi
0x73639C: mov     [eax+7Ch], esi
0x73639F: call    dword ptr ds:0A28064h
0x7363A5: lea     edi, [ebx+110h]
0x7363AB: mov     ecx, edi
0x7363AD: mov     [esp+20h+var_4], esi
0x7363B1: mov     dword ptr [ebx], offset ??_7NiDDSReader@@6B@; const NiDDSReader::`vftable'
0x7363B7: call    InitSurfacEData
0x7363BC: mov     [ebx+100h], esi
0x7363C2: mov     [ebx+104h], esi
0x7363C8: mov     ecx, 11h
0x7363CD: mov     esi, offset unk_B25FB0
0x7363D2: rep movsd
0x7363D4: mov     eax, ebx
0x7363D6: mov     ecx, [esp+20h+var_C]
0x7363DA: mov     large fs:0, ecx
0x7363E1: pop     ecx
0x7363E2: pop     edi
0x7363E3: pop     esi
0x7363E4: pop     ebx
0x7363E5: add     esp, 10h
0x7363E8: retn
