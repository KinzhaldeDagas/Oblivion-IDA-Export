0x439EB0: push    0FFFFFFFFh; ODismemberment: shared ModelLoader-backed NIF/model data load used by BSTempEffectParticle before clone/cached-instance selection.
0x439EB2: push    offset SEH_439EB0
0x439EB7: mov     eax, large fs:0
0x439EBD: push    eax
0x439EBE: sub     esp, 3Ch
0x439EC1: push    ebx
0x439EC2: push    esi
0x439EC3: push    edi
0x439EC4: mov     eax, ___security_cookie
0x439EC9: xor     eax, esp
0x439ECB: push    eax
0x439ECC: lea     eax, [esp+58h+var_C]
0x439ED0: mov     large fs:0, eax
0x439ED6: mov     ecx, [ecx]
0x439ED8: mov     esi, [esp+58h+arg_0]
0x439EDC: lea     edx, [esp+58h+var_48]
0x439EE0: mov     [esp+58h+var_48], 0
0x439EE8: mov     eax, [ecx]
0x439EEA: mov     eax, [eax+4]
0x439EED: push    edx
0x439EEE: push    esi
0x439EEF: call    eax
0x439EF1: test    al, al
0x439EF3: jnz     loc_439FA2
0x439EF9: mov     edi, ds:0B33A10h
0x439EFF: call    ds:GetCurrentThreadId
0x439F05: cmp     eax, [edi+30h]
0x439F08: jz      short loc_439F15
0x439F0A: mov     ecx, edi
0x439F0C: call    sub_432860
0x439F11: mov     bl, 1
0x439F13: jmp     short loc_439F17
0x439F15: xor     bl, bl
0x439F17: cmp     byte ptr [esp+58h+arg_4], 0
0x439F1C: mov     ecx, [esp+58h+arg_C]
0x439F20: mov     eax, [esp+58h+arg_8]
0x439F24: push    0
0x439F26: setz    dl
0x439F29: push    ecx
0x439F2A: lea     ecx, [esp+60h+var_44]
0x439F2E: push    edx
0x439F2F: push    eax
0x439F30: push    0
0x439F32: push    esi
0x439F33: call    sub_437250
0x439F38: or      [esp+58h+var_10], 20h
0x439F3D: lea     ecx, [esp+58h+var_44]
0x439F41: mov     [esp+58h+var_4], 0
0x439F49: call    QueuedTexture_LoadModelStream; Queued texture/model stream loader. Checks model-loader cache for the requested path, otherwise opens archive/loose file data and builds the stream-backed object.
0x439F4E: lea     ecx, [esp+58h+var_44]
0x439F52: call    sub_4395D0
0x439F57: test    bl, bl
0x439F59: jz      short loc_439F66
0x439F5B: mov     ecx, ds:0B33A10h
0x439F61: call    sub_432890
0x439F66: mov     eax, [esp+58h+var_1C]
0x439F6A: test    eax, eax
0x439F6C: mov     [esp+58h+var_48], eax
0x439F70: mov     [esp+58h+var_4], 0FFFFFFFFh
0x439F78: jz      short loc_439F84
0x439F7A: add     eax, 4
0x439F7D: push    eax; lpAddend
0x439F7E: call    ds:InterlockedDecrement
0x439F84: mov     ecx, [esp+58h+var_24]
0x439F88: push    ecx
0x439F89: mov     [esp+5Ch+var_44.vtbl], offset ??_7QueuedFileEntry@@6B@; const QueuedFileEntry::`vftable'
0x439F91: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x439F96: add     esp, 4
0x439F99: lea     ecx, [esp+58h+var_44]; this
0x439F9D: call    ??1QueuedMagicItem@@UAE@XZ; QueuedMagicItem::~QueuedMagicItem(void)
0x439FA2: mov     eax, [esp+58h+var_48]
0x439FA6: test    eax, eax
0x439FA8: jz      short loc_439FD0
0x439FAA: add     eax, 4
0x439FAD: push    eax; lpAddend
0x439FAE: call    ds:InterlockedIncrement
0x439FB4: mov     edx, [esp+58h+var_48]
0x439FB8: mov     eax, [edx+8]
0x439FBB: mov     ecx, [esp+58h+var_C]
0x439FBF: mov     large fs:0, ecx
0x439FC6: pop     ecx
0x439FC7: pop     edi
0x439FC8: pop     esi
0x439FC9: pop     ebx
0x439FCA: add     esp, 48h
0x439FCD: retn    10h
0x439FD0: xor     eax, eax
0x439FD2: mov     ecx, [esp+58h+var_C]
0x439FD6: mov     large fs:0, ecx
0x439FDD: pop     ecx
0x439FDE: pop     edi
0x439FDF: pop     esi
0x439FE0: pop     ebx
0x439FE1: add     esp, 48h
0x439FE4: retn    10h
0x437320: push    esi
0x437321: mov     esi, ecx
0x437323: mov     eax, [esi+28h]
0x437326: test    eax, eax
0x437328: jz      short loc_437334
0x43732A: add     eax, 4
0x43732D: push    eax; lpAddend
0x43732E: call    ds:InterlockedDecrement
0x437334: mov     eax, [esi+20h]
0x437337: push    eax
0x437338: mov     dword ptr [esi], offset ??_7QueuedFileEntry@@6B@; const QueuedFileEntry::`vftable'
0x43733E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x437343: add     esp, 4
0x437346: mov     ecx, esi; this
0x437348: pop     esi
0x437349: jmp     ??1QueuedMagicItem@@UAE@XZ; QueuedMagicItem::~QueuedMagicItem(void)
0x9AC900: lea     ecx, [ebp-44h]
0x9AC903: jmp     loc_437320
0x9AC908: mov     edx, [esp+arg_4]
0x9AC90C: lea     eax, [edx-48h]
0x9AC90F: mov     ecx, [edx-4Ch]
0x9AC912: xor     ecx, eax
0x9AC914: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AC919: mov     eax, offset stru_AD9590
0x9AC91E: jmp     ___CxxFrameHandler3
