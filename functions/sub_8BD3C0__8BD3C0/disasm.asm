0x8BD3C0: push    0FFFFFFFFh
0x8BD3C2: push    offset SEH_8C8970
0x8BD3C7: mov     eax, large fs:0
0x8BD3CD: push    eax
0x8BD3CE: push    ecx
0x8BD3CF: push    esi
0x8BD3D0: push    edi
0x8BD3D1: mov     eax, ds:0B30AACh
0x8BD3D6: xor     eax, esp
0x8BD3D8: push    eax
0x8BD3D9: lea     eax, [esp+1Ch+var_C]
0x8BD3DD: mov     large fs:0, eax
0x8BD3E3: mov     edi, ecx
0x8BD3E5: push    offset unk_BA7C80; lpCriticalSection
0x8BD3EA: call    dword ptr ds:0A2806Ch
0x8BD3F0: call    dword ptr ds:0A2808Ch
0x8BD3F6: add     dword ptr ds:0BA7CFCh, 1
0x8BD3FD: push    14h; Size
0x8BD3FF: mov     ds:0BA7CF8h, eax
0x8BD404: call    FormHeapAlloc
0x8BD409: add     esp, 4
0x8BD40C: mov     [esp+1Ch+var_10], eax
0x8BD410: test    eax, eax
0x8BD412: mov     [esp+1Ch+var_4], 0
0x8BD41A: jz      short loc_8BD427
0x8BD41C: mov     ecx, eax; this
0x8BD41E: call    ??0bhkCachingShapePhantom@@QAE@XZ; bhkCachingShapePhantom::bhkCachingShapePhantom(void)
0x8BD423: mov     esi, eax
0x8BD425: jmp     short loc_8BD429
0x8BD427: xor     esi, esi
0x8BD429: mov     eax, [esp+1Ch+arg_0]
0x8BD42D: push    eax
0x8BD42E: push    esi
0x8BD42F: mov     ecx, edi
0x8BD431: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8BD439: call    sub_89F5D0
0x8BD43E: sub     dword ptr ds:0BA7CFCh, 1
0x8BD445: jnz     short loc_8BD451
0x8BD447: mov     dword ptr ds:0BA7CF8h, 0
0x8BD451: push    offset unk_BA7C80; lpCriticalSection
0x8BD456: call    dword ptr ds:0A28074h
0x8BD45C: mov     eax, esi
0x8BD45E: mov     ecx, [esp+1Ch+var_C]
0x8BD462: mov     large fs:0, ecx
0x8BD469: pop     ecx
0x8BD46A: pop     edi
0x8BD46B: pop     esi
0x8BD46C: add     esp, 10h
0x8BD46F: retn    4
0x9CA7E0: mov     eax, [ebp-10h]
0x9CA7E3: push    eax
0x9CA7E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA7E9: pop     ecx
0x9CA7EA: retn
0x9CA7EB: mov     edx, [esp+arg_4]
0x9CA7EF: lea     eax, [edx-0Ch]
0x9CA7F2: mov     ecx, [edx-10h]
0x9CA7F5: xor     ecx, eax
0x9CA7F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA7FC: mov     eax, offset stru_AF2E8C
0x9CA801: jmp     ___CxxFrameHandler3
