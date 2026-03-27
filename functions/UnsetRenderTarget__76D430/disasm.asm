0x76D430: push    esi
0x76D431: mov     esi, [esp+4+a2]
0x76D435: test    esi, esi
0x76D437: jz      short loc_76D460
0x76D439: cmp     dword ptr ds:0B42600h[esi*4], 0
0x76D441: jz      short loc_76D460
0x76D443: mov     eax, [esp+4+a1]
0x76D447: mov     ecx, [eax]
0x76D449: mov     edx, [ecx+94h]
0x76D44F: push    0
0x76D451: push    esi
0x76D452: push    eax
0x76D453: call    edx
0x76D455: mov     dword ptr ds:0B42600h[esi*4], 0
0x76D460: pop     esi
0x76D461: retn
