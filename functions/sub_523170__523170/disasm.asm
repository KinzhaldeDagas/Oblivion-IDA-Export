0x523170: push    0FFFFFFFFh
0x523172: push    offset SEH_787830
0x523177: mov     eax, large fs:0
0x52317D: push    eax
0x52317E: push    ebx
0x52317F: push    esi
0x523180: push    edi
0x523181: mov     eax, ds:0B30AACh
0x523186: xor     eax, esp
0x523188: push    eax
0x523189: lea     eax, [esp+1Ch+var_C]
0x52318D: mov     large fs:0, eax
0x523193: mov     ebx, ecx
0x523195: mov     esi, [esp+1Ch+owner]
0x523199: mov     eax, [esi]
0x52319B: mov     edx, [eax+168h]
0x5231A1: mov     ecx, esi
0x5231A3: call    edx
0x5231A5: mov     edi, eax
0x5231A7: test    edi, edi
0x5231A9: jz      short loc_5231C7
0x5231AB: mov     eax, [ebx]
0x5231AD: mov     edx, [eax+0D4h]
0x5231B3: mov     ecx, ebx
0x5231B5: call    edx
0x5231B7: push    eax; ArgList
0x5231B8: push    offset aThisNpcSHasAlr; "This npc \"%s\" has already been used."...
0x5231BD: call    PrintError
0x5231C2: add     esp, 8
0x5231C5: jmp     short loc_523209
0x5231C7: push    154h; Size
0x5231CC: call    FormHeapAlloc
0x5231D1: add     esp, 4
0x5231D4: mov     [esp+1Ch+owner], eax
0x5231D8: test    eax, eax
0x5231DA: mov     [esp+1Ch+var_4], 0
0x5231E2: jz      short loc_5231F2
0x5231E4: push    0; rootNode
0x5231E6: push    esi; owner
0x5231E7: mov     ecx, eax; this
0x5231E9: call    ActorSkinInfo_ctor; Constructs a 0x154-byte ActorSkinInfo: clears exactly 0x154 bytes, stores the owning Actor at byte offset +0x150, and optionally caches exact-name model nodes from rootNode.
0x5231EE: mov     edi, eax
0x5231F0: jmp     short loc_5231F4
0x5231F2: xor     edi, edi
0x5231F4: mov     eax, [esi]
0x5231F6: mov     edx, [eax+16Ch]
0x5231FC: push    edi
0x5231FD: mov     ecx, esi
0x5231FF: mov     [esp+20h+var_4], 0FFFFFFFFh
0x523207: call    edx
0x523209: mov     eax, edi
0x52320B: mov     ecx, dword ptr [esp+1Ch+var_C]
0x52320F: mov     large fs:0, ecx
0x523216: pop     ecx
0x523217: pop     edi
0x523218: pop     esi
0x523219: pop     ebx
0x52321A: add     esp, 0Ch
0x52321D: retn    4
0x9C8290: mov     eax, [ebp+4]
0x9C8293: push    eax
0x9C8294: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C8299: pop     ecx
0x9C829A: retn
0x9C829B: mov     edx, [esp+arg_4]
0x9C829F: lea     eax, [edx-0Ch]
0x9C82A2: mov     ecx, [edx-10h]
0x9C82A5: xor     ecx, eax
0x9C82A7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C82AC: mov     eax, offset stru_AF0554
0x9C82B1: jmp     ___CxxFrameHandler3
