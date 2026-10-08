0x6D68F0: push    0FFFFFFFFh; Oblivion NiTransformInterpolator clone factory. Allocates a 0x38-byte default object then delegates base/cached-transform/data/cursor copying to NiTransformInterpolator_CopyMembers.
0x6D68F2: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x6D68F7: mov     eax, large fs:0
0x6D68FD: push    eax
0x6D68FE: push    ecx
0x6D68FF: push    ebx
0x6D6900: push    esi
0x6D6901: push    edi
0x6D6902: mov     eax, ds:0B30AACh
0x6D6907: xor     eax, esp
0x6D6909: push    eax
0x6D690A: lea     eax, [esp+20h+var_C]
0x6D690E: mov     large fs:0, eax
0x6D6914: mov     ebx, ecx
0x6D6916: push    38h ; '8'; Size
0x6D6918: call    FormHeapAlloc
0x6D691D: mov     esi, eax
0x6D691F: add     esp, 4
0x6D6922: mov     [esp+20h+var_10], esi
0x6D6926: xor     edi, edi
0x6D6928: cmp     esi, edi
0x6D692A: mov     [esp+20h+var_4], edi
0x6D692E: jz      short loc_6D6993
0x6D6930: mov     ecx, esi
0x6D6932: call    sub_6EC220
0x6D6937: mov     dword ptr [esi], offset ??_7NiTransformInterpolator@@6B@; const NiTransformInterpolator::`vftable'
0x6D693D: mov     eax, ds:0B24260h
0x6D6942: mov     [esi+0Ch], eax
0x6D6945: mov     ecx, ds:0B24264h
0x6D694B: mov     [esi+10h], ecx
0x6D694E: mov     edx, ds:0B24268h
0x9CA420: mov     eax, [ebp-10h]
0x9CA423: push    eax
0x9CA424: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA429: pop     ecx
0x9CA42A: retn
0x9CA42B: mov     edx, [esp+arg_4]
0x9CA42F: lea     eax, [edx-10h]
0x9CA432: mov     ecx, [edx-14h]
0x9CA435: xor     ecx, eax
0x9CA437: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA43C: mov     eax, offset stru_AF2B24
0x9CA441: jmp     ___CxxFrameHandler3
